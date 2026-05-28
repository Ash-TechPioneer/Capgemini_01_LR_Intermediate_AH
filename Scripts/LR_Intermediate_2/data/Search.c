Search()
{

	web_url("Catalog.action", 
		"URL=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("rxVisitorf4o018pw=17795523294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK; DOMAIN=localhost");

	web_add_cookie("dtSaf4o018pw=-; DOMAIN=localhost");

	web_add_cookie("rxvtf4o018pw=1779554129491|1779552329406; DOMAIN=localhost");

	web_add_cookie("dtPCf4o018pw=2$552329400_304h-vBLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0e0; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=2&flavor=post&vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=4267603461&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1779552317717%7C1779552329493%7Cdn%7C89%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C3%7C_event_%7C1779552317717%7C_vc_%7CV%7C11732%5Epc%7CVCD%7C1024%7CVCDS%7C1%7CVCS%7C11837%7CVCO%7C12853%7CVCI%7C0%7CTS%7C0%7CVE%7C654%5Ep106%5Ep124250%5Eps%5Es%23MainImageContent%3Eimg%3Anth-child%282%29%7CS%7C11728%2C2%7C4%7C_event_%7C1779552317717%7C_wv_%7ClcpT%7C-5%7Cfcp%7C11771%7Cfp%7C11771%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1779552"
		"329492%7C1779552329493%7Cdn%7C89%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1779552317717%7C_view_%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=localhost,$rId=RID_1078536306$rpId=72386131$domR=1779552329489$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779552317717$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=796$sw=1536$sh=960$nt=a0b1779552317717e85f85g85h85i85k6511l11533m11608o11752p11752q11754r11772s11775t11776u6456v6156w6156M72386131V0$ni=4g|1.5$egf="
		"1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0$fId=552329400_304$v=10337260504112723$vID=17795523294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK$nV=1$nVAT=1$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$time=1779552330584", 
		LAST);

	web_custom_request("rb_bf32608msb_2", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=5&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=1356511052&co=snappy&si=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779552331512&ss=0&qc=1420632842&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xAC\\xC4\\x02D{\"data_version\":2,\\x05\\x11\\xF0\\x93\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"4b9f88e16187515c\",\"start_time\":1779552329331,\"duration\":3.8999\\x01\\x03\\xF0\\xA28509884,\"performance.initiator_type\":\"link\",\"characteristics.has_request\":true,\"url.full\":\"http://localhost:8080/jpetstore/css/jpetstore.css\",\"network.protocol.nam!\\x10\\x01L\\x00\"6\\xA5\\x00(time_origin\\x19\\xEAH17717,\"dt.rum.schem="
		"\\x8C\\x18\"0.23.0:I\\x00\\x00s.2\\x01\\x141614.6!\\x1A\\x01\\x01\\x082556u\\x00 next_hop_\\x11\\xA1\\x08\":\":O\\x004domain_lookup_\\x05]\\x04\":~X\\x0065\\x00\\x08end\\x863\\x00\\x18connect\\x9Eb\\x00\\x11/\\x92\\\\\\x00\\x18secure_\r4\\x08ion\\x11f\\x0006\\x0F\\x01-\\xFD\\x11\\x1E\\x01\\xE6\\x006j>\\x01\\x1Cresponse.0\\x00\\x0C7.80\r\\x01\\x0474:n\\x01\\x150\\x15\\xB5\\x088.5!\\x98\\x14999776B.\\x00\\x08dir=\\x12B\\xAC\\x00\r\\x1F\\x05M:\\x1D\\x00\\x14worker\\x11\\x98"
		":\\x1D\\x00\\x10fetch\\x11\\x1C\\x01\\xE4n\"\\x028render_blocking\\x017\\x14tus\":\"\\x11\\x12:/\\x02\\x14transf\\x01|\\x0Cize\">{\\x000encoded_body_\t\"\\x08601:\\xAF\\x03\\x04deZ%\\x00-\\x9F(.server_tim\\x01\\x92@hint\":\"received\",\\x15(\\x0Ctrac%\\xF6\\x00tE\\xE7\t(\\x10from_\tB\\x08\",\"\\x05#\\x00.\\x85}|6343452934a6cc116081301249311005\\x19.$s_sampled\"\\x8D&NI\\x04,w3c_resource\r\\xAB\\x00s\\x110m\\xD0\\x18applicaA\\x91\t\\x83<ea7c4b59f27d43eb\\xBD-\\x0Cfram\\x81\\xCA\\x00s\\xBD/"
		"@e798420700b2a6f1\"\\x95*\\x14agent.\\xB5\\xB5\\\\\"1.337.9.20260504-112723>1\\x00\\xAD\\x1F$javascript\\x19!\\x00b\\xAD\\xB5\\x00s),x407E28FD0FD2A2C31B9200596EA129F\\x198\t0\\x80BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-\\x81\\xC5-\\x16\\x00i\r\\xE4)\\x13\\x001\\xB5\\xF4\\x884038TFRLTS6PJ3507T5PER16NIEKQL4RTGK\\x01w,evice.orient%[\\xA1\\xF0<andscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":960,\\xD5\\xBC\\x14window67\\x001#\r\\x1C\\x118\\x08796B8\\x00\tb\\x1C_pixel_r\\x01\\xA7\\x10\""
		":1.2\\x81\\x02\\x10age.u\\xA6v\\x06\\x04acA?$s/Catalog.\t\\x10a\\x95\\x01I1L\\x00_%\\xB6\\x00eF0\\x02\\x05& detected_\\xCD\\x9E\\xDD\\xD5\tO^_\\x00\\x0Ctitl\\xC1\\xCF\\x10JPetS\\xE1\\x05, Demo\",\"view:}\\x00\\x102e093A\"\\x181e7a9cf\\x11&\\xFE\\xEC\\x00\\x01\\xEC\\x05o\\xC6\\xC6\\x00\\x04},\\xFE\\xAD\\x08\\x9A\\xAD\\x08\\x0E5\t\"\\xAD\\x08\\x04586u\\x06B\\x9E\\x08u{NW\\x04\\xAD\\x04\\x91J\\xAA>\\x01\\x10ruxit\\x85\\x19pjs_ICA15789NPRTUVXfqrux_10337\\x89!\\x89 "
		"\\x04.j\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\x1E\\xC5\\x08a\\x1A*\\xD2\t\\xEE\\xB8\\x08:K\\x00\\x00d2\\xE0\\x08\\xE5M\\xE1\\x14:&\\x00\\x1A;\\x08\\xC1\\xFF\\x00r\\x1A\\x00\tZ\"\\x00^B\\x00\\xEA\\x84\\x08\\x087.3\\x1AS\\x08jT\\x08*\\x9A\t\\x088.1\\x0ES\\x08\\x01\\x01B\\xF2\tB\\x84\\x08\\x04736\\x8F\\x02\\x00r\\x1EX\\x08\rQ\\x000Z\\x1F\\x00\\x05\\xE8:\\x1D\\x00\\xB6w\\x08:A\\x01\\xFEj\\x08\\x82j\\x08\\x1013290\\x86l\\x08\\x14362149&F\\x08\\x16,"
		"\\x08\\xED\\xC3\\x1En\\x08@not_available_htt\\x0E\\xCF\\x0Bm\\x9CVx\\x08\\x012\\x04se\\xE1RN\\xD7\\x03\\xFE.\\x08\\xFE.\\x08\\xFE.\\x08\\xFE.\\x08\\xFE.\\x08\\xFE.\\x08\\xFE.\\x08\\xFE.\\x08\\xFE.\\x08\\xFE.\\x08\\xFE.\\x08\\xFE.\\x08\\xFE.\\x08\\xFE.\\x08\\xFE.\\x08\\xFE.\\x08f.\\x08\\x0E\\xB5\\x0B\t\\x01\\x1029802:\\xAE\\x05B=\\x08\\x04im\\x0E\\x92\rNc\\x04\\x8D\\x9E\\xCA:\\x08Pimages/logo-topbar.gi\\x0E\\xC1\t"
		"\\x04ne\\xFE\\xDF\\x10\\xEE\\xDF\\x10\\x16\\xDF\\x10\\x085.0\\xC1\\xE9RC\\x0F\\xF2'\\x08jX\\x00^4\\x08j3\\x00NA\\x08\\x8A/\\x00\\xE5f\\x12\\x90\\x08j-\\x00\\xE6[\\x08\\x0C67.3!;\\x14999851>\\xEA\\x07B\\xDE\\x10\\x0471\\x8E\\x0E\\x11\\x11\\xB4\\x0474r\\xB8\\x08\\x1A\\xBF\\x10\\xFEg\\x08\\x86g\\x08j:\\x01bt\\x08\\x0Cnon-\\xFE\\xE2\\x10\\x1E\\xE2\\x10\\x08380:\\xF3\\x0B\\x00dF\\xE2\\x10\t%\\x04re\\x12~"
		"\\x14Vt\\x08\\xEE\\xE2\\x10\\x12\\xE2\\x10x3881223f689a154f0643b8963dcd5a3\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\x8E\\xE2\\x10>Y\\x08\\x0E\\x0C\\x154elf_monitoring\\x1E`\\x08J*\\x00\\x1Cinternal\\x11#\\xA5\\xFB\\x0EY\r\\x00e&\\xF2\\x18\\x082946/\\x11\\x000\"\\xD5\\x14f\\xFF\\x18\\x1A"
		":\\x14\\x0Csfm_*\\x88\\x1A\\x0ER\\x19\\x10stamp2^\\x00\\x0C19,\"\\x0E`\\x164\":2000,\"messag\\x0E\\xC6\\x12\\x12k\\x14\\x1C31483296\\x12\\x1D\\x12\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E}\\x15\\x14 JavaS\\x12E\\x150 tag\\\\\",[]]\"}]"
		"\\x15\\xCE\\xFE\\xFD\\x15\\xFE\\xFD\\x15\\xFE\\xFD\\x15\\xFE\\xFD\\x15\\xFE\\xFD\\x15\\xFE\\xFD\\x15\\xFE\\xFD\\x15\\xFE\\xFD\\x15\\xFE\\xFD\\x15\\xFE\\xFD\\x15\\xFE\\xFD\\x15\\xFE\\xFD\\x15\\xFE\\xFD\\x15\\xFE\\xFD\\x15\\xFE\\xFD\\x15\\xD6\\xFD\\x15\\x0462*q\\x0B\\x8E\\xAB\\x1E\\xFE\\xD0\rj\\xD0\r\\x0Ccart\\xFE\\xC9\r\\xFE\\xC9\r2\\xC9\rf\\xB6\\x14\\xF6\\xC9\rfX\\x00b\\xC9\rf3\\x00R\\xC9\r\\x86/\\x00\\x1E\\x15\r\\x0415j-\\x00\\xE6\\xC9\r\\x0476]X\\x8A\\xC9\r"
		"\\x006\\xAE\\xA7\\x1E\\x0477\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\x12\\xA7\\x1En:\\x01\\xFE\\xC9\r\\x92\\xC9\r\\x0E\\xC9\\x1B.\\x86\\x18J\\xC7\r\\x01#\\xFE\\xC5\rv\\xC5\r|"
		"570492c08c75f09b297394998fb21c09\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\xFE\\xA7\\x1E\\x1E\\xA7\\x1E\\x0C63.2\\x0E\\x18\\x14\\x0EY\\x15\\x10019776\\x1E\\x14\\xFEy\\x16\\xAEy\\x16\\x10separ\\x0E\\xC0'\\xFE\\xAE\\x08\\xFE\\xAE\\x082\\xAE\\x08f\\x94\\x1D\\xF6\\xAE\\x08fX\\x00b\\xAE\\x08f3\\x00R\\xAE\\x"
		"08\\x86/\\x00*\\xAE\\x08f-\\x00\\xEA\\xAE\\x08\\xBAw\\x16:?\\x15F\\xC4\\x1E\\xFEH'\\xFEH'\\x16H'\\x005j-\\x01\\xFE\\xA1\\x08\\x92\\xA1\\x08\\x04466\\xA5\\x03J\\xA1\\x08\\x01#\\xFE\\xA1\\x08v\\xA1\\x08x348f55f2a3c0905ed28d9435f9189a9\\x0E\\xA6&"
		"\\x1Av'\\xFEH'\\xFEH'\\xFEH'\\xFEH'\\xFEH'\\xFEH'\\xFEH'\\xFEH'\\xFEH'\\xFEH'\\xFEH'\\xFEH'\\xFEH'\\xFEH'\\xFEH'\\xFEH'\\xF6H'\\x10105.6\\x16\\x1A\\x1F\\x1801490126\\xFD\\x04\\xFE\\xA2\\x08\\xB2\\xA2\\x08\\x14m_fish\\xFE\\xA0\\x08\\xFE\\xA0\\x086\\xA0\\x08\\x0E\\xBB\tN\\xD9\\x1D\\xFA\\x9F\\x08\\x01TNW\\x00f\\x9E\\x08\\x01/N2\\x00V\\x9D\\x08\\x01+n.\\x00.\\x9C\\x08\\x01)N,\\x00\\xE2\\x9B\\x08\\x0C719.B\\x98&>\\x08\\x1F\\x08720r\\xEA\\x07\r0\r\\xA9\\x0472B\\x90\\x11\\xFE\\xFB\\x1E\\xA6\\xFB\\x1Eb\""
		"\\x01\\xFE\\x90\\x08\\x92\\x90\\x08\\x0427:\\xFB\\x00J\\x91\\x08\\x05$\\xFE\\x92\\x08v\\x92\\x08|060253210f8790b19f045d76c7a63836\\xFE3\\x11\\xFE3\\x11\\xFE3\\x11\\xFE3\\x11\\xFE3\\x11\\xFE3\\x11\\xFE3\\x11V3\\x11@battery.level\":99>\\xD9/\\xFE\\xF4/\\xFE\\xF4/\\xFE\\xF4/\\xFE\\xF4/\\xFE\\xF4/\\xFE\\xF4/\\xFE\\xF4/\\xFE\\xF4/\\xFE\\xF4/\\xAA\\xF4/\\x12\\xAC\\x08\\xC1\\xAA\\x01\\x01\\x1025494\\xFE\\xAC\\x08\\xF2\\xAC\\x08\\x0Cdogs\\xFE\\xAC\\x08\\xFE\\xAC\\x082\\xAC\\x08:s\\x07\\xF6\\xA2\\x08"
		":M\\x00b\\x98\\x08:(\\x00R\\x8E\\x08Z$\\x00\\xED\\xDB\\x0E\\xCE\\x19:\"\\x00\\xE6z\\x08\\x002:M/\"\\xE6\\x10\\x12'!\\x0EA9\\x0Ex\\x08]F:z\\x00\\x150\r\\x9D\\x08721jk\\x1A\\xFE\\xE7/\\xAA\\xE7/>#\\x01\\xFE{\\x08\\x92{\\x08\\x0430\\x86\\x0C\\x11\\x05$\\xFE{\\x08v{\\x08x78c4449186f15ce3a8d1129d5513f44\\x0EE+\\xFE\r\\x11\\xFE\r\\x11\\xFE\r\\x11\\xFE\r\\x11\\xFE\r\\x11\\xFE\r\\x11\\xFE\r\\x11J\r\\x11\\xFE{\\x08\\xFE{\\x08\\xFE{\\x08\\xFE{\\x08\\xFE{\\x08\\xFE{\\x08\\xFE{\\x08\\xFE{\\x08\\xFE{\\x08\\xFE"
		"{\\x082{\\x08\\x0C12.7\\x1A'\\x11\\xFEB0\\xFEB0$sm_reptile\\xFE\\x7F\\x08\\xFE\\x7F\\x08:\\x7F\\x08\\x0E\\x97\t\\x0E\\xE9\\x1AB\\x85?\\xFA\\x8A\\x08\\x01URX\\x00f\\x95\\x08\\x010R3\\x00V\\xA0\\x08\\x01,r/\\x00\\x1A\\x0E\\x08\\x12\\xAB\\x08\\x01*R-\\x00\\xEA\\xB6\\x08J\\xDF\\x07\\x1A\\x00\\x11*\\xB8\\x08\\x006rA\"\r0\r\\xAA\\x08728r^\\x11\\xFE=\\x11\\xA6=\\x11f0\\x01\\xFE\\xC3\\x08\\x96\\xC3\\x08\\x009:\\xF8\\x1AJ>\\x11\\x05$\\xFE\\xC3\\x08z\\xC3\\x08x10e236f5ffa28765b140d44712ee9b4\\xFE>\\x11\\xFE"
		">\\x11\\xFE>\\x11\\xFE>\\x11\\xFE>\\x11\\xFE>\\x11\\xFE>\\x11\\xFE>\\x11\\xFE>\\x11\\xFE>\\x11\\xFE>\\x11\\xFE>\\x11\\xFE>\\x11\\xFE>\\x11\\xFE>\\x11\\xFE>\\x11\\xFE>\\x11R>\\x11\\x003.\\xDFI\\x0E\\xC3\\x08\\x004\\x1E\\xC3\\x08\\x08235\\x0E\\x13I.\\x88'\\xFE\\xEA\\x19\\xBA\\xEA\\x19\\x08cat\\xFE\\xBF\\x08\\xFE\\xBF\\x08.\\xBF\\x08\\x086.8\\xE1\\xD5N\\x07\\x19\\xEE\\xBE\\x08jW\\x00Z\\xBD\\x08j2\\x00J\\xBC\\x08\\x8A.\\x00\\x1A\\x11\\x08\\x006n,\\x00\\xF2\\xBA\\x08b9\\x01\"L\\x112\\xC4\\x08\\xAE|"
		"\\x11\\x009\\xFE\\xC4\\x08\\xFE\\xC4\\x08\\x12\\xC4\\x08je\\x01\\xFE\\xC3\\x08\\x92\\xC3\\x08\\x082896\\xE9\\x14J\\xC3\\x08\\x05$\\xFE\\xC3\\x08v\\xC3\\x08|99b04d0d3be1cf52ac7ae8a395db1efa\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08R\\xC3\\x08\\x004>\\xC3\\x08.\\x19P"
		">\\x9E\\x16\\xFE\\xC3\\x08\\xBA\\xC3\\x08\\x0Cbird\\xFE\\xC4\\x08\\xFE\\xC4\\x08.\\xC4\\x08:],\\xEE\\xB8\\x08:K\\x00Z\\xAC\\x08:&\\x00J\\xA0\\x08Z\"\\x00\"\\x94\\x08: \\x00\\xEA\\x88\\x08\\x006r\\xA1@\\x1A\\x1D\\x11*\\x89\\x08\\x007\\x8A\\xB8\\x08\r\\xA7\\x087292w\\x026\\x8D\\x07\\xFE\\x04\\x1A\\xA6\\x04\\x1A:-\\x01\\xFE|\\x08\\x96|\\x08>\\x085N|\\x08\\x01$\\xFE|\\x08z|"
		"\\x08t816f19d7e450737bad8f89b94aa411\\xFE\\xB03\\xFE\\xB03\\xFE\\xB03\\xFE\\xB03\\xFE\\xB03\\xFE\\xB03\\xFE\\xB03Z\\xB03\\xFE\\x02\\x1A\\xFE\\x02\\x1A\\xFE\\x02\\x1A\\xFE\\x02\\x1A\\xFE\\x02\\x1A\\xFE\\x02\\x1A\\xFE\\x02\\x1A\\xFE\\x02\\x1A\\xFE\\x02\\x1A\\xFA\\x02\\x1A:|\\x08\\x003>\\x83\\x1F\\xFEo\\x08\\xAEo\\x08\\x0E\\x19+\\x10_icon\\xFEr\"\\xFEr\"*r\"\\x007js\\x07\\xF2}\\x08jX\\x00^\\x8A\\x08j3\\x00N\\x97\\x08\\x8A/\\x00\\xED\\xFD\\x006r\\xE7\\x00\\xF2\\xB1\\x08BI\\x08F\\xA6\\x08\\x009r?\\x19"
		"\r0\r\\xAA\\x08730r.\\x00\\xFE\\xF3\\x19\\x9E\\xF3\\x19n]\\x01\\xFE\\xB4\\x08\\x92\\xB4\\x08\\x0443\\x860\\x11\\x05$\\xFE\\xB4\\x08v\\xB4\\x08x86a2d4a77c95efdf9919761e255ab39\\x0E\\xADY\\xFE\\xB6\"\\xFE\\xB6\"\\xFE\\xB6\"\\xFE\\xB6\"\\xFE\\xB6\"\\xFE\\xB6\"\\xFE\\xB6\"\\xFE\\xB6\"\\xFE\\xB6\"\\xFE\\xB6\"\\xFE\\xB6\"\\xFE\\xB6\"\\xFE\\xB6\"\\xFE\\xB6\"\\xFE\\xB6\"\\xFE\\xB6\"\\xFE\\xB6\"F\\xB6\":\\xB4\\x08\\xFE\"+\\xEA\"+\\x0E\\x1F+"
		"\\xFE\\xB2\\x08\\xFE\\xB2\\x08F\\xB2\\x08fdD\\xF6\\xB2\\x08fX\\x00b\\xB2\\x08f3\\x00R\\xB2\\x08\\x86/\\x00\\x1A\\x08\\x08\\x0E\\xB2\\x08f-\\x00\\xEA\\xB2\\x08\\x007jW\\x00J\\xEC\\x19\\x0430\\x8E0\\x00\r\\xB5\\x0473\\xFEh+\\xFEh+\\x16h+v\\xE4\\x00Z\\xC6c\\xFE\\xE8R.\\xE8R\\x0446\\x86\\xB0\""
		"\\x05$\\x00r\\xFE\\xE6Rr\\xE6Rx0106cd0c159eb4f1e7918889de78244\\x0E\\xF5b\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08n\\xBD\\x08\\x0E\\x9E\"\\xFE\\xBD\\x08\\xFE\\xBD\\x08F\\xBD\\x08fFD\\xF6\\xBD\\x08fX\\x00b\\xBD\\x08f3\\x00R\\xBD\\x08\\x86/"
		"\\x00\\x1A\\x08\\x08\\x0E\\xBD\\x08f-\\x00\\xF2\\xBD\\x08\\x86o\\x11\\x003\\xB2\\x92"
		"<\\x0431j\\xAA\\x00\\xFE\\x16\\x1A\\xAA\\x16\\x1Ar\\x86\\x00\\xFE\\xB2\\x08\\x8E\\xB2\\x08\\x000\\x8A\\xB2\\x08\\x01$\\xFE\\xB2\\x08v\\xB2\\x08xeec7500495dcb0651786aafded90a82\\x0E\\xD3l\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\x86\\xB2\\x08.\\xF2\\x0E\\xFE\\xA0<\\xF2\\xA0<\\x1E\""
		"4\\xFE\\xC5\\x08\\xFE\\xC5\\x08J\\xC5\\x08\\x0Ee+\\xFEh+>h+j\\x0BMf\\xC3\\x08\\x01\\x86N\\x89\\x00V\\xC2\\x08\\x01+n.\\x00.\\xC1\\x08\\x01)N,\\x00\\xEA\\xC0\\x08\\x92\\x8Fl&\\xE0\"\\xC2\\xCB\\x08n\\xA73\\xFE:\\x1A\\xA6:\\x1Ab:\\x01\\xFE9\\x1A\\x929\\x1A\\x0466\\x869\\x1A\\x05$\\xFE\\xCA\\x08z\\xCA\\x08xd5d0691ccd800f0f220556020af570c\\xFEi+\\xFEi+\\xFEi+\\xFEi+\\xFEi+\\xFEi+\\xFEi+\\xFEi+\\xFEi+\\xFEi+\\xFEi+\\xFEi+\\xFEi+\\xFEi+\\xFEi+\\xFEi+\\xFEi+\\x8Ei+\\x004\\xFE\\x16N\\xFE\\x16N\""
		"\\x16N\\x12f+\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08*\\xC7\\x08ni\\x08\\x1A\\xD1\"*\\xC7\\x08:\\xFBL\"g\\x1A\\x1An\t\\x007\\x0E\\xE7f.\\xC66\\xFEx\\x11\\xB2x\\x11\\x0E\\xE4\tN\\xE7\t"
		"\\xFE\\xAD\\x08\\x92\\xAD\\x08\\x004\\x8A\\x17N\\x05$\\xFE\\xAD\\x08v\\xAD\\x08x6135b4ea1935207e91677816692dbfa\\xFEw\\x11\\xFEw\\x11\\xFEw\\x11\\xFEw\\x11\\xFEw\\x11\\xFEw\\x11\\xFEw\\x11\\xFEw\\x11\\xFEw\\x11\\xFEw\\x11\\xFEw\\x11\\xFEw\\x11\\xFEw\\x11\\xFEw\\x11\\xFEw\\x11\\xFEw\\x11\\xFEw\\x11\\x9Aw\\x11\\xFE\\x164\\xFE\\x164\"\\x164\\x08pla\\xFE\\xC2V\\xFE\\xC2V2\\xC2V\\x007>\\xF7\\x18\\xF6*\\x1A:D\\x19b\\\\\\x11:(\\x00RR\\x11Z$\\x00\\xED\\xDA\\x0E\t\\x1A:\"\\x00\\xF2>\\x11\\xAE\\xA6"
		"<\\x8Av\\x08ru\\x19\\xFE0\\x11\\xA60\\x11:\"\\x01\\xFEy\\x08\\x92y\\x08\\x0C3609:\\x8B4J\\x154\r&\\xFE}\\x08v}\\x08xd2f3d162109b8290790e1f716620412\\xFE&_\\xFE&_\\xFE&_\\xFE&_\\xFE&_\\xFE&_\\xFE&_Z&_\\xFE\\x174\\xFE\\x174\\xFE\\x174\\xFE\\x174\\xFE\\x174\\xFE\\x174\\xFE\\x174\\xFE\\x174\\xFE\\x174\\xEA\\x174\\x1EK\\x8E\"\\x88\\x86\\x0C1177B\\xBDKB\\x194\\x10navig\\x0E\\xA1\\x88\\x0ET\\x88>\\xD4u\\xF61\\x8Fb\\\\\\x88\\xFEW~\\xFEW~:\\x89UNx\\x08\\x0E\\xF2\\x83\\x08/"
		"1.\\xA1\\xA7.\\xC4\\x0F6V\\x08\\x1A\r\\x10\\x008:\\xEB\\x066%\\x00\\x125\\x08>#\\x00:v\\x08^\\x1F\\x00R<\\x00\\xDAl\\x08\\x0C6510F\\x95\\x07>\\xD7\\x10\\x08532\\x8E\\x07\\x11\\x05\\x99\\x0EC\\x8D\\x007n\\xBE\\x08\\xFEm\\x08\\x8Em\\x08>;\\x01bh\\x08\\x96\\xEE}\\x08645:XVN\\xD3\\x8E\\x001>%\\x00Jf\\x08\t%\\xFEe\\x08ve\\x0886ce942413a065a0\\x0E\\xED^(986859d3149r\\xF8D\\x12\\x19\\x8C\\x16\\xBE\\x8E.\\xA3\\x8B\\x00\"V6\\x93\\x0E\\xBF\\x86\\x99*\\x0E\\xD3y\\x04in&"
		"\\xEF\\x8EN7\\x04\\x19.\\x1E\\x0Ez.H\\x03\\x1A\\x89\\x8E\r%\\x00e\\x0E\\xCF\\x8C*\\xFE\\x89\\x14unload\\x16\\xEByqe:\\xB4\\x032#\\x00E\\x8E:!\\x00\\x08dom\\x16\\x90z\\x81\\x86\\x00v\\x0E\\x81z\\x08175n\\x1C\\x0B\\x011\\x1Ccontent_\\x01\\x7F\\x00e:\\x81\\x00\r@\\x0EV\\x13NY\\x13b?\\x00\\x05\\x9D\\x01=\\x004fC\\x1C\t=\\x0Es\\x90\\x00t\t\\xAA\\x007n\\xAA\\x00\\x01\\x9E6\\x1D\\x01\\xA9\\xEBb\\x9C\\x00\\x1D1\\x11\\x8EF\\x1A\\x06\"\\x9F\\x14\\x08cou\\x0Eq\\x91\\x040,"
		"1\\x9F\\x08ion1\\xB1\\x08har\\x0E7\\x13-\\xB8\\x05\\x19\\x04ab!\\xA3\\x01\\xB8\\x0C\"new\\x1E\\xF6\\x8D\\x00s\\x0E\\x03.\\x0E\\xF8\\x95 number\":1\\xFE\\x19{\\xFE\\x19{\\xFE\\x19{\\xFE\\x19{\\xFE\\x19{\\xFE\\x19{2\\x19{\\xFE\\xA8\n\\xFE\\xA8\n\\xFE\\xA8\n\\xFE\\xA8\n\\xFE\\xA8\n\\xFE\\xA8\n\\xFE\\xA8\n\\xFE\\xA8\n\\xFE\\xA8\n\\xEA\\xA8\n\\x08295\\x0E\\xA5\\x8D&\\xA8\n\\x0E\\x8C\\x8D.\\xFE\\x05B\\xA3\n\\x0Cothe\\x0E\\xCC\\x95Ng\\x06\\xED`\\xD1d\\x82/\\x91\\x08fav\\x12\\xAB>\\x10ico\",\\xFE\\x89\n"
		"\\xEE\\x89\n\\x12\\x89\n\\x0C1178\\x92\\x07\\x13\\xAE\\x8F\nRU\\x00J\\x94\nR(\\x00:\\x99\nr$\\x00\\xD1LF\\xC3\\x00\\xDA\\xA3\n\\x01n\\x008nQ\n>\\xAE\n\\x0483B\\xE1\\x0C>\\x87\\x1B\\x08836F\\xF6\n\\xFE\\x99\n\\x8E\\x99\n\\x01\\xCDB\\xDC\\x01b\\x9E\n\\xA6\\xA85\\x0498:#\\x8CN\\xA1\n>$\\x00N\\xA0\n\\x01$m?"
		"V\\x90\\x88\\x0E\\xD2\\x90\\xFE\\x04\\x91\\xFE\\x04\\x91\\xFE\\x04\\x91\\xFE\\x04\\x91\\xFE\\x04\\x91\\xFE\\x04\\x91\\xFE\\x04\\x91\\xCA\\x04\\x91\\xFE\\x1C\\x08\\xFE\\x1C\\x08\\xFE\\x1C\\x08\\xFE\\x1C\\x08\\xFE\\x1C\\x08\\xFE\\x1C\\x08\\xFE\\x1C\\x08\\xFE\\x1C\\x08Z\\x1C\\x08\\x08]}}", 
		LAST);

	web_custom_request("rb_bf32608msb_3", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=2&flavor=post&vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=3869030253&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779552317717$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=796$sw=1536$sh=960$ni=4g|1.5$egf=1589PRTUX$rt="
		"1-1779552317717%3Bhttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fcss%2Fjpetstore.css%7Cb11615e0f0g0h0i0k2l3m4v6014w6014I11M-68001081V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7Cb11615e0f0g0h0i0k52l57m59v3808w3808E1F17220O287P60I7M761912964V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcart.gif%7Cb11615e0f0g0h0i0k61l62m62v96w96E1F288O16P18I7M-1891668168V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fseparator.gif%7Cb11615e0f0g0h0i0k62l63m63v46w46F18N"
		"2O1P18I7M688934799V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Ffish.gif%7Cb11615e0f0g0h0i0k104l105m106v271w271E1F390O26P15I7M-302972535V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fdogs.gif%7Cb11616e0f0g0h0i0k105l105m106v306w306E1F450O30P15I7M1822807848V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Freptiles.gif%7Cb11616e0f0g0h0i0k110l111m113v398w398E1F780O52P15I7M-620539332V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fcats.gif%7Cb"
		"11617e0f0g0h0i0k109l110m112v289w289E1F420O28P15I7M1231591079V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fbirds.gif%7Cb11617e0f0g0h0i0k109l111m113v251w251E1F495O33P15I7M-1591609649V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Ffish_5Ficon.gif%7Cb11617e0f0g0h0i0k109l113m114v439w439E1F800O40P20I7M-1858137608V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fdogs_5Ficon.gif%7Cb11617e0f0g0h0i0k110l113m114v468w468E1F920O46P20I7M-39000523V0%7Chttp%3A%2F%2Flocalhost%3A8"
		"080%2Fjpetstore%2Fimages%2Fcats_5Ficon.gif%7Cb11617e0f0g0h0i0k110l113m114v408w408E1F860O43P20I7M-246443466V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Freptiles_5Ficon.gif%7Cb11617e0f0g0h0i0k111l113m114v669w669E1F1560O78P20I7M355865488V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fbirds_5Ficon.gif%7Cb11617e0f0g0h0i0k111l114m115v471w471E1F1000O50P20I7M1303219330V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsplash.gif%7Cb11618e0f0g0h0i0k111l114m115v36097w36097E2F12"
		"4250O350P355Q357R347I7M-266518883V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Ffavicon.ico%7Cb11788e0f0g0h0i0k1l48m49u983v683w683I22$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0$fId=552329400_304$v=10337260504112723$vID=17795523294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$time=1779552332596", 
		LAST);

	lr_start_transaction("Search_Transaction");

	web_add_cookie("dtSaf4o018pw=true%7CC%7C-1%7CSearch%7C-%7C1779552354671%7C552329400_304%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%7C%7C%7C%7C; DOMAIN=localhost");

	lr_think_time(22);

	web_submit_data("Catalog.action;jsessionid=7681300B94C91B08394DAC956F842D61", 
		"Action=http://localhost:8080/jpetstore/actions/Catalog.action;jsessionid=7681300B94C91B08394DAC956F842D61", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=keyword", "Value=fish", ENDITEM, 
		"Name=searchProducts", "Value=Search", ENDITEM, 
		"Name=_sourcePage", "Value=X4cxYdeNVGXGhpmvfiF_MWaDnAIk_fddxsGHa3gvHGAOKgA2IHF92YTpZI2TH-ie8LA1k7A_tRq9-1pkTB4AOFmmtFDsVkZw", ENDITEM, 
		"Name=__fp", "Value=BqrCreAcS3ezfyz9RaDYtTbaWnNxsLmc1Jr1V0_mxUDlJWc9jbJDNcLWnIoD9MgJ", ENDITEM, 
		LAST);

	web_custom_request("rb_bf32608msb_4", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=2&flavor=post&vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=747626143&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1779552354760%7C_viewend_%7Cinp%7C136%7Csvn%7C%2Fjpetstore%2Factions%2FCatalog.action%7Csvt%7C1779552317717%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C7%7C_event_%7C1779552354760%7C_pageend_%7Cinp%7C136%7Curl%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$rId=RID_1078536306$rpId=72386131$domR=1779552329489$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779552317717$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=796$sw=1536$sh=960$ni=4g|1.5$egf=1589PRTUX$url="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0$fId=552329400_304$v=10337260504112723$vID=17795523294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK$nV=1$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$time=1779552354763", 
		LAST);

	web_custom_request("rb_bf32608msb_5", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=2&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=2895447888&co=snappy&si=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779552354773&ss=1&qc=3879611706&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xC04D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"4b9f88e16187515c\",\"view.fo\\x11?,_time\":37049\r\\x1D\\x0Cback\t\\\\\r\\x1D\\\\0,\"error.http_4xx_count\":\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!#8us\":\"reported\",\\x05\\x18)^:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x1C11771.09\t\\x01\\x107765,"
		"\\x05\\x1F\\x1Cloading_\\x01b!\\x85,dom_content_\\x01\\x1C\\x05k\\x01H\\x01!>\\x83\\x00\\x08fidb\\x18\\x00\\x01=.Y\\x00$complete\",\\x117\\x04rt-\\x8C\\x1432713.\\x01\\x91\\x14id.dur%?\\x0C\":32\t+\\x04na!\\xCE,\"pointerdown\rD\\x18process\rf\\x04rt\\x013\\x14716.30\r\\x01\\x0474\rU\\x1D*\\x08endf(\\x00<cancelable\":true\t\\x818ui_element.tag_\r\\x90\\x10INPUT\r\\x8A\\x1D\"\\xA8xpath\":[\"html\",\"body\",\"div[@id=\\\\\"Header\\\\\"]\".\\x16\\x00\\x14SearchV\\x16\\x00\\x00C)\\x90\t\\x1D@form\",\""
		"input\"],\"fv\\xE3\\x01\\x00pB\\x89\\x01V\\xE2\\x01\\x00pR\\xC9\\x01\\x04inf\\x18\\x00B|\\x02\\x01-%\\xA3\\x04ac.\\x00\\x03\\x001\\x05\\xADB\\x87\\x00]\\x10\\x019\\x04st]\\x10\\x08411>\\xAC\\x02\\x01$Y\\x1B\\x08136\tV-\\x8C\\x08keyM\\x18\\x01(=\\xEE\\x05W \":34230.8I\\xFD\\x08985\r\\x94\\x1D)I\\x17\\x0C4231A\\x89\\x01FF\\x0C\\x02\\x01\\x16=\\xEAJ\\x0C\\x02:\"\\x00\\xFE\\x0C\\x02\\xBE\\x0C\\x02\\x04lcV\\xAF\\x01\\x01\\x186\\xAF\\x01\\x041,\\x05\\x15%\\x1Fm\\x86\\x1811798.8\t"
		"\\x19a\\xBE\\x19\\x18\\x1467.599\t\\x1A(size\":12387\r\\x12\\x14url\":\"\\x81\\xBC\\xB8://localhost:8080/jpetstore/images/splash.gif\",\\x05\\x83\\x1Cresource\ts=\\xE3\\x0C14.8m\\xC8a\\xC9\\x0406\t\\x80=\\x81Drender_delay\":66.4-\\xE1\\x1092542\r\\xE3:`\\x00\t,\\x0C84.9\r\\\\\\x14223517\t\\\\\rQ\\xC9?2\\x10\\x01\\x1Dv.\\xF7\\x01\\x04MG\r\\xC6\\x1D \\x82\\xF5\\x012\\xCF\\x03\\x99\\x18\\x0CMaini\\xE36\\x14\\x00\\x00I!9b\\x19\\x002M\\x00\\x08img\\x81\\x13 long_task!\\xE0\\xA9\\xB5\\x0Cnot_\\xDD"
		"<\\x0Cttfb\\x19\\x1D>\\x19\\x00\\xCDA\\x1011532!\\xF9\\x05\\x01\\x007\\xC53\\x059\\x0Cwait\\xA1u9\\xAD\\x0885,\t\\x1B\\x10cache\\x1D\\x19\\x000\r\\x18\\x08dnsJ\\x16\\x00\\x10conne\\x89-\\x19L\\x113\\x18request\\x1D\\x1A\\x0C1144E\\x8A\\x05\\x01\t\\x91\\x18perform\\xA1\\xB8\\x00.\\x81x\\x00v\\xC5=\\x00_E\\xD9\\xE5\\x04\\x14view.s\\x01L(nce_number\"a\\x00\\x05\\x19\\x08pre2\\xF5\\x01\\x140,\"cha\\x81\\xC20eristics.has_\\x01,\\x1C_summary\\xD1\\x1A\\x10navig\\x05n\\x0E\\xA5\\x08\\x01r\\xE5A\\x10new\""
		",2\\x1D\\x00\\x04yp\\xE1Y\\x08har\\xE1\\xB6.\\xB0\\x00Ah@_origin\":17795523\\xE1\\xA8\\x087,\"\\x05\\xC1Q\\x8A6\\x1B\\x009+\\x1A\\xE2\\x08,dt.rum.schem*\\x86\t\\x18\"0.23.0\\xC1}\t!\\x14applic\t\\xB3Pid\":\"ea7c4b59f27d43eb\\xC1\\xAF\\x1Ax\t\\x10frame:z\t<e798420700b2a6f1\\x1DZ\\x00g\\xE1\\x1D\"\\x00\n\\\\\"1.337.9.20260504-112723>1\\x00-\\x1B$javascript\\x19!\\x11\\x88\\x00s\\x05\\xA9|6407E28FD0FD2A2C31B9200596EA129F\\x198\t0\\x80BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-=\\x16\\x00i\\x1A^\n)"
		"\\x131l\\x90294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK\\x01w,evice.orient%[<\":\"landscape-priE4\\x04,\"\r)Dbattery.level\":100\\x15\\x1B$screen.wid\\x0EA\\x08\\x0415\\xC1\\xE4\r6\r\\x1B,height\":960,\"\"\\x0B\\x14window67\\x001>\r\\x1C\\x118\\x08796B8\\x00\tb\\x1C_pixel_r\\x01\\xC2L\":1.25,\"page.url.ful\\x8E\\xE2\\x05\\x00ae\\xCA s/Cataloge\\x8F\\x00o\\x0E\\xAC\t\\x05I1g\\x00_%\\xD1\\x00eFK\\x02\\x05&\\x1Cdetected\\x1Ee\t\\xDDAv_\\x00\\x08tit\\x0E\\xB5\t\\x14\"JPetS\\xC1q\\x14 Demo\"\\x1A\\xFF\\x0B6}"
		"\\x00\\x102e093A=\\x181e7a9cf\\x11&\\x00u\\xEE\\xEC\\x00\r\\xEC\\x00v\\x81o\\xC6\\xC6\\x00\\x04},\\xFE\\x13\r:\\x13\r\\x00p!\\xBD&R\r\\x8DJ\\x1037050-\\xDA\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13\r\\xFE\\x13"
		"\r\\xFE\\x13\r\\xFE\\x13\r\\xE6\\x13\rN\\xE2\\x0C\\x0E0\\x08\\x00_:\\xE2\\x0C\\x01\\x14N\"\r\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\x16\\xFA\\x0C\\x0E\\xC9\\x08\\x1A\\xD9\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xF2\\xFA\\x0C\\x08]}}", 
		LAST);

	web_add_cookie("rxvtf4o018pw=1779554154881|1779552329406; DOMAIN=localhost");

	web_add_cookie("dtPCf4o018pw=2$552354815_653h-vBLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0e0; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_6", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=2&flavor=post&vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=2630698417&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action;jsessionid=7681300B94C91B08394DAC956F842D61", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CSearch%7CC%7C-%7C552329400_304%7C1779552354671%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%7C%7C%7C%2Fjpetstore%2Factions%2FCatalog.action%7C1779552317717%2C1%7C1%7C_load_%7C_load_%7C-%7C1779552354677%7C1779552354883%7Cdn%7C83%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%2C2%7C3%7C_event_%7C1779552354677%7C_vc_%7CV%7C179%5Epc%7CVCD%7C1018%7CVCDS%7C0%7CVCS%7C261%7"
		"CVCO%7C1270%7CVCI%7C0%7CTS%7C0%7CVE%7C465%5Ep261%5Ep15625%5Eps%5Estr%3Anth-of-type%283%29%3Etd%3Afirst-child%3Ea%3Afirst-child%3Eimg%3Afirst-child%7CS%7C174%2C2%7C4%7C_event_%7C1779552354677%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0.0288%7Clt%7C60%2C2%7C2%7C_onload_%7C_load_%7C-%7C1779552354883%7C1779552354883%7Cdn%7C83%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1779552354677%7C_view_%7Csvn%7C%2Fjpetstore%2Factions%2FCatalog.action%7Csvt%7C177"
		"9552317717%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=localhost,$rId=RID_-2136798439$rpId=1031989988$domR=1779552354879$tvn=%2Fjpetstore%2Factions%2FCatalog.action%5Esjsessionid%3D7681300B94C91B08394DAC956F842D61$tvt=1779552354677$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=796$sw=1536$sh=960$nt=a0b1779552354677e14f14g14h14i14k16l79m80o175p176q183r202s206t206u4944v4644w4644M1031989988V0$ni=4g|1.5$egf=1589PRTUX$url="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3Bjsessionid%3D7681300B94C91B08394DAC956F842D61$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0$fId=552354815_653$v=10337260504112723$vID=17795523294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3Bjsessionid%3D7681300B94C91B08394DAC956F842D61$time=1779552355963", 
		LAST);

	web_custom_request("rb_bf32608msb_7", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=5&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=2210522970&co=snappy&si=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779552356891&ss=0&qc=3041271166&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action;jsessionid=7681300B94C91B08394DAC956F842D61", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xA4\\x8A\\x02D{\"data_version\":2,\\x05\\x11\\xF4,\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"4b9f88e16187515c\",\"start_time\":1779552354782,\"duration\":0,\"performance.initiator_type\":\"link\",\"characteristics.has_request\":true,\"url.full\":\"http://localhost:8080/jpetstore/css/jpetstore.css\",\"network.protocol.name\"\tL\\x08\",\".\\xA5\\x00(time_origin.\\xDA\\x00@676,\"dt.rum.schem=|\\x18\"0.23.0:I\\x00\\x00s.\""
		"\\x01\\x1006.10\t\\x01\\x141490126u\\x00(next_hop_pr\t\\xA1\\x08\":\":O\\x004domain_lookup_\\x05]\\x04\":~X\\x0065\\x00\\x08end\\x863\\x00\\x18connect\\x9Eb\\x00\\x11/\\x92\\\\\\x00\\x18secure_\r4\\x08ion\\x11f\\x0006\\x0F\\x01-\\xFDb\\x1E\\x00\\x14sponse~\\x1F\\x00\\x92\\x93\\x00\\x10redir\\x1D\\xF0B\\x8A\\x00\r\\x1F\\x05M:\\x1D\\x00\\x14workerZ\\x87\\x00\\x10fetch\\x11\\x1C~\\xA8\\x018render_blocking\\x017\\x14tus\":\"\\x11\\x12:\r\\x02\\x14transf\\x01|\\x0Cize\">\\x98\\x000encoded_body_\t\""
		"\\x0C60146d\\x01\\x04deZ%\\x00-}(.server_tim\\x01\\x92@hint\":\"received\",\\x15(\\x0Ctrac%\\xD4\\x00tE\\xC5\t(\\x10from_\tB\\x08\",\"\\x05#\\x00.\\x85K|6343452934a6cc116081301249311005\\x19.$s_sampled\"\\x8D\\x04N'\\x04,w3c_resource\r\\xAB\\x00s\\x110m\\xAE\\x18applicaAo\t\\x83<ea7c4b59f27d43eb\\x9D\\xFB\\x10frame:\\xFD\\x04@c8b42f23025c14e2\"\\x95\\x08\\x14agent.\\xB5\\x83\\\\\"1.337.9.20260504-112723>1\\x00\\x04ty\\x85\\xFD$javascript\\x19!\\x00b\\xAD\\x83\\x00s),"
		"x407E28FD0FD2A2C31B9200596EA129F\\x198\t0\\x80BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-\\x81\\xA3-\\x16\\x00i\\xAD\\xE1)\\x13\\x001\\xAD\\xC2\\x90294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK\\x01w,evice.orient%[L\":\"landscape-primary\\x19)@screen.width\":153\\xA1M\tD\r\\x1B,height\":960,\\xD5\\x8A\\x14window67\\x001#\r\\x1C\\x118\\x08796B8\\x00\tb\\x1C_pixel_r\\x01\\xA74\":1.25,\"page.u\\xA6T\\x06\\x04acA?$s/Catalog.\t\\x10\\x10;jses\\xE1\\x7F\\x10id="
		"76A\\xC8d0B94C91B08394DAC956F842D61a\\xC1\\x01u1x\\x00_%\\xE2J\\\\\\x02\\x05&$detected_n\\xC9\\xA8\\x00/\\xD9\\xDF\t{\\xFE\\x8B\\x00\\x01\\x8B\\x0Ctitl\\x0E\\x05\\x08PJPetStore Demo\",\"view:\\xA9\\x00<a29388d5fe935998\\x11&\\xFED\\x01\\xBED\\x01\\x05\\x9B\\xFE\\x1E\\x01v\\x1E\\x01\\x04},\\xFE+\t\\xFE+\tN+\t\\x95*N\\x06\\x05\\xAD\\xB3\\x91\\xF9\\xAA\\x95\\x01\\x10ruxit\\x85\\xC8pjs_ICA15789NPRTUVXfqrux_10337\\x89\\xD0\\x89\\xCF\\x0C.js\"\\xFER\t\\xFER\t\\x16R\ta\\xC9\\x04er\"_\n\\xEEE\t"
		":K\\x00\\x00d2m\t\\xE5\\xFC\\xE1\\xC3:&\\x00\\x1A\\xC8\\x08\\xE1\\xAE\\x00r\\x1A\\x8D\tZ\"\\x00^B\\x00\\xFE\\x11\t\\xDA\\x11\t:\\xA6\\x00\\xFE\\x04\t\\xA6\\x04\tBy\\x00\\xFE\\xF7\\x08z\\xF7\\x08\\x1013290\\x86\\xF9\\x08\\x14362149&\\xD3\\x08\\x16\\xB9\\x08\\x1AP\\x08\\x1E\\xFB\\x08@not_available_htt\\x0E:\\x0CmzV\\x05\t"
		"\\x012\\x04se\\xE1\\xDFN\\xB5\\x03\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xFE\\xBB\\x08\\xA2\\xBB\\x08\\x04im\\x0E\\xBF\\x0EN\\x03\\x05\\xAD>\\xCA\\xB8\\x08Timages/logo-topbar.gif\\xFE\\x98\\x08\\xFE\\x98\\x08\\x1A\\x98\\x08\\x0469\r"
		"\\x01\\x10254946w\\x0F\\xEE\\xA5\\x08nX\\x00Z\\xB2\\x08n3\\x00J\\xBF\\x08\\x8E/\\x00\"\\xCC\\x08n-\\x00\\xFE\\xD9\\x08\\xDA\\xD9\\x08n\\x93\\x00\\xFE\\xE6\\x08\\xA6\\xE6\\x08v\\x86\\x00Z\\xF3\\x08\\x0Cnon-\\xFE\\xEE\\x11\\x1E\\xEE\\x11\\x0C38086w\\x02\\x00dF\\xEE\\x11\t"
		"%m\\x83V\\xF3\\x08\\xEE\\xEE\\x11\\x12\\xEE\\x11x3881223f689a154f0643b8963dcd5a3\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11\\xFE\\xEE\\x11b\\xEE\\x11\\xFE3\tj3\t\\x0Ccart\\xFE,\t\\xFE,\t*,\t\\x008\\x16\\x15\\x1B\\x1800745066\\xB5\\x06\\xEE,\tnX\\x00Z,\t"
		"n3\\x00J,\t\\x8E/\\x00\",\tn-\\x00\\xFE,\t\\xDA,\tn\\x93\\x00\\xFE,\t\\xA6,\tv\\x86\\x00\\xFE,\t\\x8A,\t\\x0E8\\x18.F\\x14J*\t\\x01#\\xFE(\tv(\t|570492c08c75f09b297394998fb21c09\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B\\xFE\\x16\\x1B^\\x16\\x1B\\xFE(\tj(\t"
		"\\x1Cseparato\\xFEY\\x12\\xFEY\\x12.Y\\x12n-\\x07\\xFE-\t\\xFE-\t\\xFE-\t\\xFE-\t\\xFE-\t\\xFE-\t\\xFE-\t\\xFE-\t\\xFE-\t\\x92-\t\\x004:\\xA2\\x0BJ-\t\\x01#\\xFE-\tv-\tx348f55f2a3c0905ed28d9435f9189a9\\x0Ek!\\x1Aq$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\xFEC$\\x82C$\\x003\\xAEn-\\xFE-\tn-\t\\x14m_fish\\xFEX\\x12\\xFEX\\x12\"X\\x12\\x007\\xFEI\\x12\\x1EI\\x12:I\\x00R:\\x12:$\\x00B+\\x12Z \\x00\\x1A\\x1C\\x12"
		":\\x1E\\x00\\xFE\r\\x12\\xD2\r\\x12:\\x84\\x00\\xFE\\xFE\\x11\\x9E\\xFE\\x11Bw\\x00\\xFE\\xEF\\x11\\x8A\\xEF\\x11\\x082716\\x1C\\x02J\\xC3\\x08\\x05$\\xFE\\xC4\\x08v\\xC4\\x08|"
		"060253210f8790b19f045d76c7a63836\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xAA\\xF1\\x11\\xFE\\xC4\\x08\\xFE\\xC4\\x08*\\xC4\\x08\\x0Cdogs\\xFE\\xC4\\x08\\xFE\\xC4\\x08&\\xC4\\x08\\x04.1\\x1AG$\\x009\\xFEH$2H$vX\\x00V\\xE2\\x08r\\x8B\\x00F\\xF1\\x08\\x92/"
		"\\x00\\x1E\\x00\tr-\\x00\\xFE\\x0F\t\\xD6\\x0F\tr\\x93\\x00\\xFE\\x1E\t\\xA2\\x1E\tz\\x86\\x00\\xFE-\t\\x8A-\t\\x003>\\x92\\x1DJ-\t\\x05$\\xFE-\tv-\t"
		"x78c4449186f15ce3a8d1129d5513f44\\x0E\\xF7'\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xFE\\xF1\\x11\\xCA\\xF1\\x11\\x18reptile\\xFE1\t\\xFE1\t.1\t\\x003\\x1A1\t\\x1085098:\\x02+\\xE6 \\x1B\\x007rX\\x00Z1\tn\\x8B\\x00J1\t\\x8E/\\x00\"1\t"
		"n-\\x00\\xFE1\t\\xDA1\tn\\x93\\x00\\xFE1\t\\xA61\tv\\x86\\x00\\xFE1\t\\x8E1\t\\x009:v\\x02N1\t\\x01$\\xFE1\tz1\tx10e236f5ffa28765b140d44712ee9b4\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xFE^\\x12\\xD6^\\x12\\x08cat\\xFE-\t\\xFE-\t.-\t:\\x8C=\\xEE \t:K\\x00Z\\x13\t:&\\x00J\\x06\tZ\"\\x00\"\\xF9\\x08: "
		"\\x00\\xFE\\xEC\\x08\\xDA\\xEC\\x08:\\x86\\x00\\xFE\\xDF\\x08\\xA6\\xDF\\x08By\\x00\\xFE\\xD2\\x08\\x8A\\xD2\\x08\\x08289\\x860\\x1B\\x01$\\xFE\\xD2\\x08v\\xD2\\x08|"
		"99b04d0d3be1cf52ac7ae8a395db1efa\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xD6\\xD2\\x08\\x0Cbird\\xFE\\xD3\\x08\\xFE\\xD3\\x08.\\xD3\\x08\\x006\\x1AM6\\xFEcQ6cQ\\x007rX\\x00Z\\xED\\x08n\\x8B\\x00J\\xFA\\x08\\x8E/\\x00\"\\x07\t"
		"n-\\x00\\xFE\\x14\t\\xDA\\x14\tn\\x93\\x00\\xFE!\t\\xA6!\tv\\x86\\x00\\xFE.\t\\x8E.\t\\x005\\x8A^$\\x01$\\xFE.\tz.\tt816f19d7e450737bad8f89b94aa411\\xFEO6\\xFEO6\\xFEO6\\xFEO6\\xFEO6\\xFEO6\\xFEO6\\xFEO6\\xFEO6\\xFEO6\\xFEO6\\xFEO6\\xFEO6\\xFEO6\\xFEO6\\xFEO6\\xFEO6\\xFEO6\\xFEO6NO6>_H\\x0E\\xFC14elf_monitoring\\x1EfHJ*\\x00\\x1Cinternal\\x11#\\x12^Y\\x0E\\xFFM\\x00e.\\x03Z\\x08840:o-\\x1ALUf\\x10Z\\x11!\\x08fm_*\\x89[ timestamp2^\\x00\\x0C29,\"\\x0E\\x93W4\":2000,\""
		"messag\\x0E\\xA1S\\x12\\x9EU\\x1C31483296\\x12\\xA0R\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E\\xB0V\\x14 JavaS\\x12xV0 tag\\\\\",[]]\"}]&\\xD6V\\xFE0W\\xFE0W\\xFE0W\\xFE0W\\xFE0W\\xFE0W\\xFE0W\\xFE0W\\xFE0W\\xFE0W\\xFE0W\\xFE0W\\xFE0W\\xFE0W\\xFE0W\\xFE0W\\xFE0W\\xFE0W>\\xA1\\x05\\x0E\\x0F` long_taskv\\xA3\\x05\\x08784.\\xA3\\x05\\x0ELZ\\xB1\\x83b\\xB4_\\x15[\\x00.\\x1AmY\\xC18\\x04\",\\x1D\\x18\\x18attribu\\x0E\\x03Z\\x0E\\xBC\r\\x14tainer\\x16\\xC1Y\\x8A(\\x00\r"
		"V\\x8A*\\x00\\x08src\\x16\\xF8_\\x19\\x93V{\\x00\\x1AB\\\\\\x16\\x03[bY\\x00\ry\\x18unknown\\x0E\\x8D[\\x16\\xBF`\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xFE\\xE1\\x05\\xEE\\xE1\\x05\\xA5\\xE1Z_\\x0B\\x0E\\x18\\x11\\x00d\"<f\\x082.5\\x1A\\xCE%\\x14776482:z"
		">BLf\\xFE\\xDE8j\\xDE8\\x0E\\xDB8\\x002\\xFE\\x180\\xFE\\x180\\x1E\\x180\\x0475r\\xE7\\x12\\xE2\\xC7\\x1DzX\\x00N\\xE7\\x14z3\\x00>\\xE7\\x14\\x9A/\\x00\\x16\\xE7\\x14z-\\x00\\xDA\\xE7\\x14\\x08176FF\\x1D6Nf\\x10177.3\\x1AH\\x16N\\x95L\\x00r\\x110\r\\xA8\\x048.n\\xA71\\xFE\\xFC\\x14\\x9A\\xFC\\x14z.\\x01b_f\\xFEuT.uT\\x0C1331:\\xA2\\x1EJ\\xFE&\r&"
		"\\xFE\\x00\\x15v\\x00\\x15x5fa89d3b0ed5004080ef907d1e2ae19\\xFEwT\\xFEwT\\xFEwT\\xFEwT\\xFEwT\\xFEwT\\xFEwTZwT0battery.level\\x0E\\xE9j\\x0E\\xAF\\x112ef\\xFE\\x80f\\xFE\\x80f\\xFE\\x80f\\xFE\\x80f\\xFE\\x80f\\xFE\\x80f\\xFE\\x80f\\xFE\\x80f\\xFE\\x80f\\xFE\\x80f\\xFE\\x80f\\xFE\\x80f.\\x80f\\x0485\\x0E3p*o\t2=\\x1B\\x001\\xFEo\t\\xFAo\t\\x001\\xFEo\t\\xFEo\t\"o\t:\t\\x01\\xE6`\t:I\\x00RQ\t:$\\x00BB\tZ \\x00\\x1A\\x8B\\x08:\\x1E\\x00\\xEA$\tniL\"\\x01\t\\x12\\xC7\\x0B\\x12\\xC3\\x16zy/\\x1Aa\t\r"
		"\\xA6\\x0086j\\x02:\nq\\xFE1\t\\x9E1\t:,\\x01\\xFE\"\t\\x96\"\t\\x08263\\x86 0\r&\\xFE\"\tv\"\tx1f042a18bc93fa43f976da6864cd57e\\xFE\"0\\xFE\"0\\xFE\"0\\xFE\"0\\xFE\"0\\xFE\"0\\xFE\"0Z\"0\\xFE\"\t\\xFE\"\t\\xFE\"\t\\xFE\"\t\\xFE\"\t\\xFE\"\t\\xFE\"\t\\xFE\"\t\\xFE\"\t\\xFE\"\t\\xFE\"\t\\xFE\"\t\\xB6\"\t\\x16\\xF3w&\"\t\\x0405r\\x18\\x07B\\x92\\x12\\x10navig\\x0Evr\\x0E|\\x17N\\xD5\\x18\\xAD\\xE3\\x1E\\xD3\\x18\\xAA\\xB7o\\xFE\\x05r\\x12\\x05r\\x04ne\\xFE\\x15y\\xF6\\x15y\\x0006Y.NZ\t\\x0Efm\\x08/"
		"1.\\x0E\\xD3Q2\\xA4[2\\x9Fo\\x1E\\x88\\x08\\x043.6ye:Z\\x0865\\x00\\x16\\x8D\\x08z3\\x00>\\x80\t\\x9A/\\x00\\x92\\\\\\x00\\xDE\\x9E\tB\\xB9\\x08\\x1A^\t-\\x06\\x0479\\xAA\\xBE\\x12\\x0480z\\xBA\t\\x1A\\xFDx\r\\\\:\\xB1\\x01\"\\xAB\t\\x05\\xF0:\\x1D\\x00\\xAA\\x1CyzV\\x01b\\x9B\t\\x96.g\\x0C49446i\\x02J\\x1Fy\\x0446>%\\x00J\\xBB\\x12\t%m\\xB5\\xFE1gZ1gx4fe6df4e618789fae1a9b89533e2002n\\xE80\\x129v\\x16\ny\\xEE\\x97u\\x16\\x97uZ\\x96}\\x0E\\xB4p\\x99\\xD7\\x0E\"#\\x04in&"
		"qyN\\xE4\\x04\\x19.\\x91\\xE7.\\xC9\\x03\\x1A\\xC9\\x1C\r%\\x04e\"6\\xA9\\x01\\x14unload\\x16:#Z\\x84\\x022#\\x00N\\x88\\x02\\x08dom\\x16\\xDF#\\xA13\\x00v\\x12\\xD0#\\x004r\\xC7\\x05\\x011\\x1Ccontent_\\x01\\x7F\\x00e:\\x81\\x00\\x0EC\\x16\\x003\\x1A\\x9A\\x18Nh>b@\\x00\\x05\\x9E\\x08183r\\xA0\\x03\t>\\x0E\\xF7z\\x00t\\x12\t$\\x002r^\\x16\\x01\\xA06\\x1F\\x01\\xC1\\xA56\\x06\\x056S\\x01\\x1D2\\x05\\x90\\x010v\\xED\r\\x8D\\x03\\x08cou\\x0E\\x01|\\x040,1\\xAD\\x08ion1\\xBF\\x08har\\x0E\\x11|"
		"-\\xC6\\x05\\x19\\x04ab!\\xB1\\x01\\xC4\\x08\"ex\\x0E\\xD7\\x7F\\x04ng\\x1E3x\\x10seque\\x0E[\\x80 number\":1\\xFE{$\\xFE{$\\xFE{$\\xFE{$\\xFE{$\\xFE{$2{$\\xFE$\\x0C\\xFE$\\x0C\\xFE$\\x0C\\xFE$\\x0C\\xFE$\\x0C\\xFE$\\x0C\\xFE$\\x0C\\xFE$\\x0C\\xFE$\\x0C\\xFE$\\x0C\\xFE$\\x0C\\x1E$\\x0C\\x08]}}", 
		LAST);

	web_add_cookie("dtSaf4o018pw=true%7CC%7C-1%7CFresh%20Water%20fish%20from%20China%7C-%7C1779552357167%7C552354815_653%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%5Esjsessionid%3D7681300B94C91B08394DAC956F842D61%7C%7C%7C%7C; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_8", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=2&flavor=post&vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=1336445865&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action;jsessionid=7681300B94C91B08394DAC956F842D61", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fjpetstore%2Factions%2FCatalog.action%5Esjsessionid%3D7681300B94C91B08394DAC956F842D61$tvt=1779552354677$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=796$sw=1536$sh=960$ni=4g|1.5$egf=1589PRTUX$rt="
		"1-1779552354677%3Bhttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fcss%2Fjpetstore.css%7Cb106e0f0g0h0i0m0v6014w6014I11M-68001081V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7Cb107e0f0g0h0i0m0v3808w3808E1F17220O287P60I7M761912964V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcart.gif%7Cb107e0f0g0h0i0m0v96w96E1F288O16P18I7M-1891668168V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fseparator.gif%7Cb107e0f0g0h0i0m0v46w46F18N2O1P18I7M688934799V0%7Chttp%3A%2F"
		"%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Ffish.gif%7Cb107e0f0g0h0i0m0v271w271E1F390O26P15I7M-302972535V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fdogs.gif%7Cb107e0f0g0h0i0m0v306w306E1F450O30P15I7M1822807848V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Freptiles.gif%7Cb107e0f0g0h0i0m0v398w398E1F780O52P15I7M-620539332V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fcats.gif%7Cb108e0f0g0h0i0m0v289w289E1F420O28P15I7M1231591079V0%7Chttp%3A%2F%2Floc"
		"alhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fbirds.gif%7Cb108e0f0g0h0i0m0v251w251E1F495O33P15I7M-1591609649V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Ffish2.gif%7Cb176e0f0g0h0i0k1l2m3v13315w13315E1F15625O125P125I7M1866378948V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Ffish1.gif%7Cb176e0f0g0h0i0k1l1m3v12638w12638E2F15625O125P125I7M-859153008V0$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3Bjsessionid%3D7681300B94C91B08394DAC956F842D61$title="
		"JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0$fId=552354815_653$v=10337260504112723$vID=17795523294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3Bjsessionid%3D7681300B94C91B08394DAC956F842D61$time=1779552357176", 
		LAST);

	web_url("Catalog.action_2", 
		"URL=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-FW-02", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action;jsessionid=7681300B94C91B08394DAC956F842D61", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf32608msb_9", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=2&flavor=post&vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=2923768087&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action;jsessionid=7681300B94C91B08394DAC956F842D61", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1779552357183%7C_wv_%7CAAI%7C1%7CfIS%7C2270%7CfID%7C1%2C1%7C7%7C_event_%7C1779552357257%7C_viewend_%7Cinp%7C0%7Csvn%7C%2Fjpetstore%2Factions%2FCatalog.action%5Esjsessionid%3D7681300B94C91B08394DAC956F842D61%7Csvt%7C1779552354677%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1779552357257%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%5Esjsessionid%3D7681300B94C91B08394DAC956F842D61$rId=RID_-2136798439$rpId="
		"1031989988$domR=1779552354879$tvn=%2Fjpetstore%2Factions%2FCatalog.action%5Esjsessionid%3D7681300B94C91B08394DAC956F842D61$tvt=1779552354677$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=796$sw=1536$sh=960$ni=4g|1.5$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3Bjsessionid%3D7681300B94C91B08394DAC956F842D61$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0$fId=552354815_653$v=10337260504112723$vID="
		"17795523294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3Bjsessionid%3D7681300B94C91B08394DAC956F842D61$time=1779552357261", 
		LAST);

	web_custom_request("rb_bf32608msb_10", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=2&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=3836133145&co=snappy&si=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779552357268&ss=1&qc=1436638408&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action;jsessionid=7681300B94C91B08394DAC956F842D61", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\x9C7D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"4b9f88e16187515c\",\"view.fo\\x11?(_time\":2587\r\\x1C\\x0Cback\t[\r\\x1C\\\\0,\"error.http_4xx_count\":\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!\"8us\":\"reported\",\\x05\\x18)]\\x11-\\x002\t\\x150value\":0.0288\t\\x13\\x1Cloading_\\x01H!j,"
		"dom_content_\\x01\\x1C\\x19Q8i_element.shift-.\\x14193.39\t\\x01\\x0C8509\\x11XB/\\x00\\x19|\\x0415\t{\\x1D#\\x14tag_na!\\x9A\\x0C\"DIV\\x11\\xC3\\x19r0xpath\":[\"htmlA\\x03\\x80ody\",\"div[@id=\\\\\"Footer\\\\\"]\"],\"fcp.\ro\\x10215.6\t\\x9E\\x189925494\t\\x1F\\x01\\xDB.\\xF7\\x00 complete\"\t\\x1F!\\x0E>V\\x01\\x08fidb\\x18\\x00nO\\x00\t7\\x00r11\\x102270,\\x05M\\x08durE\\x0FEZ\\x01'-\\x02(pointerdown\\x01\\x8F$id.process\r\\xB1\\x08rt\"\\x05F\\x04.8\r\\xD9\\x08851\tR\\x1D(\\x0Cend\"\\x01&\r"
		"\\x1A<cancelable\":true\t0=b=\\x82\\x00A\rv\\x1D\\x1E\\x82\\x80\\x01\\x00CI3!\\x81.\\x97\\x01\\x18Catalog\t\\x17\\x00t\\x05\\x7F\\x08,\"t-\\xBE\\x10tr[2]\\x01\\x10\\x10d\",\"a%\\xB9v\\xB8\\x01\\x00prh\\x01\\x00pR\\x9E\\x01\\x04in\\x1D\\x184below_threshol\\x01w\\x04lc\\x1D\\x1F}C\\x01\\x186C\\x03\\x041,\\x05\\x15\\x04st=\\xCBI]\t\\x19A\\x03q\\x14\\x0481Au\t\\x18(size\":17220\t\\x11\\x14url\":\"a\\xD1\\xC8://localhost:8080/jpetstore/images/logo-topbar.gif\"\tC\\x1Cresource\t"
		"u2H\\x02\\x05\\xB9y9Trender_delay\":108.9990\\x05\\x01\\x1074507RP\\x00\t-\\x0827.6\\xD9\\x03\\x004\\x11-\\x05S\\xADI\\x001e`\t\\x1A\\x1Dx]O\\x0CIMG\"B \\x00\\x82Q\\x02\\x0CHeadi\\xD1.P\\x02\\x0CLogoIMy\\xFB\\x01\\x142\\x7F\\x02\\x18a\",\"imgAQ long_task!\\xB8B\\xD2\\x03\\x19\\x1E\\x0Call.\\xAD\\xE6!\\xE8\\x156\\x01\\x18\\x08avg=c\\x0860,:8\\x00@slowest_occurrenc\\xC1\\xD3\\x08[{\".*\\x02\\x10108,\"9\\xA8\\x0C60}].G\\x00\\x0CselfR\\x80\\x00\\x05\\x19n\\x81\\x00\\x05"
		"!\\xE2\\x82\\x00\\x0CttfbR\\x1A\\x01\\x05\\x19\\x00v\\xC9.\\x0C79.3E1\\x0400E4\\x046,\t\\x1F\\x0Cwait\\x81\\x92\\x19\\xD7\\x0413A\\xF7\t\\x01\\xA5l\\x002\r+\\x10cache\\x1D)\\x000\r\\x18\\x08dnsJ\\x16\\x00\\x14connec\\xE5)\\x19\\\\\\x113\\x0Crequ!n\\x19\\x1A\\x0C65.6\\x01\\x9CD000149012,\"perform\\x81\\xF4\\x14.activ\\xA5h\\xC1\\xE4\\xA1<\\x000\\xED\\xFA\\x00s\\x01K(nce_number\"!\\xFB\\x00v\\x0E/\\x08\\x08prem8I\\xE5X0,\"characteristics.has_\\x01,"
		"\\x1C_summary\\xB1V\\x10navig\\x05n\\x0E\\x9F\\x08\\x01r\\xE5V\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\xE1s\\x10hard\"6\\xB5\\x00\\x01x\\x18_origin\\x81<,79552354676,6X\\x026\\x1B\\x009\\x15\\x16\\xE1\\x08,dt.rum.schem*\\x84\t\\x18\"0.23.0aZ\t!\\x14applic\t\\xB7Xid\":\"ea7c4b59f27d43eb\",\"v\t\\x10frame:x\t<c8b42f23025c14e2\\x1DZ\\x00g\\x0E1\\x08\\x00v\\x1E\\xFE\t\\\\\"1.337.9.20260504-112723>1\\x00-\\x1A$javascript\\x19!\\x00b\\x1A\\xFE\t\\x00s\\x05\\xA9|6407E28FD0FD2A2C31B9200596EA129F\\x198\t"
		"0\\x80BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-=\\x16\\x00i\\x1A\\\\\n)\\x131k\\x90294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK\\x01w,evice.orient%[<\":\"landscape-priE8\\x04,\"\r)0battery.level\\xA1\\xAB\\x000\\x15\\x1B$screen.wid\\x0E\\x05\t\\x0C1536>\\x1B\\x00 height\":9\\x81\\x9F1\"\\x14window67\\x00:\\x1C\\x00\\x118\\x008a\\xAB:\\x1C\\x00\t\\x98\\x1C_pixel_r\\x01\\xC2L\":1.25,\"page.url.ful\\x8E\\xCC\\x06\\x00ae\\xCD\\x04s/\\x1A\\x0E\\x08e\\x93\\x18on;jses\\x0E\\x15\\x0C\\x88id="
		"7681300B94C91B08394DAC956F842D61a\\x1F\\x01u1\\x93\\x00_%\\xFDJw\\x02\\x05&\\x1Cdetected\\x1ES\n\\xFDW\\xFE\\x8B\\x00\\x19\\x8B\\x08tit\\x0EM\t\\x14\"JPetS\\xE1\\xB3\\x14 Demo\"\\x8D\\\\6\\xA9\\x00<a29388d5fe935998\\x11&\\xFED\\x01\\xBED\\x01\\x00v\\x81\\xDE\\xFE\\x1E\\x01v\\x1E\\x01\\x04},\\xFE\\xC1\r:\\xC1\r%\\xD2&\\x00\\x0E\\xAD\\x93\\x0425\\x0Ei\\x0C\\x05\\x1C\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r"
		"\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xFE\\xC1\r\\xD2\\xC1\rN\\x90\r\\x0E\\x0E\\x08\\x00_:\\x90\r\\x01\\x14N\\xD0\r\\xFE\\xA8\r\\xFE\\xA8\r*\\xA8\r\\x0E\\x1A\\x10\\x16\\x87\r\\xFE\\xA8\r\\xFE\\xA8\r\\xFE\\xA8\r\\xFE\\xA8\r\\xFE\\xA8\r\\xFE\\xA8\r\\xFE\\xA8\r\\xFE\\xA8\r\\xFE\\xA8\r\\xFE\\xA8\r\\xFE\\xA8\r"
		"\\xFE\\xA8\r\\xFE\\xA8\r\\xFE\\xA8\r\\xFE\\xA8\r\\xFE\\xA8\r\\xFE\\xA8\r\\xB2\\xA8\r\\x08]}}", 
		LAST);

	web_add_cookie("rxvtf4o018pw=1779554157351|1779552329406; DOMAIN=localhost");

	web_add_cookie("dtPCf4o018pw=2$552357293_115h-vBLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0e0; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_11", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=2&flavor=post&vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=724562567&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-FW-02", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CFresh%20Water%20fish%20from%20China%7CC%7C-%7C552354815_653%7C1779552357167%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%5Esjsessionid%3D7681300B94C91B08394DAC956F842D61%7C%7C%7C%2Fjpetstore%2Factions%2FCatalog.action%3Bjsessionid%3D7681300B94C91B08394DAC956F842D61%7C1779552354677%2C1%7C1%7C_load_%7C_load_%7C-%7C1779552357177%7C1779552357353%7Cdn%7C84%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpet"
		"store%2Factions%2FCatalog.action%5Esjsessionid%3D7681300B94C91B08394DAC956F842D61%2C2%7C3%7C_event_%7C1779552357177%7C_vc_%7CV%7C158%5Epc%7CVCD%7C1015%7CVCDS%7C1%7CVCS%7C236%7CVCO%7C1242%7CVCI%7C0%7CTS%7C1%7CVE%7C491%5Ep238%5Ep67947%5Eps%5Es%23Banner%7CS%7C157%2C2%7C4%7C_event_%7C1779552357177%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1779552357353%7C1779552357353%7Cdn%7C84%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%"
		"7C5%7C_event_%7C1779552357177%7C_view_%7Csvn%7C%2Fjpetstore%2Factions%2FCatalog.action%5Esjsessionid%3D7681300B94C91B08394DAC956F842D61%7Csvt%7C1779552354677%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=localhost,$rId=RID_226265164$rpId=-1736296949$domR=1779552357349$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779552357177$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$nt="
		"a0b1779552357177e5f5g5h5i5k7l75m76o158p159q163r172s176t176u5007v4707w4707M-1736296949V0$ni=4g|1.5$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-FW-02$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0$fId=552357293_115$v=10337260504112723$vID=17795523294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK$rf="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-FW-02$time=1779552358434", 
		LAST);

	web_custom_request("rb_bf32608msb_12", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=5&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=4176200790&co=snappy&si=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779552359374&ss=0&qc=1332598169&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-FW-02", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xFA\\xCF\\x01D{\"data_version\":2,\\x05\\x11\\xF4,\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"4b9f88e16187515c\",\"start_time\":1779552357279,\"duration\":0,\"performance.initiator_type\":\"link\",\"characteristics.has_request\":true,\"url.full\":\"http://localhost:8080/jpetstore/css/jpetstore.css\",\"network.protocol.name\"\tL\\x08\",\".\\xA5\\x00(time_origin.\\xDA\\x00@177,\"dt.rum.schem=|\\x18\"0.23.0:I\\x00\\x00s.\""
		"\\x01\\x1002.19\r\\x01\\x10254946u\\x00(next_hop_pr\t\\xA1\\x08\":\":O\\x004domain_lookup_\\x05]\\x04\":~X\\x0065\\x00\\x08end\\x863\\x00\\x18connect\\x9Eb\\x00\\x11/\\x92\\\\\\x00\\x18secure_\r4\\x08ion\\x11f\\x0006\\x0F\\x01-\\xFDb\\x1E\\x00\\x14sponse~\\x1F\\x00\\x92\\x93\\x00\\x10redir\\x1D\\xF0B\\x8A\\x00\r\\x1F\\x05M:\\x1D\\x00\\x14workerZ\\x87\\x00\\x10fetch\\x11\\x1C~\\xA8\\x018render_blocking\\x017\\x14tus\":\"\\x11\\x12:\r\\x02\\x14transf\\x01|\\x0Cize\">\\x98\\x000encoded_body_\t\""
		"\\x08601:s\\x02\\x04deZ%\\x00-}(.server_tim\\x01\\x92@hint\":\"received\",\\x15(\\x0Ctrac%\\xD4\\x00tE\\xC5\t(\\x10from_\tB\\x08\",\"\\x05#\\x00.\\x85K|6343452934a6cc116081301249311005\\x19.$s_sampled\"\\x8D\\x04N'\\x04,w3c_resource\r\\xAB\\x00s\\x110m\\xAE\\x18applicaAo\t\\x83<ea7c4b59f27d43eb\\x9D\\xFB\\x10frame:\\xFD\\x04@6139ddfb8ac178f4\"\\x95\\x08\\x14agent.\\xB5\\x83\\\\\"1.337.9.20260504-112723>1\\x00\\x04ty\\x85\\xFD$javascript\\x19!\\x00b\\xAD\\x83\\x00s),"
		"x407E28FD0FD2A2C31B9200596EA129F\\x198\t0\\x80BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-\\x81\\xA3-\\x16\\x00i\\xAD\\xE1)\\x13\\x001\\xAD\\xC2\\x90294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK\\x01w,evice.orient%[L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":960,\\xD5\\x8A\\x14window67\\x001#\r\\x1C\\x118\\x08842B8\\x00\tb\\x1C_pixel_r\\x01\\xA74\":1.25,\"page.u\\xA6T\\x06\\x04acA?$s/Catalog.\t\\x108?viewProduct=&p\t\t(Id=FI-FW-02a\\xB5\\x01i1l\\x00_)\\xD6FP\\x02\\x05&"
		"$detected_n\\xC9\\x9C\\x00/\\xD9\\xD3\to>\\x7F\\x00\\x11_\\x0Ctitl\\xE1\\xCD@JPetStore Demo\",\"\\x01\\x9F:}\\x0083c61faf50c3b96ba\\xC8\\x05&\\xFE\\x0C\\x01\\x8E\\x0C\\x01\\x05i\\xC6\\xE6\\x00\\x04},\\xFE\\xBB\\x08\\xFE\\xBB\\x08N\\xBB\\x08u\\xBAN\\x96\\x04\\xADC\\x91\\x89\\xAA]\\x01\\x10ruxit\\x85Xpjs_ICA15789NPRTUVXfqrux_10337\\x89`\\x89_\\x0C.js\""
		"\\xFE\\xE2\\x08\\xFE\\xE2\\x08\\xFE\\xE2\\x08\\xFE\\xE2\\x08\\xFE\\xE2\\x08\\xFE\\xE2\\x08\\xFE\\xE2\\x08\\xFE\\xE2\\x08\\xFE\\xE2\\x08\\xFE\\xE2\\x08\\xFE\\xE2\\x08\\xEE\\xE2\\x08\\x1A\\xE2\\x08\\x1013290\\x86\\xE4\\x08\\x14362149&\\xBE\\x08\\x16\\xA4\\x08\\x1A;"
		"\\x08\\x1E\\xE6\\x08@not_available_htt\\x0E%\\x0Cm\\xD5V\\xF0\\x08\\x012\\x04se\\xE1\\xCAN\\x10\\x04\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xE2\\xA6\\x08\\x04im\\x0E:\\x0EN\\x93\\x04\\x8D\\xCE\\xCA\\xA3\\x08Timages/"
		"logo-topbar.gif\\xFE\\x83\\x08\\xFE\\x83\\x08\\x1A\\x83\\x08\\x003\\x1Ad\\x11\\x148509886V\\x10\\xEEe\\x11nX\\x00\\x00d2\\x9A\\x11\\x12)\\x10\\x0E\\xF0\\x0Fn3\\x00\\x1A\\x02\\x11\\x0E\\xE8\\x0F\\x00r\\x1A\\xC7\\x11\\x8E/\\x00\\x92\\\\\\x00\\xFEe\\x11\\xDAe\\x11n\\xC0\\x00\\xFEe\\x11\\xA6e\\x11v\\x86\\x00Ze\\x11\\x0Cnon-\\xFEi\\x11\\x1Ei\\x11\\x08380:w\\x02\\x00dFi\\x11\t"
		"%m\\x83V\\x83\\x08\\xEEi\\x11\\x12i\\x11x3881223f689a154f0643b8963dcd5a3\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xFEi\\x11\\xA2i\\x11\\xFE\\xC3\\x08j\\xC3\\x08\\x0Ccart\\xFE\\xBC\\x08\\xFE\\xBC\\x08*\\xBC\\x08\\x0E\\x98\\x14\\x04er\".\\x1B\\xEE\\xAF\\x08:K\\x00Z\\xA2\\x08:&\\x00J\\x95\\x08Z\"\\x00\"\\x88\\x08: \\x00\\xFE{\\x08\\xDA{\\x08"
		":\\x86\\x00\\xFEn\\x08\\xA6n\\x08By\\x00\\xFEa\\x08\\x8Aa\\x08\\x04966\\xD6\nJ_\\x08\\x01#\\xFE]\\x08v]\\x08|570492c08c75f09b297394998fb21c09\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\xFE\\xC6\\x19\\x9E\\xC6\\x19\\xFE]\\x08j]"
		"\\x08\\x1Cseparato\\xFE\\x1E\\x11\\xFE\\x1E\\x11.\\x1E\\x11\\x005\\x1A\\x1E\\x11\\x147764836H\\x06\\xF2o\\x08jX\\x00^|\\x08j3\\x00N\\x89\\x08\\x8A/\\x00&\\x96\\x08j-\\x00\\xFE\\xA3\\x08\\xDE\\xA3\\x08j\\x93\\x00\\xFE\\xB0\\x08\\xAA\\xB0\\x08r\\x86\\x00\\xFE\\xBD\\x08\\x8A\\xBD\\x08\\x004\\x86\\xBD\\x08\\x01#\\xFE\\xBD\\x08v\\xBD\\x08|"
		"348f55f2a3c0905ed28d9435f9189a91\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\x0E\\xBD\\x08\\x14m_fish\\xFE\\x1D\\x11\\xFE\\x1D\\x11*\\x1D\\x11\\x007\\xD1\\xBB\\x08019\\x0E\\x8B+\\xFE*\\x11\\x1E*\\x11nX\\x00Z\\xBB\\x08n3\\x00J\\xBB\\x08\\x8E/"
		"\\x00\"\\xBB\\x08n-\\x00\\xFE\\xBB\\x08\\xDA\\xBB\\x08n\\x93\\x00\\xFE\\xBB\\x08\\xA6\\xBB\\x08v\\x86\\x00\\xFE\\xBB\\x08\\x8A\\xBB\\x08\\x0827161\\x0BJy\\x11\\x05$\\xFE\\xBD\\x08v\\xBD\\x08|"
		"060253210f8790b19f045d76c7a63836\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xFE\\xBD\\x08\\xE6\\xBD\\x08\\x0480\\xAE\\xFB3\\xFEz\\x11nz\\x11\\x14m_dogs\\xFE\\xBD\\x08\\xFE\\xBD\\x08\"\\xBD\\x08\\xFEi\\x11\"i\\x11:I\\x00R\\x9F\\x08:$\\x00B\\x90\\x08Z \\x00\\x1A\\x81\\x08:\\x1E\\x00\\xFEr\\x08\\xD2r\\x08"
		":\\x84\\x00\\xFEc\\x08\\x9Ec\\x08Bw\\x00\\xFET\\x08\\x8AT\\x08\\x0430\\x86\\x10\\x11\\x05$\\xFET\\x08vT\\x08x78c4449186f15ce3a8d1129d5513f44\\x0E\\xDC%\\x1A\\xC23\\xFE\\x943\\xFE\\x943\\xFE\\x943\\xFE\\x943\\xFE\\x943\\xFE\\x943\\xFE\\x943\\xFE\\x943\\xFE\\x943\\xFE\\x943\\xFE\\x943\\xFE\\x943\\xFE\\x943\\xFE\\x943\\xFE\\x943\\xFE\\x943\\xFE\\x943\\xBE\\x943\\xFET\\x08\\xFET\\x08.T\\x08\\x18reptile\\xFEX\\x08\\xFEX\\x08*X\\x08\\xFES<ZS<vX\\x00Vv\\x08r\\x8B\\x00F\\x85\\x08\\x92/"
		"\\x00\\x1E\\x94\\x08r-\\x00\\xFE\\xA3\\x08\\xD6\\xA3\\x08r\\x93\\x00\\xFE\\xB2\\x08\\xA2\\xB2\\x08z\\x86\\x00\\xFE\\xC1\\x08\\x8E\\xC1\\x08\\x009\\x8A\\xED*\\x01$\\xFE\\xC1\\x08z\\xC1\\x08t10e236f5ffa28765b140d44712ee9b\\x0E\\xB3;"
		"\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xFE\\xC1\\x08\\xEE\\xC1\\x08\\x1A\\xC1\\x08\\x08cat\\xFE\\xBD\\x08\\xFE\\xBD\\x08.\\xBD\\x08\\x002\\xFE\\xD2\\x19R\\xD2\\x19\\x003rX\\x00Z\\xBD\\x08n\\x8B\\x00J\\xBD\\x08\\x8E/\\x00\""
		"\\xBD\\x08n-\\x00\\xFE\\xBD\\x08\\xDA\\xBD\\x08n\\x93\\x00\\xFE\\xBD\\x08\\xA6\\xBD\\x08v\\x86\\x00\\xFE\\xBD\\x08\\x8A\\xBD\\x08\\x08289\\x86\\xD2\\x19\\x01$\\xFE\\xBD\\x08v\\xBD\\x08|"
		"99b04d0d3be1cf52ac7ae8a395db1efa\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\xFE\\xD2\\x19\\x16\\xD2\\x19\\x0Cbird\\xFE\\xBE\\x08\\xFE\\xBE\\x08.\\xBE\\x08\\x003\\x1A\\xBE\\x08\\xFEi<6i<\\x003rX\\x00Z\\xBE\\x08n\\x8B\\x00J\\xBE\\x08\\x8E/\\x00\""
		"\\xBE\\x08n-\\x00\\xFE\\xBE\\x08\\xDA\\xBE\\x08n\\x93\\x00\\xFE\\xBE\\x08\\xA6\\xBE\\x08v\\x86\\x00\\xFE\\xBE\\x08\\x8E\\xBE\\x08\\x005\\x8A\\x90\"\\x01$\\xFE\\xBE\\x08z\\xBE\\x08t816f19d7e450737bad8f89b94aa411\\xFE\n4\\xFE\n4\\xFE\n4\\xFE\n4\\xFE\n4\\xFE\n4\\xFE\n4\\xFE\n4\\xFE\n4\\xFE\n4\\xFE\n4\\xFE\n4\\xFE\n4\\xFE\n4\\xFE\n4\\xFE\n4\\xFE\n4\\x8E\n4"
		">\\xDFD\\x0E\\xA6\\x1E4elf_monitoring\\x1E\\xE6DJ*\\x00\\x1Cinternal\\x11#\\x12YU\\x0E\\x0FJ\\x00e.\\xFEU\\x003\\x0E5P\\x00d.\\xD8V\\x1AGQf\\x0BV\\x11!\\x08fm_*\\x84W timestamp2^\\x00\\x0C15,\"\\x0E\\x8ES4\":2000,\"messag\\x0E\\xD4O\\x12\\x99Q\\x1C31483296\\x12\\x0BO\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E\\xABR\\x14 JavaS\\x12sR0 tag\\\\\",[]]\"}]&\\xD1R\\xFE+S\\xFE+S\\xFE+S\\xFE+S\\xFE+S\\xFE+S\\xFE+S\\xFE+S\\xFE+S\\xFE+S\\xFE+S\\xFE+S\\xFE+S\\xFE+S\\xFE+S\\xFE+S\\x96+S\\x16\\x0C"
		"[\\xB5\\x0E\\x10176.0\\x1A\\x0F\rNZ8B\\xF7[\\x10navig\\x0E\\x8FU\\x0E\\xC3T>\\x94\\x05\\xF6\\xFD[V*U\\x8A\\xA9U\\x04ne\\xFE\"\\\\\\xF6\"\\\\\\x0006\\x8B\\x14N\\x8E9\\x0E\\x88P\\x08/1.\\x0E\\xA06.\\xFE06\\x16\\x0E\\xC5\\xC0\\x08\":46\\xEC9\\x002>h&F\\xB3Jz2\\x00:I\\x0E\\x9A.\\x00\\x12H\\x0Ez,\\x00\\xDAG\\x0E\\x006F~A6\\x17\\\\\\x0475zc\\x16\r/\\x05\\xA4\\x0476z\\xD2\r\\x1A\\x07\\\\-_:\\xAE\\x01\"w\\x0E\\x05L:\\x1D\\x00\\xA6&\\\\z)\\x01\\xFA%\\\\\\x0C50076e\\x02J(\\\\\\x0447>%\\x00J\\xE70\t"
		"%\\x14reques\\xFE\\xBFJ^\\xBFJx0c3a80dc1c45b8671ee06b8386fd4d5n\\x16\\x17\\x12NY\\x16\\x13\\\\\\xEE\\xD8X\\x16\\xD8X\\x10;jses\\x0Eca\\x10id=76\\x0E\\xAC\\\\`0B94C91B08394DAC956F842D6a\\x99N\\xCE\\x04\\x0E\\xFES\\x99\\xF3\\x0E\\\\\n\\x04in&\\xA6\\\\N2\\x00\\x19.\\x1E\\x97\n.\\xF1\\x03\\x1A@\\\\\r%\\x00e\\x0E\\x07Z*7F\\x14unload\\x16t\nQ\\xAF\\x009:Z\\x02:\\xEC*23\\x00E\\xC3z1\\x00\\x08dom\\x169\\x0B\\xA1o\\x00v\\x0E*\\x0B\\x0458r\\x03\\x06\\x011\\x1Ccontent_\\x01\\x9F\\x00e:\\xA1\\x00\\x0415"
		">\\x8B\\x19\\x04omV1\\x00\\x05\\x9F\\x0416\\x82\\xE7\\x1B\\x08_co\\x0E=^\\x00t\\x01\\x9D\\x0472r\\x9D\\x00\\x01\\x9160\\x01\\x10175.8\\xCD\\xD2N\\xE1\\x13\\x1D2\t\\x90z\\x02\\x07\\x95 \\x08cou\\x0EG_\\x040,1\\xBE\\x08ion1\\xD0\\x08har\\x0E\\x8F[-\\xD7\\x05\\x19\\x04ab!\\xC2\\x01\\xC4\\x08\"ex\\x0E\\x1Dc\\x04ng\\x1E\\xD7[\\x00sa~\\x0E\\xA1c number\":1\\xFE\\xC6\\x0B\\xFE\\xC6\\x0B\\xFE\\xC6\\x0B\\xFE\\xC6\\x0B\\xFE\\xC6\\x0B\\xFE\\xC6\\x0B2\\xC6\\x0B0battery.level\\x0Euc\\x0E\\x1D1\\x165_\\x1A\\xF1"
		"^\\xFE\\x0C_\\xFE\\x0C_\\xFE\\x0C_\\xFE\\x0C_\\xFE\\x0C_\\xFE\\x0C_\\xFE\\x0C_\\xFE\\x0C_\\xD6\\x0C_\\x08]}}", 
		LAST);

	web_add_cookie("dtSaf4o018pw=true%7CC%7C-1%7CEST-20%7C-%7C1779552360396%7C552357293_115%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-FW-02%7C%7C%7C%7C; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_13", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=2&flavor=post&vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=690336709&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-FW-02", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779552357177$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.5$egf=1589PRTUX$rt="
		"1-1779552357177%3Bhttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fcss%2Fjpetstore.css%7Cb102e0f0g0h0i0m0v6014w6014I11M-68001081V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7Cb102e0f0g0h0i0m0v3808w3808E1F17220O287P60I7M761912964V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcart.gif%7Cb103e0f0g0h0i0m0v96w96E1F288O16P18I7M-1891668168V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fseparator.gif%7Cb103e0f0g0h0i0m0v46w46F18N2O1P18I7M688934799V0%7Chttp%3A%2F"
		"%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Ffish.gif%7Cb103e0f0g0h0i0m0v271w271E1F390O26P15I7M-302972535V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fdogs.gif%7Cb103e0f0g0h0i0m0v306w306E1F450O30P15I7M1822807848V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Freptiles.gif%7Cb103e0f0g0h0i0m0v398w398E1F780O52P15I7M-620539332V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fcats.gif%7Cb103e0f0g0h0i0m0v289w289E1F420O28P15I7M1231591079V0%7Chttp%3A%2F%2Floc"
		"alhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fbirds.gif%7Cb103e0f0g0h0i0m0v251w251E1F495O33P15I7M-1591609649V0$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-FW-02$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0$fId=552357293_115$v=10337260504112723$vID=17795523294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK$rf="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-FW-02$time=1779552360405", 
		LAST);

	web_url("Catalog.action_3", 
		"URL=http://localhost:8080/jpetstore/actions/Catalog.action?viewItem=&itemId=EST-20", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-FW-02", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf32608msb_14", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=2&flavor=post&vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=3871412413&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-FW-02", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1779552360411%7C_wv_%7CAAI%7C1%7CfIS%7C2989%7CfID%7C1%2C1%7C7%7C_event_%7C1779552360492%7C_viewend_%7Cinp%7C0%7Csvn%7C%2Fjpetstore%2Factions%2FCatalog.action%7Csvt%7C1779552357177%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1779552360492%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-FW-02$rId=RID_226265164$rpId=-1736296949$domR=1779552357349$tvn="
		"%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779552357177$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.5$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-FW-02$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0$fId=552357293_115$v=10337260504112723$vID=17795523294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK$rf="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-FW-02$time=1779552360496", 
		LAST);

	web_custom_request("rb_bf32608msb_15", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=2&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=3229442910&co=snappy&si=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779552360507&ss=1&qc=2925725221&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-FW-02", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xFE-D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"4b9f88e16187515c\",\"view.fo\\x11?(_time\":3324\r\\x1C\\x0Cback\t[\r\\x1C\\\\0,\"error.http_4xx_count\":\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!\"8us\":\"reported\",\\x05\\x18)]:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x14182.5,\\x05\\x12\\x1Cloading_\\x01U!w "
		"complete\"\t\\x1F\\x01\\x17>l\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-u\\x182989.39\t\\x01\\x0C851,\\x05Y\\x08dur%1\t\\xB3\\x10id.na!\\xBE,\"pointerdown\\x01\\x9B$id.process\r\\xBD$rt\":2990.1\tQ\\x0C9925\\x01\\xE36)\\x00\\x08end\r'\\x002\r'\\x1070198\t{<cancelable\":true\t\\x168ui_element.tag_\r\\x8F\\x00A\r\\x85\\x1D\\x1E\\xA8xpath\":[\"html\",\"body\",\"div[@id=\\\\\"Content\\\\\"]6\\x17\\x00\\x18atalog\\\\\\x05\\x17\\x00t\\x05\\x7F\\x08,\"t\r>\\x10tr[2]\\x01\\x10!\\xE5\\x14a\"],\""
		"fB\\xC6\\x01\\x00prv\\x01\\x00pR\\xAC\\x01\\x04in\\x1D\\x184below_threshol\\x01j\\x04lc\\x1D\\x1F]g\\x01\\x186g\\x02\\x041,\\x05\\x15\\x04st9\\xD9M^\\x01,A\\x0F-\\xEF\\x18162.099\r/$ize\":17220\t\\x11\\x14url\":\"A\\xF3\\xC8://localhost:8080/jpetstore/images/logo-topbar.gif\"\tC\\x1Cresource\tu2H\\x02\\x01\\x8B=\\xAAHrender_delay\":80.10\t\\x01\\x14149012RO\\x00\t,\\x04276,\\x00\\x0416\\x11-\\x05R\\x89j=\\x00\\x1Du]=\\x0CIMG\"\t8\\x1D \\x82?\\x02\\x14HeaderI'YU\\x0CLogoN\\x14\\x002m\\x02\\x18a\","
		"\"imgA? long_task!\\xB3i\\xDB\\x0Cnot_=\\xE4\\x0Cttfb\\x19\\x1D>\\x19\\x00\\x00v\\x89P\\x04752B\\x03\\x0877,\t8\\x0Cwaita\\x929\\x7F\\x084.5qk\\x14764826\r*\\x10cache\\x1D(\\x000\r\\x18\\x08dnsJ\\x16\\x00\\x14connec\\xA5J\\x19[\\x113\\x18request\\x1D\\x1A\\x0C70.6\rv8925494,\"performa\\xE4\\x14.activ\\x85g\\x81\\xF8\\x00r\\xA9\\xE9\\x00v\\xC17\\x00s\\x01K(nce_number\"A\\xE0\\x05\\x19\\x08preM7)\\xE5X0,\"characteristics.has_\\x01,"
		"\\x1C_summary\\x91F\\x10navig\\x05n\\xC1\\xC0\\x01r\\xA5j\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\xA1\\x87\\x08hara\\x88.\\xB5\\x00\\x01x\\x18_origina; 795523571!|2\\x7F\\x036\\x1B\\x009/\\xE9\\x02,dt.rum.schem\\xFD\\xA5 \"0.23.0\",\\x11!\\x14applic\t\\xB7Xid\":\"ea7c4b59f27d43eb\",\\xF5\\x97\\x18frame.i2\\x99\\x07<6139ddfb8ac178f4\\x1DZ\\x00g\\xA1M\"\\x1F\\x08\\\\\"1.337.9.20260504-112723>1\\x00-\\x1A$javascript\\x19!\\x00b\\x1A\\x1F\\x08\\x00s\\x05\\xA9|6407E28FD0FD2A2C31B9200596EA129F\\x198\t"
		"0\\x80BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-=\\x16\\x11\\xE4)\\x131k\\x90294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK\\x01w,evice.orient%[<\":\"landscape-priE8\\x04,\"\r)Dbattery.level\":100\\x15\\x1B$screen.wid\\xC1u\\x0C1536>\\x1B\\x00(height\":9609\\xAA\\x14window67\\x001>\r\\x1C\\x118\\x08842B8\\x00\t\\x98\\x1C_pixel_r\\x01\\xC2L\":1.25,\"page.url.ful\\x8E\\xCB\\x05\\x00ae\\xCD\\x04s/\\xCD\\xFEe\\x93@on?viewProduct=&p\t\t,Id=FI-FW-02\"\ri1\\x87\\x00_)"
		"\\xF1Fk\\x02\\x05\\x8F\\x1Cdetected\\xF1\\xB5\\xDDJV\\x7F\\x00\\x11_\\x08tit\\x0E\\x05\\x08\\x14\"JPetS\\xC1z\\x14 Demo\"\\x1A?\n6}\\x0083c61faf50c3b96ba\\xB6\\x01\\xC5\\xFE\\x0C\\x01\\x92\\x0C\\x01\\x05i\\xC6\\xE6\\x00\\x04},\\xFEr\\x0B:r\\x0B%n&"
		"\\xB1\\x0B\\xAD#\\x0433U\\x19\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0B\\xFEr\\x0BVr\\x0BNA\\x0B\\xC1K\\x00_:A\\x0B\\x01\\x14N\\x81\\x0B\\xFEY\\x0B\\xFEY\\x0B*Y\\x0B\\x005\""
		"8\\x0B\\xFEY\\x0B\\xFEY\\x0B\\xFEY\\x0B\\xFEY\\x0B\\xFEY\\x0B\\xFEY\\x0B\\xFEY\\x0B\\xFEY\\x0B\\xFEY\\x0B\\xFEY\\x0B\\xFEY\\x0B\\xFEY\\x0B\\xFEY\\x0B\\xFEY\\x0B\\xFEY\\x0B\\xF2Y\\x0B\\x08]}}", 
		LAST);

	web_add_cookie("rxvtf4o018pw=1779554160599|1779552329406; DOMAIN=localhost");

	web_add_cookie("dtPCf4o018pw=2$552360545_383h-vBLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0e0; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_16", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=2&flavor=post&vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=1939361667&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewItem=&itemId=EST-20", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CEST-20%7CC%7C-%7C552357293_115%7C1779552360396%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-FW-02%7C%7C%7C%2Fjpetstore%2Factions%2FCatalog.action%7C1779552357177%2C1%7C1%7C_load_%7C_load_%7C-%7C1779552360407%7C1779552360601%7Cdn%7C78%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-FW-02%2C2%7C3%7C_ev"
		"ent_%7C1779552360407%7C_vc_%7CV%7C181%5Epc%7CVCD%7C1015%7CVCDS%7C1%7CVCS%7C252%7CVCO%7C1260%7CVCI%7C0%7CTS%7C0%7CVE%7C545%5Ep103%5Ep15625%5Eps%5Estd%3Anth-of-type%281%29%3Eimg%3Afirst-child%7CS%7C178%2C2%7C4%7C_event_%7C1779552360407%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C60%2C2%7C2%7C_onload_%7C_load_%7C-%7C1779552360601%7C1779552360601%7Cdn%7C78%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1779552360407%7C_view_%7Csvn%7C%2Fjpetstore%"
		"2Factions%2FCatalog.action%7Csvt%7C1779552357177%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=localhost,$rId=RID_-853543835$rpId=-1579033296$domR=1779552360599$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779552360407$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$nt=a0b1779552360407e14f14g14h14i14k17l82m83o179p181q183r192s194t194u4656v4356w4356M-1579033296V0$ni=4g|1.5$egf=1589PRTUX$url="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewItem%3D%26itemId%3DEST-20$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0$fId=552360545_383$v=10337260504112723$vID=17795523294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewItem%3D%26itemId%3DEST-20$time=1779552361680", 
		LAST);

	web_custom_request("rb_bf32608msb_17", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=5&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=2579839129&co=snappy&si=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779552362614&ss=0&qc=2669637397&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewItem=&itemId=EST-20", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xD4\\xE9\\x01D{\"data_version\":2,\\x05\\x11\\xF4,\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"4b9f88e16187515c\",\"start_time\":1779552360515,\"duration\":0,\"performance.initiator_type\":\"link\",\"characteristics.has_request\":true,\"url.full\":\"http://localhost:8080/jpetstore/css/jpetstore.css\",\"network.protocol.name\"\tL\\x08\",\".\\xA5\\x00(time_origin.\\xDA\\x00@406,\"dt.rum.schem=|\\x18\"0.23.0:I\\x00\\x00s.\""
		"\\x01\\x04096f\\x00(next_hop_pr\t\\x92\\x08\":\":@\\x004domain_lookup_\\x05N\\x04\":BI\\x006&\\x00\\x08endJ$\\x00\\x18connectbD\\x00\\x11 V>\\x00\\x18secure_\r%\\x08ion\\x11H\\x0006\\xD3\\x00-\\xB2b\\x1E\\x00\\x14sponse~\\x1F\\x00V\\x84\\x00\\x10redir\\x1D\\xC3B{\\x00\r\\x1F\\x05>:\\x1D\\x00\\x14workerZx\\x00\\x10fetch\\x11\\x1CB]\\x018render_blocking\\x01(\\x14tus\":\"\\x11\\x12:\\xB3\\x01\\x14transf\\x01m\\x0Cize\">\\x89\\x000encoded_body_\t\"\\x0C60146F\\x01\\x04deZ%\\x00-_"
		"(.server_tim\\x01\\x92@hint\":\"received\",\\x15(\\x0Ctrac%\\xB6\\x00tEk\t(\\x10from_\tB\\x08\",\"\\x05#\\x00.e\\xE2|6343452934a6cc116081301249311005\\x19.$s_sampled\"m\\x9BN\\xBE\\x03,w3c_resource\r\\xAB\\x00s\\x110mE\\x18applicaAQ\t\\x83<ea7c4b59f27d43eb\\x9D\\x92\\x10frame:\\x94\\x04@f6dcbfa9ef324993\"u\\x9F\\x14agent.\\xB5\\x1AX\"1.337.9.20260504-11272B1\\x00\\x04ty\\x85\\x94$javascript\\x19R\\x00b\\xAD\\x1A\\x00s),x407E28FD0FD2A2C31B9200596EA129F\\x198\t"
		"0\\x80BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-\\x81:-\\x16\\x00i\\xADx)\\x13\\x001\\xADY\\x90294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK\\x01w,evice.orient%[L\":\"landscape-primary\\x19)@screen.width\":153\\x81\\xE4\tD\r\\x1B,height\":960,\\xD5!\\x14window67\\x001#\r\\x1C\\x118\\x08842B8\\x00\tb\\x1C_pixel_r\\x01\\xA74\":1.25,\"page.u\\xA6\\xEB\\x05\\x04acA?$s/Catalog.\t\\x10X?viewItem=&itemId=EST-2!f\\x05a1d\\x00_%\\xCEJH\\x02\\x05&$detected_n\\xC9+\\x00/\\xD9b\tg"
		">w\\x00\\x81\\x0C\\x01\\xC0\\x0Ctitl\\xE1\\\\@JPetStore Demo\",\"\\x01\\x97:}\\x008cd1da29df2facd8A\\x94\\x05&\\xFE\\x04\\x01n\\x04\\x01\\x05a\\xC6\\xDE\\x00\\x04},\\xFEB\\x08\\xFEB\\x08NB\\x08u\\xAAN\\x86\\x04\\xAD3\\x91y\\xAAU\\x01\\x10ruxit\\x85Hpjs_ICA15789NPRTUVXfqrux_10337\\x89P\\x89O\\x0C.js\"\\xFEi\\x08\\xFEi\\x08\\x12i\\x08\\x08.30\r\\x01\\x08745\\x0E\\xB6\\x08.\\xDE\\x08\\xEAx\\x08rX\\x00\\x00d2\\xAD\\x08\\xE5\\x87\\x0410v3\\x00\\x1AQ\\x08\\xE1U\\x00r\\x16\\xDA\\x08rb\\x00\\x11/"
		"\\x92\\\\\\x00\\xFE\\xB4\\x08\\xD6\\xB4\\x08r\\xC0\\x00\\xFE\\xC3\\x08\\xA2\\xC3\\x08z\\x86\\x00\\xFE\\xD2\\x08z\\xD2\\x08\\x1013290\\x86\\xD4\\x08\\x14362149&\\xAE\\x08\\x16\\x94\\x08\\x1A+"
		"\\x08\\x1E\\xD6\\x08@not_available_htt\\x0E\\xAC\\x0Bm\\xD5V\\xE0\\x08\\x012\\x04se\\xE1\\xBAN\\x10\\x04\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xA2\\x96\\x08\\x04im\\x0E\\x1A\\x0EN\\x83\\x04\\x8D\\xBE\\xCA\\x93\\x08Timages/logo-topbar.gif\\xFEs\\x08\\xFEs\\x08\\x1Es\\x08\\x009\t"
		"\\x01\\x148509886\\xD2\\x0E\\xF2s\\x08\tWRX\\x00^s\\x08j3\\x00\\x1ED\\x08&M\\x11\\x00.\\x8E/\\x00&s\\x08j\\\\\\x00\\xFEs\\x08\\xDEs\\x08j\\x93\\x00\\xFEs\\x08\\xAAs\\x08r\\x86\\x00Zs\\x08\\x0Cnon-\\xFEI\\x11\\x1EI\\x11\\x08380:w\\x02\\x00dFI\\x11\t"
		"%m\\x83Vs\\x08\\xEEI\\x11\\x12I\\x11x3881223f689a154f0643b8963dcd5a3\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11bI\\x11\\xFE\\xB3\\x08j\\xB3\\x08\\x0Ccart\\xFE\\xAC\\x08\\xFE\\xAC\\x08*\\xAC\\x08\\x0Eh\\x14\\x04er\"\\x95\\x1A\\xEE\\x9F\\x08:K\\x00Z\\x92\\x08:&\\x00J\\x85\\x08Z\"\\x00\"x\\x08: \\x00\\xFEk\\x08\\xDAk\\x08:\\x86\\x00\\xFE^\\x08\\xA6"
		"^\\x08By\\x00\\xFEQ\\x08\\x8AQ\\x08\\x04966\\xC6\nJO\\x08\\x01#\\xFEM\\x08vM\\x08|570492c08c75f09b297394998fb21c09\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19\\xFE\\x96\\x19^\\x96\\x19\\xFEM\\x08jM\\x08\\x1Cseparato\\xFE\\xFE\\x10\\xFE\\xFE\\x10.\\xFE\\x10"
		":\\xA0\\x06\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08ZR\\x08\\x004\\x86R\\x08\\x01#\\xFER\\x08vR\\x08|348f55f2a3c0905ed28d9435f9189a91\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xFER\\x08\\xCER\\x08\\x14m_fish\\xFE\\xA2\\x10\\xFE\\xA2\\x10*\\xA2\\x10\\x006\\x1AN\\x17\\x149254946\\x88\\x0E\\xEE]"
		"\\x08nX\\x00Z\\xBC\\x10n3\\x00J\\xC9\\x10\\x8E/\\x00\"\\xD6\\x10n-\\x00\\xFE\\xE3\\x10\\xDA\\xE3\\x10n\\x93\\x00\\xFE\\xF0\\x10\\xA6\\xF0\\x10v\\x86\\x00\\xFE\\xFD\\x10\\x8A\\xFD\\x10\\x082716v\\x02J\\xFE\\x10\\x05$\\xFE\\xAD\\x08v\\xAD\\x08|"
		"060253210f8790b19f045d76c7a63836\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xD6\\xAD\\x08\\x0Cdogs\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD"
		"\\x08\\xFE\\xAD\\x08.\\xAD\\x08\\x003>\\xE4,J\\xAD\\x08\\x05$\\xFE\\xAD\\x08v\\xAD\\x08x78c4449186f15ce3a8d1129d5513f44\\x0E\\xAA%\\x1Ap3\\xFEB3\\xFEB3\\xFEB3\\xFEB3\\xFEB3\\xFEB3\\xFEB3\\xFEB3\\xFEB3\\xFEB3\\xFEB3\\xFEB3\\xFEB3\\xFEB3\\xFEB3\\xFEB3\\xFEB3\\xFEB36B3\\xFE\\xAC\\x19n\\xAC\\x19 m_reptile\\xFE\\xB1\\x08\\xFE\\xB1\\x08.\\xB1\\x08\\x008\\x1A\\x1E3\\xFE\\x1F3>\\x1F3nX\\x00Z^\\x11n3\\x00J^\\x11\\x8E/\\x00\"^\\x11n-\\x00\\xFE^\\x11\\xDA^\\x11n\\x93\\x00\\xFE^\\x11\\xA6^"
		"\\x11v\\x86\\x00\\xFE^\\x11\\x8A^\\x11\\x0439\\x8A\\xAB*\\x01$\\xFE\\xB1\\x08z\\xB1\\x08x10e236f5ffa28765b140d44712ee9b4\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xFE^\\x11\\xD6^\\x11\\x08cat\\xFE\\xAD\\x08\\xFE\\xAD\\x082\\xAD\\x08\\x1A\\x0B\\x1A\\xFEY3>Y3nX\\x00^\\xAD\\x08j\\x8B\\x00N\\xAD\\x08\\x8A/\\x00&"
		"\\xAD\\x08j-\\x00\\xFE\\xAD\\x08\\xDE\\xAD\\x08j\\x93\\x00\\xFE\\xAD\\x08\\xAA\\xAD\\x08r\\x86\\x00\\xFE\\xAD\\x08\\x8A\\xAD\\x08\\x0428:\\xBAFJ^\\x11\\x05$\\xFE\\xAD\\x08v\\xAD\\x08|"
		"99b04d0d3be1cf52ac7ae8a395db1efa\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xFE\\xAD\\x08\\xAA\\xAD\\x08\\x0E$G\\xA2\\xE2L\\xFE^\\x11v^\\x11\\x0Cbird\\xFE\\xAE\\x08\\xFE\\xAE\\x08\"\\xAE\\x08\\x0C10.1\\x1A[\\x11\\x141490126C \\xE2\\xB9\"zX\\x00N\\xAE\\x08z3\\x00>\\xAE\\x08\\x9A/"
		"\\x00\\x16\\xAE\\x08z-\\x00\\xFE\\xAE\\x08\\xCE\\xAE\\x08z\\x93\\x00\\xFE\\xAE\\x08\\x9A\\xAE\\x08\\x82\\x86\\x00\\xFE\\xAE\\x08\\x8E\\xAE\\x08\\x005\\x8A\\xB9\"\\x01$\\xFE\\xAE\\x08z\\xAE\\x08t816f19d7e450737bad8f89b94aa411\\xFE\\xB83\\xFE\\xB83\\xFE\\xB83\\xFE\\xB83\\xFE\\xB83\\xFE\\xB83\\xFE\\xB83\\xFE\\xB83\\xFE\\xB83\\xFE\\xB83\\xFE\\xB83\\xFE\\xB83\\xFE\\xB83\\xFE\\xB83\\xFE\\xB83\\xFE\\xB83\\xFE\\xB83N\\xB83>mD\\x0Ef\\x1E4elf_monitoring\\x1EtDJ*\\x00\\x1Cinternal\\x11#\\x12 "
		"C\\x0E\\x8DI\\x00e.\\x03U\\x08575:\\xDDU\\x1A\\xB5Pf\\x10U\\x11!\\x08fm_*\\x89V timestamp2^\\x00\\x0C61,\"\\x0E\\xFCR4\":2000,\"messag\\x0EJO\\x12\\x07Q\\x1C31483296\\x12\\x89N\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E\\x19R\\x14 JavaS\\x12\\xE1Q0 tag\\\\\",[]]\"}]&?R\\xFE\\x99R\\xFE\\x99R\\xFE\\x99R\\xFE\\x99R\\xFE\\x99R\\xFE\\x99R\\xFE\\x99R\\xFE\\x99R\\xFE\\x99R\\xFE\\x99R\\xFE\\x99R\\xFE\\x99R\\xFE\\x99R\\xFE\\x99R\\xFE\\x99R\\xFE\\x99R>!\\x05\\x0E\\x8FZ "
		"long_taskz#\\x05\\x0418.#\\x05\\x0E5U\\xB1\\x03b4Z\\x15[\\x00.\\x1AjT\\xA1\\xB8\\x04\",\\x1D\\x18\\x18attribu\\x0E\\xECT\\x0E\\xBC\\x0C\\x14tainer\\x16\\xBET\\x8A(\\x00\rV\\x8A*\\x00\\x08src\\x16\\x87Z\\x19\\x93V{\\x00\\x1A+W\\x16\\xECUbY\\x00\ry\\x14unknow\\x0E\\x1FU-\\x0B\\xFEa\\x05\\xFEa\\x05\\xFEa\\x05\\xFEa\\x05\\xFEa\\x05\\xFEa\\x05\\xFEa\\x05\\xFEa\\x05\\xFEa\\x05\\xFEa\\x05\\xFEa\\x05\\xFEa\\x05\\xFEa\\x05\\xFEa\\x05\\xFEa\\x05\\xEEa\\x05\\xA5aZ_\n"
		"\\x0086Z\\x13\\x04.7\\x1A\\xFC\\x18\\x187019767:5!BM`\\xFEk\\x13jk\\x13\\x0E 6\\x002\\xFEt-\\xFEt-\\x1Et-\\x008\\xFEh\\x13Zh\\x13zX\\x00Nh\\x13z3\\x00>h\\x13\\x9A/\\x00\\x16h\\x13z-\\x00\\xDAh\\x13\\x01W\\x006j\\xA6\\x14\\x04re6\\xA7`\\xA20\\x00\\x15\\xB5v\\xB2\\x1B\\x1A\\xA8`e\\x02B!`\"\\xA9\\x13\\x05M\\x0006@\\x15\\xAA\\xC7`z;\\x01b\\xD6`\\xFE\\x91O.\\x91O\\x0C1331:\\x18AJ:\\x1C\r&"
		"\\xFE\\x8E\\x13v\\x8E\\x13x5fa89d3b0ed5004080ef907d1e2ae19\\xFE\\x93O\\xFE\\x93O\\xFE\\x93O\\xFE\\x93O\\xFE\\x93O\\xFE\\x93O\\xFE\\x93OZ\\x93O0battery.level\\x0E\\x15e\\x080,\"\\x16z`\\x1E\\xDC`\\xFE\\xF7`\\xFE\\xF7`\\xFE\\xF7`\\xFE\\xF7`\\xFE\\xF7`\\xFE\\xF7`\\xFE\\xF7`\\xFE\\xF7`\\xFE\\xF7`\\xFE\\xF7`.\\xF7`\\x16_h\"W\\x1C\\x001>\\xF7=B\\xEE\\x08\\x10navig\\x0E<c\\x0EY\rN\\xB2\\x0E\\xADT\\x1E\\xB0\\x0E\\xAA\\xFD`V\\xDFbjVc\\x04ne\\xFE^i\\xF6^i:*\\x07Nj\\x1C\\x0E=^\\x08/"
		"1.\\x0E\\xE0D.\\xFDO6\\xD5\\x08\\xED\\x96\\x0C14.1\\x1A{\n\\x009\\x12\\x82?:\\xCA\\x1C65\\x00\\xE5\\xAC~3\\x00>\n\tzb\\x00\\x11/\\x92\\\\\\x00\\xDE\n\t\\x0066\t\t\\x0E\\xD8\\x1E.\\x1B\\x01>\n\t\\x0481z:-\\x1A9\t\\x05\\xB4\\x04836\\xBD\\x08\"\\xDA\\x08-c:\\xB2\\x01\\x15\\x1F\\x05=:\\x1D\\x00\\xAA\\xF9\\x08zW\\x01b\\xF9\\x08\\x96\\x86X\\x08465:\\xC3GJ\\xD2i\\x0443>%\\x00J\\xF7\\x08\t"
		"%m\\xA2\\xFE\\x89XZ\\x89XPe4d57e5227a0a89f6aa26\\x0EBP\\x14296af9n\\x84\\x1C\\x12\\xC7f\\x16\\xBDi\\xFE\\x8Af\\x1A\\x8Af$Product=&p\t\t(Id=FI-FW-02Z\\x00n\\x0E\\xACa\\x99\\xE4\\x0E\\x8C\\x18\\x04in&DjN\\xF1\\x04\\x19.\\x91\\xF4.\\xCF\\x02\\x1A\\xB3\\x12\r%\\x00e\\x0E\\xADg*\\x05T\\x14unload\\x16\\xA4\\x18Z\\xA4\\x022#\\x00N\\xA8\\x02\\x08dom\\x16I\\x19\\xA1@\\x00v\\x12:\\x19v_\\\\\\x011\\x1Ccontent_\\x01\\x7F\\x00e:\\x81\\x00\\x0E\\xC8\\x0B>C\\x0B\\x04omV3\\x00\\x05\\x91\\x001>w\\x03\t/"
		"\\x0E\\xAEk\\x00t\\x01\\x90\\x0891.n[B\\x01\\x846\\x03\\x01B\\x87\\x06\\x1D#\tr>\\xA8\\x06u\\xCA\\x08cou\\x0E\\x9Al\\x040,1s\\x08ion1\\x85\\x08har\\x0E\\xAAl-\\x8C\\x05\\x19\\x04ab!w\\x01\\xA6\\x08\"ex\\x0E\\x07p\\x04ng\\x1E2i\\x10seque\\x0E\\x8Bp number\":1\\xFE\\xAB\\x19\\xFE\\xAB\\x19\\xFE\\xAB\\x19\\xFE\\xAB\\x19\\xFE\\xAB\\x19\\xFE\\xAB\\x192\\xAB\\x19\\xFEh\\x0B\\xFEh\\x0B\\xFEh\\x0B\\xFEh\\x0B\\xFEh\\x0B\\xFEh\\x0B\\xFEh\\x0B\\xFEh\\x0B\\xFEh\\x0B\\x1Eh\\x0B\\x08]}}", 
		LAST);

	web_custom_request("rb_bf32608msb_18", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_2_sn_6407E28FD0FD2A2C31B9200596EA129F_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=2&flavor=post&vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=4189301690&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewItem=&itemId=EST-20", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779552360407$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.5$egf=1589PRTUX$rt="
		"1-1779552360407%3Bhttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fcss%2Fjpetstore.css%7Cb109e0f0g0h0i0m0v6014w6014I11M-68001081V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7Cb109e0f0g0h0i0m0v3808w3808E1F17220O287P60I7M761912964V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcart.gif%7Cb110e0f0g0h0i0m0v96w96E1F288O16P18I7M-1891668168V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fseparator.gif%7Cb110e0f0g0h0i0m0v46w46F18N2O1P18I7M688934799V0%7Chttp%3A%2F"
		"%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Ffish.gif%7Cb110e0f0g0h0i0m0v271w271E1F390O26P15I7M-302972535V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fdogs.gif%7Cb110e0f0g0h0i0m0v306w306E1F450O30P15I7M1822807848V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Freptiles.gif%7Cb110e0f0g0h0i0m0v398w398E1F780O52P15I7M-620539332V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fcats.gif%7Cb110e0f0g0h0i0m0v289w289E1F420O28P15I7M1231591079V0%7Chttp%3A%2F%2Floc"
		"alhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fbirds.gif%7Cb110e0f0g0h0i0m0v251w251E1F495O33P15I7M-1591609649V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Ffish2.gif%7Cb180e0f0g0h0i0k1l1m1v13315w13315E2F15625O125P125I7M1866378948V0$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewItem%3D%26itemId%3DEST-20$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=BLLMKDGLMKHRADGEPFKQDGDCSLBLRFPC-0$fId=552360545_383$v=10337260504112723$vID="
		"17795523294038TFRLTS6PJ3507T5PER16NIEKQL4RTGK$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewItem%3D%26itemId%3DEST-20$time=1779552363695", 
		LAST);

	lr_end_transaction("Search_Transaction",LR_AUTO);

	return 0;
}