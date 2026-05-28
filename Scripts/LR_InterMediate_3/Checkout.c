Checkout()
{
    web_set_sockets_option("SSL_VERSION", "AUTO");


    web_url("Open_HomePage",
        "URL=http://localhost:8080/jpetstore/actions/Catalog.action",
        "Resource=0",
        "RecContentType=text/html",
        "Mode=HTML",
        LAST);

    lr_think_time(2);


    web_reg_save_param("c_login_sourcePage",
        "LB=name=\"_sourcePage\" value=\"",
        "RB=\"",
        LAST);

    web_reg_save_param("c_login_fp",
        "LB=name=\"__fp\" value=\"",
        "RB=\"",
        LAST);

    web_url("Open_Login",
        "URL=http://localhost:8080/jpetstore/actions/Account.action?signonForm=",
        "Resource=0",
        "RecContentType=text/html",
        "Referer=http://localhost:8080/jpetstore/actions/Catalog.action",
        "Mode=HTML",
        LAST);

    


    web_submit_data("Login",
        "Action=http://localhost:8080/jpetstore/actions/Account.action",
        "Method=POST",
        "RecContentType=text/html",
        "Referer=http://localhost:8080/jpetstore/actions/Account.action?signonForm=",
        "Mode=HTML",
        ITEMDATA,

        "Name=username", "Value={Username}", ENDITEM,
        "Name=password", "Value={Password}", ENDITEM,
        "Name=signon", "Value=Login", ENDITEM,
        "Name=_sourcePage", "Value={c_login_sourcePage}", ENDITEM,
        "Name=__fp", "Value={c_login_fp}", ENDITEM,

        LAST);

    lr_think_time(3);


    web_url("View_Fish_Category",
        "URL=http://localhost:8080/jpetstore/actions/Catalog.action?viewCategory=&categoryId=FISH",
        "Resource=0",
        "RecContentType=text/html",
        "Referer=http://localhost:8080/jpetstore/actions/Catalog.action",
        "Mode=HTML",
        LAST);

    /* Open Product */
    web_url("View_Product",
        "URL=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-SW-01",
        "Resource=0",
        "RecContentType=text/html",
        "Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewCategory=&categoryId=FISH",
        "Mode=HTML",
        LAST);

    /* Add Item to Cart */
    web_url("Add_To_Cart",
        "URL=http://localhost:8080/jpetstore/actions/Cart.action?addItemToCart=&workingItemId=EST-1",
        "Resource=0",
        "RecContentType=text/html",
        "Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-SW-01",
        "Mode=HTML",
        LAST);

    lr_think_time(2);

    lr_start_transaction("Checkout");

    /* Correlation for Checkout Form */
    web_reg_save_param("c_checkout_sourcePage",
        "LB=name=\"_sourcePage\" value=\"",
        "RB=\"",
        LAST);

    web_reg_save_param("c_checkout_fp",
        "LB=name=\"__fp\" value=\"",
        "RB=\"",
        LAST);

    /* Open Checkout Page */
    web_url("Checkout_Page",
        "URL=http://localhost:8080/jpetstore/actions/Order.action?newOrderForm=",
        "Resource=0",
        "RecContentType=text/html",
        "Referer=http://localhost:8080/jpetstore/actions/Cart.action?addItemToCart=&workingItemId=EST-1",
        "Mode=HTML",
        LAST);


    web_reg_find("Text=Please confirm the information below",
        LAST);


    web_submit_data("Submit_Order",
        "Action=http://localhost:8080/jpetstore/actions/Order.action",
        "Method=POST",
        "RecContentType=text/html",
        "Referer=http://localhost:8080/jpetstore/actions/Order.action?newOrderForm=",
        "Mode=HTML",
        ITEMDATA,

        "Name=order.cardType", "Value=Visa", ENDITEM,
        "Name=order.creditCard", "Value=999 9999 9999 9999", ENDITEM,
        "Name=order.expiryDate", "Value=12/30", ENDITEM,

        "Name=order.billToFirstName", "Value={F_Name}", ENDITEM,
        "Name=order.billToLastName", "Value={L_Name}", ENDITEM,

        "Name=order.billAddress1", "Value=Nagpur", ENDITEM,
        "Name=order.billAddress2", "Value=Nagpur", ENDITEM,

        "Name=order.billCity", "Value=Nagpur", ENDITEM,
        "Name=order.billState", "Value={State}", ENDITEM,
        "Name=order.billZip", "Value=440024", ENDITEM,
        "Name=order.billCountry", "Value=India", ENDITEM,

        "Name=newOrder", "Value=Continue", ENDITEM,

   
        "Name=_sourcePage", "Value={c_checkout_sourcePage}", ENDITEM,
        "Name=__fp", "Value={c_checkout_fp}", ENDITEM,

        LAST);


    lr_end_transaction("Checkout", LR_AUTO);

    lr_think_time(2);

    web_url("Logout",
        "URL=http://localhost:8080/jpetstore/actions/Account.action?signoff=",
        "Resource=0",
        "RecContentType=text/html",
        "Referer=http://localhost:8080/jpetstore/actions/Catalog.action",
        "Mode=HTML",
        LAST);

    return 0;
}