Search()
{
    web_set_sockets_option("SSL_VERSION", "AUTO");


    web_url("Open_Catalog",
        "URL=http://localhost:8080/jpetstore/actions/Catalog.action",
        "Resource=0",
        "RecContentType=text/html",
        "Mode=HTML",
        LAST);

    web_reg_save_param("c_sourcePage",
        "LB=name=\"_sourcePage\" value=\"",
        "RB=\"",
        LAST);

    web_reg_save_param("c_fp",
        "LB=name=\"__fp\" value=\"",
        "RB=\"",
        LAST);

    web_url("Search_Page",
        "URL=http://localhost:8080/jpetstore/actions/Catalog.action",
        "Resource=0",
        "RecContentType=text/html",
        "Mode=HTML",
        LAST);

    lr_think_time(4);

    lr_start_transaction("Search");

   

    /* Product Search */
    web_submit_data("Product_Search",
        "Action=http://localhost:8080/jpetstore/actions/Catalog.action",
        "Method=POST",
        "RecContentType=text/html",
        "Referer=http://localhost:8080/jpetstore/actions/Catalog.action",
        "Mode=HTML",
        ITEMDATA,
        "Name=keyword", "Value={SearchKeyword}", ENDITEM,
        "Name=searchProducts", "Value=Search", ENDITEM,
        "Name=_sourcePage", "Value={c_sourcePage}", ENDITEM,
        "Name=__fp", "Value={c_fp}", ENDITEM,
        LAST);

    lr_end_transaction("Search", LR_AUTO);

    lr_think_time(2);

    web_url("View_Product",
        "URL=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-FW-02",
        "Resource=0",
        "RecContentType=text/html",
        "Referer=http://localhost:8080/jpetstore/actions/Catalog.action",
        "Mode=HTML",
        LAST);


    web_url("View_Item",
        "URL=http://localhost:8080/jpetstore/actions/Catalog.action?viewItem=&itemId=EST-20",
        "Resource=0",
        "RecContentType=text/html",
        "Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-FW-02",
        "Mode=HTML",
        LAST);

    return 0;
}