Login()
{

    web_set_sockets_option("SSL_VERSION", "AUTO");


    web_url("Open_HomePage",
        "URL=http://localhost:8080/jpetstore/actions/Catalog.action",
        "Resource=0",
        "RecContentType=text/html",
        "Mode=HTML",
        LAST);

    lr_think_time(5);


    web_url("Open_Login_Page",
        "URL=http://localhost:8080/jpetstore/actions/Account.action?signonForm=",
        "Resource=0",
        "RecContentType=text/html",
        "Referer=http://localhost:8080/jpetstore/actions/Catalog.action",
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

   
    web_url("Login_Page_Correlation",
        "URL=http://localhost:8080/jpetstore/actions/Account.action?signonForm=",
        "Resource=0",
        "RecContentType=text/html",
        "Referer=http://localhost:8080/jpetstore/actions/Catalog.action",
        "Mode=HTML",
        LAST);

    lr_start_transaction("Login");



    /* Login Request */
    web_submit_data("User_Login",
        "Action=http://localhost:8080/jpetstore/actions/Account.action",
        "Method=POST",
        "RecContentType=text/html",
        "Referer=http://localhost:8080/jpetstore/actions/Account.action?signonForm=",
        "Mode=HTML",
        ITEMDATA,
        "Name=username", "Value={Username}", ENDITEM,
        "Name=password", "Value={Password}", ENDITEM,
        "Name=signon", "Value=Login", ENDITEM,
        "Name=_sourcePage", "Value={c_sourcePage}", ENDITEM,
        "Name=__fp", "Value={c_fp}", ENDITEM,
        LAST);

    lr_end_transaction("Login", LR_AUTO);

    lr_think_time(3);


    web_url("Logout",
        "URL=http://localhost:8080/jpetstore/actions/Account.action?signoff=",
        "Resource=0",
        "RecContentType=text/html",
        "Referer=http://localhost:8080/jpetstore/actions/Catalog.action",
        "Mode=HTML",
        LAST);

    return 0;
}