Checkout()
{

	web_url("Catalog.action", 
		"URL=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("rxVisitorf4o018pw=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S; DOMAIN=localhost");

	web_add_cookie("dtSaf4o018pw=-; DOMAIN=localhost");

	web_add_cookie("rxvtf4o018pw=1779554923719|1779553123580; DOMAIN=localhost");

	web_add_cookie("dtPCf4o018pw=1$553123575_1000h-vGRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0e0; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=605478517&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1779553111690%7C1779553123723%7Cdn%7C89%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C3%7C_event_%7C1779553111690%7C_vc_%7CV%7C12011%5Epc%7CVCD%7C1011%7CVCDS%7C1%7CVCS%7C12103%7CVCO%7C13106%7CVCI%7C0%7CTS%7C0%7CVE%7C654%5Ep106%5Ep124250%5Eps%5Es%23MainImageContent%3Eimg%3Anth-child%282%29%7CS%7C11931%2C2%7C4%7C_event_%7C1779553111690%7C_wv_%7ClcpE%7CIMG%7ClcpSel%7C%23LogoContent%3Ea%3Afirst-child%3Eimg%3Afirst-child%7ClcpS%7C17220%7ClcpT%"
		"7C11970%7ClcpU%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7ClcpLT%7C11939%7Cfcp%7C11970%7Cfp%7C11970%7Ccls%7C0%7Clt%7C55%2C2%7C2%7C_onload_%7C_load_%7C-%7C1779553123723%7C1779553123723%7Cdn%7C89%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1779553111690%7C_view_%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=localhost,$rId=RID_1078536306$rpId=431439681$domR=1779553123718$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt="
		"1779553111690$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=796$sw=1536$sh=960$nt=a0b1779553111690e96f96g96h96i96k6580l6644m6660o11951p11952q11954r12028s12033t12033u6457v6157w6157M431439681V0$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553123575_1000$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$nV=1$nVAT=1$rf="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$time=1779553124810", 
		LAST);

	web_custom_request("rb_bf32608msb_2", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=5&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=3897088098&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553125748&ss=0&qc=3648876712&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\x84\\xD0\\x02D{\"data_version\":2,\\x05\\x11\\xF0\\x96\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"start_time\":1779553118375,\"duration\":5182.5999\\x01\\x03x7765,\"performance.initiator_typ\\x01\\x8F\\xF0Xlink\",\"characteristics.has_request\":true,\"url.full\":\"http://localhost:8080/jpetstore/css/\\x15\\x0Eh.css\",\"network.protocol.nam\\x01\\x81\\x01L\\x00\"6\\xA5\\x00(time_origin\\x1D\\xEAD1690,\""
		"dt.rum.schem=\\x8C\\x18\"0.23.0:I\\x00\\x00s=2\\x186685.90\t\\x01\\x08223:\\x19\\x01 next_hop_\\x11\\xA0\\x08\":\":N\\x004domain_lookup_\\x05\\\\\\x00\"~W\\x0064\\x00\\x08end\\x822\\x00\\x18connect\\x9A`\\x00\\x11.\\x8EZ\\x00\\x18secure_\r3\\x08ion\\x11d\\x0006\\x7F\\x01-\\xF8\\x11\\x1E\\x1811821.6)9\\x0C0149>.\\x00\\x14sponse./\\x00\\x083.2\r/\\x08298Z/\\x00\\x05\\xB2\\x1411868.:\\x8B\\x01\\x10redir=\\x03B\\x9F\\x00\r\\x1F\\x05B:\\x1D\\x00Ac\\x04er\\x11\\x8C"
		":\\x1D\\x00\\x10fetch\\x11\\x1Cz\\x10\\x028render_blocking\\x016\\x14tus\":\"\\x11\\x12:\\x1D\\x02\\x14transf\\x01{\\x0Cize\">z\\x000encoded_body_\t\"\\x0C60146\\x1B\\x01\\x04deZ%\\x00-\\x91(.server_tim\\x01\\x92@hint\":\"received\",\\x15(\\x0Ctrac%\\xE8\\x00tE\\xD5\t(\\x10from_\tB\\x08\",\"\\x05#\\x00.\\x89jx343452934a6cc116081301249311005\\x19.$s_sampled\"\\x8D\\x13N6\\x04,w3c_resource\r\\xAB\\x00s\\x110m\\xBD\\x18applicaA\\x83\t\\x83"
		"<ea7c4b59f27d43eb\\xBD\\x1A\\x0Cfram\\x81\\xB7\\x00s\\xBD\\x1C@5c58c120e4549e49\"\\x95\\x17\\x14agent.\\xB5\\xA2\\\\\"1.337.9.20260504-112723>1\\x00\\xAD\\x0C$javascript\\x19!\\x00b\\xAD\\xA2\\x00s%,|5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-\\x81\\xB2-\\x16\\x00i\r\\xE4)\\x13\\x001\\xAD\\xE1\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01w,evice.orient%[L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":960,\\xD5\\xA9\\x14window67\\x001#\r"
		"\\x1C\\x118\\x08796B8\\x00\tb\\x1C_pixel_r\\x01\\xA7\\x10\":1.2\\x81\\x01\\x10age.u\\xA6c\\x06\\x04acA?$s/Catalog.\t\\x10a\\x95\\x01I1L\\x00_)\\xB6F0\\x02\\x05& detected_\\xCD\\x8B\\x00/\\xD5\\xB4z_\\x00\\x0Ctitl\\xC1\\xBCPJPetStore Demo\",\"view:}\\x0088a0700c08e05b18aO\\x05&\\xFE\\xEC\\x00\\x01\\xEC\\x05I\\xC6\\xC6\\x00\\x04},\\xFE\\x9A\\x08\\x9A\\x9A\\x08AT*\\x9A\\x08\\xE1\\xC0r\\x8D\\x08u}NY\\x04\\xAD\\x06\\x91L\\xAA@\\x01\\x10ruxit\\x85\\x1Bpjs_ICA15789NPRTUVXfqrux_10337\\x89#\\x89\""
		"\\x04.j\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\x1A\\xB4\\x08\\x006fK\\x07\\xEA\\xB3\\x08jV\\x00V\\xB2\\x08j1\\x00\\x1AP\\x08\\xE1\"\\x00r\\x16\\x11\t\\x8A-\\x00\\xE5\\xBC\\x0466n+\\x00\\xEA\\xAF\\x08\\x0026Y\\x07\\x00rR\\xA3\\x08\\x003\\x1A\\xA3\\x08\\x08074\\x81\\x80*%\\x0B\\x150\\x05\\xA6\\x0C1187j\\xD2\\x00\\xFE\\xAE\\x08\\xA2\\xAE\\x08r\\x84\\x00\\xFE\\xAD\\x08z\\xAD\\x08\\x1013290\\x86\\xAF\\x08\\x08362\\x12 \nm\\xABV\\xB1\\x08@not_available_htt\\x0E\\xFF\\x0B\\x112\\x12\\x98\\x08\\x0E\\xA3\n"
		".\\xBB\\x08\\x012\\x04se\\xE1\\x95N\\x18\\x04\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08rq\\x08j\\xF2\\x0FB\\x0B\\x11\\x04im\\x0E\\xD5\rNc\\x04\\x8D\\x9E\\xCA{\\x08Timages/logo-topbar.gif\\xFE\\x0F\\x11\\xFE\\x0F\\x11\\x16\\x0F\\x11\\x006j\\x03\\x07\\xF2\\\\\\x08fZ\\x07^]\\x08f2\\x00N^\\x08\\x86.\\x00\\xE5\\xB9\\x12_\\x08f,\\x00\\xE6`\\x08\\x0475f\\x95\t\"<\\x08\\x1A"
		" \\x12\\x16>\\x08\\x82a\\x08\\x007nR\\x00\\x1A\\xF0\\x10\rR\\x000>\\xDD\\x08\r\\x1F\\x05\\xF4:\\x1D\\x00\\xB2\\x0F\\x11n\\x10\\x02b\\x0F\\x11\\x0Cnon-\\xFE\\x13\\x11\\x1E\\x13\\x11\\x08380:.\\x12J\\x13\\x11\t%m\\x92Vb\\x08\\xEE\\x13\\x11\\x12\\x13\\x11x3881223f689a154f0643b8963dcd5a3\\x0E\\xC4\r"
		"\\x12\\xA9\\x08\\x00.\\xFE\\x13\\x11\\xFE\\x13\\x11\\xFE\\x13\\x11\\xFE\\x13\\x11\\xFE\\x13\\x11\\xFE\\x13\\x11\\xFE\\x13\\x11\\xFE\\x13\\x11\\xFE\\x13\\x11\\xFE\\x13\\x11\\xFE\\x13\\x11\\xFE\\x13\\x11\\xFE\\x13\\x11\\xFE\\x13\\x11\\xFE\\x13\\x11\\xFE\\x13\\x11f\\x13\\x11>G\\x08\\x81*4elf_monitoring\\x1EN\\x08J*\\x00\\x1Cinternal\\x11#\\xA5\\xFA\\x0EM\\x15\\x00e&\\x10\\x19\\x0C23602`\\x11\\x8E\\x1D\\x19\\x1Ak\\x14\\x0Csfm_*\\xA6\\x1A\\x0Ep\\x19\\x10stamp.^\\x00\\x10592,\"\\x0E\\x91\\x16\\x04\""
		":\\x0E\\xCD\\x17\\x1C,\"messag\\x0E\\xF7\\x12\\x12\\x9C\\x14\\x1C31483296\\x12N\\x12\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E\\xAE\\x15\\x14 JavaS\\x12v\\x150 tag\\\\\",[]]\"}]&\\xD4\\x15\\xFE.\\x16\\xFE.\\x16\\xFE.\\x16\\xFE.\\x16\\xFE.\\x16\\xFE.\\x16\\xFE.\\x16\\xFE.\\x16\\xFE.\\x16\\xFE.\\x16\\xFE.\\x16\\xFE.\\x16\\xFE.\\x16\\xFE.\\x16\\xFE.\\x16\\xDE.\\x16\\x083.0\\x0E\\xC5\\x1E\\x0499\\x8E\\xC8\\x1E\\xFE\\xBD\rj\\xBD\r\\x0Ccart\\xFE\\xB6\r\\xFE\\xB6\r.\\xB6\r"
		"\\x004\\x1A\\xB9\\x14\\x002\\xFE\\xC5\\x1E.\\xC5\\x1E\\x006jW\\x00^\\xB6\rf\\x89\\x00N\\xB6\r\\x86.\\x00\\x12\\xC2\\x0C\\x12\\xB6\rf,\\x00\\xEA\\xB6\r\\x008j\r\\x0EN\\xB7\r\\x088.71j\\x82\\xC6\\x1E\\x0479F\\xE4\r\\x1A\\x98\r\\xE5\\xBDB\\x12\\x1E\"7\\x16\\x05\\xF5\\xF6\\xB7\rf.\\x01\\xFE\\xB7\r\\x92\\xB7\r\\x0E\\xE8\\x1B.?\\x17J\\xB5\r\\x01#\\x00r\\x16O\"\\xFE\\xB3\rZ\\xB3\rx570492c08c75f09b297394998fb21c0\\x0E$\\x1E\\xFE\\xB3\r\\xFE\\xB3\r\\xFE\\xB3\r\\xFE\\xB3\r\\xFE\\xB3\r\\xFE\\xB3\r\\xFE\\xB3"
		"\r\\xFE\\xB3\r\\xFE\\xB3\r\\xFE\\xB3\r\\xFE\\xB3\r\\xFE\\xB3\r\\xFE\\xB3\r\\xFE\\xB3\r\\xFE\\xB3\r\\xFE\\xB3\r~\\xB3\r\\xA5\\xA9:f\r\\x08183B\\xC6\\x1E\\x083.6\\x0E\\x95\\x08\\x01\\x01\\x0425"
		":\\xDA\\x13\\xFEU\\x16\\xAEU\\x16\\x10separ\\x0E\\xCC'\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\x0E\\x9D\\x08\\x089.1\\x1Am\\x08\\x12B\\x1D.P\\x07N\\x9C\\x08\\x009\\xAA\\x9C\\x08\\x0480n\\\\\\x00\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\x9E\\xA6\\x08\\x044668\\x17J\\xA6\\x08\\x01#\\xFE\\xA6\\x08v\\xA6\\x08|"
		"348f55f2a3c0905ed28d9435f9189a91\\xFEl'\\xFEl'\\xFEl'\\xFEl'\\xFEl'\\xFEl'\\xFEl'\\xFEl'\\xFEl'\\xFEl'\\xFEl'\\xFEl'\\xFEl'\\xFEl'\\xFEl'\\xFEl'\\xFEl'\"l'\\x08235f\\xF5\\x05\\xFE\\xA5\\x08\\xB2\\xA5\\x08\\x14m_fish\\xFE\\xA3\\x08\\xFE\\xA3\\x08.\\xA3\\x08b\\xCB.\\xF2\\xF5\\x1EbV\\x00^>\\x11b1\\x00N=\\x11\\x82-\\x00\\x12G\\x10\\x12<\\x11b+\\x00\\xE2;\\x11\\x08919\\x8Ao\\x08\\x12?\\x0B\\x14\":1192nw!\"\\xCE\\x08\\x05\\xB2\\x01.\\x001n]"
		"\\x00\\xFE\\x9F\\x08\\xA2\\x9F\\x08b7\\x01\\xFED\\x11\\x92D\\x11\\x08271\\x82\\x9F\\x08\\x05$\\xFE\\xA0\\x08v\\xA0\\x08|060253210f8790b19f045d76c7a63836\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08V\\xA0\\x08@battery.level\":10\\x0EK\\x1C\\x16P0\\x1A\\x0C0\\xFE'0\\xFE'0\\xFE'0\\xFE'0\\xFE'0\\xFE'0\\xFE'0\\xFE'0\\xFE'0\\x16'0>\\xEA\\x1E\\x0Ee8 long_taskz\\xEC\\x1E\\x04472\\xE68\\x005\"\\x1F\\x1Ef\n8\\x15[\\x1Ek8\\x0E\\x81\\x1F\\x04\","
		"\\x1D\\x18\\x18attribu\\x0EJ2\\xE1v\\x14tainer\\x1642\\x8A(\\x00\\x1A62\\x8A*\\x00\\x08src\\x16O8\\x19\\x93V{\\x00\\x1A\\x894\\x16J3bY\\x00\r"
		"y\\x14unknow\\x0E\\xF42\\x1A\\xD7\\x1F\\xFE*\\x1F\\xFE*\\x1F\\xFE*\\x1F\\xFE*\\x1F\\xFE*\\x1F\\xFE*\\x1F\\x0E*\\x1F\\xFEL\\x05\\xFEL\\x05\\xFEL\\x05\\xFEL\\x05\\xFEL\\x05\\xFEL\\x05\\xFEL\\x05\\xFEL\\x05\\xFEL\\x05\\x9EL\\x05\\x12n\\x0B\\x82\\xAD\\x16\\x12\\x07\\x0E\\x0E\\xA9\\x16\\x01\\x01\\xFE\\xAD\\x16\\xF6\\xAD\\x16\\x14m_dogs\\xFE\\x08\\x0E\\xFE\\x08\\x0E.\\x08\\x0Eb\\xDE\\x1D\\xF2\\x08\\x0EbV\\x00^\\x08\\x0Eb1\\x00N\\x08\\x0E\\x82-\\x00\\x12V\r\\x12\\x08\\x0Eb+"
		"\\x00\\xE6\\x08\\x0E\\x0420rl\\x1E>\t>\\x08921\\x8Es\\x1F\\x05\\xB3\\x16\t\\x0Ef\\xA0?\"0\\x1FE\\xF9\\xFEO\\x1FrO\\x1Fb9\\x01\\xFE\n\\x0E\\x92\n\\x0E\\x003\\x0E\\xD6'.\\xFF\\x17J\\xA9\\x16\\x05$\\xFE\n\\x0Ev\n\\x0Ex78c4449186f15ce3a8d1129d5513f44\\x0EH\t"
		"\\xFEP\\x1F\\xFEP\\x1F\\xFEP\\x1F\\xFEP\\x1F\\xFEP\\x1F\\xFEP\\x1F\\xFEP\\x1FJP\\x1F\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x086\\xBE\\x08\\x08314j@\\x06\\xFE\\xC6\\x16\\xBA\\xC6\\x16\\x18reptile\\xFE\\xC2\\x08\\xFE\\xC2\\x082\\xC2\\x08\\x008\\x1A3\\x1EF\\xC3<\\xF2\\xC3\\x08fW\\x00^\\xC4\\x08f2\\x00N\\xC5\\x08\\x86.\\x00\\x12\\x13\\x08\\x12\\xC6\\x08f,"
		"\\x00\\xEA\\xC7\\x08\\x005F\\xAD'B\\xBC\\x08\\x0498\\x8E\\xEC\\x08\\x05\\xA9\\x1012001fo\\x19\\xFE\\xBB\\x08\\xAA\\xBB\\x08f.\\x01\\xFE\\xBC\\x08\\x96\\xBC\\x08>()"
		"N\\xBC\\x08\\x01$\\xFE\\xBC\\x08z\\xBC\\x08x10e236f5ffa28765b140d44712ee9b4\\xFE\\xC6\\x16\\xFE\\xC6\\x16\\xFE\\xC6\\x16\\xFE\\xC6\\x16\\xFE\\xC6\\x16\\xFE\\xC6\\x16\\xFE\\xC6\\x16\\xFE\\xC6\\x16\\xFE\\xC6\\x16\\xFE\\xC6\\x16\\xFE\\xC6\\x16\\xFE\\xC6\\x16\\xFE\\xC6\\x16\\xFE\\xC6\\x16\\xFE\\xC6\\x16\\xFE\\xC6\\x16\\xF6\\xC6\\x16\\x12\\x81\\x0E\\x82z\\x11\\x08316fS\\x1C\\xFE\\xBB\\x08\\xBA\\xBB\\x08\\x08cat\\xFE\\xB7\\x08\\xFE\\xB7\\x08\\xFE\\xB7\\x08\\xFE\\xB7\\x08\\xFE\\xB7\\x08\\xFE\\xB7\\x08\\x"
		"FE\\xB7\\x08\\x12\\xB7\\x08\\x006r \\x11F\\xC2\\x08\\x8ET(\"\\xC1\\x08\\x003r\\xEF\\x08\\xFE\\x87\\x1F\\xA2\\x87\\x1F\\xFE\\xC2\\x08\\xFA\\xC2\\x08\\x0428:\\xDFPJ\\xC2\\x08\\x05$\\xFE\\xC2\\x08v\\xC2\\x08|"
		"99b04d0d3be1cf52ac7ae8a395db1efa\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\xFE\\xC2\\x08V\\xC2\\x086c\\x1F\\x08317f\\xD4\\x0E\\xFE\\xC2\\x08\\xBA\\xC2\\x08\\x0Cbird\\xFE\\xC3\\x08\\xFE\\xC3\\x08*\\xC3\\x08\\x0076\\xAC%\\xEAm\\x11:J\\x00V`\\x11:%\\x00FS\\x11Z!\\x00\\xE5\\xDC\\x0466"
		">\\x1F\\x00\\xEA9\\x11j\\x12\\x02\"\\xD8'\\x12 \\x0B\\x00\"\\x12\\x15\\x11\\x000bh\\x11\\x05\\x9B\\x0E8\\x11\\x004fd\\x02\\xFE8\\x11\\xA28\\x11:?\\x01\\xFE+\\x11\\x92+\\x11\\x0425\\x8A\\xF1'\\x01$\\xFEi\\x08zi\\x08t816f19d7e450737bad8f89b94aa411\\xFE79\\xFE79\\xFE79\\xFE79\\xFE79\\xFE79\\xFE79Z79\\xFE\\xE7\\x19\\xFE\\xE7\\x19\\xFE\\xE7\\x19\\xFE\\xE7\\x19\\xFE\\xE7\\x19\\xFE\\xE7\\x19\\xFE\\xE7\\x19\\xFE\\xE7\\x19\\xFE\\xE7\\x19\\xFE\\xE7\\x19>i\\x08\\x0E\\xA1[\t\\x01Bj?"
		"\\xFEi\\x08\\xAEi\\x08\\x0E\\xA90\\x10_icon\\xFE\\xA6\"\\xFE\\xA6\"&\\xA6\":\\x9B\\x06\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xA2j\\x08\\x009v\\x8DN:\\xEC\\x10\\x12\\x80\\x19f\\xEAO\"\\x9B\\x08\"v\\x08rLW\\xFE\\xEC\\x10\\x9A\\xEC\\x10:\\xDB\\x01\\xFEv\\x08\\x92v\\x08\\x0443\\x86\\xDF\\x10\\x05$\\xFEv\\x08vv\\x08x86a2d4a77c95efdf9919761e255ab39\\x0E\\x15_\\xFE]\"\\xFE]\"\\xFE]\"\\xFE]\"\\xFE]\"\\xFE]\"\\xFE]\"\\xFE]\"\\xFE]\"\\xFE]\"\\xFE]\"\\xFE]\"\\xFE]\"\\xFE]\"\\xFE]\"\\xFE]\"\\xFE]\"J]\""
		":v\\x08\\x0422\\xFE\\xC8A\\xFE\\xC8A\\x1A\\xC8A\\x0E\\x18+\\xFEw\\x08\\xFEw\\x08>w\\x08f\\x96\\x0F\\xEE\\x83\\x08fV\\x00Z\\xF9\\x10f1\\x00J\\x05\\x11\\x86-\\x00\\x12\\x00\\x08\\x0E\\x11\\x11f+\\x00\\xE6\\x1D\\x11\\x0498fV\\x00\"\\x82\\x08*\\x1D\\x11:O_\\x15#\\x05\\xA5\\x0E\\xD3\\x08\\x009r\r"
		"\\x19\\xFE\\xA6\\x08\\x9E\\xA6\\x08n\\xD5\\x00Zv`\\xFE\\x14X.\\x14X\\x0446\\x86\\x13X\\x05$\\x00r\\xFE_Jr_Jx0106cd0c159eb4f1e7918889de78244\\x0ERh\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\x8A\\xB2\\x08\\x0036x\\x18\\xFE\\x1C\\x11\\xAE\\x1C\\x11\\x0ED\""
		"\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\x16\\xA5\\x08n.RFX\\x11r\\xA0\\x19\r/\\x1E\\xB2\\x08\\x001\\xFEiJ\\xFEiJ\\x0EiJ\\xFE\\xB1\\x08\\xEE\\xB1\\x08\\x12\\xB1\\x08\\x000\\x8A\\xB1\\x08\\x01$\\xFE\\xB1\\x08v\\xB1\\x08xeec7500495dcb0651786aafded90a82\\x0E/"
		"r\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\x8E\\xB1\\x08f>\\x0E\\xFE\\xBD\\x08\\xAE\\xBD\\x08\\x1E\\xBC3\\xFE\\xC1\\x08\\xFE\\xC1\\x08B\\xC1\\x08f\\xB4\\x18\\xF2g\\x11fW\\x00^h\\x11f2\\x00Ni\\x11\\x86.\\x00\\x12\\x13\\x08\\x12j\\x11f,\\x00\\xF2k\\x11n"
		"(*\\x1A\\x97\\x08.l\\x11j\\x87\\x00By\\x11\\x001v\\xE6<\\xFEy\\x11\\xA2y\\x11f:\\x01\\xFE,\\x1A\\x92,\\x1A\\x0466\\x86,\\x1A\\x05$\\xFE\\xC9\\x08z\\xC9\\x08xd5d0691ccd800f0f220556020af570c\\xFE\\x0B+\\xFE\\x0B+\\xFE\\x0B+\\xFE\\x0B+\\xFE\\x0B+\\xFE\\x0B+\\xFE\\x0B+\\xFE\\x0B+\\xFE\\x0B+\\xFE\\x0B+\\xFE\\x0B+\\xFE\\x0B+\\xFE\\x0B+\\xFE\\x0B+\\xFE\\x0B+\\xFE\\x0B+\\xFE\\x0B+\\x92\\x0B+\\x0423j\\x8E\\x05\\xFE\\xCA\\x08\\xAE\\xCA\\x08\\x12\t+"
		"\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\"\\xC7\\x08\\x009f#6\"\\x96\\x08*\\xC6\\x08\\x005\\x8E\\xBC\\x11\\x12z\t"
		"\\x0412\\x0E\\xC6\\x08\\x006\\x16T%\\x000JR\\\\\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\x9E\\xC5\\x08\\x004\\x8AXS\\x05$\\xFE\\xC5\\x08v\\xC5\\x08x6135b4ea1935207e91677816692dbfa\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xFE\\x8E\\x11\\xA2\\x8E\\x11\\xFE\\xAEd\\xEE\\xAEd\\x08pla\\xFE\\x08\\\\\\xF"
		"E\\x08\\\\.\\x08\\\\\\x007jM\\x07\\xF2}\\x11f`\\x19^}\\x11f2\\x00N}\\x11\\x86.\\x00\\x12\\x03\\x08\\x12}\\x11f,\\x00\\xEA}\\x11\\x009\\xAE\\x87<\\x08200fnE\\x05\\xA9\\x16\\xAC\\x08\\x009\\x1A\\xAC\\x08F\\xD5n\\xFE\\x074\\xA6\\x074j/\\x01\\xFEr\\x11\\x92r\\x11\\x0C3609:\\x16,J\\x7F<\r&"
		"\\xFE\\xB1\\x08v\\xB1\\x08xd2f3d162109b8290790e1f716620412\\xFE\\xA9d\\xFE\\xA9d\\xFE\\xA9d\\xFE\\xA9d\\xFE\\xA9d\\xFE\\xA9d\\xFE\\xA9dZ\\xA9d\\xFE\\x184\\xFE\\x184\\xFE\\x184\\xFE\\x184\\xFE\\x184\\xFE\\x184\\xFE\\x184\\xFE\\x184\\xFE\\x184\\xF2\\x184\\x1A\\xE0\\x93\"0\\x8C\\x0C1203\\xAE@\\x1A\\x10navig\\x0ES\\x8E\\x0E\\x12[Nk\\\\\\xAD2\\x1Ei\\\\\\xAAA\\x8C\\x16]\\x8EJm\\x8E\\xFE\\xD5\\x94\\xFE\\xD5\\x94:8tN\\xB8\\x08\\x0Ea\\x89\\x08/1.\\xA1\\xB22VTN\\xCD\\x94\\x0E\\xA7sf%\\x00\\xE5\\xAE>#\\x00"
		":\\xA2\\x08^\\x1F\\x00R<\\x00\\xDA\\x84\\x08\\x08658:\\xF8\\x00>-\\x11\\x0C6644nQ\\x83\\x1A!\\x1A\\x05\\x95\\x0466\\x0E\\xE0\\x90.\\xF6\\x00\\xFEq\\x08\\x96q\\x08>*\\x01bb\\x08\\x96^\\x83\\x08645:;\\x08Nt\\x94\\x001>%\\x00J`\\x08\t%m-\\xFE\\xAEuZ\\xAEuxad65c75cb78fb05f82df51eb4a791dcna\\x83\\x12\\xBA\\x91\\x16_\\x94.D\\x91Z\\xC4\\x98\\x0E\\x1D\\x8C\\x99\\x19\\x0E\\xB6I\\x04in&\\x90\\x94N&\\x04\\x19.\\x91).\\x1C\\x02\\x1A\\xA1_\r%\\x00e\\x0Ep\\x92*9\\x8E\\x14unload\\x16[\\x7F\\x1E\\xB9\\x13"
		":\\xAB\\x022#\\x00E\\x81:!\\x00\\x08dom\\x16\\x00\\x80\\x81u\\x00v\\x0E\\xF1\\x7F\\x0C1951j\\x9B\n\\x011\\x1Ccontent_\\x01\\x7F\\x00e:\\x81\\x00\t@b\\x0C\\x14b?\\x00\\x05\\x9D\\x01=\\x043.fm\\x1D\t>\\x0E\\x15\\x96\\x00t\\x01\\xAB\\x0C2027j\\xCB\\x0B\\x01\\x9F6\\x1E\\x01\\xA1\\xE5\\x002j`\\x00\\x1D2\t\\x90v\\x15\\x06u\\xBB\\x08cou\\x0E\\x1E\\x97\\x040,1\\xAB\\x08ion1\\xBD\\x08har\\x0Eq\\x13-\\xC4\\x05\\x19\\x04ab!\\xAF\\x01\\xC3\\x08\"ne\\x0Eya\\x12Z\\x93\\x00s\\x0ES.\\x0E\\x92\\x9B number\":1\""
		"vb\\xFEka\\xFEka\\xFEka\\xFEka\\xFEka\\xFEka\\xFEka\\xFEka\\xFEka\\xFEka\\xFEka\\xFEka\\xFEka\\xFEka\\xFEka\\xFEka\\x0C2373\\x81\\x0E\"\\xAE\n\\x006B\\xECDB\\x17\\x1C\\x0Cothe\\x0E|\\x9BNv\\x06\\xEDo\\xD1s\\x82\\x9C\n\\x08fav\\x12\\xA9>\\x08ico\\xFEM\\x8E\\xEEM\\x8E\\x1AM\\x8E\\x001\\x0E\\x15\\x10f8_\\xFE\\x97\nz_\\x006\\xCB\n\\xD1'\\x004j\\x91\\x00:\\xB5\nz`\\x00\\x11.\\x8EZ\\x00\\xDA\\xD3\n\\x01\\x82:\\xDD/>\\xD4\n\\x1012061>\\xC1\\x15\\x15%\r\\x9C\\x08102n\\xF8\n"
		"\\xFE\\xF6\\x1B\\x8E\\xF6\\x1B\\x01\\xCBj{\\x01b\\xE7\n\\xA656\\x0498:+\\x01N\\xEA\n>$\\x00N\\xE9\n\\x01$myV\\xE8\n\\x0Ey\\x96\\xFE\\xAB\\x96\\xFE\\xAB\\x96\\xFE\\xAB\\x96\\xFE\\xAB\\x96\\xFE\\xAB\\x96\\xFE\\xAB\\x96\\xFE\\xAB\\x96\\xCA\\xAB\\x96\\xFE\\x07\\x13\\xFE\\x07\\x13\\xFE\\x07\\x13\\xFE\\x07\\x13\\xFE\\x07\\x13\\xFE\\x07\\x13\\xFE\\x07\\x13\\xFE\\x07\\x13^\\x07\\x13\\x08]}}", 
		LAST);

	web_custom_request("rb_bf32608msb_3", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=310101096&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553111690$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=796$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$rt="
		"1-1779553111690%3Bhttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fcss%2Fjpetstore.css%7Cb6686e0f0g0h0i0k5136l5137m5183v6014w6014I11M-68001081V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7Cb6686e0f0g0h0i0k5189l5190m5191v3808w3808E1F17220O287P60I7M761912964V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcart.gif%7Cb6686e0f0g0h0i0k5192l5192m5193v96w96E1F288O16P18I7M-1891668168V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fseparator.gif%7Cb6686e0f0g0h0i0k5"
		"193l5193m5194v46w46F18N2O1P18I7M688934799V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Ffish.gif%7Cb6687e0f0g0h0i0k5233l5234m5235v271w271E1F390O26P15I7M-302972535V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fdogs.gif%7Cb6687e0f0g0h0i0k5234l5235m5235v306w306E1F450O30P15I7M1822807848V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Freptiles.gif%7Cb6687e0f0g0h0i0k5239l5312m5314v398w398E1F780O52P15I7M-620539332V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore"
		"%2Fimages%2Fsm_5Fcats.gif%7Cb6687e0f0g0h0i0k5240l5312m5317v289w289E1F420O28P15I7M1231591079V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fbirds.gif%7Cb6687e0f0g0h0i0k5240l5314m5317v251w251E1F495O33P15I7M-1591609649V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Ffish_5Ficon.gif%7Cb6687e0f0g0h0i0k5309l5314m5319v439w439E1F800O40P20I7M-1858137608V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fdogs_5Ficon.gif%7Cb6687e0f0g0h0i0k5311l5317m5323v468w468E1F920O46P20I7M-39"
		"000523V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcats_5Ficon.gif%7Cb6687e0f0g0h0i0k5311l5317m5323v408w408E1F860O43P20I7M-246443466V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Freptiles_5Ficon.gif%7Cb6687e0f0g0h0i0k5312l5317m5323v669w669E1F1560O78P20I7M355865488V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fbirds_5Ficon.gif%7Cb6687e0f0g0h0i0k5312l5318m5323v471w471E1F1000O50P20I7M1303219330V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsplash.gif%7Cb6"
		"687e0f0g0h0i0k5313l5318m5324v36097w36097E2F124250O350P355Q357R347I7M-266518883V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Ffavicon.ico%7Cb12042e0f0g0h0i0k1l20m61u983v683w683I22$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553123575_1000$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$time="
		"1779553126825", 
		LAST);

	web_add_cookie("dtSaf4o018pw=true%7CC%7C-1%7CSign%20In%7C-%7C1779553127821%7C553123575_1000%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%7C%7C%7C%7C; DOMAIN=localhost");

	web_url("Account.action;jsessionid=A20E81FDE550704D9F8A1FE4C490C476", 
		"URL=http://localhost:8080/jpetstore/actions/Account.action;jsessionid=A20E81FDE550704D9F8A1FE4C490C476?signonForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf32608msb_4", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=1969292222&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1779553127825%7C_wv_%7CAAI%7C1%7CfIS%7C15906%7CfID%7C4%2C1%7C7%7C_event_%7C1779553127893%7C_viewend_%7Cinp%7C0%7Csvn%7C%2Fjpetstore%2Factions%2FCatalog.action%7Csvt%7C1779553111690%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1779553127893%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$rId=RID_1078536306$rpId=431439681$domR=1779553123718$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553111690$tvm="
		"i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=796$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553123575_1000$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$nV=1$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$time=1779553127896", 
		LAST);

	web_custom_request("rb_bf32608msb_5", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=2&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=2592824058&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553127905&ss=1&qc=3100601807&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xC21D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"view.fo\\x11?,_time\":16209\r\\x1D\\x0Cback\t\\\\\r\\x1D\\\\0,\"error.http_4xx_count\":\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!#8us\":\"reported\",\\x05\\x18)^:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x1C11969.5,\\x05\\x14\\x1Cloading_\\x01W!z"
		",dom_content_\\x01\\x1C\\x05`\\x01=\\x01!>x\\x00\\x08fidb\\x18\\x00\\x01=.Y\\x00$complete\",\\x117\\x04rt-\\x81\\x1C15905.70\t\\x01\\x08298\t#\\x08dur%>\\x04\":\r\\x11\\x04na!\\xCC,\"pointerdown\rM\\x18process\ro\\x08rt\"\\x05S\\x089.2\tR\\x19S\\x1D)\\x08end\\x11'\\x004\\x11'\\x0423!\\x16Hid.cancelable\":true\t\\x918ui_element.tag_\r\\x8F\\x00A\r\\x85\\x1D\\x1E\\xA8xpath\":[\"html\",\"body\",\"div[@id=\\\\\"Header\\\\\"]\".\\x16\\x00\\x0CMenuN\\x14\\x00\\x00C)\\x90\t\\x1B a[2]\"],\""
		"fJ\\xD0\\x01\\x00pBv\\x01V\\xCF\\x01\\x00pR\\xB6\\x01\\x04in\\x1D\\x184below_thresholAe\\x04lc\\x1D\\x1F]}\\x01\\x186}\\x02\\x042,\\x05\\x15\\x04st=\\xE3\\x142045.7\t\\x19A\\x1B1\\xFB\\x142019.3\t\\x18\\x08siza\\xAC\\x1023879\t\\x12\\x14url\":\"a\\x0C\\xB8://localhost:8080/jpetstore/images/splash.gif\",\\x05\\x81\\x1Cresource\tqYO\\x0C5323a\\x00\\x05\\xBA9\\xD4Hrender_delay\":34.79\t\\x01\\x14776555\t\\x92:T\\x00\t,\\x0C43.1\t+\\x189925494\\x11,\\x05Q\\x8D\\x83.\\x02\\x01\\x1Dv]J\\x08IMG\r"
		"\\xBA\\x1D \\x82L\\x022\\x1E\\x02Yc\\x0CMainI26\\x14\\x00\\x00I!-b\\x19\\x002M\\x00\\x08imgAj long_task!\\xD2B\\x04\\x04\\x19\\x1E\\x0Call.\\xAD:\\x041,:\\x18\\x00\\x08avg.\\x81\\x01!M\\x15V\\x018@slowest_occurrenc\\xC1(\\x08[{\"2D\\x02\\x141957,\"=\\xC8\\x085}].i\\x00\\x0CselfR\\x82\\x00\\x05\\x19n\\x83\\x00\\x05!\\xEA\\x84\\x00\\x0CttfbR\\x1E\\x01\\x05\\x19\\xAD\\x86\\x0C66446\\x93\\x04\\x05\\x1E\\x0Cwait\\x81\\xBA\\x19\\xD8\\x0896,\t\\x1B\\x10cache\\x1D\\x19\\x000\r"
		"\\x18\\x08dnsJ\\x16\\x00\\x14connec\\xC5p\\x19L\\x113\\x0Crequ!a\\x19\\x1A\\x0C65486\\x8F\\x00\\x18perform\\x81\\xFC\\x14.activ\\xA5\\x7F\\xC1\\x1B\\x04rt\\xC5E\\x00v\\xE1]\\x00s\\x01J(nce_number\"!\\xED\\x05\\x19\\x08premCI\\xF2X0,\"characteristics.has_\\x01,\\x1C_summary\\xB1^\\x10navig\\x05n\\xE1\\xE6\\x01r\\xC5\\x8D\\x10new\",2\\x1D\\x00\\x04yp\\xC1\\xA5\\x08har\\x81\\x92.\\xB0\\x00\\x01sX_origin\":1779553111690,6E\\x026\\x1B\\x009\\x0F\\x1A#\\x08,dt.rum.schem*\\xC7\\x08\\x18\""
		"0.23.0\\xA1\\xC5\t!\\x14applic\t\\xB3Xid\":\"ea7c4b59f27d43eb\",\"\\xB9\\x08\\x18frame.i2\\xBB\\x08<5c58c120e4549e49\\x1DZ\\x00g\\xC1a\"A\t\\x18\"1.337.\\xC1\\xCD0260504-112723>1\\x00-\\x1B$javascript\\x19!\\x00b\\x1AA\t\\x00s\\x05\\xA9|5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-=\\x16\\x11\\xE4)\\x131l\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01w,evice.orient%[<\":\"landscape-priE4\\x04,\"\r)Dbattery.level\":100\\x15\\x1B$screen.wid\\xE1\\x89\\x0C1536"
		">\\x1B\\x00(height\":9609\\xAA\\x14window67\\x001>\r\\x1C\\x118\\x007a\\xA6:\\x1C\\x00\t\\x98\\x1C_pixel_r\\x01\\xC2L\":1.25,\"page.url.ful\\x8E\\xD3\\x06\\x00ae\\xC8 s/Cataloge\\x8F\\x00o\\x0E\\xEF\\x08\\x05I1g\\x00_)\\xD1FK\\x02\\x05&\\x1Cdetected\\x1E\\xA9\\x08\\xFD2v_\\x00\\x08tit\\x0E\\xF9\\x08\\x14\"JPetS\\xE1b\\x14 Demo\"\\x1A@\\x0B6}\\x00<8a0700c08e05b185\\x11&\\xFE\\xEC\\x00\\x01\\xEC\\x00v\\x81o\\xC6\\xC6\\x00\\x04},\\xFET\\x0C:T\\x0C%N&"
		"\\x93\\x0C\\x8D\\xDF\\x1016210-\\xDA\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xFET\\x0C\\xEAT\\x0CN#\\x0C\\xE1q\\x00_:#\\x0C\\x01\\x14Nc\\x0C\\xFE;\\x0C\\xFE;\\x0C\\x16;\\x0C\\x0E\n\\x08\\x1A\\x1A\\x0C\\xFE;\\x0C\\xFE;\\x0C\\xFE;\\x0C\\xFE;"
		"\\x0C\\xFE;\\x0C\\xFE;\\x0C\\xFE;\\x0C\\xFE;\\x0C\\xFE;\\x0C\\xFE;\\x0C\\xFE;\\x0C\\xFE;\\x0C\\xFE;\\x0C\\xFE;\\x0C\\xF2;\\x0C\\x08]}}", 
		LAST);

	web_add_cookie("rxvtf4o018pw=1779554927991|1779553123580; DOMAIN=localhost");

	web_add_cookie("dtPCf4o018pw=1$553127941_769h-vGRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0e0; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_6", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=1437941651&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Account.action;jsessionid=A20E81FDE550704D9F8A1FE4C490C476?signonForm=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CSign%20In%7CC%7C-%7C553123575_1000%7C1779553127821%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%7C%7C%7C%2Fjpetstore%2Factions%2FCatalog.action%7C1779553111690%2C1%7C1%7C_load_%7C_load_%7C-%7C1779553127825%7C1779553127993%7Cdn%7C67%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%2C2%7C3%7C_event_%7C1779553127825%7C_vc_%7CV%7C155%5Epc%7CVCD%7C1011%7CVCDS%7C0%7CVCS%7C2"
		"23%7CVCO%7C1226%7CVCI%7C0%7CTS%7C1%7CVE%7C491%5Ep260%5Ep67947%5Eps%5Es%23Banner%7CS%7C153%2C2%7C4%7C_event_%7C1779553127825%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C53%2C2%7C2%7C_onload_%7C_load_%7C-%7C1779553127993%7C1779553127993%7Cdn%7C67%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1779553127825%7C_view_%7Csvn%7C%2Fjpetstore%2Factions%2FCatalog.action%7Csvt%7C1779553111690%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Es"
		"k0%5Esh0$dO=localhost,$rId=RID_208802565$rpId=636304773$domR=1779553127989$tvn=%2Fjpetstore%2Factions%2FAccount.action%5Esjsessionid%3DA20E81FDE550704D9F8A1FE4C490C476$tvt=1779553127825$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=796$sw=1536$sh=960$nt=a0b1779553127825e9f9g9h9i9k11l64m65o154p155q159r164s168t168u4900v4600w4600M636304773V0$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FAccount.action%3Bjsessionid%3DA20E81FDE550704D9F8A1FE4C490C476%3FsignonForm%3D$title="
		"JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553127941_769$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FAccount.action%3Bjsessionid%3DA20E81FDE550704D9F8A1FE4C490C476%3FsignonForm%3D$time=1779553129063", 
		LAST);

	web_add_cookie("dtSaf4o018pw=true%7CC%7C-1%7CLogin%7C-%7C1779553129812%7C553127941_769%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FAccount.action%5Esjsessionid%3DA20E81FDE550704D9F8A1FE4C490C476%3FsignonForm%3D%7C%7C%7C%7C; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_7", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=160504294&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Account.action;jsessionid=A20E81FDE550704D9F8A1FE4C490C476?signonForm=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fjpetstore%2Factions%2FAccount.action%5Esjsessionid%3DA20E81FDE550704D9F8A1FE4C490C476$tvt=1779553127825$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=796$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$rt="
		"1-1779553127825%3Bhttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fcss%2Fjpetstore.css%7Cb91e0f0g0h0i0m0v6014w6014I11M-68001081V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7Cb92e0f0g0h0i0m0v3808w3808E1F17220O287P60I7M761912964V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcart.gif%7Cb92e0f0g0h0i0m0v96w96E1F288O16P18I7M-1891668168V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fseparator.gif%7Cb92e0f0g0h0i0m0v46w46F18N2O1P18I7M688934799V0%7Chttp%3A%2F%2Fl"
		"ocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Ffish.gif%7Cb92e0f0g0h0i0m0v271w271E1F390O26P15I7M-302972535V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fdogs.gif%7Cb92e0f0g0h0i0m0v306w306E1F450O30P15I7M1822807848V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Freptiles.gif%7Cb93e0f0g0h0i0m0v398w398E1F780O52P15I7M-620539332V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fcats.gif%7Cb93e0f0g0h0i0m0v289w289E1F420O28P15I7M1231591079V0%7Chttp%3A%2F%2Flocalhost%3"
		"A8080%2Fjpetstore%2Fimages%2Fsm_5Fbirds.gif%7Cb93e0f0g0h0i0m0v251w251E1F495O33P15I7M-1591609649V0$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FAccount.action%3Bjsessionid%3DA20E81FDE550704D9F8A1FE4C490C476%3FsignonForm%3D$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553127941_769$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FAccount.action%3Bjsessionid%3DA20E81FDE550704D9F8A1FE4C490C476%3FsignonForm%3D$time=1779553129821", 
		LAST);

	web_submit_data("Account.action", 
		"Action=http://localhost:8080/jpetstore/actions/Account.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/jpetstore/actions/Account.action;jsessionid=A20E81FDE550704D9F8A1FE4C490C476?signonForm=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=Ash", ENDITEM, 
		"Name=password", "Value=Ashlesha", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value=M8Mcz9eg7_JSnbSu2Ti4qfKq1tLi-UPyc4g2mTlgVfRbopMs6b6wduKyQaIMiZScVYI0U3DtAcDY1b3dxUrjX62c4HH5chwjG_r53xeqw60=", ENDITEM, 
		"Name=__fp", "Value=uwctudQpzt_Fii3-eSWgpnD9SK1aZbSxf_m57vDO6l-qH7VFg_gL85PcfOQFdeeA", ENDITEM, 
		LAST);

	web_custom_request("rb_bf32608msb_8", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=2915353243&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Account.action;jsessionid=A20E81FDE550704D9F8A1FE4C490C476?signonForm=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1779553129833%7C_wv_%7CAAI%7C1%7CfIS%7C1771%7CfID%7C4%2C1%7C7%7C_event_%7C1779553129915%7C_viewend_%7Cinp%7C0%7Csvn%7C%2Fjpetstore%2Factions%2FAccount.action%5Esjsessionid%3DA20E81FDE550704D9F8A1FE4C490C476%7Csvt%7C1779553127825%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1779553129915%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FAccount.action%5Esjsessionid%3DA20E81FDE550704D9F8A1FE4C490C47...$rId=RID_208802565$rpId="
		"636304773$domR=1779553127989$tvn=%2Fjpetstore%2Factions%2FAccount.action%5Esjsessionid%3DA20E81FDE550704D9F8A1FE4C490C476$tvt=1779553127825$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=796$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FAccount.action%3Bjsessionid%3DA20E81FDE550704D9F8A1FE4C490C476%3FsignonForm%3D$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553127941_769$v=10337260504112723$vID="
		"1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FAccount.action%3Bjsessionid%3DA20E81FDE550704D9F8A1FE4C490C476%3FsignonForm%3D$time=1779553129919", 
		LAST);

	web_custom_request("rb_bf32608msb_9", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=2&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=3072037382&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553129933&ss=1&qc=3080563353&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Account.action;jsessionid=A20E81FDE550704D9F8A1FE4C490C476?signonForm=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\x8A\\x9B\\x02D{\"data_version\":2,\\x05\\x11\\xF4,\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"start_time\":1779553127915,\"duration\":0,\"performance.initiator_type\":\"link\",\"characteristics.has_request\":true,\"url.full\":\"http://localhost:8080/jpetstore/css/jpetstore.css\",\"network.protocol.name\"\tL\\x08\",\".\\xA5\\x00(time_origin.\\xDA\\x00@824,\"dt.rum.schem=|\\x18\"0.23.0:I\\x00\\x00s=\""
		"\\x1091.19\r\\x01\\x10254946t\\x00(next_hop_pr\t\\xA0\\x08\":\":N\\x004domain_lookup_\\x05\\\\\\x00\"~W\\x0064\\x00\\x08end\\x822\\x00\\x18connect\\x9A`\\x00\\x11.\\x8EZ\\x00\\x18secure_\r3\\x08ion\\x11d\\x0006\\x0B\\x01-\\xF8b\\x1E\\x00\\x14sponse~\\x1F\\x00\\x8E\\x92\\x00\\x10redir\\x1D\\xEDB\\x89\\x00\r\\x1F\\x05L:\\x1D\\x00\\x14workerZ\\x86\\x00\\x10fetch\\x11\\x1Cz\\xFA\\x018render_blocking\\x016\\x14tus\":\"\\x11\\x12:\\x07\\x02\\x14transf\\x01{\\x0Cize\">\\x97\\x000encoded_body_\t\"\\x08601"
		":m\\x02\\x04deZ%\\x00-{(.server_tim\\x01\\x92@hint\":\"received\",\\x15(\\x0Ctrac%\\xD2\\x00tE\\xBF\t(\\x10from_\tB\\x08\",\"\\x05#\\x00.\\x89Dx343452934a6cc116081301249311005\\x19.$s_sampled\"m\\xFDN \\x04,w3c_resource\r\\xAB\\x00s\\x110m\\xA7\\x18applicaAm\t\\x83<ea7c4b59f27d43eb\\x9D\\xF4\\x10frame:\\xF6\\x04@09e35935ebc9031e\"\\x95\\x01\\x14agent.\\xB5|\\\\\"1.337.9.20260504-112723>1\\x00\\x04ty\\x85\\xF6$javascript\\x19!\\x00b\\xAD|\\x00s%,|5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t"
		"0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-\\x81\\x9C-\\x16\\x00i\\xAD\\xDA)\\x13\\x001\\xB1\\xBB\\xD03578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\",\"device.orienta![L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B\\x10heigh\\x81\\xCC\\x0860,\\xD5\\x83\\x14window67\\x001#\r\\x1C\\x118\\x08796B8\\x00\t}\\x1C_pixel_rA\\x024\":1.25,\"page.u\\xA6M\\x06\\x04ac\\x01\\xE4$s/Account.\t\\x10\\x10;jses\\xE1x\\xB8id=A20E81FDE550704D9F8A1FE4C490C476?signonForm="
		"a\\xCD\\x01\\x811\\x84\\x00_%\\xEEJh\\x02\\x05&$detected_n\\xC9\\xAD\\x00/\\xD9\\xE4\t\\x87\\xEE\\x97\\x00\\x11\\x8B\\x0Ctitl\\x0E\n\\x08PJPetStore Demo\",\"view>\\xA9\\x008b1d838215458448\\x11&\\xFEP\\x01\\xEEP\\x01\\x05\\xA7\\xFE*\\x01v*\\x01\\x04},\\xFE<\t\\xFE<\tN<\t\\x95BN\\x1E\\x05\\xAD\\xCB\\xB1\\x11\\xAA\\xA1\\x01\\x10ruxit\\x85\\xE0pjs_ICA15789NPRTUVXfqrux_10337\\x89\\xE8\\x89\\xE7\\x0C.js\"\\xFEc\t\\xFEc\t\\x12c\t\\x003\\x1Ab\t\\x148509886X\\x08\\xEAc\tnW\\x00Vc\tn2\\x00\\x1A\\x02\t"
		"\\xE1\\xEA\\x00r\\x81\\xF7\\x001\\x92.\\x00\\x12\\x85\\x08z,\\x00\\xFEc\t\\xD6c\tn\\xEC\\x00\\xFEc\t\\xA2c\tv\\x85\\x00\\xFEc\tzc\t\\x1013290\\x86e\t\\x14362149&?\t\\x16%\t\\x1A\\xBC\\x08\\x1Eg\t@not_available_htt\\x0E\\x9F\\x0Cm\\xCEVq\t\\x012\\x04se\\x0EK\\x08N\t\\x04\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xFE'\t\\xEE'\t\\x12'\t\\x04im\\x0EC\\x0FN\\x1B\\x05\\xADV\\xCA$\tTimages/"
		"logo-topbar.gif\\xFE\\x04\t\\xFE\\x04\t\\x16\\x04\t\\x005\\x1A\\x04\t\\x14776483\\xFE\\x04\t\"\\x04\tnW\\x00V\\x04\tn2\\x00F\\x04\t\\x8E.\\x00\\x1E\\x04\tn,\\x00\\xFE\\x04\t\\xD6\\x04\tn\\x92\\x00\\xFE\\x04\t\\xA2\\x04\tv\\x85\\x00Z\\x04\t\\x0Cnon-\\xFEk\\x12\\x1Ek\\x12\\x08380:u\\x0BJk\\x12\t%m|V\\x04\t"
		"\\xEEk\\x12\\x12k\\x12x3881223f689a154f0643b8963dcd5a3\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xFEk\\x12\\xC2k\\x12\\xFED\tjD\t\\x0Ccart\\xFE=\t\\xFE=\t&=\t\\x007\\x1E=\t\\x1001977\\xFE=\t\"=\tnW\\x00V=\tn2\\x00F=\t\\x8E.\\x00\\x1E=\tn,\\x00\\xFE=\t\\xD6=\tn\\x92\\x00\\xFE=\t\\xA2=\tv\\x85\\x00\\xFE=\t\\x8A=\t"
		"\\x0E\\xC6\\x18.\\x87\\x1EJ;\t\\x01#\\xFE9\tv9\t|570492c08c75f09b297394998fb21c09\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xFE\\xA4\\x1B\\xEE\\xA4\\x1B\\x1A\\xA4\\x1B\\x0E\\xC0\\x1E\\xA2\\xE0$\\xFE9\tj9\t\\x1Cseparato\\xFE{\\x12\\xFE{\\x12\"{\\x12\\x002\\xFE/\t\\x1A/\t"
		":H\\x00N \t:#\\x00>\\x11\tZ\\x1F\\x00\\x16\\x02\t:\\x1D\\x00\\xFE\\xF3\\x08\\xCE\\xF3\\x08:\\x83\\x00\\xFE\\xE4\\x08\\x9A\\xE4\\x08Bv\\x00\\xFE\\xD5\\x08\\x8A\\xD5\\x08\\x04466\\x15\\x02J\\xD5\\x08\\x01#\\xFE\\xD5\\x08v\\xD5\\x08|"
		"348f55f2a3c0905ed28d9435f9189a91\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08.\\xD5\\x08\\x14m_fish\\xFE\\x11\\x12\\xFE\\x11\\x12\\x1E\\x11\\x12\\x002\\xFE\\xB5-V\\xB5-vW\\x00R\\xF1\\x08r\\x89\\x00B\\x00\t"
		"\\x92.\\x00\\x1A\\x0F\tr,\\x00\\xFE\\x1E\t\\xD2\\x1E\tr\\x92\\x00\\xFE-\t\\x9E-\tz\\x85\\x00\\xFE<\t\\x8A<\t\\x08271\\x82=\t\\x05$\\xFE>\tv>\tx060253210f8790b19f045d76c7a6383\\x0EH*\\x1A\\xE5-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xFE\\xB7-\\xE2\\xB7-\\xFE\\x13\\x12\\xFE\\x13\\x12\"\\x13\\x12\\x14m_dogs\\xFE>\t\\xFE>\t&>\tn\\x96+"
		"\\xE2\\x90-\\x002rW\\x00V>\tn\\x89\\x00F>\t\\x8E.\\x00\\x1E>\tn,\\x00\\xFE>\t\\xD6>\tn\\x92\\x00\\xFE>\t\\xA2>\tv\\x85\\x00\\xFE>\t\\x8A>\t\\x0430\\x86{\\x12\\x05$\\xFE>\tv>\tx78c4449186f15ce3a8d1129d5513f44\\x0E4(\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t*>\t\\x18reptile\\xFEB\t\\xFEB\t*B\tn\\xD4+\\xEAB\tnW\\x00VB\tn2\\x00FB\t\\x8E.\\x00\\x1EB\tn,\\x00\\xFEB\t"
		"\\xD6B\tn\\x92\\x00\\xFEB\t\\xA2B\tv\\x85\\x00\\xFEB\t\\x8EB\t\\x009\\x8A\\xCD-\\x01$\\xFEB\tzB\tx10e236f5ffa28765b140d44712ee9b4\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B\\xFE\\xBE\\x1B6\\xBE\\x1B\\x08cat\\xFE>\t\\xFE>\t*>\t"
		"\\x008\\x1A\\xCF-\\xFE\\x10@2\\x10@\\x002rW\\x00V>\tn\\x89\\x00F>\t\\x8E.\\x00\\x1E>\tn,\\x00\\xFE>\t\\xD6>\tn\\x92\\x00\\xFE>\t\\xA2>\tv\\x85\\x00\\xFE>\t\\x8A>\t\\x08289\\x86\\xBE\\x1B\\x01$\\xFE>\tv>\t|99b04d0d3be1cf52ac7ae8a395db1efa\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xFE>\t\\xEE>\t\\x1A>\t\\x007\\xAE\\xB1R\\xFE\\xD1-n\\xD1-\\x14m_bird\\xFE?\t\\xFE?\t\"?\t\\xFE<@\\x1E<@:H\\x00N!\t"
		":#\\x00>\\x12\tZ\\x1F\\x00\\x16\\x03\t:\\x1D\\x00\\xFE\\xF4\\x08\\xCE\\xF4\\x08:\\x83\\x00\\xFE\\xE5\\x08\\x9A\\xE5\\x08Bv\\x00\\xFE\\xD6\\x08\\x8E\\xD6\\x08\\x005\\x8A\\x94$\\x01$\\xFE\\xD6\\x08z\\xD6\\x08t816f19d7e450737bad8f89b94aa411\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xFE\\xA76\\xAE\\xA76>\\xD9H\\x0E\\x86)"
		"4elf_monitoring\\x1E\\xE0HJ*\\x00\\x1Cinternal\\x11#\\x12VZ\\x0E\\x91N\\x00e.\\xFAZ\\x0496>#\t\\x1AJVf\\x07[\\x11!\\x08fm_*\\x80\\\\ timestamp2^\\x00\\x0C56,\"\\x0E\\x91X4\":2000,\"messag\\x0E\\x93T\\x12\\x9CV\\x1C31483296\\x12\\x86S\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E\\xAEW\\x14 JavaS\\x12vW0 tag\\\\\",[]]\"}]&\\xD4W\\xFE.X\\xFE.X\\xFE.X\\xFE.X\\xFE.X\\xFE.X\\xFE.X\\xFE.X\\xFE.X\\xFE.X\\xFE.X\\xFE.X\\xFE.X\\xFE.X\\xFE.X\\xFE.X\\xFE.X\\xFE.X^.X>\\xB9\\x05\\x0E\\x1Ea "
		"long_taskz\\xBB\\x05\\x0418.\\xDE\\x0E\\x0453\\x95\\xEEf\\xBC\\x05\\x15[\\x00.\\x1AwZ\\xC1P\\x04\",\\x1D\\x18\\x18attribu\\x0E\\x19[\\x0E\\xAC\r\\x14tainer\\x16\\xCBZ\\x8A(\\x00\rV\\x8A*\\x00\\x08src\\x16\\x08a\\x19\\x93V{\\x00\\x1AX]\\x16\\x19\\\\bY\\x00\r"
		"y\\x18unknown\\x0E\\xA3\\\\\\x16\\xCEa\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05\\xFE\\xF9\\x05b\\xF9\\x05V\\x8F\\x0B\\x16\\x89f\"\\x83B\\x10168.0\\x1A\\xE8\\x1CN\\xF4SBtg\\x10navig\\x0E\\x13a\\xA1\\x03N\\\\\\x06\\x14reques\\xCE\\x18U\\xEE\\x96`\\x16\\x96`"
		":-a\\x04ne\\xFE\\xB7g\\xF6\\xB7g\\x0006\\xC4\\x1BNr'\\x0E\\xA3[\\x08/1.\\x0EF@2\\xBFIR\\xAFg:\\x18/>4\\\\24\\x00\\x16\\xDF\\x14v2\\x00>*\\x15\\x96.\\x00\\x8EZ\\x00\\xDAH\\x15\\x04116\\x8D\\x02\\x002:\\x86/\\x00r:\\xC0g\\x006:\\x03\\x01\\x15 \\x05\\xA4\\x006\\x0E\\xB1c\\x04er\"@j\\xFEZ\\x15\\x9AZ\\x15vF\\x01\\xFA\\xB2g\\x0449\\x0E\\xE5\\x0E.\\xD6\\x00J\\xB5g\\x0446>%\\x00R:C\\x01%m\\xAE\\xFEJUZJUx062710b7ba8a247863753a818b7ae32n@\\x1E\\x12\\xC3d\\x16\\xA0g\\xCE!d\\x18Catalog\\x1AqeZ%l\\x0E\\xDE^"
		"\\x99\\xD0\\x0E\\xBA\\x10\\x04in&\\x07hN\\xDD\\x04\\x19.\\x1E:\\x0B.\\x8B\\x01\\x1AI\n\r%\\x0E\\xF1g.\\x1E\\x00\\x14unload\\x16\\xD2\\x10\\x1E\\xBFa:\"\\x042#\\x00E\\xC4:!\\x00\\x08dom\\x16w\\x11\\x14active\\x0E\\x13g\\x004:p\\x026t\\x04\\x011\\x1Ccontent_\\x01\\x7F\\x00e:\\x81\\x00\\x08154r,*b@\\x00\\x05\\x9E\\x0C158.:e\\x03\t1\\x0E\\x80i\\x00t\\x01\\x9F\\x006v\\x9F\\x00\\x01\\x936\\x12\\x01\\x0416:\\xC2\\x00\\x1D#\t"
		"tz\\xB2\\x06u\\xE6\\x12rg\\x12\\xE4j-\\x91\\x08ion1\\xA3\\x08har\\x0E\\x8Bj.\\x19\\x00\\x04ab!\\x95\\x01\\xB5\\x08\"ex\\x0EJn\\x04ng\\x1E\\xA1f\\x00s\\xC1\\xD3\\x0E\\xCEn number\":1\"\t\r\\xFE\\xFE\\x0B\\xFE\\xFE\\x0B\\xFE\\xFE\\x0B\\xFE\\xFE\\x0B\\xFE\\xFE\\x0B\\xFE\\xFE\\x0B\\x0E\\xFE\\x0B<battery.level\":1\\x81\\xD8\\x16\\xC3i\\x1E%j\\xFE@j\\xFE@j\\xFE@j\\xFE@j\\xFE@j\\xFE@j\\xFE@j\\xFE@j\\xFE@j\\xFE@j\\xFE@j\\xFE@j6@j\\x12\\xF4j&\\xBBs\\xC1\\xF8\\x12?"
		"\\x17\\x0497\\x1A\\xB7k\\x0Cback\\x16\\xD7s\r\\x1C 0,\"error.\\x0E\\xAF\n\\x0C_4xx\\xBD]\\x1D\\x19\\x005J\\x19\\x00\\x08exc\\x0E\\x173\\x04onB3\\x00\\x1Ccsp_viol\\x12M\\x0CB\\x1E\\x00\\x10dropp\\xC1\\xAEb@\\x00\\x05\\x8C\\x10other\\x1D=\\x08cls\\x0E:s\\x16\\x05q\\x14report\\x12up\\x01\\x18\\x00u\\x12\\xD9t:-\\x00\\x0Cvalu\\x16\nq\\x08fcp\\x11\\x0E\\x08203BV\\x07\\x01\\x1F\\xC1\\x8C\\x0E\\xD5p\\x1E\\x00u\\x00c\\xD1\\xE9\\x00,\\x05\\x1F\\x01\\x17\\x12~q\\x1Dy\\x08fidb\\x18\\x00nO\\x00\t"
		"7\\x00r*P\\x19\\x040..fV\\x048,\\x05[.\\xCA\r\t\\x12\\x1A\\xA8\\x12\\x04po\\x12\\x9F\\x19\\x00d\\x16\\xAC\\x12\\x01O\\x0Cproc\\x0Ewn\\x16'r\\x0E=j\\x141774.6\\x1A\\xFE\r\\x0C9255\tB\\x1D)\\xE9rV'\\x00\\x10cance\\x12ih\\x1E\\x0C\t\\x01f4ui_element.tag\\x1E\\xAF\\x13\\x10INPUT!&\\x04id.\"\\x00\\x08xpa\\x0E\\xD8o\\x14[\"html\\x0EOq\\x04od\\x12\\xFDo$iv[@id=\\\\\"C\\x16\\xBB\\x08\\x08\\\\\"]\\x0Eq\\x13\\x19\\x17\\x16\\xDE\t\t\\x17\\x0E\\xE0\\x0B0\",\"input\"],\""
		"fv\\xC7\\x01\\x00prw\\x01\\x00pR\\xAD\\x01\\x04in\\x1D\\x184below_threshol\\x0EG\\x08\\x04lc\\x1D\\x1F=\\xFC\\x01\\x186u\\x02\\x041,\\x05\\x15.\\x9B\\x0FMl\t\\x19A\\x12mt\\x08156\\x0E\\x88*\t\\x18\\x16\\x8Ds\\x1017220\t\\x11\\x04ur\\x0E\\xE5ua\\x03\\x04:/f\\xCCvbjd\\x01\\x9A\\x00r\\x1A\\xFFr\tuYI\\x11b9\\xC9\\x1A\\xB4\\x0C$delay\":111A\\x8A\\x000\\x01\\x01\\x0C2235\\x0E%\\x16JP\\x00\t-\\x04276_\n\\x0E\\xD2\r\t-\\x12p\"\\x0E\\x92\\x1B\\x0E\\xBA\\x1Beo\r\\xDA\\x19x.A\\x02\\x08MG\"B \\x00\\x82?"
		"\\x02\\x14HeaderI'Y>\\x0CLogoN\\x14\\x002m\\x02\\x0E\\x9C\\x0C\\x0E\\xAF%\\x00].\\xBB\\x16N\\xE1\\x03*^\\x16\\x08ll.\\x1Au\n!\\xE8\\x1Ed\\x17\\x00.\\x01\\x18\\x08avg=c\\x0EJ\\x176 \\x004slowest_occurr\\x0Em\n\\x16uy.*\\x02\\x0E\\xF7w9\\xA7\\x0453\\x0E~\\x1C\\x19F\\x0Eh\\x17R\\x7F\\x00\\x05\\x19n\\x80\\x00\\x05!\\xDE\\x81\\x00\\x0CttfbR\\x18\\x01\\x05\\x19\\xAD^\\x0864,\t\\x10\\x0Cwait\\x81\\x81\\x19\\xC7J/\\x0F\\x05:\\x10cache\\x1D(\\x000\rB\\x08dnsJ\\x16\\x00\\x1A\\xCA\\x10\\xC1g\\x19"
		"[\\x113\\x00r\\x0E\\xBF\\x0B\\x04st\\x1D\\x1A\\x0C54.6A\\xBF\\x1C00014901\\x0E\\x84C.\\xAB\r\\x12^\r\\xC9\\x98%\\x81\\x12F\\x0C\\xE57N\\x0B\\x0C\\x05\\x19\\x08prem'I\\xD4\\x040,RA\\x0E\\x01,\\x0C_sum\\x12\\xE7t\\x1A\\xA0v\\x86\\x86\\x0C.\"\\x00\\x16\\x05v\\x1A\\xC1\\x0C.\\xB5\\x00\\x01x^zz\\x05\\xC6\r\\x9A\\x001\\x1E\\xB4u>\\x0C\\x14\\x0420\\x0E#\\\\\\x1A\\xD7\\x18f\\xE2\\x19\r"
		"!\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xEE\\xFA\\x0C\\x12\\xFA\\x0C\\x08842\\xFE:w\\xFE:w\\xFE:w\\xFE:w\\xFE:w\\xFE:w\\xFE:w\\xFE:w\\xFE:w\\xFE:w\\xBE"
		":w\\x12U\\x14Z\\xFA\\x0C\\x05\\x1C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0C\\xFE\\xFA\\x0CV\\xFA\\x0CN\n\\x1B\\xE1/>\\xC9\\x0C\\x01\\x14N"
		"\t\r.\\xBF\\x0CVg\\x19.\"\\x00\\xFE\\xE1\\x0Cr\\xE1\\x0C\\x0E\\x8C,\\x16\\xB8%\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\xFE\\xE1\\x0C\\x12\\xE1\\x0C\\x08]}}", 
		LAST);

	web_add_cookie("rxvtf4o018pw=1779554930009|1779553123580; DOMAIN=localhost");

	web_add_cookie("dtPCf4o018pw=1$553129969_999h-vGRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0e0; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_10", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=4066804141&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CLogin%7CC%7C-%7C553127941_769%7C1779553129812%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FAccount.action%5Esjsessionid%3DA20E81FDE550704D9F8A1FE4C490C476%3FsignonForm%3D%7C%7C%7C%2Fjpetstore%2Factions%2FAccount.action%3Bjsessionid%3DA20E81FDE550704D9F8A1FE4C490C476%7C1779553127825%2C1%7C1%7C_load_%7C_load_%7C-%7C1779553129822%7C1779553130012%7Cdn%7C91%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Faction"
		"s%2FAccount.action%5Esjsessionid%3DA20E81FDE550704D9F8A1FE4C490C476%3FsignonForm%3D%2C2%7C3%7C_event_%7C1779553129822%7C_vc_%7CV%7C180%5Epc%7CVCD%7C1019%7CVCDS%7C0%7CVCS%7C254%7CVCO%7C1264%7CVCI%7C0%7CTS%7C1%7CVE%7C491%5Ep500%5Ep67947%5Eps%5Es%23Banner%7CS%7C179%2C2%7C4%7C_event_%7C1779553129822%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1779553130012%7C1779553130012%7Cdn%7C91%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C"
		"1%7C5%7C_event_%7C1779553129822%7C_view_%7Csvn%7C%2Fjpetstore%2Factions%2FAccount.action%5Esjsessionid%3DA20E81FDE550704D9F8A1FE4C490C476%7Csvt%7C1779553127825%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=localhost,$rId=RID_1078536306$rpId=1289470723$domR=1779553130008$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553129822$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$nt="
		"a0b1779553129822c15d49e49f49g49h49i49k51l89m90o180p180q183r186s190t190u6039v5739w5739M1289470723V0$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553129969_999$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$time=1779553131102", 
		LAST);

	web_custom_request("rb_bf32608msb_11", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=5&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=2361676774&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553132030&ss=0&qc=3978149748&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xB4\\xAE\\x02D{\"data_version\":2,\\x05\\x11\\xF4,\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"start_time\":1779553129942,\"duration\":0,\"performance.initiator_type\":\"link\",\"characteristics.has_request\":true,\"url.full\":\"http://localhost:8080/jpetstore/css/jpetstore.css\",\"network.protocol.name\"\tL\\x08\",\".\\xA5\\x00(time_origin.\\xDA\\x00\\x0482!b(t.rum.schem=|\\x18\"0.23.0:I\\x00\\x00s.\""
		"\\x01\\x1020.80\r\\x01\\x10745066u\\x00(next_hop_pr\t\\xA1\\x08\":\":O\\x004domain_lookup_\\x05]\\x04\":~X\\x0065\\x00\\x08end\\x863\\x00\\x18connect\\x9Eb\\x00\\x11/\\x92\\\\\\x00\\x18secure_\r4\\x08ion\\x11f\\x0006\\x0F\\x01-\\xFDb\\x1E\\x00\\x14sponse~\\x1F\\x00\\x92\\x93\\x00\\x10redir\\x1D\\xF0B\\x8A\\x00\r\\x1F\\x05M:\\x1D\\x00\\x14workerZ\\x87\\x00\\x10fetch\\x11\\x1C~\\xA8\\x018render_blocking\\x017\\x14tus\":\"\\x11\\x12:\r\\x02\\x14transf\\x01|\\x0Cize\">\\x98\\x000encoded_body_\t\""
		"\\x0C60146d\\x01\\x04deZ%\\x00-}(.server_tim\\x01\\x92@hint\":\"received\",\\x15(\\x0Ctrac%\\xD4\\x00tE\\xC5\t(\\x10from_\tB\\x08\",\"\\x05#\\x00.\\x89Kx343452934a6cc116081301249311005\\x19.$s_sampled\"\\x8D\\x04N'\\x04,w3c_resource\r\\xAB\\x00s\\x110m\\xAE\\x18applicaAo\t\\x83<ea7c4b59f27d43eb\\x9D\\xFB\\x10frame:\\xFD\\x0487feee60dcfd29b5\\x01/\\x11Z\\x10gent.\\xB5\\x83d\"1.337.9.20260504-112723\",61\\x00\\x04ty\\x85\\xFD$javascript\\x19!\\x00b\\xAD\\x83\\x00s%,|"
		"5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-\\x81\\xA3\r\\xBC\\x00i\\xAD\\xE1)\\x13\\x001\\xB1\\xC2\\xD03578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\",\"device.orienta![L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":960,\\xD5\\x8A\\x14window67\\x001#\r\\x1C\\x118\\x08842B8\\x00\t}\\x1C_pixel_rA\\x024\":1.25,\"page.u\\xA6T\\x06\\x04ac\\x01\\xE4$s/Catalog.\t\\x10a\\x95\\x01I1L\\x00_%\\xB6J0\\x02\\x05&$detected_n\\xC9|\\x00/"
		"\\xD9\\xB3\tO^_\\x00\\x0Ctitl\\xE1\\xADPJPetStore Demo\",\"view:}\\x008ab608c28803dc1aA|\\x05&\\xFE\\xEC\\x00\\x01\\xEC\\x05I\\xC6\\xC6\\x00\\x04},\\xFE{\\x08\\x9A{\\x08\\x003\\xAE{\\x08uzNV\\x04\\xAD\\x03\\x91I\\xAA=\\x01\\x10ruxit\\x85\\x18pjs_ICA15789NPRTUVXfqrux_10337\\x89 \\x89\\x1F\\x0C.js\"\\xFE\\xA2\\x08\\xFE\\xA2\\x08\\x0E\\xA2\\x08\\x0016 \\x06\\xE6\\x93\\x08:I\\x00R\\x84\\x08:$\\x00\\x1A\\x12\\x08\\xC1\\xF8\\x00r\\x12\\xD7\\x08Z \\x00\\xE5\\x86\\x001>\\x1E\\x00\\xFEW\\x08\\xD2W\\x08"
		":\\xA2\\x00\\xFEH\\x08\\x9EH\\x08Bw\\x00\\xFE9\\x08z9\\x08\\x1013290\\x86;\\x08\\x14362149&\\x15\\x08\\xE9\\xFB\\xED\\x92\\x1E=\\x08@not_available_htt\\x0E|\\x0BmlVG\\x08\\x012\\x04se\\xE1!N\\xA7\\x03\\xFE\\xFD\\x07\\xFE\\xFD\\x07\\xFE\\xFD\\x07\\xFE\\xFD\\x07\\xFE\\xFD\\x07\\xFE\\xFD\\x07\\xFE\\xFD\\x07\\xFE\\xFD\\x07\\xFE\\xFD\\x07\\xFE\\xFD\\x07\\xFE\\xFD\\x07\\xFE\\xFD\\x07\\xFE\\xFD\\x07\\xFE\\xFD\\x07\\xFE\\xFD\\x07\\xFE\\xFD\\x07\\xE2\\xFD\\x07\\x04im\\x0EQ\r"
		"NS\\x04\\x8D\\x8E\\xCA\\xFA\\x07Timages/logo-topbar.gif\\xFE\\xDA\\x07\\xFE\\xDA\\x07\\xE9\\xDA\\x08.19\r\\x01\\x1025494\\xFE\\xE9\\x07\\xF5\\xE9rX\\x00V\\xF8\\x07r3\\x00F\\x07\\x08\\x92/\\x00\\x1E\\x16\\x08r-\\x00\\xFE%\\x08\\xD6%\\x08r\\x93\\x00\\xFE4\\x08\\xA24\\x08z\\x86\\x00ZC\\x08\\x0Cnon-\\xFE\\x80\\x10\\x1E\\x80\\x10\\x0C38086w\\x02J\\x80\\x10\t"
		"%m\\x83VC\\x08\\xEE\\x80\\x10\\x12\\x80\\x10x3881223f689a154f0643b8963dcd5a3\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xA2\\x80\\x10\\xFE\\x83\\x08j\\x83\\x08\\x0Ccart\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|"
		"\\x08\\xFE|\\x08.|\\x08\\x009:m\\x1BJz\\x08\\x01#\\xFEx\\x08vx\\x08|"
		"570492c08c75f09b297394998fb21c09\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\xFE\\xF8\\x18\\x9E\\xF8\\x18\\xFEx\\x08jx\\x08\\x1Cseparato\\xFE\\xF9\\x10\\xFE\\xF9\\x10\\xFE\\xF9\\x10\\xFE\\xF9\\x10\\xFE\\xF9\\x10\\xFE\\xF9\\x10\\xFE\\xF9\\x10\\xFE\\xF9\\x10\\xFE\\xF9\\x10\\xFE\\xF9\\x10\\xFE\\xF9\\x10\\xF"
		"E\\xF9\\x102\\xF9\\x10\\x004\\x86}\\x08\\x01#\\xFE}\\x08v}\\x08|348f55f2a3c0905ed28d9435f9189a91\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\x0E}\\x08\\x14m_fish\\xFE\\xF8\\x10\\xFE\\xF8\\x10*\\xF8\\x10\\x003\\x1As\\x19\\x1085098:\\xFD\\x16\\xEA]!rX\\x00Zt\\x19n\\x8B\\x00Jt\\x19\\x8E/\\x00\""
		"t\\x19n-\\x00\\xFEt\\x19\\xDAt\\x19n\\x93\\x00\\xFEt\\x19\\xA6t\\x19v\\x86\\x00\\xFEt\\x19\\x8At\\x19\\x0427:-\"J\\xF9\\x10\\x05$\\xFE}\\x08v}\\x08|060253210f8790b19f045d76c7a63836\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\x16}\\x08\\x0Cdogs\\xFE}\\x08\\xFE}\\x08*}\\x08\\x0E\\xE4,\\x04er\"z3\\xEEp\\x08:K\\x00Zc\\x08:&\\x00JV\\x08Z\""
		"\\x00\"I\\x08: \\x00\\xFE<\\x08\\xDA<\\x08:\\x86\\x00\\xFE/\\x08\\xA6/\\x08By\\x00\\xFE\"\\x08\\x8A\"\\x08\\x003>\\x884J\"\\x08\\x05$\\xFE\"\\x08v\"\\x08x78c4449186f15ce3a8d1129d5513f44\\x0EE%\\x1AB2\\xFE\\x142\\xFE\\x142\\xFE\\x142\\xFE\\x142\\xFE\\x142\\xFE\\x142\\xFE\\x142\\xFE\\x142\\xFE\\x142\\xFE\\x142\\xFE\\x142\\xFE\\x142\\xFE\\x142\\xFE\\x142\\xFE\\x142\\xFE\\x142\\xFE\\x142v\\x142\\xFE\\x1C\\x19n\\x1C\\x19 m_reptile\\xFE&\\x08\\xFE&\\x08.&\\x08\\x006\\x1A\\xA3\\x10\\x009\\xFE\\x17*"
		":\\x17*nX\\x00Z@\\x08n3\\x00JM\\x08\\x8E/\\x00\"Z\\x08n-\\x00\\xFEg\\x08\\xDAg\\x08n\\x93\\x00\\xFEt\\x08\\xA6t\\x08v\\x86\\x00\\xFE\\x81\\x08\\x8E\\x81\\x08\\x009"
		":\\x19\\x13N\\x81\\x08\\x01$\\xFE\\x81\\x08z\\x81\\x08x10e236f5ffa28765b140d44712ee9b4\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\x16\\xA3\\x10\\x08cat\\xFE}\\x08\\xFE}\\x08.}\\x08\\x008\\x1A}\\x08\\xFE \\x19> \\x19nX\\x00Z}\\x08n3\\x00J}\\x08\\x8E/\\x00\"}"
		"\\x08n-\\x00\\xFE}\\x08\\xDA}\\x08n\\x93\\x00\\xFE}\\x08\\xA6}\\x08v\\x86\\x00\\xFE}\\x08\\x8A}\\x08\\x08289\\x82\\x932\\x05$\\xFE}\\x08v}\\x08|99b04d0d3be1cf52ac7ae8a395db1efa\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xEA}\\x08\\x004\\xAE\\x12C\\xFE\\xFE\\x10v\\xFE\\x10\\x0Cbird\\xFE~\\x08\\xFE~\\x08&~\\x08\\x0026\\xF9\\x05\\xE6\\x1F\\x19:I\\x00R`\\x08"
		":$\\x00BQ\\x08Z \\x00\\x1AB\\x08:\\x1E\\x00\\xFE3\\x08\\xD23\\x08:\\x84\\x00\\xFE$\\x08\\x9E$\\x08Bw\\x00\\xFE\\x15\\x08\\x8E\\x15\\x08\\x005\\x8A5!\\x01$\\xFE\\x15\\x08z\\x15\\x08t816f19d7e450737bad8f89b94aa411\\xFE/2\\xFE/2\\xFE/2\\xFE/2\\xFE/2\\xFE/2\\xFE/2\\xFE/2\\xFE/2\\xFE/2\\xFE/2\\xFE/2\\xFE/2\\xFE/2\\xFE/2\\xFE/2\\xEE/2\\xFE\\x15\\x08\\xFE\\x15\\x08\\x1E\\x15\\x08\\x0E\\xAF)\\x10_icon\\xFE7!\\xFE7!\"7!\\x082.1\\x1A\\xA3S\\x1014901:\\x7F\\x06\\xEA%\\x08rX\\x00V4\\x08r3\\x00FC\\x08\\x92/"
		"\\x00\\x1ER\\x08r-\\x00\\xFEa\\x08\\xD6a\\x08r\\x93\\x00\\xFEp\\x08\\xA2p\\x08z\\x86\\x00\\xFE\\x7F\\x08\\x8A\\x7F\\x08\\x0443\\x86\\x94\\x10\\x05$\\xFE\\x7F\\x08v\\x7F\\x08x86a2d4a77c95efdf9919761e255ab39\\x0EHR\\xFE\\x92!\\xFE\\x92!\\xFE\\x92!\\xFE\\x92!\\xFE\\x92!\\xFE\\x92!\\xFE\\x92!\\xFE\\x92!\\xFE\\x92!\\xFE\\x92!\\xFE\\x92!\\xFE\\x92!\\xFE\\x92!\\xFE\\x92!\\xFE\\x92!\\xFE\\x92!\\xDE\\x92!\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\x1E\\x7F\\x08\\x0E\\xB1)"
		"\\xFE\\x7F\\x08\\xFE\\x7F\\x08B\\x7F\\x08\\x1A\\x13\\x19\\xFE\\x90!6\\x90!\\x002r\\xFFI^\\x7F\\x08j\\x8B\\x00N\\x7F\\x08\\x8A/\\x00&\\x7F\\x08j-\\x00\\xFE\\x7F\\x08\\xDE\\x7F\\x08j\\x93\\x00\\xFE\\x7F\\x08\\xAA\\x7F\\x08r\\x86\\x00\\xFE\\x7F\\x08\\x8E\\x7F\\x08\\x006\\x86\\x90!\\x05$\\x14reques\\xFE\\xA5K^"
		"\\xA5Kx0106cd0c159eb4f1e7918889de78244\\x0E\\xD6X\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\x0E\\x8D!\\xFE\\x7F\\x08\\xFE\\x7F\\x08>\\x7F\\x08\\x003\\x1A\\xFE\\x10\\xFE\\xA2d6\\xA2d\\x002rX\\x00Z\\x7F\\x08n\\x8B\\x00J\\x7F\\x08\\x8E/\\x00\""
		"\\x7F\\x08n-\\x00\\xFE\\x7F\\x08\\xDA\\x7F\\x08n\\x93\\x00\\xFE\\x7F\\x08\\xA6\\x7F\\x08v\\x86\\x00\\xFE\\x7F\\x08\\x8E\\x7F\\x08\\x000\\x8A\\x7F\\x08\\x01$\\xFE\\x7F\\x08v\\x7F\\x08xeec7500495dcb0651786aafded90a82\\x0E\\xFDd\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\"
		"x7F\\x08\\x1E\\x8D2\\xFE\\x83\\x08\\xFE\\x83\\x08B\\x83\\x08\\x1A\\x02\\x0F\\xFE\\x15*6\\x15*\\x002r\\x8DA^\\x83\\x08j\\x8B\\x00N\\x83\\x08\\x8A/\\x00&"
		"\\x83\\x08j-\\x00\\xFE\\x83\\x08\\xDE\\x83\\x08j\\x93\\x00\\xFE\\x83\\x08\\xAA\\x83\\x08r\\x86\\x00\\xFE\\x83\\x08\\x8A\\x83\\x08\\x0466\\x86\\x81\\x19\\x05$\\xFE\\x83\\x08z\\x83\\x08xd5d0691ccd800f0f220556020af570c\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xEE\\x15*\\x1A\\x15*\\x12\\x12*\\xFE\\x80\\x08\\xFE\\x80\\x08>\\x80\\x08"
		":\\x86A\\xEE\\xF4!:K\\x00Zf\\x08:&\\x00JY\\x08Z\"\\x00\"L\\x08: \\x00\\xFE?\\x08\\xDA?\\x08"
		":\\x86\\x00\\xFE2\\x08\\xA62\\x08By\\x00\\xFE%\\x08\\x8A%\\x08\\x004\\x8AZK\\x05$\\xFE%\\x08v%\\x08x6135b4ea1935207e91677816692dbfa\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\xFE\\xA8\\x10\\x0E\\xA8\\x10\\x0Cspla\\xFE\\xD6S\\xFE\\xD6S*\\xD6S\\x002r3A\\xEE.\\x08n\\x8BAZ;"
		"\\x08n3\\x00JH\\x08\\x8E/\\x00\"U\\x08n-\\x00\\xFEb\\x08\\xDAb\\x08n\\x93\\x00\\xFEo\\x08\\xA6o\\x08v\\x86\\x00\\xFE|\\x08\\x8A|\\x08\\x10360976\\xBF4N5C\t&\\xFE\\x80\\x08v\\x80\\x08xd2f3d162109b8290790e1f716620412\\xFEW\\\\\\xFEW\\\\\\xFEW\\\\\\xFEW\\\\\\xFEW\\\\\\xFEW\\\\\\xFEW\\\\\\xFEW\\\\\\xFEW\\\\\\xFEW\\\\\\xFEW\\\\\\xFEW\\\\\\xFEW\\\\\\xFEW\\\\\\xFEW\\\\\\xFEW\\\\\\x8EW\\\\>\\x84u\\x0E\\xE2O4elf_monitoring\\x1E\\x8BuJ*\\x00\\x1Cinternal\\x11#\\x12\\x15\\x85\\x0Etz\\x00e.\\xBA\\x85\\x08991"
		":\\x07;\\x1A\\x03\\x81f\\xC7\\x85\\x11!\\x08fm_*@\\x87 timestamp2^\\x00\\x0C82,\"\\x0EJ\\x834\":2000,\"messag\\x0E\\xB0\\x7F\\x12U\\x81\\x1C31483296\\x12\\x07\\x7F\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0Eg\\x82\\x14 JavaS\\x12/\\x820 tag\\\\\",[]]\"}]&"
		"\\\\\\x82\\xFE\\xE7\\x82\\xFE\\xE7\\x82\\xFE\\xE7\\x82\\xFE\\xE7\\x82\\xFE\\xE7\\x82\\xFE\\xE7\\x82\\xFE\\xE7\\x82\\xFE\\xE7\\x82\\xFE\\xE7\\x82\\xFE\\xE7\\x82\\xFE\\xE7\\x82\\xFE\\xE7\\x82\\xFE\\xE7\\x82\\xFE\\xE7\\x82\\xFE\\xE7\\x82\\x96\\xE7\\x82\\x16\\x88\\x8A\"b\\x8B\\x08189r\\x93\nBs\\x8B\\x10navig\\x0E\\x0B\\x85\\x0E\\xBE\\x84>T\\x05\\xF6y\\x8Bb\\xC6\\x84\\x04ne\\xFE~\\x8B\\xF6~\\x8B\\x0006/\\x0BN\\xA7\r\\x0E\\x8D\\x80\\x08/1.\\x0E\\xB3\n.8Y6z\r\\xC5`\\x10\":48.n\\x06\\x0C64\\x00\\x12R\r"
		"z2\\x00:\\xAD\r\\x9A.\\x00\\x8EZ\\x00\\xDA\\xAB\r\\x0C50.6\\x1A\\x0C(\\x12\n9\\x001:\\xC5h\\x00r:\\x82\\x8B\\x0489z:7\\x1A\\xB1\\x8B\\x05\\xB3\\x0890.vi&\\x1Ar\\x8B-n\\x04156/\\x00\\x005:#&\"\\xFB\r\\x05]z<\\x01\\xA6\\xB2\\x8BzI\\x00\\xFA\\xB1\\x8B\\x0460>\\xE87J\\xB4\\x8B\\x0457>%\\x00J\\xE9\r\t%\\xFE\\xE8\rv\\xE8\r,6cc545252a28\\x0E\\x0F'807d3698bf2ce10d\\x0E\\x88\\x8A^\\x10'\\x12\\xFA\\x88\\x16\\x9F\\x8B\\xCE\\x84\\x88\\x18Account\\x1Ap\\x89\\x10;jses\\x0E\\xEF\\x90\\xB8id="
		"A20E81FDE550704D9F8A1FE4C490C476?signonForm=Zc\\x90\\x0E?\\x84\\xB9\\x0F\\x0E8\n\\x04in&>\\x8CN\\x1C\\x05\\x19.\\x1Es\n.-\\x04\\x1A\\xD8\\x8B\r%\\x00e\\x0E\\x1E\\x8A*\\x83]\\x14unload\\x16P\nQ\\xDC:\\x99\\x042#\\x00E\\xCF:!\\x00\\x08dom\\x16\\xF5\n\\xA1k\\x00v\\x12\\xE6\n\\x009>\\x01\\x19\\x01$\\x1Ccontent_\\x01r\\x00e:t\\x00\\x08180~\\x104V@\\x00\\x05\\x91\\x08182~\\xFD\\x04\\x08_co\\x0E\\xB7\\x8D\\x00t\\x01\\x9F\\x0485r.\\x00\\x01\\xA06\\x12\\x01\\xC5\\xD0.{\\x04:\\x85=\\x1D2\r"
		"\\x90v\\x00\\x07\\x95\\x1EEH\\x0C\":1,1\\xA0\\x08ion1\\xB2\\x08har\\x0E,\\x19-\\xB9\\x05\\x19\\x04ab!\\xA4\\x01\\xC4\\x08\"ex\\x0E\\x97\\x92\\x04ng\\x1Eq\\x8B\\x00s\\x0E\\xFB2\\x0E\\x1B\\x93\\x14number\\x05T\\x1A1\\x0C\\xFE\\x84\\x0B\\xFE\\x84\\x0B\\xFE\\x84\\x0B\\xFE\\x84\\x0B\\xFE\\x84\\x0B\\xFE\\x84\\x0B\\x0E\\x84\\x0B<battery.level\":1\\x0E\\x94\r\\x16\t\\x8E\\x1Ek\\x8E\\xFE\\x86\\x8E\\xFE\\x86\\x8E\\xFE\\x86\\x8E\\xFE\\x86\\x8E\\xFE\\x86\\x8E\\xFE\\x86\\x8E\\xFE\\x86\\x8E\\xD6\\x86\\x8E\\x08]"
		"}}", 
		LAST);

	web_custom_request("rb_bf32608msb_12", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=582726293&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553129822$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$rt="
		"1-1779553129822%3Bhttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fcss%2Fjpetstore.css%7Cb121e0f0g0h0i0m0v6014w6014I11M-68001081V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7Cb121e0f0g0h0i0m0v3808w3808E1F17220O287P60I7M761912964V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcart.gif%7Cb121e0f0g0h0i0m0v96w96E1F288O16P18I7M-1891668168V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fseparator.gif%7Cb121e0f0g0h0i0m0v46w46F18N2O1P18I7M688934799V0%7Chttp%3A%2F"
		"%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Ffish.gif%7Cb121e0f0g0h0i0m0v271w271E1F390O26P15I7M-302972535V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fdogs.gif%7Cb122e0f0g0h0i0m0v306w306E1F450O30P15I7M1822807848V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Freptiles.gif%7Cb122e0f0g0h0i0m0v398w398E1F780O52P15I7M-620539332V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fcats.gif%7Cb122e0f0g0h0i0m0v289w289E1F420O28P15I7M1231591079V0%7Chttp%3A%2F%2Floc"
		"alhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fbirds.gif%7Cb122e0f0g0h0i0m0v251w251E1F495O33P15I7M-1591609649V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Ffish_5Ficon.gif%7Cb122e0f0g0h0i0m0v439w439E1F800O40P20I7M-1858137608V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fdogs_5Ficon.gif%7Cb122e0f0g0h0i0m0v468w468E1F920O46P20I7M-39000523V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcats_5Ficon.gif%7Cb122e0f0g0h0i0m0v408w408E1F860O43P20I7M-246443466V0%7Chttp%3A%2F%2Flocal"
		"host%3A8080%2Fjpetstore%2Fimages%2Freptiles_5Ficon.gif%7Cb122e0f0g0h0i0m0v669w669E1F1560O78P20I7M355865488V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fbirds_5Ficon.gif%7Cb123e0f0g0h0i0m0v471w471E1F1000O50P20I7M1303219330V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsplash.gif%7Cb123e0f0g0h0i0m0v36097w36097E1F124250O350P355Q357R347I7M-266518883V0$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi="
		"GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553129969_999$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$time=1779553133113", 
		LAST);

	web_add_cookie("dtSaf4o018pw=true%7CC%7C-1%7Cfish_icon%7C-%7C1779553136594%7C553129969_999%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%7C%7C%7C%7C; DOMAIN=localhost");

	web_url("Catalog.action_2", 
		"URL=http://localhost:8080/jpetstore/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf32608msb_13", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=231292655&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1779553136599%7C_wv_%7CAAI%7C1%7CfIS%7C6547%7CfID%7C1%2C1%7C7%7C_event_%7C1779553137107%7C_viewend_%7Cinp%7C0%7Csvn%7C%2Fjpetstore%2Factions%2FCatalog.action%7Csvt%7C1779553129822%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1779553137107%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$rId=RID_1078536306$rpId=1289470723$domR=1779553130008$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553129822$tvm="
		"i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553129969_999$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$time=1779553137111", 
		LAST);

	web_custom_request("rb_bf32608msb_14", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=2&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=2523482188&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553137119&ss=1&qc=2105725586&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xBC-D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"view.fo\\x11?(_time\":7292\r\\x1C\\x0Cback\t[\r\\x1C\\\\0,\"error.http_4xx_count\":\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!\"8us\":\"reported\",\\x05\\x18)]:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x14217.5,\\x05\\x12\\x1Cloading_\\x01U!w "
		"complete\"\t\\x1F\\x01\\x17>l\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-u\\x186547.19\r\\x01\\x0425\\x01\\x91\\x14id.dur%2\t\\xB4\\x10id.na!\\xBF,\"pointerdown\\x01\\x9C$id.process\r\\xBE\\x08rt\"\\x01S\\x008\\x05\\xD96\\x1E\\x00\\x08end6\\x1C\\x00@cancelable\":true,\\x05\\xD48ui_element.tag_\rx\\x08IMG\rp\\x1D \\xA8xpath\":[\"html\",\"body\",\"div[@id=\\\\\"Content\\\\\"]2\\x17\\x00\\x10Main\\\\:\\x14\\x00\\x18SidebarZ\\x17\\x002I\\x00,a\",\"img\"],\"fB\\xCD\\x01\\x00pr}"
		"\\x01\\x00pR\\xB3\\x01\\x04in\\x1D\\x184below_thresholAV\\x04lc\\x1D\\x1F]n\\x01\\x186n\\x02\\x041,\\x05\\x15\\x04st9\\xE0Me\\x01,A\\x16-\\xF6\\x18181.399\r/$ize\":12387\r\\x12\\x14url\":\"A\\xFB\\xB8://localhost:8080/jpetstore/images/splash.gif\",\\x05h\\x1Cresource\tq2J\\x02\\x01\\x87=\\xC1Hrender_delay\":94.80\r\\x01\\x1074506\t\\x9F:O\\x00\t,\\x0C33.5M\\xB4\\x14776482\\x15-\\x05R\\x89m\\x1D\\xFC\\x1DuBV\\x02:\\x95\\x00\\xFEV\\x02.V\\x02Aj\\x00I!'>X\\x02\\x15\\x192Z\\x02MV long_task"
		"!\\xCAi\\xF9\\x0Cnot_=\\xFB\\x0Cttfb\\x19\\x1D>\\x19\\x00\\x8Dn\\x0C89.1-O\\x18149012,\t8\\x0Cwaita\\xAF9\\x9A\\x0C48.6-N\\x14925494\r*\\x10cache\\x1D(\\x000\r\\x18\\x08dnsJ\\x16\\x00\\x14connec\\xA5h\\x19[\\x113\\x18request\\x1D\\x1A\\x0C40.4\r\\x9F<2235174,\"perform\\x81\\x19\\x14.activ\\x85\\x85\\xA1\\x17\\x00r\\xC9\\x08\\x14view.s\\x01L(nce_number\"A\\xF8\\x05\\x19\\x08preMSI\\x01X0,\"characteristics.has_\\x01,\\x1C_summary\\x91{\\x10navig\\x05n\\xC1\\xDF\\x01r\\xA5\\x89\\x04ex\\x018\\x0Cng\","
		"2\"\\x00\\x04yp\\xA1\\xA6\\x08hara\\xA0.\\xB5\\x00\\x01x\\\\_origin\":1779553129822,\".\\x97\\x03:\\x1B\\x0090\\x007\\xE5!,dt.rum.schem\\xFD\\xC4\\x18\"0.23.0\\x81\\xCD\t!\\x14applic\t\\xB7Xid\":\"ea7c4b59f27d43eb\",\\xF5\\xB6\\x10frame:\\xB8\\x0787feee60dcfd29b5\\x01/\\x11Z\\x00g\\xA1\\x82\">\\x08\\\\\"1.337.9.20260504-112723\\x1D\\x8B\\x051-\\x1A$javascript\\x19!\\x00b\\x1A>\\x08\\x00s\\x05\\xA9|5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-="
		"\\x16\\x00i\\x1A\\x9C\\x08)\\x135k\\xD03578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\",\"device.orientaA\\xCF<\":\"landscape-priE8\\x15)Dbattery.level\":100\\x15\\x1B$screen.wid\\xC1\\xA8\\x0C1536>\\x1B\\x00(height\":9609\\xAA\\x14window67\\x001>\r\\x1C\\x118\\x08842B8\\x00\t\\xC1\\x1C_pixel_rA\\x1DL\":1.25,\"page.url.ful\\x8E\\xE2\\x05\\x00ae\\xCE s/Cataloge\\x93\\x00o\\xE1\\xF9\\x05I1g\\x00_%\\xD1JK\\x02\\x05&\\x1Cdetected\\xF1\\xCA\\xDDAv_\\x00\\x08tit\\x0E\\x1A\\x08\\x14\"JPetS\\xC1q\\x14 Demo\"\\x1A>"
		"\n6}\\x00<ab608c28803dc1a3\\x11&\\xFE\\xEC\\x00\\x01\\xEC\\x00v\\x81s\\xC6\\xC6\\x00\\x04},\\xFEQ\\x0B:Q\\x0B%N&\\x90\\x0B\\x8D\\xE3\\x0C7293-\\xD9\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xFEQ\\x0B\\xD2Q\\x0BN \\x0B\\xC1j\\x00_: \\x0B\\x01\\x14N`\\x0B\\xFE8\\x0B\\xFE8\\x0B*8\\x0B\\x043,"
		"\\x1E\\xBD\n\\xFE8\\x0B\\xFE8\\x0B\\xFE8\\x0B\\xFE8\\x0B\\xFE8\\x0B\\xFE8\\x0B\\xFE8\\x0B\\xFE8\\x0B\\xFE8\\x0B\\xFE8\\x0B\\xFE8\\x0B\\xFE8\\x0B\\xFE8\\x0B\\xFE8\\x0B\\xF28\\x0B\\x08]}}", 
		LAST);

	web_add_cookie("rxvtf4o018pw=1779554937217|1779553123580; DOMAIN=localhost");

	web_add_cookie("dtPCf4o018pw=1$553137160_807h-vGRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0e0; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_15", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=3310261266&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7Cfish_icon%7CC%7C-%7C553129969_999%7C1779553136594%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%7C%7C%7C%2Fjpetstore%2Factions%2FCatalog.action%7C1779553129822%2C1%7C1%7C_load_%7C_load_%7C-%7C1779553136598%7C1779553137220%7Cdn%7C81%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%2C2%7C3%7C_event_%7C1779553136598%7C_vc_%7CV%7C604%5Epc%7CVCD%7C1021%7CVCDS%7C1%7CVCS%7C68"
		"3%7CVCO%7C1694%7CVCI%7C0%7CTS%7C1%7CVE%7C491%5Ep278%5Ep67947%5Eps%5Es%23Banner%7CS%7C603%2C2%7C4%7C_event_%7C1779553136598%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C66%2C2%7C2%7C_onload_%7C_load_%7C-%7C1779553137220%7C1779553137220%7Cdn%7C81%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1779553136598%7C_view_%7Csvn%7C%2Fjpetstore%2Factions%2FCatalog.action%7Csvt%7C1779553129822%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk"
		"0%5Esh0$dO=localhost,$rId=RID_752904802$rpId=-1621680362$domR=1779553137216$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553136598$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$nt=a0b1779553136598e10f10g10h10i10k13l505m506o604p605q611r618s622t622u4950v4650w4650M-1621680362V0$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewCategory%3D%26categoryId%3DFISH$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi="
		"GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553137160_807$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewCategory%3D%26categoryId%3DFISH$time=1779553138308", 
		LAST);

	web_custom_request("rb_bf32608msb_16", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=5&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=678905888&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553139248&ss=0&qc=636865332&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xB6\\xD9\\x01D{\"data_version\":2,\\x05\\x11\\xF4,\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"start_time\":1779553137127,\"duration\":0,\"performance.initiator_type\":\"link\",\"characteristics.has_request\":true,\"url.full\":\"http://localhost:8080/jpetstore/css/jpetstore.css\",\"network.protocol.name\"\tL\\x08\",\".\\xA5\\x00(time_origin\\x1D\\xDAD6598,\"dt.rum.schem=|\\x18\"0.23.0:I\\x00\\x00s=\""
		"\\x14529.19\r\\x01\\x0C25496t\\x00(next_hop_pr\t\\xA0\\x08\":\":N\\x004domain_lookup_\\x05\\\\\\x00\"~W\\x0064\\x00\\x08end\\x822\\x00\\x18connect\\x9A`\\x00\\x11.\\x8EZ\\x00\\x18secure_\r3\\x08ion\\x11d\\x0006\\x0B\\x01-\\xF8b\\x1E\\x00\\x14sponse~\\x1F\\x00\\x8E\\x92\\x00\\x10redir\\x1D\\xEDB\\x89\\x00\r\\x1F\\x05L:\\x1D\\x00\\x14workerZ\\x86\\x00\\x10fetch\\x11\\x1Cz\\xFA\\x018render_blocking\\x016\\x14tus\":\"\\x11\\x12:\\x07\\x02\\x14transf\\x01{\\x0Cize\">\\x97\\x000encoded_body_\t\""
		"\\x0C60146b\\x01\\x04deZ%\\x00-{(.server_tim\\x01\\x92@hint\":\"received\",\\x15(\\x0Ctrac%\\xD2\\x00tE\\xBF\t(\\x10from_\tB\\x08\",\"\\x05#\\x00.\\x89Dx343452934a6cc116081301249311005\\x19.$s_sampled\"m\\xFDN \\x04,w3c_resource\r\\xAB\\x00s\\x110m\\xA7\\x18applicaAm\t\\x83<ea7c4b59f27d43eb\\x9D\\xF4\\x10frame:\\xF6\\x04@ee3e7784c03bfdd1\"\\x95\\x01\\x14agent.\\xB5|\\\\\"1.337.9.20260504-112723>1\\x00\\x04ty\\x85\\xF6$javascript\\x19!\\x00b\\xAD|\\x00s%,|5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t"
		"0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-\\x81\\x9C-\\x16\\x00i\\xAD\\xDA)\\x13\\x001\\xAD\\xBB\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01w,evice.orient%[L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":960,\\xD5\\x83\\x14window67\\x001#\r\\x1C\\x118\\x08842B8\\x00\tb\\x1C_pixel_r\\x01\\xA74\":1.25,\"page.u\\xA6M\\x06\\x04acA?$s/Catalog.\t\\x10<?viewCategory=&c\r\n\\x18Id=FISHa\\xB3\\x01g1j\\x00_%\\xD4JN\\x02\\x05&$detected_n\\xC9\\x93\\x00/\\xD9\\xCA\tm>}"
		"\\x00\\x11_\\x0Ctitl\\xE1\\xC4@JPetStore Demo\",\"\\x01\\x9D>}\\x0046dccaae4cd37c7a\\xC6\\x05&\\xFE\n\\x01\\x86\n\\x01\\x05g\\xC6\\xE4\\x00\\x04},\\xFE\\xB0\\x08\\xFE\\xB0\\x08N\\xB0\\x08u\\xB6N\\x92\\x04\\xAD?\\x91\\x85\\xAA[\\x01\\x10ruxit\\x85Tpjs_ICA15789NPRTUVXfqrux_10337\\x89\\\\\\x89[\\x0C.js\"\\xFE\\xD7\\x08\\xFE\\xD7\\x08\\x16\\xD7\\x08\\x003\\x1A\\xD6\\x08\\x0C8509\\xFE\\xD7\\x08*\\xD7\\x08jW\\x00Z\\xD7\\x08j2\\x00\\x1Av\\x08\\xE1^\\x00r\\x1A7\t\\x8A.\\x00\\xE5\\xF9\\xE1\\xC0j,"
		"\\x00\\xFE\\xD7\\x08\\xDA\\xD7\\x08j\\x92\\x00\\xFE\\xD7\\x08\\xA6\\xD7\\x08r\\x85\\x00\\xFE\\xD7\\x08z\\xD7\\x08\\x1013290\\x86\\xD9\\x08\\x0C3621\\x0Em\\x0Bm\\x9CV\\xDB\\x08@not_available_htt\\x0E\\x13\\x0C\\x112\\x12\\xC2\\x08\\x0E\\xB7\n.\\xE5\\x08\\x012\\x04se\\xE1\\xBFN\t"
		"\\x04\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\xD2\\x9B\\x08\\x04im\\x0E+\\x0EN\\x8F\\x04\\x8D\\xCA\\xCA\\x98\\x08Timages/logo-topbar.gif\\xFEx\\x08\\xFEx\\x08\\x1Ax\\x08\\x0E\\xCD\\x0B\\x04er\"\\\\\\x12\\xEEC\\x11:K\\x00Z`\\x08:&\\x00JT\\x08Z\"\\x00\"H\\x08: \\x00\\xFE<\\x08\\xDA<\\x08"
		":\\x86\\x00\\xFE0\\x08\\xA60\\x08By\\x00Z$\\x08\\x0Cnon-\\xFE\\xFF\\x10\\x1E\\xFF\\x10\\x0C3808\\x82\\xFF\\x10\t%m(V$\\x08\\xEE\\xFF\\x10\\x12\\xFF\\x10x3881223f689a154f0643b8963dcd5a3\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\xFE\\xFF\\x10\\x92\\xFF\\x10\\xFEd\\x08jd\\x08\\x0Ccart\\xFE]"
		"\\x08\\xFE]\\x08*]\\x08\\x0460\t\\x01\\x10149016@\\x06\\xEEi\\x08jW\\x00Zu\\x08j2\\x00J\\x81\\x08\\x8A.\\x00\"\\x8D\\x08j,\\x00\\xFE\\x99\\x08\\xDA\\x99\\x08j\\x92\\x00\\xFE\\xA5\\x08\\xA6\\xA5\\x08r\\x85\\x00\\xFE\\xB1\\x08\\x8A\\xB1\\x08\\x04966o\\x02J\\xAE\\x19\\x01#\\xFE\\xAD\\x08v\\xAD\\x08|"
		"570492c08c75f09b297394998fb21c09\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\xFE\\xAC\\x19\\x8E\\xAC\\x19\\xFE\\xAD\\x08j\\xAD\\x08\\x1Cseparato\\xFE\\x0F\\x11\\xFE\\x0F\\x11.\\x0F\\x11\\x006\\x1A\\x87\\x19\\x009\\xFE^\"6^\"jW\\x00^\\xB2\\x08f\\x89\\x00N\\xB2\\x08\\x86.\\x00&\\xB2\\x08f,"
		"\\x00\\xFE\\xB2\\x08\\xDE\\xB2\\x08f\\x92\\x00\\xFE\\xB2\\x08\\xAA\\xB2\\x08n\\x85\\x00\\xFE\\xB2\\x08\\x8A\\xB2\\x08\\x004\\x86\\xB2\\x08\\x01#\\xFE\\xB2\\x08v\\xB2\\x08x348f55f2a3c0905ed28d9435f9189a9\\x0E\\xBC!\\x12\\xCA\\x19\\x00.\\xFE^\"\\xFE^\"\\xFE^\"\\xFE^\"\\xFE^\"\\xFE^\"\\xFE^\"\\xFE^\"\\xFE^\"\\xFE^\"\\xFE^\"\\xFE^\"\\xFE^\"\\xFE^\"\\xFE^\"\\xFE^\"\\xFE^\"\\xFE^\"j^\""
		"\\xFE\\xB2\\x08n\\xB2\\x08\\x14m_fish\\xFEb\\x11\\xFEb\\x11*b\\x11\\x008\\x16a\\x11\\x1000745\\xFEb\\x11*b\\x11jW\\x00Z\\xB0\\x08j2\\x00J\\xB0\\x08\\x8A.\\x00\"\\xB0\\x08j,\\x00\\xFE\\xB0\\x08\\xDA\\xB0\\x08j\\x92\\x00\\xFE\\xB0\\x08\\xA6\\xB0\\x08r\\x85\\x00\\xFE\\xB0\\x08\\x8A\\xB0\\x08\\x0427:p\\x02Jc\\x11\\x05$\\xFE\\xB2\\x08v\\xB2\\x08|"
		"060253210f8790b19f045d76c7a63836\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\x14m_dogs\\xFE\\xB2\\x08\\xFE\\xB2\\x08.\\xB2\\x08\\x1Ah\\x0F\\xFE\\xE9*:\\xE9*jW\\x00^\\xB2\\x08f\\x89\\x00N\\xB2\\x08\\x86.\\x00&\\xB2\\x08f,"
		"\\x00\\xFE\\xB2\\x08\\xDE\\xB2\\x08f\\x92\\x00\\xFE\\xB2\\x08\\xAA\\xB2\\x08n\\x85\\x00\\xFE\\xB2\\x08\\x8A\\xB2\\x08\\x0430\\x86c\\x11\\x05$\\xFE\\xB2\\x08v\\xB2\\x08x78c4449186f15ce3a8d1129d5513f44\\x0E\\x19&\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xCEd\\x11\\x0E\\x98;\\xA2r<\\xFEd\\x11vd\\x11\\x18reptile\\xFE\\xB6\\x08\\xFE\\xB6\\x08\""
		"\\xB6\\x08\\x04306M \\xE2\\xBC\">I\\x00N\\x9A\\x08>$\\x00>\\x8C\\x08^ \\x00\\x16~\\x08>\\x1E\\x00\\xFEp\\x08\\xCEp\\x08>\\x84\\x00\\xFEb\\x08\\x9Ab\\x08Fw\\x00\\xFET\\x08\\x8ET\\x08\\x009\\x8A\\x18+"
		"\\x01$\\xFET\\x08zT\\x08x10e236f5ffa28765b140d44712ee9b4\\xFE\\x06\\x11\\xFE\\x06\\x11\\xFE\\x06\\x11\\xFE\\x06\\x11\\xFE\\x06\\x11\\xFE\\x06\\x11\\xFE\\x06\\x11\\xFE\\x06\\x11\\xFE\\x06\\x11\\xFE\\x06\\x11\\xFE\\x06\\x11\\xFE\\x06\\x11\\xFE\\x06\\x11\\xFE\\x06\\x11\\xFE\\x06\\x11\\xFE\\x06\\x11\\xFE\\x06\\x11\\xDA\\x06\\x11\\xFET\\x08\\xFET\\x08*T\\x08\\x08cat\\xFEP\\x08\\xFEP\\x08*P\\x08\\xFE\\xC6DR\\xC6D\\x003rW\\x00Vl\\x08n\\x89\\x00Fz\\x08\\x8E.\\x00\\x1E\\x88\\x08n,"
		"\\x00\\xFE\\x96\\x08\\xD6\\x96\\x08n\\x92\\x00\\xFE\\xA4\\x08\\xA2\\xA4\\x08v\\x85\\x00\\xFE\\xB2\\x08\\x8A\\xB2\\x08\\x0428:_>N\\xB8\\x19\\x01$\\xFE\\xB2\\x08v\\xB2\\x08|"
		"99b04d0d3be1cf52ac7ae8a395db1efa\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xFE\\xB2\\x08\\xEE\\xB2\\x08\\x16\\xB2\\x08\\x0Cbird\\xFE\\xB3\\x08\\xFE\\xB3\\x08.\\xB3\\x08\\x003\\xFEk\"Jk\"\\x0430nW\\x00Z\\xB3\\x08j\\x89\\x00J\\xB3\\x08\\x8A.\\x00\"\\xB3\\x08j,"
		"\\x00\\xFE\\xB3\\x08\\xDA\\xB3\\x08j\\x92\\x00\\xFE\\xB3\\x08\\xA6\\xB3\\x08r\\x85\\x00\\xFE\\xB3\\x08\\x8E\\xB3\\x08>\\xDB$N\\xB3\\x08\\x01$\\xFE\\xB3\\x08z\\xB3\\x08t816f19d7e450737bad8f89b94aa411\\xFE\\xCF3\\xFE\\xCF3\\xFE\\xCF3\\xFE\\xCF3\\xFE\\xCF3\\xFE\\xCF3\\xFE\\xCF3\\xFE\\xCF3\\xFE\\xCF3\\xFE\\xCF3\\xFE\\xCF3\\xFE\\xCF3\\xFE\\xCF3\\xFE\\xCF3\\xFE\\xCF3\\xFE\\xCF3\\xFE\\xCF3~\\xCF3>\\x95D\\x0E\\x83/"
		"4elf_monitoring\\x1E\\x9CDJ*\\x00\\x1Cinternal\\x11#\\x12\\xFAT\\x0E\\xF1Q\\x00e*\\x9EU\\x0471\\x0E\\xF8\r2\\x06\\x1A\\x1A\\xEEPf\\xABU\\x11!\\x08fm_*$W timestamp2^\\x00\\x0C76,\"\\x0E5S4\":2000,\"messag\\x0E}O\\x12@Q\\x1C31483296\\x12\\xB6N\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0ERR\\x14 JavaS\\x12\\x1AR0 tag\\\\\",[]]\"}]&"
		"xR\\xFE\\xD2R\\xFE\\xD2R\\xFE\\xD2R\\xFE\\xD2R\\xFE\\xD2R\\xFE\\xD2R\\xFE\\xD2R\\xFE\\xD2R\\xFE\\xD2R\\xFE\\xD2R\\xFE\\xD2R\\xFE\\xD2R\\xFE\\xD2R\\xFE\\xD2R\\xFE\\xD2R\\xFE\\xD2R.\\xD2R>-\\x05\\x0E6[ long_taskz/\\x05\\x0Es\\x1C\\xB9/\\x006\\x0E\\x95U~\\xDBZ\\x15[\\x00.\\x1A\\xA9T\\xA1\\xC4\\x04\",\\x1D\\x18\\x18attribu\\x0E1U\\x0E\\xD0\\x0C\\x14tainer\\x16\\xFDT\\x8A(\\x00\rV\\x8A*\\x00\\x08src\\x16 [\\x19\\x93V{\\x00\\x1ApW\\x161VbY\\x00\ry\\x14unknow\\x0E^"
		"U-\\x0B\\xFEm\\x05\\xFEm\\x05\\xFEm\\x05\\xFEm\\x05\\xFEm\\x05\\xFEm\\x05\\xFEm\\x05\\xFEm\\x05\\xFEm\\x05\\xFEm\\x05\\xFEm\\x05\\xFEm\\x05\\xFEm\\x05\\xFEm\\x05\\xFEm\\x05\\xFEm\\x052m\\x05Rw\n\\x1A\\x15`\"}$\\x08622n\\x15UB\\xFF`\\x10navig\\x0E\\x9EZ\\x81vN\\xCF\\x05\\x1A\\x17\\x10\\xB1\\xCD\\xAASXV;Z\\x82\\xB8Z\\x04ne\\xFE(a\\xF6(a\\x8A\\xB0$\\x0E\\xA0U\\x08/1.\\x0E\\xD2;.\\x00P6s\\x13%\\xAF\\x08\":1:\\xB6\\x1A\\x0E+\\\\f5\\x00\\x12N\\x13~3\\x00:\\xA9\\x13\\x9E/"
		"\\x00\\x92\\\\\\x00\\xDA\\xAB\\x13\\x04126\\xB6F\\x001:.,\\x00r:5a\\x08504nv.\\x15/\\x05\\xB4\\x085066\\xFA\\x1B\\x0046S&\\xFE\\xCD\\x13\\x96\\xCD\\x13~g\\x01\\xFAGa\\x08495:z\\x02JJa\\x0446>%\\x00J\\xCE\\x13\t%m\\xB8\\xFEKPZKP$d832b86621\\x0E;6@5783c8abf14594e71\\x0E\\x95\t^\\x88-\\x12r^\\x165a\\xEE\\xFC]\\x16\\xFC]Z\\xBAe\\x0E\\xFFX\\x99\\xDA\\x0E\\xAB\\x0F\\x04in&\\x9CaN\\xE7\\x04\\x19.\\x91\\xEA.\\xA5\\x03\\x1A\\xC6\t\r%\\x00e\\x0E\\xFF^*\\xF8S\\x14unload\\x16\\xC3\\x0Fq\\xF7"
		":\\xCC\\x012#\\x00E\\xD5:!\\x00\\x08dom\\x16h\\x10\\xA16\\x18ve\":603>\\xAER\\x01$\\x1Ccontent_\\x01r\\x00e:t\\x00\\x08604\\xA23\\x00\\x05\\x84\\x08611n-\\x06\tp\\x0E\\x07c\\x00t\\x01\\x91\\x0417n89\\x01\\x916\\x03\\x01\\xC1\\x8Bjqf\\x1D1\t\\x8Dv\\xBA\\x06u\\xE5\\x08cou\\x0E\\x0Ed\\x040,1\\x8F\\x08ion1\\xA1\\x08har\\x0EX`-\\xA8\\x05\\x19\\x04ab!\\x93\\x01\\xC1\\x08\"ex\\x0E\\xDDg\\x04ng\\x1E\\xA0`\\x10seque\\x0Eah number\""
		":1\\xFE\\xE6\\x10\\xFE\\xE6\\x10\\xFE\\xE6\\x10\\xFE\\xE6\\x10\\xFE\\xE6\\x10\\xFE\\xE6\\x102\\xE6\\x100battery.level\\xE1I\\x000>\\xB8c\\xFE\\xD3c\\xFE\\xD3c\\xFE\\xD3c\\xFE\\xD3c\\xFE\\xD3c\\xFE\\xD3c\\xFE\\xD3c\\xFE\\xD3c\\xC6\\xD3c\\x08]}}", 
		LAST);

	web_custom_request("rb_bf32608msb_17", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=3197537121&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553136598$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$rt="
		"1-1779553136598%3Bhttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fcss%2Fjpetstore.css%7Cb529e0f0g0h0i0m0v6014w6014I11M-68001081V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7Cb530e0f0g0h0i0m0v3808w3808E1F17220O287P60I7M761912964V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcart.gif%7Cb530e0f0g0h0i0m0v96w96E1F288O16P18I7M-1891668168V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fseparator.gif%7Cb530e0f0g0h0i0m0v46w46F18N2O1P18I7M688934799V0%7Chttp%3A%2F"
		"%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Ffish.gif%7Cb530e0f0g0h0i0m0v271w271E1F390O26P15I7M-302972535V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fdogs.gif%7Cb530e0f0g0h0i0m0v306w306E1F450O30P15I7M1822807848V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Freptiles.gif%7Cb530e0f0g0h0i0m0v398w398E1F780O52P15I7M-620539332V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fcats.gif%7Cb530e0f0g0h0i0m0v289w289E1F420O28P15I7M1231591079V0%7Chttp%3A%2F%2Floc"
		"alhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fbirds.gif%7Cb530e0f0g0h0i0m0v251w251E1F495O33P15I7M-1591609649V0$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewCategory%3D%26categoryId%3DFISH$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553137160_807$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewCategory%3D%26categoryId%3DFISH$time=1779553140318", 
		LAST);

	web_add_cookie("dtSaf4o018pw=true%7CC%7C-1%7CFI-SW-01%7C-%7C1779553143824%7C553137160_807%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewCategory%3D%26categoryId%3DFISH%7C%7C%7C%7C; DOMAIN=localhost");

	web_url("Catalog.action_3", 
		"URL=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf32608msb_18", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=4213780744&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1779553143829%7C_wv_%7CAAI%7C1%7CfIS%7C7003%7CfID%7C1%2C1%7C7%7C_event_%7C1779553143904%7C_viewend_%7Cinp%7C0%7Csvn%7C%2Fjpetstore%2Factions%2FCatalog.action%7Csvt%7C1779553136598%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1779553143904%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewCategory%3D%26categoryId%3DFISH$rId=RID_752904802$rpId=-1621680362$domR=1779553137216$tvn="
		"%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553136598$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewCategory%3D%26categoryId%3DFISH$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553137160_807$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewCategory%3D%26categoryId%3DFISH$time=1779553143907", 
		LAST);

	web_custom_request("rb_bf32608msb_19", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=2&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=2419476243&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553143916&ss=1&qc=1050054629&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\x902D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"view.fo\\x11?(_time\":7312\r\\x1C\\x0Cback\t[\r\\x1C\\\\0,\"error.http_4xx_count\":\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!\"8us\":\"reported\",\\x05\\x18)]:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x14646.69\r\\x01\\x102549,"
		"\\x05\\x1E\\x1Cloading_\\x01a!\\x83 complete\"\t\\x1F\\x01\\x17>x\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-\\x81\\x187003.10\t\\x01\\x001\\x05\\x90\\x14id.dur%=\t\\xBF\\x10id.na!\\xCA,\"pointerdown\\x01\\x9B$id.process\r\\xBD\\x08rt\"\\x01R\\x084.3\r\\xE3\\x0C851,\\x05\\xAB\\x1D(\\x08end\r&\\x005\t\\x1C<cancelable\":true\t\\x168ui_element.tag_\r\\x82\\x00A\rx\\x1D\\x1E\\xA8xpath\":[\"html\",\"body\",\"div[@id=\\\\\"Content\\\\\"]6\\x17\\x00\\x18atalog\\\\\\x05\\x17\\x00t\\x05\\x7F\\x08,\"t\r"
		">\\x10tr[2]\\x01\\x10!\\xE4\\x14a\"],\"fr\\xC5\\x01\\x00pru\\x01\\x00pR\\xAB\\x01\\x04in\\x1D\\x184below_threshol\\x01v\\x04lc\\x1D\\x1F]r\\x01\\x186r\\x02\\x041,\\x05\\x15\\x04st9\\xD8Mi\t\\x19A\\x10-\\xF0\\x10609.8\t\\x16(size\":17220\t\\x11\\x14url\":\"A\\xFE\\xC8://localhost:8080/jpetstore/images/logo-topbar.gif\"\tC\\x1Cresource\ts2G\\x02\\x05\\xB79\\xD4Prender_delay\":117.198M6\\x0C9996RP\\x00\t-\\x0C24.6I\\xB1A\\xB2\\x08011\\x15-\\x05S\\x89v2\\x01\\x01\\x1Dx]L\\x0CIMG\"\tg\\x1D "
		"\\x82N\\x02\\x14HeaderI6Yd\\x0CLogoN\\x14\\x002|\\x02\\x18a\",\"imgAN long_task!\\xB6B\\xDD\\x03\\x19\\x1E\\x0Call.\\xAD\\x13!\\xE6\\x156\\x01\\x18\\x08avg=c\\x006!\\x062 \\x00@slowest_occurrenc\\xC1\\x00\\x08[{\".(\\x02\\x0453\\xC1%u\\xEF\\x1066}],\\x1D\\x7F\\x0CselfR\\x80\\x00\\x05\\x19n\\x81\\x00\\x05!\\xE2\\x82\\x00\\x0CttfbR\\x1A\\x01\\x05\\x19\\x00v\\xA9[\\x0C504.Q3\\x1485099,\t\\x1F\\x0Cwait\\x81\\x91\\x19\\xD7\\x0C10.1AV\\x01\\x01\\xA1v\\x0442\r+\\x10cache\\x1D)\\x000\r"
		"\\x18\\x08dnsJ\\x16\\x00\\x14connec\\xC5V\\x19\\\\\\x113\\x0Crequ!n\\x19\\x1A\\x084946\\xED\\x05$4,\"perform\\x81\\xF2\\x14.activ\\xA5h\\xA1\\xF9\\x00r\\xC9\\xF6\\x00v\\xE1D\\x00s\\x01L(nce_number\"!\\xFC\\x05\\x19\\x08prem9I\\xE6X0,\"characteristics.has_\\x01,\\x1C_summary\\xB1T\\x10navig\\x05n\\xE1\\xCD\\x01r\\xC5k\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\xC1\\x88\\x08har\\x81\\x8A.\\xB5\\x00\\x01x\\x18_origin\\x81=,79553136598,2Y\\x02\\x0016\\x1B\\x009\\x16\\x007\\x12\\x0F\\x08,"
		"dt.rum.schem*\\xB2\\x08\\x18\"0.23.0\\xA1\\xA8\t!\\x14applic\t\\xB7Xid\":\"ea7c4b59f27d43eb\",\"\\xA4\\x08\\x10frame:\\xA6\\x08<ee3e7784c03bfdd1\\x1DZ\\x00g\\xC1[\",\t\\\\\"1.337.9.20260504-112723>1\\x00-\\x1A$javascript\\x19!\\x00b\\x1A,\t\\x00s\\x05\\xA9|5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-=\\x16\\x00i\\x1A\\x8A\t)\\x131k\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01w,evice.orient%[<\":\"landscape-priE8\\x04,\"\r)Dbattery.level\""
		":100\\x15\\x1B$screen.wid\\xE1\\x83\\x0C1536>\\x1B\\x00(height\":9609\\xAA\\x14window67\\x001>\r\\x1C\\x118\\x008a\\xAC:\\x1C\\x00\t\\x98\\x1C_pixel_r\\x01\\xC2L\":1.25,\"page.url.ful\\x8E\\xCD\\x06\\x00ae\\xCE\\x04s/\\x1A\\x0C\\x08e\\x93Don?viewCategory=&c\r\n\\x1CId=FISH\"\rg1\\x85\\x00_%\\xEFJi\\x02\\x05\\x8D\\x1Cdetected\\x1E\\xC1\\x08\\xFDJV}\\x00\\x11_\\x08tit\\x0E\\x11\t\\x14\"JPetS\\xE1z\\x14 Demo\"\\x1AJ\\x0B:}\\x0046dccaae4cd37c7a\\xB4\\x01\\xC3\\xFE\n\\x01\\x8A\n"
		"\\x01\\x05g\\xC6\\xE4\\x00\\x04},\\xFE{\\x0C:{\\x0C%l&\\xBA\\x0C\\xAD\\x1F\\x0C7313-\\xAE\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\xFE{\\x0C\\x8A{\\x0CNJ\\x0C\\xE1X\\x00_:J\\x0C\\x01\\x14N\\x8A\\x0C\\xFEb\\x0C\\xFEb\\x0C*b\\x0C\\x043,"
		"\\xFEb\\x0C\\xFEb\\x0C\\xFEb\\x0C\\xFEb\\x0C\\xFEb\\x0C\\xFEb\\x0C\\xFEb\\x0C\\xFEb\\x0C\\xFEb\\x0C\\xFEb\\x0C\\xFEb\\x0C\\xFEb\\x0C\\xFEb\\x0C\\xFEb\\x0C\\xFEb\\x0C\\xEEb\\x0C\\x12b\\x0C\\x08]}}", 
		LAST);

	web_add_cookie("rxvtf4o018pw=1779554944019|1779553123580; DOMAIN=localhost");

	web_add_cookie("dtPCf4o018pw=1$553143959_977h-vGRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0e0; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_20", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=3459472506&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CFI-SW-01%7CC%7C-%7C553137160_807%7C1779553143824%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewCategory%3D%26categoryId%3DFISH%7C%7C%7C%2Fjpetstore%2Factions%2FCatalog.action%7C1779553136598%2C1%7C1%7C_load_%7C_load_%7C-%7C1779553143829%7C1779553144021%7Cdn%7C86%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewCategory%3D%26categoryId%3DFISH%2C2%7C3%7C_even"
		"t_%7C1779553143829%7C_vc_%7CV%7C177%5Epc%7CVCD%7C1015%7CVCDS%7C2%7CVCS%7C247%7CVCO%7C1254%7CVCI%7C0%7CTS%7C1%7CVE%7C491%5Ep238%5Ep67947%5Eps%5Es%23Banner%7CS%7C174%2C2%7C4%7C_event_%7C1779553143829%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C61%2C2%7C2%7C_onload_%7C_load_%7C-%7C1779553144021%7C1779553144021%7Cdn%7C86%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1779553143829%7C_view_%7Csvn%7C%2Fjpetstore%2Factions%2FCatalog.action%7Csvt%7C1"
		"779553136598%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=localhost,$rId=RID_238270936$rpId=534254208$domR=1779553144017$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553143829$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$nt=a0b1779553143829e9f9g9h9i9k11l72m73o177p178q180r188s192t192u5136v4836w4836M534254208V0$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-SW-01$title="
		"JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553143959_977$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-SW-01$time=1779553145097", 
		LAST);

	web_custom_request("rb_bf32608msb_21", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=5&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=2680693083&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553146034&ss=0&qc=1199506635&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xE6\\xD9\\x01D{\"data_version\":2,\\x05\\x11\\xF4,\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"start_time\":1779553143925,\"duration\":0,\"performance.initiator_type\":\"link\",\"characteristics.has_request\":true,\"url.full\":\"http://localhost:8080/jpetstore/css/jpetstore.css\",\"network.protocol.name\"\tL\\x08\",\".\\xA5\\x00(time_origin.\\xDA\\x00@828,\"dt.rum.schem=|\\x18\"0.23.0:I\\x00\\x00s=\""
		"\\x0C97.56g\\x00(next_hop_pr\t\\x93\\x08\":\":A\\x004domain_lookup_\\x05O\\x00\"JJ\\x006'\\x00\\x08endN%\\x00\\x18connectfF\\x00\\x11!Z@\\x00\\x18secure_\r&\\x08ion\\x11J\\x0006\\xD7\\x00-\\xB7b\\x1E\\x00\\x14sponse~\\x1F\\x00Z\\x85\\x00\\x10redir\\x1D\\xC6B|\\x00\r\\x1F\\x05?:\\x1D\\x00\\x14workerZy\\x00\\x10fetch\\x11\\x1CF\\xAC\\x018render_blocking\\x01)\\x14tus\":\"\\x11\\x12:\\xB9\\x01\\x14transf\\x01n\\x0Cize\">\\x8A\\x000encoded_body_\t\"\\x0C60146H\\x01\\x04deZ%\\x00-a"
		"(.server_tim\\x01\\x92@hint\":\"received\",\\x15(\\x0Ctrac%\\xB8\\x00tEq\t(\\x10from_\tB\\x08\",\"\\x05#\\x00.i\\xE9x343452934a6cc116081301249311005\\x19.$s_sampled\"m\\xA2N\\xC5\\x03,w3c_resource\r\\xAB\\x00s\\x110mL\\x18applicaAS\t\\x83<ea7c4b59f27d43eb\\x9D\\x99\\x10frame:\\x9B\\x04@5e16e1af0885ab1a\"u\\xA6\\x14agent.\\xB5!\\\\\"1.337.9.20260504-112723>1\\x00\\x04ty\\x85\\x9B$javascript\\x19!\\x00b\\xAD!\\x00s%,|5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t"
		"0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-\\x81A-\\x16\\x00i\\xAD\\x7F)\\x13\\x001\\xAD`\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01w,evice.orient%[L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B\\x10heigh\\x81~\\x0860,\\xD5(\\x14window67\\x001#\r\\x1C\\x118\\x08842B8\\x00\tb\\x1C_pixel_r\\x01\\xA7\\x10\":1.2\\xA1(\\x10age.u\\xA6\\xF2\\x05\\x04acA?$s/Catalog.\t\\x108?viewProduct=&p\t\t(Id=FI-SW-01a\\xB5\\x01i1l\\x00_)\\xD6FP\\x02\\x05&$detected_n\\xC9:\\x00/\\xD9q\to"
		">\\x7F\\x00\\x11_\\x0Ctitl\\xE1k@JPetStore Demo\",\"\\x01\\x9F>}\\x004df00816e975290A\\xCD\\x05&\\xFE\\x0C\\x01\\x8E\\x0C\\x01\\x05i\\xC6\\xE6\\x00\\x04},\\xFEY\\x08\\xFEY\\x08NY\\x08u\\xBAN\\x96\\x04\\xADC\\x91\\x89\\xAA]\\x01\\x10ruxit\\x85Xpjs_ICA15789NPRTUVXfqrux_10337\\x89`\\x89_\\x0C.js\"\\xFE\\x80\\x08\\xFE\\x80\\x08\\x12\\x80\\x08\\x0469\r\\x01\\x10254946n\\x06\\xEA\\x8D\\x08nW\\x00V\\x9A\\x08n2\\x00\\x1A`\\x08\\xE1b\\x00r\\x81o\\x007\\x92.\\x00\\xE5\\xF0z,"
		"\\x00\\xFE\\xC1\\x08\\xD6\\xC1\\x08n\\xEC\\x00\\xFE\\xCE\\x08\\xA2\\xCE\\x08v\\x85\\x00\\xFE\\xDB\\x08z\\xDB\\x08\\x1013290:o\\x02J\\xDD\\x08\\x14362149&\\xB7\\x08\\x16\\x9D\\x08\\x1A4\\x08\\x1E\\xDF\\x08@not_available_htt\\x0E\\xBC\\x0Bm\\xCEV\\xE9\\x08\\x012\\x04se\\xE1\\xC3N\t"
		"\\x04\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xFE\\x9F\\x08\\xE2\\x9F\\x08\\x04im\\x0E3\\x0EN\\x93\\x04\\x8D\\xCE\\xCA\\x9C\\x08Timages/logo-topbar.gif\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xD2|\\x08\\x0Cnon-\\xFE[\\x11\\x1E"
		"[\\x11\\x0C38086\\xED\nN~\\x08\\x05%m|V|\\x08\\xEE[\\x11\\x12[\\x11x3881223f689a154f0643b8963dcd5a3\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xFE[\\x11\\xA2[\\x11\\xFE\\xBC\\x08j\\xBC\\x08\\x0Ccart\\xFE\\xB5\\x08\\xFE\\xB5\\x08&\\xB5\\x08\\x0490\t\\x01\\x142235176D\\x06\\xEA1\\x11nW\\x00V1\\x11n2\\x00F1\\x11\\x8E.\\x00\\x1E1\\x11n,"
		"\\x00\\xFE1\\x11\\xD61\\x11n\\x92\\x00\\xFE1\\x11\\xA21\\x11v\\x85\\x00Z1\\x11\\xFE\\xB5\\x08.\\xB5\\x08\\x04966o\\x02J\\xB3\\x08\\x01#\\xFE\\xB1\\x08v\\xB1\\x08|"
		"570492c08c75f09b297394998fb21c09\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\xFE\\x0C\\x1A\\x9E\\x0C\\x1A\\xFE\\xB1\\x08j\\xB1\\x08\\x1Cseparato\\xFEk\\x11\\xFEk\\x11*k\\x11n\\xBC\\x06\\xFE\\xB6\\x08\\xFE\\xB6\\x08\\xFE\\xB6\\x08\\xFE\\xB6\\x08\\xFE\\xB6\\x08\\xFE\\xB6\\x08\\xFE\\xB6\\x08"
		"\\xFE\\xB6\\x08\\xFE\\xB6\\x08z\\xB6\\x08\\x004\\x86\\xB6\\x08\\x01#\\xFE\\xB6\\x08v\\xB6\\x08x348f55f2a3c0905ed28d9435f9189a9\\x0E\\xF6\\x1F\\x1A\\xF0\"\\xFE\\xC2\"\\xFE\\xC2\"\\xFE\\xC2\"\\xFE\\xC2\"\\xFE\\xC2\"\\xFE\\xC2\"\\xFE\\xC2\"\\xFE\\xC2\"\\xFE\\xC2\"\\xFE\\xC2\"\\xFE\\xC2\"\\xFE\\xC2\"\\xFE\\xC2\"\\xFE\\xC2\"\\xFE\\xC2\"\\xFE\\xC2\"\\xFE\\xC2\"\\xC2\\xC2\"\\x0EV%\\xA2\\x1B+"
		"\\xFE\\xB6\\x08n\\xB6\\x08\\x14m_fish\\xFEj\\x11\\xFEj\\x11\\x1Ej\\x11\\x088.1\\x16i\\x11\\x1801490126\\xFB\\x0E\\xE2\\xB4\\x08vW\\x00Nj\\x11v2\\x00>j\\x11\\x96.\\x00\\x16j\\x11v,\\x00\\xFEj\\x11\\xCEj\\x11v\\x92\\x00\\xFEj\\x11\\x9Aj\\x11~\\x85\\x00\\xFEj\\x11\\x8Aj\\x11\\x082716p\\x02Jk\\x11\\x05$\\xFE\\xB6\\x08v\\xB6\\x08|"
		"060253210f8790b19f045d76c7a63836\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xEAl\\x11\\xFE\\xB6\\x08\\xFE\\xB6\\x08*\\xB6\\x08\\x0Cdogs\\xFE\\xB6\\x08\\xFE\\xB6\\x08*\\xB6\\x08\\x1AP+\\x009\\xFEQ+.Q+\\x048.nW\\x00Z\\xB6\\x08j\\x89\\x00J\\xB6\\x08\\x8A.\\x00\"\\xB6\\x08j,"
		"\\x00\\xFE\\xB6\\x08\\xDA\\xB6\\x08j\\x92\\x00\\xFE\\xB6\\x08\\xA6\\xB6\\x08r\\x85\\x00\\xFE\\xB6\\x08\\x8A\\xB6\\x08\\x0430\\x86k\\x11\\x05$\\xFE\\xB6\\x08v\\xB6\\x08x78c4449186f15ce3a8d1129d5513f44\\x0E}&"
		"\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xFEl\\x11\\xEEl\\x11\\x1Al\\x11\\x18reptile\\xFE\\xBA\\x08\\xFE\\xBA\\x08*\\xBA\\x08\\x003\\x1Ap\\x11\\x0C0745>J\\x06\\xEAp\\x11nW\\x00V\\xBA\\x08n2\\x00F\\xBA\\x08\\x8E.\\x00\\x1E\\xBA\\x08n,"
		"\\x00\\xFE\\xBA\\x08\\xD6\\xBA\\x08n\\x92\\x00\\xFE\\xBA\\x08\\xA2\\xBA\\x08v\\x85\\x00\\xFE\\xBA\\x08\\x8E\\xBA\\x08\\x009\\x8A\\x8E+"
		"\\x01$\\xFE\\xBA\\x08z\\xBA\\x08x10e236f5ffa28765b140d44712ee9b4\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\x16p\\x11\\x08cat\\xFE\\xB6\\x08\\xFE\\xB6\\x08*\\xB6\\x08\\x004\\x1A\\xB6\\x08\\xFE\\x90+2\\x90+\\x008rW\\x00V\\xB6\\x08n\\x89\\x00F\\xB6\\x08\\x8E.\\x00\\x1E\\xB6\\x08n,"
		"\\x00\\xFE\\xB6\\x08\\xD6\\xB6\\x08n\\x92\\x00\\xFE\\xB6\\x08\\xA2\\xB6\\x08v\\x85\\x00\\xFE\\xB6\\x08\\x8A\\xB6\\x08\\x08289\\x86&\\x1A\\x01$\\xFE\\xB6\\x08v\\xB6\\x08x99b04d0d3be1cf52ac7ae8a395db1ef\\x0E/"
		"B\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xFEp\\x11\\xEEp\\x11\\x1Ap\\x11\\x0Cbird\\xFE\\xB7\\x08\\xFE\\xB7\\x08*\\xB7\\x08\\x0E\\xD0H\\x04er\"\\x04O\\xEA`\\x11:J\\x00V\\x9D\\x08:%\\x00F\\x90\\x08Z!\\x00\\x1E\\x83\\x08:\\x1F\\x00\\xFEv\\x08\\xD6v\\x08:\\x85\\x00\\xFEi\\x08\\xA2i\\x08Bx\\x00\\xFE\\\\\\x08\\x8E\\\\\\x08\\x005\\x8A\\x82\""
		"\\x01$\\xFE\\\\\\x08z\\\\\\x08t816f19d7e450737bad8f89b94aa411\\xFE\\xEE3\\xFE\\xEE3\\xFE\\xEE3\\xFE\\xEE3\\xFE\\xEE3\\xFE\\xEE3\\xFE\\xEE3\\xFE\\xEE3\\xFE\\xEE3\\xFE\\xEE3\\xFE\\xEE3\\xFE\\xEE3\\xFE\\xEE3\\xFE\\xEE3\\xFE\\xEE3\\xFE\\xEE3\\xFE\\xEE3\\x8E\\xEE3>\\x10E\\x0E\\xA2/4elf_monitoring\\x1E\\x17EJ*\\x00\\x1Cinternal\\x11#\\x12/U\\x0E@J\\x00e.\\xC6U\\x08985:\\xA0V\\x1AqQf\\xD3U\\x11!\\x08fm_*LW timestamp2^\\x00\\x0C73,\"\\x0E\\xB8S4\":2000,\""
		"messag\\x0E\\xFEO\\x12\\xC3Q\\x1C31483296\\x125O\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E\\xD5R\\x14 JavaS\\x12\\x9DR0 tag\\\\\",[]]\"}]&\\xFBR\\xFEUS\\xFEUS\\xFEUS\\xFEUS\\xFEUS\\xFEUS\\xFEUS\\xFEUS\\xFEUS\\xFEUS\\xFEUS\\xFEUS\\xFEUS\\xFEUS\\xFEUS\\xFEUS>US>1\\x05\\x0Eb[ long_taskz3\\x05\\x12\\xF9Z\"\\xB80\\x0461\\x95ff4\\x05\\x15[\\x00.\\x1A.U\\xA1\\xC8\\x04\",\\x1D\\x18\\x18attribu\\x0E\\xB8U\\x0E\\xA4\\x0C\\x14tainer\\x16\\x82U\\x8A(\\x00\rV\\x8A*\\x00\\x08src\\x16Y[\\x19\\x93V"
		"{\\x00\\x1A\\xF7W\\x16\\xB8VbY\\x00\ry\\x14unknow\\x0E\\xE3U\\xCD\\x1E\\xFEq\\x05\\xFEq\\x05\\xFEq\\x05\\xFEq\\x05\\xFEq\\x05\\xFEq\\x05\\xFEq\\x05\\xFEq\\x05\\xFEq\\x05\\xFEq\\x05\\xFEq\\x05\\xFEq\\x05\\xFEq\\x05\\xFEq\\x05\\xFEq\\x05\\xFEq\\x05Bq\\x05V\\x7F\n\\x16E`\\xB5L\\x08192r\\x92!B0a\\x10navig\\x0E*[\\x81{N\\xD4\\x05\\x1A$\\x10\\xB1\\xD2\\xAA\\xDBXV\\xC5Z\\x8AD[\\x04ne\\xFE[a\\xF6[a\\x0006\\x9A\\x19N`\\x13\\x0E*V\\x08/1.\\x0E\\xFC;.\\x8B\\x136A\\x13%\\xB2\\x08\":9:\\x81-"
		":\\x8F664\\x00\\x165\\x13v2\\x00>\\x82\\x13\\x96.\\x00\\x8EZ\\x00\\xDA\\x9C\\x13\\x001:p\\x12\\x00r:\\x95a\\x007:\\xF3\\x00\\x15 \\x05\\x94\\x0E\\xE3\\x0C.E\\x01\\xFE\\x9C\\x13\\x9A\\x9C\\x13v6\\x01\\xFA\\xA1a\\x0451\\x0E\\xF2^.\\xD6\\x00J\\xA4a\\x0448>%\\x00J+6\t%m\\x86\\xFEIP^IPt13951ffffcefca5c40e1949b3759fanIP\\x12\\xCA^\\x16\\x8Fa\\xFET^\\x1AT^(Category=&c\r\n\\x12b_\\x04SHZ\\xD7e\\x0EsY\\x99\\xC6\\x0E\\xA0\\x0F\\x04in&\\x14bN\\xD3\\x04\\x19.\\x91\\xD6.\\xA9\\x01\\x1A\\xB7\t\r"
		"%\\x00e\\x0Eu_*m\\x17\\x14unload\\x16\\xB8\\x0Fq\\xE1:0\\x042#\\x00E\\xE2:!\\x00\\x08dom\\x16]\\x10\\xA1\"\\x00v\\x12N\\x10\\x006rfC\\x011\\x1Ccontent_\\x01\\x7F\\x00e:\\x81\\x00\\x0417v\\xD6\\\\b@\\x00\\x05\\x9E\\x08180:\\x0C\\x036\\x00\\x05\t>\\x0E\\x9Ac\\x00t\\x01\\xAC\\x008v\\xE1 \\x01\\xA06\\x1F\\x01\\x0419:\\xFF\\x03\\x1D#\t\\x81z\\xB5\\x06\\x95\\x11\\x08cou\\x0E\\x95d\\x040,1\\x9E\\x08ion1\\xB0\\x08har\\x0E\\xA5d-\\xB7\\x05\\x19\\x04ab!\\xA2\\x01\\xB5\\x08\"ex\\x0E\t"
		"h\\x04ng\\x1E%a\\x10seque\\x0E\\x8Dh\\x1Cnumber\":&\\x84\\x0C\\xFEy\\x0B\\xFEy\\x0B\\xFEy\\x0B\\xFEy\\x0B\\xFEy\\x0B\\xFEy\\x0B\\x0Ey\\x0B<battery.level\":1\\x0E\\xFA\\x12\\x16\\xDDc\\x1E?d\\xFEZd\\xFEZd\\xFEZd\\xFEZd\\xFEZd\\xFEZd\\xFEZd\\xFEZd\\xD6Zd\\x08]}}", 
		LAST);

	web_add_cookie("dtSaf4o018pw=true%7CC%7C-1%7CAdd%20to%20Cart%7C-%7C1779553146835%7C553143959_977%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-SW-01%7C%7C%7C%7C; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_22", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=3518048192&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553143829$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$rt="
		"1-1779553143829%3Bhttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fcss%2Fjpetstore.css%7Cb98e0f0g0h0i0m0v6014w6014I11M-68001081V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7Cb98e0f0g0h0i0m0v3808w3808E1F17220O287P60I7M761912964V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcart.gif%7Cb98e0f0g0h0i0m0v96w96E1F288O16P18I7M-1891668168V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fseparator.gif%7Cb98e0f0g0h0i0m0v46w46F18N2O1P18I7M688934799V0%7Chttp%3A%2F%2Fl"
		"ocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Ffish.gif%7Cb98e0f0g0h0i0m0v271w271E1F390O26P15I7M-302972535V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fdogs.gif%7Cb98e0f0g0h0i0m0v306w306E1F450O30P15I7M1822807848V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Freptiles.gif%7Cb98e0f0g0h0i0m0v398w398E1F780O52P15I7M-620539332V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fcats.gif%7Cb98e0f0g0h0i0m0v289w289E1F420O28P15I7M1231591079V0%7Chttp%3A%2F%2Flocalhost%3"
		"A8080%2Fjpetstore%2Fimages%2Fsm_5Fbirds.gif%7Cb99e0f0g0h0i0m0v251w251E1F495O33P15I7M-1591609649V0$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-SW-01$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553143959_977$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-SW-01$time=1779553146842", 
		LAST);

	web_url("Cart.action", 
		"URL=http://localhost:8080/jpetstore/actions/Cart.action?addItemToCart=&workingItemId=EST-1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf32608msb_23", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=3617687830&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1779553146848%7C_wv_%7CAAI%7C1%7CfIS%7C2775%7CfID%7C1%2C1%7C7%7C_event_%7C1779553147577%7C_viewend_%7Cinp%7C0%7Csvn%7C%2Fjpetstore%2Factions%2FCatalog.action%7Csvt%7C1779553143829%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1779553147577%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-SW-01$rId=RID_238270936$rpId=534254208$domR=1779553144017$tvn="
		"%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553143829$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-SW-01$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553143959_977$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-SW-01$time=1779553147581", 
		LAST);

	web_custom_request("rb_bf32608msb_24", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=2&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=3965030095&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553147589&ss=1&qc=484089721&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\x842D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"view.fo\\x11?(_time\":3755\r\\x1C\\x0Cback\t[\r\\x1C\\\\0,\"error.http_4xx_count\":\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!\"8us\":\"reported\",\\x05\\x18)]:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x14210.19\r\\x01\\x1425494,"
		"\\x05\\x1F\\x1Cloading_\\x01b!\\x84 complete\"\t\\x1F\\x01\\x17>y\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-\\x82\\x182775.40\t\\x01\\x102235,\\x05Z\\x08dur%?\t\\xC1\\x10id.na!\\xCC,\"pointerdown\\x01\\x9C$id.process\r\\xBE\\x08rt\"\\x01S\\x006JS\\x00\\x1D)\\x08end\r'\ro<cancelable\":true\t\\x858ui_element.tag_\r\\x83\\x00A\ry\\x1D\\x1E\\xA8xpath\":[\"html\",\"body\",\"div[@id=\\\\\"Content\\\\\"]6\\x17\\x00\\x18atalog\\\\\\x05\\x17\\x00t\\x05\\x7F\\x08,\"t\r>\\x10tr[2]\\x01\\x10\\x08d"
		"[5\\x01\\x08\\x14a\"],\"fv\\xCB\\x01\\x00pr{\\x01\\x00pR\\xB1\\x01\\x04in\\x1D\\x184below_thresholAa\\x04lc\\x1D\\x1F]y\\x01\\x186y\\x02\\x041,\\x05\\x15\\x04st=\\xDEIp\t\\x19A\\x16-\\xF6\\x0C178.\r\\x16(size\":17220\t'\\x14url\":\"a\\x05\\xC8://localhost:8080/jpetstore/images/logo-topbar.gif\"\tC\\x1Cresource\ts2L\\x02\\x05\\xB79\\xD8Prender_delay\":112.499I\\x8D\\x1074507RP\\x00\t-\\x0C25.6mJiK\\x002\\x11-\\x05S\\x89}2\\x01\\x01\\x1Dx]P\\x0CIMG\"\t:\\x1D \\x82R\\x02\\x14HeaderI"
		":Yh\\x0CLogoN\\x14\\x002\\x80\\x02\\x18a\",\"imgAO long_task!\\xB6B\\xE3\\x03\\x19\\x1E\\x0Call.\\xAD\\x1A!\\xE6\\x156\\x01\\x18\\x08avg=c\\x006B \\x00@slowest_occurrenc\\xC1\\x07\\x08[{\".(\\x02\\x10100,\"9\\xA8\\x1061}],\\x1D\\x7F\\x0CselfR\\x80\\x00\\x05\\x19n\\x81\\x00\\x05!\\xE2\\x82\\x00\\x0CttfbR\\x1A\\x01\\x05\\x19\\x00v\\xA9b\\x0872,\t\\x10\\x0Cwait\\x81\\x87\\x19\\xC8\\x009:m\\x05\\x11*\\x10cache\\x1D(\\x000\rB\\x08dnsJ\\x16\\x00\\x14connec\\xC5M\\x19[\\x113\\x0Crequ!^"
		"\\x19\\x1A\\x0C62.8I\\xC2\\x000E\\xC4$6,\"perform\\x81\\xE5\\x14.activ\\xA5\\\\\\xA1\\xEE\\x00r\\xC9\\xEC\\x00v\\xE1:\\x00s\\x01K(nce_number\"!\\xEB\\x05\\x19\\x08prem(I\\xD5X0,\"characteristics.has_\\x01,\\x1C_summary\\xB1G\\x10navig\\x05n\\xE1\\xC3\\x01r\\xC5`\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\xC1}\\x08har\\x81y.\\xB5\\x00\\x01x\\x18_origin\\x81,,79553143828,6H\\x026\\x1B\\x009\\x15\\x0437\\x0E\\x05\\x08,dt.rum.schem*\\xA8\\x08\\x18\"0.23.0\\xA1\\x9B\t!\\x14applic\t\\xB7Xid\":\""
		"ea7c4b59f27d43eb\",\"\\x9A\\x08\\x10frame:\\x9C\\x0885e16e1af0885ab1aq\\x11Z\\x00g\\xC1N\"\"\t\\\\\"1.337.9.20260504-112723\\x1D\\x8B\\x051-\\x1A$javascript\\x19!\\x00b\\x1A\"\t\\x00s\\x05\\xA9|5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-=\\x16\\x00i\\x1A\\x80\t)\\x131k\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01w,evice.orient%[<\":\"landscape-priE8\\x04,\"\r)4battery.level\"\\x8D\"\tD$screen.wid\\xE1v\\x0C1536\\x156\r\\x1B(height\""
		":9609\\xAA\\x14window67\\x001>\r\\x1C\\x118\\x008a\\xAB:\\x1C\\x00\t}\\x1C_pixel_r\\x01\\xC2L\":1.25,\"page.url.ful\\x8E\\xBC\\x06\\x00ae\\xCD\\x04s/\\xED\\xFFe\\x93@on?viewProduct=&p\t\t,Id=FI-SW-01\"\ri1\\x87\\x00_)\\xF1\\x04e1>k\\x02\\x05\\x8F\\x1Cdetected\\x1E\\xB6\\x08\\xFD;V\\x7F\\x00\\x11_\\x08tit\\x0E\\x06\t\\x14\"JPetS\\xE1k\\x14 Demo\"\\x1AB\\x0B:}\\x004df00816e975290A\\xE8\\x01\\xC5\\xFE\\x0C\\x01\\x92\\x0C\\x01\\x05i\\xC6\\xE6\\x00\\x04},\\xFEu\\x0C:u\\x0C%n&"
		"\\xB4\\x0C\\xAD#\\x08375\\xA1xA\\x19\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0C\\xFEu\\x0Cbu\\x0CND\\x0C\\xE12\\x00_:D\\x0C\\x01\\x14N\\x84\\x0C\\xFE\\\\\\x0C\\xFE\\\\\\x0C*\\\\\\x0C\\x0E\\x81\n\\x16;"
		"\\x0C\\xFE\\\\\\x0C\\xFE\\\\\\x0C\\xFE\\\\\\x0C\\xFE\\\\\\x0C\\xFE\\\\\\x0C\\xFE\\\\\\x0C\\xFE\\\\\\x0C\\xFE\\\\\\x0C\\xFE\\\\\\x0C\\xFE\\\\\\x0C\\xFE\\\\\\x0C\\xFE\\\\\\x0C\\xFE\\\\\\x0C\\xFE\\\\\\x0C\\xFE\\\\\\x0C\\xF2\\\\\\x0C\\x08]}}", 
		LAST);

	web_add_cookie("rxvtf4o018pw=1779554947668|1779553123580; DOMAIN=localhost");

	web_add_cookie("dtPCf4o018pw=1$553147617_729h-vGRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0e0; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_25", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=1024181673&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Cart.action?addItemToCart=&workingItemId=EST-1", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CAdd%20to%20Cart%7CC%7C-%7C553143959_977%7C1779553146835%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-SW-01%7C%7C%7C%2Fjpetstore%2Factions%2FCatalog.action%7C1779553143829%2C1%7C1%7C_load_%7C_load_%7C-%7C1779553146843%7C1779553147671%7Cdn%7C102%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%3FviewProduct%3D%26productId%3DFI-SW-01%2C2"
		"%7C3%7C_event_%7C1779553146843%7C_vc_%7CV%7C811%5Epc%7CVCD%7C1027%7CVCDS%7C1%7CVCS%7C893%7CVCO%7C1909%7CVCI%7C0%7CTS%7C1%7CVE%7C491%5Ep250%5Ep67947%5Eps%5Es%23Banner%7CS%7C810%2C2%7C4%7C_event_%7C1779553146843%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1779553147670%7C1779553147671%7Cdn%7C102%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1779553146843%7C_view_%7Csvn%7C%2Fjpetstore%2Factions%2FCatalog.acti"
		"on%7Csvt%7C1779553143829%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=localhost,$rId=RID_-51098923$rpId=-1231724404$domR=1779553147666$tvn=%2Fjpetstore%2Factions%2FCart.action$tvt=1779553146843$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$nt=a0b1779553146843e15f15g15h15i15k17l728m729o811p811q815r823s827t828u5707v5407w5407M-1231724404V0$ni=4g|1.55$egf=1589PRTUX$url="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCart.action%3FaddItemToCart%3D%26workingItemId%3DEST-1$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553147617_729$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCart.action%3FaddItemToCart%3D%26workingItemId%3DEST-1$time=1779553148769", 
		LAST);

	web_custom_request("rb_bf32608msb_26", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=5&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=4246262942&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553149693&ss=0&qc=3279138099&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Cart.action?addItemToCart=&workingItemId=EST-1", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xE4\\xCE\\x01D{\"data_version\":2,\\x05\\x11\\xF4,\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"start_time\":1779553147598,\"duration\":0,\"performance.initiator_type\":\"link\",\"characteristics.has_request\":true,\"url.full\":\"http://localhost:8080/jpetstore/css/jpetstore.css\",\"network.protocol.name\"\tL\\x08\",\".\\xA5\\x00(time_origin\\x1D\\xDAD6843,\"dt.rum.schem=|\\x18\"0.23.0:I\\x00\\x00s=\""
		"\\x14755.09\t\\x01\\x10776486t\\x00(next_hop_pr\t\\xA0\\x08\":\":N\\x004domain_lookup_\\x05\\\\\\x00\"~W\\x0064\\x00\\x08end\\x822\\x00\\x18connect\\x9A`\\x00\\x11.\\x8EZ\\x00\\x18secure_\r3\\x08ion\\x11d\\x0006\\x0B\\x01\\x14reques\\x15\\x82B\\x1E\\x00\\x14sponseb=\\x00\r\\x1F\\x8E\\x92\\x00\\x10redir\\x1D\\xEDBk\\x00\r\\x1F\\x05L:\\x1D\\x00\\x14workerZ\\x86\\x00\\x10fetch\\x11\\x1Cz\\xFA\\x018render_blocking\\x016\\x14tus\":\"\\x11\\x12:\\x07\\x02\\x14transf\\x01{\\x0Cize\""
		">\\x97\\x000encoded_body_\t\"\\x0C60146b\\x01\\x04deZ%\\x00-{(.server_tim\\x01\\x92@hint\":\"received\",\\x15(\\x0Ctrac%\\xD2\\x00tE\\xBF\t(\\x10from_\tB\\x08\",\"\\x05#\\x00.\\x89Dx343452934a6cc116081301249311005\\x19.$s_sampled\"m\\xFDN \\x04,w3c_resource\r\\xAB\\x00s\\x110m\\xA7\\x18applicaAm\t\\x83<ea7c4b59f27d43eb\\x9D\\xF4\\x10frame:\\xF6\\x04@79212e4c355fb399\"\\x95\\x01\\x14agent.\\xB5|\\\\\"1.337.9.20260504-112723>1\\x00\\x04ty\\x85\\xF6$javascript\\x19!\\x00b\\xAD|\\x00s%,|"
		"5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-\\x81\\x9C-\\x16\\x00i\\xAD\\xDA)\\x13\\x001\\xAD\\xBB\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01w,evice.orient%[L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":960,\\xD5\\x83\\x14window67\\x001#\r\\x1C\\x118\\x08842B8\\x00\tb\\x1C_pixel_r\\x01\\xA74\":1.25,\"page.u\\xA6M\\x06\\x04acA?\\x18s/Cart.\t\r$?addItemTo\\x01\\x15\\x04=&\\x81\\x0C\\x08ing\\x01\\x13\\x1CId="
		"EST-1a\\xB5\\x01i1l\\x00_%\\xD6JP\\x02\\x05&$detected_n\\xC9\\x95\\x00/\\xD9\\xCC\tr2\\x7F\\x00\\x11\\\\\\x0Ctitl\\xE1\\xC3PJPetStore Demo\",\"view>z\\x008b91999e63350b94\\x11&\\xFE\t\\x01\\x8E\t\\x01\\x05\\x8F\\xBA\\xE3\\x00\\x04},\\xFE\\xAE\\x08\\xFE\\xAE\\x08N\\xAE\\x08u\\xB4N\\x90\\x04\\xAD=\\x91\\x83\\xAAZ\\x01\\x10ruxit\\x85Rpjs_ICA15789NPRTUVXfqrux_10337\\x89Z\\x89Y\\x0C.js\""
		"\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\x16\\xD5\\x08\\x002\\x16\\xD4\\x08\\x1097019\\xFE\\xD5\\x08*\\xD5\\x08jW\\x00Z\\xD5\\x08j2\\x00\\x1At\\x08\\xE1\\\\\\x00r\\x1A5\t\\x8A.\\x00\\xE5\\xF7\\xE1\\xBEj,\\x00\\xFE\\xD5\\x08\\xDA\\xD5\\x08j\\x92\\x00\\xFE\\xD5\\x08\\xA6\\xD5\\x08r\\x85\\x00\\xFE\\xD5\\x08z\\xD5\\x08\\x1013290\\x86\\xD7\\x08\\x14362149&\\xB1\\x08\\x16\\x97\\x08\\x1A.\\x08\\x1E\\xD9\\x08@not_available_htt\\x0E\\x11\\x0Cm\\xCEV\\xE3\\x08\\x012\\x04se\\xE1\\xBDN\t"
		"\\x04\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xCA\\x99\\x08\\x04im\\x0E'\\x0EN\\x8D\\x04\\x8D\\xC8\\xCA\\x96\\x08Timages/logo-topbar.gif\\xFEv\\x08\\xFEv\\x08\\x1Av\\x08\\x003\\x1Av\\x08\\x10850996\\xDE\\x0E\\xEEK\\x11jW\\x00Zv\\x08j2\\x00Jv\\x08\\x8A.\\x00\"v\\x08j,"
		"\\x00\\xFEv\\x08\\xDAv\\x08j\\x92\\x00\\xFEv\\x08\\xA6v\\x08r\\x85\\x00Zv\\x08\\x0Cnon-\\xFEO\\x11\\x1EO\\x11\\x08380:\\xE7\nJO\\x11\t%m|Vv\\x08\\xEEO\\x11\\x12O\\x11x3881223f689a154f0643b8963dcd5a3\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\xFEO\\x11\\x8AO\\x11\\xFE\\xB6\\x08j\\xB6\\x08\\x00c\\x0E\\xAE\\x13\\xFE\\xAF\\x08\\xFE\\xAF\\x08&"
		"\\xAF\\x08\\x0Ex\\x14\\x04er\"\\x07\\x1B\\xEE\\xA3\\x08:K\\x00Z\\x97\\x08:&\\x00J\\x8B\\x08Z\"\\x00\"\\x7F\\x08: \\x00\\xFEs\\x08\\xDAs\\x08:\\x86\\x00\\xFEg\\x08\\xA6g\\x08By\\x00\\xFE[\\x08\\x8A[\\x08\\x04966\\xCA\n"
		"JY\\x08\\x01#\\xFEW\\x08vW\\x08x570492c08c75f09b297394998fb21c0\\x0E\\x04\\x19\\x1A\\xD4\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19\\xFE\\xA6\\x19^"
		"\\xA6\\x19\\xFEW\\x08jW\\x08\\x1Cseparato\\xFE\\x0B\\x11\\xFE\\x0B\\x11.\\x0B\\x11\\x006\\x1A\\x0B\\x11\\x08925\\x0E\\xEB\\x16\\xFEh\\x08\\x1Eh\\x08jW\\x00Zt\\x08j2\\x00J\\x80\\x08\\x8A.\\x00\"\\x8C\\x08j,"
		"\\x00\\xFE\\x98\\x08\\xDA\\x98\\x08j\\x92\\x00\\xFE\\xA4\\x08\\xA6\\xA4\\x08r\\x85\\x00\\xFE\\xB0\\x08\\x8A\\xB0\\x08\\x004\\x86\\xB0\\x08\\x01#\\xFE\\xB0\\x08v\\xB0\\x08x348f55f2a3c0905ed28d9435f9189a9\\x0E\\x8A\\x1F\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08\\xFE\\xB0\\x08"
		"\\xEA\\xB0\\x08\\x14m_fish\\xFE\n\\x11\\xFE\n\\x11*\n\\x11\\x008\\x1A\\xAE\\x08\\xFE\\xB9\\x19:\\xB9\\x19jW\\x00Z\\xAE\\x08j2\\x00J\\xAE\\x08\\x8A.\\x00\"\\xAE\\x08j,\\x00\\xFE\\xAE\\x08\\xDA\\xAE\\x08j\\x92\\x00\\xFE\\xAE\\x08\\xA6\\xAE\\x08r\\x85\\x00\\xFE\\xAE\\x08\\x8A\\xAE\\x08\\x08271\\x82_\\x11\\x05$\\xFE\\xB0\\x08v\\xB0\\x08|060253210f8790b19f045d76c7a63836\\xFE\\x06+\\xFE\\x06+\\xFE\\x06+\\xFE\\x06+\\xFE\\x06+\\xFE\\x06+\\xFE\\x06+\\xFE\\x06+\\xFE\\x06+\\xFE\\x06+\\xFE\\x06+\\xFE\\x06+"
		"\\xFE\\x06+\\xFE\\x06+\\xFE\\x06+\\xFE\\x06+\\xFE\\x06+\\xD2\\x06+\\x009\\xAE\\xB43\\xFE`\\x11n`\\x11\\x14m_dogs\\xFE\\xB0\\x08\\xFE\\xB0\\x08\"\\xB0\\x08\\x006\\xFE\\xB43V\\xB43rW\\x00R\\xB0\\x08r2\\x00B\\xB0\\x08\\x92.\\x00\\x1A\\xB0\\x08r,\\x00\\xFE\\xB0\\x08\\xD2\\xB0\\x08r\\x92\\x00\\xFE\\xB0\\x08\\x9E\\xB0\\x08z\\x85\\x00\\xFE\\xB0\\x08\\x8A\\xB0\\x08\\x0430\\x86_\\x11\\x05$\\xFE\\xB0\\x08v\\xB0\\x08x78c4449186f15ce3a8d1129d5513f44\\x0E\\x11&"
		"\\xFE`\\x11\\xFE`\\x11\\xFE`\\x11\\xFE`\\x11\\xFE`\\x11\\xFE`\\x11\\xFE`\\x11\\xFE`\\x11\\xFE`\\x11\\xFE`\\x11\\xFE`\\x11\\xFE`\\x11\\xFE`\\x11\\xFE`\\x11\\xFE`\\x11\\xFE`\\x11\\xFE`\\x11\\xC6`\\x11\\xFE\\xB0\\x08\\xFE\\xB0\\x08*\\xB0\\x08\\x18reptile\\xFE\\xB4\\x08\\xFE\\xB4\\x08.\\xB4\\x08\\x0E\\xEA5\\x05\\x01\\xFE\\x12\\x1A.\\x12\\x1A\\x006nW\\x00Z\\xB4\\x08j\\x89\\x00J\\xB4\\x08\\x8A.\\x00\"\\xB4\\x08j,"
		"\\x00\\xFE\\xB4\\x08\\xDA\\xB4\\x08j\\x92\\x00\\xFE\\xB4\\x08\\xA6\\xB4\\x08r\\x85\\x00\\xFE\\xB4\\x08\\x8E\\xB4\\x08\\x009\\x8A\\x1C+"
		"\\x01$\\xFE\\xB4\\x08z\\xB4\\x08t10e236f5ffa28765b140d44712ee9b\\x0E\\xFE8\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xFE\\xB4\\x08\\xF2\\xB4\\x08\\x08cat\\xFE\\xB0\\x08\\xFE\\xB0\\x08.\\xB0\\x08\\x003\\x12\\xAD\\x08\\x009\\xFE\\x14\\x1A6\\x14\\x1A\\x006nW\\x00Z\\xB0\\x08j"
		"\\x89\\x00J\\xB0\\x08\\x8A.\\x00\"\\xB0\\x08j,\\x00\\xFE\\xB0\\x08\\xDA\\xB0\\x08j\\x92\\x00\\xFE\\xB0\\x08\\xA6\\xB0\\x08r\\x85\\x00\\xFE\\xB0\\x08\\x8A\\xB0\\x08\\x0428:=6Js+\\x05$\\xFE\\xB0\\x08v\\xB0\\x08|"
		"99b04d0d3be1cf52ac7ae8a395db1efa\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\xFE\\x14\\x1A\\x0Cbird\\xFE\\xB1\\x08\\xFE\\xB1\\x08.\\xB1\\x08\\x005\\x1A\\xB1\\x08\\xFE\\xC9M2\\xC9M\\x006nW\\x00Z\\xB1\\x08j\\x89\\x00J\\xB1\\x08\\x8A.\\x00\"\\xB1\\x08j,"
		"\\x00\\xFE\\xB1\\x08\\xDA\\xB1\\x08j\\x92\\x00\\xFE\\xB1\\x08\\xA6\\xB1\\x08r\\x85\\x00\\xFE\\xB1\\x08\\x8E\\xB1\\x08\\x005\\x8A\\xC5\"\\x01$\\xFE\\xB1\\x08z\\xB1\\x08t816f19d7e450737bad8f89b94aa411\\xFE%4\\xFE%4\\xFE%4\\xFE%4\\xFE%4\\xFE%4\\xFE%4\\xFE%4\\xFE%4\\xFE%4\\xFE%4\\xFE%4\\xFE%4\\xFE%4\\xFE%4\\xFE%4\\xFE%4v%4>\\xE7D\\x0E\\x8984elf_monitoring\\x1E\\xEEDJ*\\x00\\x1Cinternal\\x11#\\x12HU\\x0E\\x11J\\x00e*\\xECU\\x0C7645:\\x12#\\x1A<Qf\\xF9U\\x11!\\x08fm_*rW timestamp2^"
		"\\x00\\x0E\\x04Q\\x0E\\x83S4\":2000,\"messag\\x0E\\xCCO\\x12\\x8EQ\\x1C31483296\\x12\\x06O\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E\\xA0R\\x14 JavaS\\x12hR0 tag\\\\\",[]]\"}]&\\xC6R\\xFE S\\xFE S\\xFE S\\xFE S\\xFE S\\xFE S\\xFE S\\xFE S\\xFE S\\xFE S\\xFE S\\xFE S\\xFE S\\xFE S\\xFE S\\xFE Sz S\\x1A\\xF4Z\"\\xCE[\\x08827>\\x19?B\\xD2[\\x10navig\\x0EqU\\x0E\\xA8T>\\x81\\x05\\xF6\\xD8[J\\x0CU\\x96\\x8BU\\x04ne\\xFE\\xFD[\\xF6\\xFD[\\x0006y.N\\xFFA\\x0EwP\\x08/1.\\x0E\\xAF6.\\xC296\\xF8\r"
		"\\xC5\\xAD\\x0EEW6P\\x006%\\x00\\x12\\xC3\r\\x001:#\\x00:\\x0E\\x0E^\\x1F\\x00R<\\x00\\xDA\\xF0\r\\x04162\\xF3/\\x088846\\xB6\\x00\\x00r\\x1E\\xAB[\r\\xD6\\x007A]fY\\x0F\\x15/\\x05\\xA4\\x08729v=\\x16\\x1A\\xBB[\r\\\\:\\x81\\x01\"0\\x0E\\x05L:\\x1D\\x00\\x0E\\xCEW\\x0E_[\\x00t\\x12,T:\\x1D\\x002\\xDA[>F\\x01\\xFA\\xCB[\\x0C57076#\\x01J\\xCE[\\x0454>%\\x00J\\xB3\\x16\t%\\xFE\\x03\\x0Ev\\x03\\x0Exe6d4cccce8f45c3311f72a5a907963a\\x0E\\xFBZ^d\\x1F\\x12\\xF4X\\x16\\xB9"
		"[\\xD6\\x81X\\x10talog\\x1E\\x8DY\\x0E_X$Product=&p\t\t$Id=FI-SW-0aQN\\x86\\x04\\x0E\\xA5S\\x99\\xAB\\x0E\\x01\n\\x08ing\"@\\\\N2\\x00\\x19.\\x1E<\n.\\xA9\\x03\\x1A\\xDA[\r%\\x00e\\x0E\\xA4Y*\\xF1E\\x14unload\\x16\\x19\nZ\\x94\\x022#\\x00N\\x98\\x02\\x08dom\\x16\\xBE\n\\xA1\\x07\\x1Cve\":810.j\\x03<\\x010\\x1Ccontent_\\x01~\\x00e:\\x80\\x00\\x08811nC\\x03b?\\x00\\x05\\x9C\\x08814\\x86|\\x00\\x0E\\xC3]\\x00t\\x01\\xA9\\x0E\\x1Caf\\xDA\\x03\\x01\\x9D6\\x1B\\x01\\xC1hj\\x1B\\x1A\\x1D1\t\\x8D\\x81:6"
		":\\x03u\\xE2\\x10count\\x12'_-\\x9B\\x08ion1\\xAD\\x08har\\x0E\\xCE^.\\x19\\x00\\x04ab!\\x9F\\x01\\xB5\\x08\"ex\\x0E\\x8Db\\x04ng\\x1E+[\\x00s\\x0E\\x98`\\x0E\\x11c number\":1\\xFEH\\x0B\\xFEH\\x0B\\xFEH\\x0B\\xFEH\\x0B\\xFEH\\x0B\\xFEH\\x0B2H\\x0B<battery.level\":1\\x0EX\r\\x16\\x06^\\x1Eh^\\xFE\\x83^\\xFE\\x83^\\xFE\\x83^\\xFE\\x83^\\xFE\\x83^\\xFE\\x83^\\xFE\\x83^\\xFE\\x83^\\xBE\\x83^\\x08]}}", 
		LAST);

	web_custom_request("rb_bf32608msb_27", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=779413673&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Cart.action?addItemToCart=&workingItemId=EST-1", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fjpetstore%2Factions%2FCart.action$tvt=1779553146843$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$rt="
		"1-1779553146843%3Bhttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fcss%2Fjpetstore.css%7Cb755e0f0g0h0i0m0v6014w6014I11M-68001081V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7Cb755e0f0g0h0i0m0v3808w3808E1F17220O287P60I7M761912964V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcart.gif%7Cb756e0f0g0h0i0m0v96w96E1F288O16P18I7M-1891668168V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fseparator.gif%7Cb756e0f0g0h0i0m0v46w46F18N2O1P18I7M688934799V0%7Chttp%3A%2F"
		"%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Ffish.gif%7Cb756e0f0g0h0i0m0v271w271E1F390O26P15I7M-302972535V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fdogs.gif%7Cb756e0f0g0h0i0m0v306w306E1F450O30P15I7M1822807848V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Freptiles.gif%7Cb756e0f0g0h0i0m0v398w398E1F780O52P15I7M-620539332V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fcats.gif%7Cb756e0f0g0h0i0m0v289w289E1F420O28P15I7M1231591079V0%7Chttp%3A%2F%2Floc"
		"alhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fbirds.gif%7Cb757e0f0g0h0i0m0v251w251E1F495O33P15I7M-1591609649V0$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCart.action%3FaddItemToCart%3D%26workingItemId%3DEST-1$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553147617_729$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCart.action%3FaddItemToCart%3D%26workingItemId%3DEST-1$time=1779553150789", 
		LAST);

	lr_start_transaction("Checkout");

	web_add_cookie("dtSaf4o018pw=true%7CC%7C-1%7CProceed%20to%20Checkout%7C-%7C1779553162008%7C553147617_729%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCart.action%3FaddItemToCart%3D%26workingItemId%3DEST-1%7C%7C%7C%7C; DOMAIN=localhost");

	lr_think_time(11);

	web_url("Order.action", 
		"URL=http://localhost:8080/jpetstore/actions/Order.action?newOrderForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/jpetstore/actions/Cart.action?addItemToCart=&workingItemId=EST-1", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf32608msb_28", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=457230059&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Cart.action?addItemToCart=&workingItemId=EST-1", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1779553162013%7C_wv_%7CAAI%7C1%7CfIS%7C14957%7CfID%7C2%2C1%7C7%7C_event_%7C1779553162605%7C_viewend_%7Cinp%7C0%7Csvn%7C%2Fjpetstore%2Factions%2FCart.action%7Csvt%7C1779553146843%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1779553162605%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCart.action%3FaddItemToCart%3D%26workingItemId%3DEST-1$rId=RID_-51098923$rpId=-1231724404$domR=1779553147666$tvn="
		"%2Fjpetstore%2Factions%2FCart.action$tvt=1779553146843$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCart.action%3FaddItemToCart%3D%26workingItemId%3DEST-1$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553147617_729$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCart.action%3FaddItemToCart%3D%26workingItemId%3DEST-1$time=1779553162609", 
		LAST);

	web_custom_request("rb_bf32608msb_29", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=2&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=3463264157&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553162619&ss=1&qc=1817274324&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Cart.action?addItemToCart=&workingItemId=EST-1", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xC8-D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"view.fo\\x11?,_time\":15770\r\\x1D\\x0Cback\t\\\\\r\\x1D\\\\0,\"error.http_4xx_count\":\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!#8us\":\"reported\",\\x05\\x18)^:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x14849.5,\\x05\\x12\\x1Cloading_\\x01U!x "
		"complete\"\t\\x1F\\x01\\x17>l\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-u\\x1C14956.79\t\\x01\\x0C702,\\x05Z\\x08dur%2\t\\xB4\\x10id.na!\\xC0,\"pointerdown\\x01\\x9C$id.process\r\\xBE\\x08rt\"\\x05S\\x089.1\tR\\x0C9925\\x01\\xE56*\\x00\\x08end\\x11(\\x002\r(\\x15{<cancelable\":true\t\\x918ui_element.tag_\r\\x8F\\x00A\r\\x85\\x1D\\x1E\\xA8xpath\":[\"html\",\"body\",\"div[@id=\\\\\"Content\\\\\"]6\\x17\\x00\\x18atalog\\\\B\\x17\\x00\\x00r\r+\\x14a\"],\""
		"fB\\xBE\\x01\\x00prn\\x01\\x00pR\\xA4\\x01\\x04in\\x1D\\x184below_thresholAG\\x04lc\\x1D\\x1F]_\\x01\\x186_\\x02\\x041,\\x05\\x15\\x04st9\\xD1MV\\x01,A\\x07-\\xE7\\x18812.699\r/\\x04iza\\x8C\\x0C7220\t\\x11\\x14url\":\"A\\xEB\\xC8://localhost:8080/jpetstore/images/logo-topbar.gif\"\tC\\x1Cresource\tu2?\\x02\\x01\\x8B=\\xA1Hrender_delay\":94.10\t\\x01\\x14149012RO\\x00\t,\\x0C27.8\t+\\x1C00745058\\x11-\\x05R\\x89c=\\x00\\x1Du]4\\x0CIMG\"\t8\\x1D \\x826\\x02\\x14Header"
		">\\x1E\\x02\\x0CLogoN\\x14\\x002d\\x02\\x18a\",\"imgA? long_task!\\xB3i\\xD3\\x0Cnot_=\\xE4\\x0Cttfb\\x19\\x1D>\\x19\\x00\\x00v\\x89H\\x10727.5q8\\x107648,\t8\\x0Cwaita\\x899\\x7F\\x0415\r\\x1B\\x10cache\\x1D\\x19\\x000\r\\x18\\x08dnsJ\\x16\\x00\\x14connec\\xA53\\x19L\\x113\\x18request\\x1D\\x1A\\x08712>\\x90\\x00\\x18performa\\xCC\\x14.activ\\x85O\\x81\\xE1\\x00r\\xA9\\xD2\\x00v\\xC1!\\x00s\\x01K(nce_number\"A\\xD1\\x05\\x19\\x08preM()\\xD6X0,\"characteristics.has_\\x01,"
		"\\x1C_summary\\x91.\\x10navig\\x05n\\xC1\\xAA\\x01r\\xA5S\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\xA1p\\x08haray.\\xB5\\x00\\x01x\\\\_origin\":1779553146843,\".p\\x03:\\x1B\\x009/\\xCD\\xEC,dt.rum.schem\\xFD\\x90\\x18\"0.23.0\\x81\\x83\t!\\x14applic\t\\xB8Xid\":\"ea7c4b59f27d43eb\",\\xF5\\x82\\x10frame:\\x84\\x07<79212e4c355fb399\\x1DZ\\x00g\\xA16\"\n\\x08\\\\\"1.337.9.20260504-112723>1\\x00-\\x1B$javascript\\x19!\\x00b\\x1A\n\\x08\\x00s\\x05\\xA9|5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t"
		"0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-=\\x16\\x00i\\x1Ah\\x08)\\x131l\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01w,evice.orient%[<\":\"landscape-priE9\\x04,\"\r)Dbattery.level\":100\\x15\\x1B$screen.wid\\xC1^\\x0C1536>\\x1B\\x00(height\":9609\\xAA\\x14window67\\x001>\r\\x1C\\x118\\x08842B8\\x00\t\\x98\\x1C_pixel_r\\x01\\xC2L\":1.25,\"page.url.ful\\x8E\\xBD\\x05\\x00ae\\xCE\\x14s/Carte\\x91,on?addItemTo\\x01\\x15 =&working\\x01\\x13 Id=EST-1\"\r"
		"i1\\x87\\x00_%\\xF1Jk\\x02\\x05\\x8F\\x1Cdetected\\xF1\\x9E\\xDD<J\\x7F\\x00\\x11\\\\\\x08tit\\xE1\\xEB\\x14\"JPetS\\xC1i\\x14 Demo\"\\x1A&\n:z\\x008b91999e63350b94\\x11&\\xFE\t\\x01\\x8E\t\\x01\\x00v\\x81\\xB1\\xBA\\xE3\\x00\\x04},\\xFEW\\x0B:W\\x0B%h&"
		"\\x96\\x0B\\xAD\\x1E\\x1015771-\\xAB\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFEW\\x0B\\xFAW\\x0BN&\\x0B\\xC15\\x00_:&\\x0B\\x01\\x14Nf\\x0B\\xFE>\\x0B\\xFE>\\x0B.>\\x0B\\x041,\\xFE>\\x0B\\xFE>\\x0B\\xFE>\\x0B\\xFE>\\x0B\\xFE>\\x0B\\xFE>\\x0B\\xFE>\\x0B\\xFE>\\x0B\\xFE>\\x0B\\xFE>\\x0B\\xFE"
		">\\x0B\\xFE>\\x0B\\xFE>\\x0B\\xFE>\\x0B\\xFE>\\x0B\\xFA>\\x0B\\x08]}}", 
		LAST);

	web_add_cookie("rxvtf4o018pw=1779554962713|1779553123580; DOMAIN=localhost");

	web_add_cookie("dtPCf4o018pw=1$553162656_84h-vGRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0e0; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_30", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=155480910&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action?newOrderForm=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CProceed%20to%20Checkout%7CC%7C-%7C553147617_729%7C1779553162008%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCart.action%3FaddItemToCart%3D%26workingItemId%3DEST-1%7C%7C%7C%2Fjpetstore%2Factions%2FCart.action%7C1779553146843%2C1%7C1%7C_load_%7C_load_%7C-%7C1779553162013%7C1779553162716%7Cdn%7C118%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCart.action%3FaddItemToCart%3D%26workingItemId%3DEST-"
		"1%2C2%7C3%7C_event_%7C1779553162013%7C_vc_%7CV%7C683%5Epc%7CVCD%7C1023%7CVCDS%7C3%7CVCS%7C760%7CVCO%7C1771%7CVCI%7C0%7CTS%7C1%7CVE%7C491%5Ep501%5Ep67947%5Eps%5Es%23Banner%7CS%7C681%2C2%7C4%7C_event_%7C1779553162013%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C56%2C2%7C2%7C_onload_%7C_load_%7C-%7C1779553162716%7C1779553162716%7Cdn%7C118%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1779553162013%7C_view_%7Csvn%7C%2Fjpetstore%2Factions%2FCart.a"
		"ction%7Csvt%7C1779553146843%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=localhost,$rId=RID_-1180709710$rpId=-711600650$domR=1779553162712$tvn=%2Fjpetstore%2Factions%2FOrder.action$tvt=1779553162013$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$nt=a0b1779553162013e10f10g10h10i10k11l588m589o683p683q687r699s703t703u6437v6137w6137M-711600650V0$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrderForm%3D$title="
		"JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553162656_84$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrderForm%3D$time=1779553163804", 
		LAST);

	web_custom_request("rb_bf32608msb_31", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=5&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=1068472581&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553164735&ss=0&qc=4268407203&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action?newOrderForm=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xC4\\xD5\\x01D{\"data_version\":2,\\x05\\x11\\xF4,\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"start_time\":1779553162627,\"duration\":0,\"performance.initiator_type\":\"link\",\"characteristics.has_request\":true,\"url.full\":\"http://localhost:8080/jpetstore/css/jpetstore.css\",\"network.protocol.name\"\tL\\x08\",\".\\xA5\\x00(time_origin.\\xDA\\x00\\x0401!b(t.rum.schem=|\\x18\"0.23.0:I\\x00\\x00s=\""
		"\\x14615.29\t\\x01\\x10701986t\\x00(next_hop_pr\t\\xA0\\x08\":\":N\\x004domain_lookup_\\x05\\\\\\x00\"~W\\x0064\\x00\\x08end\\x822\\x00\\x18connect\\x9A`\\x00\\x11.\\x8EZ\\x00\\x18secure_\r3\\x08ion\\x11d\\x0006\\x0B\\x01-\\xF8b\\x1E\\x00\\x14sponse~\\x1F\\x00\\x8E\\x92\\x00\\x10redir\\x1D\\xEDB\\x89\\x00\r\\x1F\\x05L:\\x1D\\x00\\x14workerZ\\x86\\x00\\x10fetch\\x11\\x1Cz\\xFA\\x018render_blocking\\x016\\x14tus\":\"\\x11\\x12:\\x07\\x02\\x14transf\\x01{\\x0Cize\">\\x97\\x000encoded_body_\t\""
		"\\x0C60146b\\x01\\x04deZ%\\x00-{(.server_tim\\x01\\x92@hint\":\"received\",\\x15(\\x0Ctrac%\\xD2\\x00tE\\xBF\t(\\x10from_\tB\\x08\",\"\\x05#\\x00.\\x89Dx343452934a6cc116081301249311005\\x19.$s_sampled\"m\\xFDN \\x04,w3c_resource\r\\xAB\\x00s\\x110m\\xA7\\x18applicaAm\t\\x83<ea7c4b59f27d43eb\\x9D\\xF4\\x10frameB\\xF6\\x04<d8fd01b427a5d2\",\\x15Z\\x10gent.\\xB5|\\\\\"1.337.9.20260504-112723>1\\x00\\x04ty\\x85\\xF6$javascript\\x19!\\x00b\\xAD|\\x00s%,|5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t"
		"0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-\\x81\\x9C-\\x16\\x00i\\xAD\\xDA)\\x13\\x001\\xAD\\xBB\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01w,evice.orient%[L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":960,\\xD5\\x83\\x14window67\\x001#\r\\x1C\\x118\\x08842B8\\x00\tb\\x1C_pixel_r\\x01\\xA74\":1.25,\"page.u\\xA6M\\x06\\x04acA?\\x1Cs/Order.\t\\x0E\\x0C?new\\x05\\x10\\x10Form=a\\xA1\\x01U1X\\x00_%\\xC2\\x006F<\\x02\\x05&$detected_n\\xC9\\x81\\x00/\\xD9\\xB8\t]6k\\x00\\x11]"
		"\\x0Ctitl\\xE1\\xB0PJPetStore Demo\",\"view:{\\x00<8c871be8fe214706\\x11&\\xFE\\xF6\\x00>\\xF6\\x00\\x05{\\xBE\\xD0\\x00\\x04},\\xFE\\x88\\x08\\xFE\\x88\\x08N\\x88\\x08u\\x8ENj\\x04\\xAD\\x17\\x91]\\xAAG\\x01\\x10ruxit\\x85,pjs_ICA15789NPRTUVXfqrux_10337\\x894\\x893\\x0C.js\"\\xFE\\xAF\\x08\\xFE\\xAF\\x08\\x16\\xAF\\x08a-\\x04er\"\\xBC\t\\xEE\\xA3\\x08:K\\x00Z\\x97\\x08:&\\x00\\x1A*\\x08\\xE1\\x12\\x00r\\x1A\\xEB\\x08Z\"\\x00\\xE5\\xA1\\xE1h: \\x00\\xFEs\\x08\\xDAs\\x08"
		":\\x86\\x00\\xFEg\\x08\\xA6g\\x08By\\x00\\xFE[\\x08z[\\x08\\x1013290\\x86]\\x08\\x14362149&7\\x08\\x16\\x1D\\x08\\xED\\xB4\\x1E_\\x08@not_available_htt\\x0E\\x97\\x0BmzVi\\x08\\x012\\x04se\\xE1CN\\xB5\\x03\\xFE\\x1F\\x08\\xFE\\x1F\\x08\\xFE\\x1F\\x08\\xFE\\x1F\\x08\\xFE\\x1F\\x08\\xFE\\x1F\\x08\\xFE\\x1F\\x08\\xFE\\x1F\\x08\\xFE\\x1F\\x08\\xFE\\x1F\\x08\\xFE\\x1F\\x08\\xFE\\x1F\\x08\\xFE\\x1F\\x08\\xFE\\x1F\\x08\\xFE\\x1F\\x08\\xFE\\x1F\\x08\\xFE\\x1F\\x082\\x1F\\x08\\x04im\\x0E\\x87\r"
		"Ng\\x04\\x8D\\xA2\\xCA\\x1C\\x08Timages/logo-topbar.gif\\xFE\\xFC\\x07\\xFE\\xFC\\x07\\xED\\xFC\\x006\\x16\\xAA\\x10\\x0C9925\\xA1\\xBA\\xFE\\x08\\x08\\x1E\\x08\\x08jW\\x00Z\\x14\\x08j2\\x00J \\x08\\x8A.\\x00\",\\x08j,\\x00\\xFE8\\x08\\xDA8\\x08j\\x92\\x00\\xFED\\x08\\xA6D\\x08r\\x85\\x00ZP\\x08\\x0Cnon-\\xFE\\xAF\\x10\\x1E\\xAF\\x10\\x08380:\\x1C\\x13J\\xAF\\x10\t%m|"
		"VP\\x08\\x00r\\xFE\\xAF\\x10x3881223f689a154f0643b8963dcd5a3\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xFE\\xAF\\x10\\xF2\\xAF\\x10\\xFE\\x90\\x08j\\x90\\x08\\x0Ccart\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\"
		"xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\x12\\x89\\x08\\x0496\\x826\\x19\\x01#\\xFE\\x85\\x08v\\x85\\x08|570492c08c75f09b297394998fb21c09\\xFE4\\x19\\xFE4\\x19\\xFE4\\x19\\xFE4\\x19\\xFE4\\x19\\xFE4\\x19\\xFE4\\x19\\xFE4\\x19\\xFE4\\x19\\xFE4\\x19\\xFE4\\x19\\xFE4\\x19\\xFE4\\x19\\xFE4\\x19\\xFE4\\x19\\xFE4\\x19\\xFE4\\x19\\xEE4\\x19\\xFE\\x85\\x08j\\x85\\x08\\x1Cseparato\\xFE\\x13\\x11\\xFE\\x13\\x11.\\x13\\x11\\x007\\x1A\\x13\\x11\\x007\\xFE\\xBE!6\\xBE"
		"!jW\\x00Z\\x13\\x11j2\\x00J\\x13\\x11\\x8A.\\x00\"\\x13\\x11j,\\x00\\xFE\\x13\\x11\\xDA\\x13\\x11j\\x92\\x00\\xFE\\x13\\x11\\xA6\\x13\\x11r\\x85\\x00\\xFE\\x13\\x11\\x8A\\x13\\x11\\x004\\x86\\x8A\\x08\\x01#\\xFE\\x8A\\x08v\\x8A\\x08|"
		"348f55f2a3c0905ed28d9435f9189a91\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08:\\x8A\\x08\\x008\\xAEF*\\xFE\\x8A\\x08n\\x8A\\x08\\x14m_fish\\xFE\\x12\\x11\\xFE\\x12\\x11\"\\x12\\x11\\x086.0\\x1E\\x88\\x08\\x08764:*\\x17\\xE6\\xA3!rW\\x00R\\x88\\x08r2\\x00B\\x88\\x08\\x92.\\x00\\x1A\\x88\\x08r"
		",\\x00\\xFE\\x88\\x08\\xD2\\x88\\x08r\\x92\\x00\\xFE\\x88\\x08\\x9E\\x88\\x08z\\x85\\x00\\xFE\\x88\\x08\\x8A\\x88\\x08\\x08271\\x82\\x13\\x11\\x05$\\x14reques\\xFE\\x99\\x19^\\x99\\x19x060253210f8790b19f045d76c7a6383\\x0E\\xEF&\\x1Av*\\xFEH*\\xFEH*\\xFEH*\\xFEH*\\xFEH*\\xFEH*\\xFEH*\\xFEH*\\xFEH*\\xFEH*\\xFEH*\\xFEH*\\xFEH*\\xFEH*\\xFEH*\\xFEH*\\xFEH*\\x12H*\\xFE\\x8A\\x08\\xFE\\x8A\\x08*\\x8A\\x08\\x0Cdogs\\xFE\\x8A\\x08\\xFE\\x8A\\x08*\\x8A\\x08\\x001\\x1A\\x8A\\x08\\xFE%\"2%\""
		"\\x006nW\\x00Z\\x8A\\x08j\\x89\\x00J\\x8A\\x08\\x8A.\\x00\"\\x8A\\x08j,"
		"\\x00\\xFE\\x8A\\x08\\xDA\\x8A\\x08j\\x92\\x00\\xFE\\x8A\\x08\\xA6\\x8A\\x08r\\x85\\x00\\xFE\\x8A\\x08\\x8A\\x8A\\x08\\x0430\\x86\\x13\\x11\\x05$\\xFE\\x8A\\x08v\\x8A\\x08x78c4449186f15ce3a8d1129d5513f44\\x0E\\xCD%\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08Z\\"
		"x8A\\x08\\x18reptile\\xFE\\x8E\\x08\\xFE\\x8E\\x08.\\x8E\\x08\\xFE^;R^;\\x006nW\\x00Z\\x8E\\x08j\\x89\\x00J\\x8E\\x08\\x8A.\\x00\"\\x8E\\x08j,\\x00\\xFE\\x8E\\x08\\xDA\\x8E\\x08j\\x92\\x00\\xFE\\x8E\\x08\\xA6\\x8E\\x08r\\x85\\x00\\xFE\\x8E\\x08\\x8E\\x8E\\x08>\\xCE="
		"N\\xB2*\\x01$\\xFE\\x8E\\x08z\\x8E\\x08x10e236f5ffa28765b140d44712ee9b4\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19\\xFE\\xA2\\x19f\\xA2\\x19\\x08cat\\xFE\\x8A\\x08\\xFE\\x8A\\x08.\\x8A\\x08\\x003\\x1A\\x18\\x11\\x108509962\\x17\\xEE\\xA2\\x19jW\\x00Z\\x8A\\x08j2\\x00J\\x8A\\"
		"x08\\x8A.\\x00\"\\x8A\\x08j,\\x00\\xFE\\x8A\\x08\\xDA\\x8A\\x08j\\x92\\x00\\xFE\\x8A\\x08\\xA6\\x8A\\x08r\\x85\\x00\\xFE\\x8A\\x08\\x8A\\x8A\\x08\\x0428:p\\x02J\\x8A\\x08\\x05$\\xFE\\x8A\\x08v\\x8A\\x08|"
		"99b04d0d3be1cf52ac7ae8a395db1efa\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08\\xFE\\x8A\\x08f\\x8A\\x08\\x0Cbird\\xFE\\x8B\\x08\\xFE\\x8B\\x08.\\x8B\\x08:\\x12B\\xEE\\x7F\\x08:K\\x00Zs\\x08:&\\x00Jg\\x08Z\"\\x00\"[\\x08: \\x00\\xFEO\\x08\\xDAO\\x08"
		":\\x86\\x00\\xFEC\\x08\\xA6C\\x08By\\x00\\xFE7\\x08\\x8E7\\x08\\x005\\x8A\\xD9!\\x01$\\xFE7\\x08z7\\x08<816f19d7e450737b\\x0ECI$89b94aa411\\xFE\\xED2\\xFE\\xED2\\xFE\\xED2\\xFE\\xED2\\xFE\\xED2\\xFE\\xED2\\xFE\\xED2\\xFE\\xED2\\xFE\\xED2\\xFE\\xED2\\xFE\\xED2\\xFE\\xED2\\xFE\\xED2\\xFE\\xED2\\xFE\\xED2\\xFE\\xED2\\xDE\\xED2>\\xB7C\\x0E\\x17&4elf_monitoring\\x1E\\xBECJ*\\x00\\x1Cinternal\\x11#\\x12xS\\x0E\\xBBH\\x00e.\\x1CT\\x0468\\x0E\\x1CT.\\xF6T\\x1AlOf)T\\x11!\\x08fm_*\\xA2U timestamp2^"
		"\\x00\\x0C68,\"\\x0E\\xB3Q4\":2000,\"messag\\x0E\\x0FN\\x12\\xBEO\\x1C31483296\\x12\\\\M\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E\\xD0P\\x14 JavaS\\x12\\x98P0 tag\\\\\",[]]\"}]&\\xF6P\\xFEPQ\\xFEPQ\\xFEPQ\\xFEPQ\\xFEPQ\\xFEPQ\\xFEPQ\\xFEPQ\\xFEPQ\\xFEPQ\\xFEPQ\\xFEPQ\\xFEPQ\\xFEPQ\\xFEPQ\\x8EPQ>\\x05\\x05\\x0E\\x8CY long_taskz\\x07\\x05\\x0430.\\xB7/\\x005\\x0E\\xEBS~1Y\\x15[\\x00.\\x1A\\x11S\\xA1\\x9C\\x04\",\\x1D\\x18\\x18attribu\\x0E\\x87S\\x0EP\\x0C\\x14tainer\\x16eS\\x8A(\\x00\r"
		"V\\x8A*\\x00\\x08src\\x16vY\\x19\\x93V{\\x00\\x1A\\xC6U\\x16\\x87TbY\\x00\ry\\x14unknow\\x0E\\xC8S-\\x0B\\xFEE\\x05\\xFEE\\x05\\xFEE\\x05\\xFEE\\x05\\xFEE\\x05\\xFEE\\x05\\xFEE\\x05\\xFEE\\x05\\xFEE\\x05\\xFEE\\x05\\xFEE\\x05\\xFEE\\x05\\xFEE\\x05\\xFEE\\x05\\xFEE\\x05\\x92E\\x05V'\n\\x000\\x12C^\"'\n\\x08702noKB-_\\x10navig\\x0E\\xCCX\\x81NN\\xA7\\x05\\x00r\\x16x1\\xB1\\xA5\\xAA\\xA9VN{XB\\xE6X\\x04ne\\xFED_\\xF6D_\\x000\\x86L\\x1B\\x0E8T\\x08/1.\\x0E\\x8E:.\\xB4N6\\xAD\\x12%\\x9D\\x0C\""
		":9.2\\xECL\\x0EFZf4\\x00\\x12\\x9F\\x12z2\\x00:\\xED\\x12\\x9A.\\x00\\x8EZ\\x00\\xDA\\x05\\x13\\x04112\\x92\\x1A\\x088846B\\x01\\x00r:M_\\x08588vM#\\x1A|_\\x05\\xB3\\x085892^\\x00:z\\x1A\\xFE2\\x13\\x962\\x13zd\\x01\\xFA]_\\x0C643762\\x01N`_\\x001>%\\x00Ju\\x1B\t%m\\xA0\\xFE\\xB1NZ\\xB1Nxf04cc63db683bd60f8b2525119a21f2\\x0E\\xBE^^\\x8E,\\x12\\x9A\\\\\\x16K_\\xCE&\\\\\\x00C\\x0E4J\\x89C$?addItemTo\\x01\\x15\\x04=&\\x0E(a\\x08ing\\x01\\x13\\x18Id="
		"EST-a\\x9CN\\xBD\\x04\\x0E\\xB1W\\x99\\xE2\\x0Ec\\x0F\\x04in&\\xD2_N2\\x00\\x19.\\x91\\xF2.\\xC0\\x03\\x1A\\xA6\t\r%\\x00e\\x0EI]*\\xCEZ\\x14unload\\x16{\\x0F\\x91\\x11:`\\x042#\\x00E\\xF3:!\\x00\\x08dom\\x16 \\x10\\x01\\xFB\\x18ve\":682>\\xC0\\x15\\x01$\\x1Ccontent_\\x01r\\x00e:t\\x00\\x08683nF\\x03b?\\x00\\x05\\x90\\x08687n\\x0F:\t=\\x0EIa\\x00t\\x01\\x9D\\x04986\\xF1\\x046\\xDA\\x02\\x01\\x9D6\\x0F\\x01\\xC1\\x9F:\\x8E\\x16\\x1D%\\x05\\x81\\x01#2E\\x056T\\x00\\x95\\x04\\x08cou\\x0EDb\\x040,"
		"1\\x8F\\x08ion1\\xA1\\x08har\\x0ETb-\\xA8\\x05\\x19\\x04ab!\\x93\\x01\\xB5\\x08\"ex\\x0E\\x13f\\x04ng\\x1E\\xC4^\\x00s\\xC1\\xE3\\x0E\\x97f number\":1\\xFE\\x9E\\x10\\xFE\\x9E\\x10\\xFE\\x9E\\x10\\xFE\\x9E\\x10\\xFE\\x9E\\x10\\xFE\\x9E\\x102\\x9E\\x10<battery.level\":1\\x0E\\xAE\\x12\\x16\\x8Ca\\x1E\\xEEa\\xFE\tb\\xFE\tb\\xFE\tb\\xFE\tb\\xFE\tb\\xFE\tb\\xFE\tb\\xFE\tb&\tb\\x08]}}", 
		LAST);

	web_custom_request("rb_bf32608msb_32", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=826570616&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action?newOrderForm=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fjpetstore%2Factions%2FOrder.action$tvt=1779553162013$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$rt="
		"1-1779553162013%3Bhttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fcss%2Fjpetstore.css%7Cb615e0f0g0h0i0m0v6014w6014I11M-68001081V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7Cb616e0f0g0h0i0m0v3808w3808E1F17220O287P60I7M761912964V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcart.gif%7Cb616e0f0g0h0i0m0v96w96E1F288O16P18I7M-1891668168V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fseparator.gif%7Cb616e0f0g0h0i0m0v46w46F18N2O1P18I7M688934799V0%7Chttp%3A%2F"
		"%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Ffish.gif%7Cb616e0f0g0h0i0m0v271w271E1F390O26P15I7M-302972535V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fdogs.gif%7Cb616e0f0g0h0i0m0v306w306E1F450O30P15I7M1822807848V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Freptiles.gif%7Cb616e0f0g0h0i0m0v398w398E1F780O52P15I7M-620539332V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fcats.gif%7Cb616e0f0g0h0i0m0v289w289E1F420O28P15I7M1231591079V0%7Chttp%3A%2F%2Floc"
		"alhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fbirds.gif%7Cb617e0f0g0h0i0m0v251w251E1F495O33P15I7M-1591609649V0$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrderForm%3D$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553162656_84$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrderForm%3D$time=1779553165819", 
		LAST);

	web_add_cookie("dtSaf4o018pw=true%7CC%7C-1%7CContinue%7C-%7C1779553166631%7C553162656_84%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrderForm%3D%7C%7C%7C%7C; DOMAIN=localhost");

	web_submit_data("Order.action_2", 
		"Action=http://localhost:8080/jpetstore/actions/Order.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action?newOrderForm=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=order.cardType", "Value=Visa", ENDITEM, 
		"Name=order.creditCard", "Value=999 9999 9999 9999", ENDITEM, 
		"Name=order.expiryDate", "Value=12/03", ENDITEM, 
		"Name=order.billToFirstName", "Value=Ashlesha", ENDITEM, 
		"Name=order.billToLastName", "Value=Hedaoo", ENDITEM, 
		"Name=order.billAddress1", "Value=nagpur", ENDITEM, 
		"Name=order.billAddress2", "Value=nagpur", ENDITEM, 
		"Name=order.billCity", "Value=nagpur", ENDITEM, 
		"Name=order.billState", "Value=maha", ENDITEM, 
		"Name=order.billZip", "Value=440024", ENDITEM, 
		"Name=order.billCountry", "Value=India", ENDITEM, 
		"Name=newOrder", "Value=Continue", ENDITEM, 
		"Name=_sourcePage", "Value=F_ydrT7eAAq0D_3T5E7UUgr2-oNbrDkY_9HIERp3npiMUHuWCbKkR5Ys3CGafwh2wwCGmn8B5ts2ai6ylC9KJMU-0EZ6bsAu2rJ0Mg-18yU=", ENDITEM, 
		"Name=__fp", "Value=2ee9ImGuiQiPPKPfOyF8qJjcOv97TGJJy0IoDNppUIv0QPfKrl4cVrE7zk4utLJA6cOqUDMyBdeZxTF-Aew7ZpwG5ddnyvY5r-1NZJqsyFyk8T6d2l6LXw==", ENDITEM, 
		LAST);

	web_custom_request("rb_bf32608msb_33", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=258212856&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action?newOrderForm=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1779553166645%7C_wv_%7CAAI%7C1%7CfIS%7C4392%7CfID%7C2%2C1%7C7%7C_event_%7C1779553167285%7C_viewend_%7Cinp%7C0%7Csvn%7C%2Fjpetstore%2Factions%2FOrder.action%7Csvt%7C1779553162013%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1779553167285%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrderForm%3D$rId=RID_-1180709710$rpId=-711600650$domR=1779553162712$tvn=%2Fjpetstore%2Factions%2FOrder.action$tvt="
		"1779553162013$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrderForm%3D$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553162656_84$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrderForm%3D$time=1779553167288", 
		LAST);

	web_custom_request("rb_bf32608msb_34", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=2&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=1504343324&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553167299&ss=1&qc=525230474&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action?newOrderForm=", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\x9C1D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"view.fo\\x11?(_time\":5281\r\\x1C\\x0Cback\t[\r\\x1C\\\\0,\"error.http_4xx_count\":\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!\"8us\":\"reported\",\\x05\\x18)]:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x14731.69\r\\x01\\x102549,"
		"\\x05\\x1E\\x1Cloading_\\x01a!\\x83 complete\"\t\\x1F\\x01\\x17>x\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-\\x81\\x144392.3\r\\x91\\x0C851,\\x05Y\\x08dur%=\\x08\":8\t\\x11\\x04na!\\xCA,\"pointerdown\\x01\\x9B$id.process\r\\xBD\\x08rt\"\\x01R\\x083.8>R\\x00\\x1D(\\x08end\\x05&\\x004\t[<cancelable\":true\t\\x168ui_element.tag_\r\\x80\\x10INPUT\rz\\x1D\"\\xA8xpath\":[\"html\",\"body\",\"div[@id=\\\\\"Content\\\\\"]6\\x17\\x00\\x18atalog\\\\\\x05\\x17@form\",\"input\"],\""
		"fr\\xB5\\x01\\x00pre\\x01\\x00pR\\x9B\\x01\\x04in\\x1D\\x184below_thresholAJ\\x04lc\\x1D\\x1F]b\\x01\\x186b\\x02\\x041,\\x05\\x15\\x04st9\\xC8MY\t\\x19A\\x00-\\xE0\\x10685.5\t\\x16(size\":17220\t\\x11\\x14url\":\"A\\xEE\\xC8://localhost:8080/jpetstore/images/logo-topbar.gif\"\tC\\x1Cresource\tsY7\\x11b9\\xC6Trender_delay\":115.9990\\x05\\x01\\x0C7450\r\\xD3:P\\x00\t-\\x0C27.4\\x05) 002235174\\x11}\\x05S\\x89f2\\x01\\x01\\x1Dx.>\\x02\\x08MG\"\t:\\x1D \\x82"
		"<\\x02\\x14HeaderI$YR\\x0CLogoN\\x14\\x002j\\x02\\x00aAP\\x04mgAN long_task!\\xB6B\\xCD\\x03\\x19\\x1E\\x0Call.\\xAD\\x03!\\x13\\x156\\x01\\x18\\x08avg=c\\x0856,:8\\x00@slowest_occurrenc\\xA1\\xF0\\x08[{\".(\\x02\\x10618,\"9\\xA8\\x0C56}].G\\x00\\x0CselfR\\x80\\x00\\x05\\x19n\\x81\\x00\\x05!\\xE2\\x82\\x00\\x0CttfbR\\x1A\\x01\\x05\\x19\\x00v\\xA9K\\x10588.2\\x8DY\\x1470198,\t\\x1F\\x0Cwait\\x81\\x81\\x19\\xD7\\x0096e\\x05\\x0442\r*\\x10cache\\x1D(\\x000\r"
		"\\x18\\x08dnsJ\\x16\\x00\\x14connec\\xC5E\\x19[\\x113\\x0Crequ!m\\x19\\x1A\\x10578.5\\x11\\x9F 7648,\"per\\x81W\\x81\\xE2\\x14.activ\\xA5V\\xA1\\xE7\\x00r\\xC9\\xE4\\x14view.s\\x01K(nce_number\"!\\xFA\\x05\\x19\\x08prem7I\\xE4X0,\"characteristics.has_\\x01,\\x1C_summary\\xB1D\\x10navig\\x05n\\xE1\\xBB\\x01r\\xC5Y\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\xC1v\\x08har\\x81\\x88.\\xB5\\x00\\x01x\\x18_origin\\x81;,79553162012,2W\\x02\\x0016\\x1B\\x00=\\x15\\xE5\\xFD,dt.rum.schem*\\xA0\\x08\\x18\""
		"0.23.0\\xA1\\x94\t!\\x14applic\t\\xB7Xid\":\"ea7c4b59f27d43eb\",\"\\x92\\x08\\x18frame.i:\\x94\\x084d8fd01b427a5d2\\x1DZ\\x00g\\xC1K\"\\x1A\t\\\\\"1.337.9.20260504-112723>1\\x00-\\x1A$javascript\\x19!\\x00b\\x1A\\x1A\t\\x00s\\x05\\xA9|5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-=\\x16\\x11\\xE4)\\x131k\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01w,evice.orient%[<\":\"landscape-priE8\\x04,\"\r)Dbattery.level\":100\\x15\\x1B$screen.wid\\xE1o\\x0C1536>\\x1B\\x00"
		"(height\":9609\\xAA\\x14window67\\x001>\r\\x1C\\x118\\x008a\\xAB:\\x1C\\x00\t\\x98\\x1C_pixel_r\\x01\\xC2L\":1.25,\"page.url.ful\\x8E\\xCB\\x06\\x00ae\\xCD\\x1Cs/Order.\t\\x0E\\x0C?new\\x05\\x10\\x14Form=\"\rU1s\\x00_%\\xDD\\x006FW\\x02\\x05{\\x1Cdetected\\x1E\\x9F\\x08\\xFD6\t]6k\\x00\\x11]\\x08tit\\x0E\\xED\\x08\\x14\"JPetS\\xE1d\\x14 Demo\"\\x1A$\\x0B6{\\x00<8c871be8fe214706\\x11&\\xFE\\xF6\\x00>\\xF6\\x00\\x00v\\x81\\x89\\xBE\\xD0\\x00\\x04},\\xFEA\\x0C:A\\x0C%V&"
		"\\x80\\x0C\\x8D\\xF7\\x0C5282-\\x98\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0C\\xFEA\\x0CBA\\x0CN\\x10\\x0C\\xE1F\\x00_:\\x10\\x0C\\x01\\x14NP\\x0C\\xFE(\\x0C\\xFE(\\x0C*(\\x0C\\x0E\\xAE\\x14\\x16\\x07\\x0C\\xFE(\\x0C\\xFE(\\x0C\\xFE(\\x0C\\xFE"
		"(\\x0C\\xFE(\\x0C\\xFE(\\x0C\\xFE(\\x0C\\xFE(\\x0C\\xFE(\\x0C\\xFE(\\x0C\\xFE(\\x0C\\xFE(\\x0C\\xFE(\\x0C\\xFE(\\x0C\\xFE(\\x0CB(\\x0C\\x08]}}", 
		LAST);

	web_add_cookie("rxvtf4o018pw=1779554967387|1779553123580; DOMAIN=localhost");

	web_add_cookie("dtPCf4o018pw=1$553167329_451h-vGRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0e0; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_35", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=2643464926&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CContinue%7CC%7C-%7C553162656_84%7C1779553166631%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrderForm%3D%7C%7C%7C%2Fjpetstore%2Factions%2FOrder.action%7C1779553162013%2C1%7C1%7C_load_%7C_load_%7C-%7C1779553166637%7C1779553167389%7Cdn%7C121%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrderForm%3D%2C2%7C3%7C_event_%7C1779553166637%7C_vc_%7CV%7C736%5Epc%7CVCD"
		"%7C1025%7CVCDS%7C3%7CVCS%7C820%7CVCO%7C1831%7CVCI%7C0%7CTS%7C1%7CVE%7C491%5Ep594%5Ep67947%5Eps%5Es%23Banner%7CS%7C734%2C2%7C4%7C_event_%7C1779553166637%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C52%2C2%7C2%7C_onload_%7C_load_%7C-%7C1779553167389%7C1779553167389%7Cdn%7C121%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1779553166637%7C_view_%7Csvn%7C%2Fjpetstore%2Factions%2FOrder.action%7Csvt%7C1779553162013%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0"
		"%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=localhost,$rId=RID_1533565351$rpId=1779318640$domR=1779553167385$tvn=%2Fjpetstore%2Factions%2FOrder.action$tvt=1779553166637$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$nt=a0b1779553166637e10f10g10h10i10k71l643m644o736p737q740r748s752t752u5600v5300w5300M1779318640V0$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi="
		"GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553167329_451$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action$time=1779553168490", 
		LAST);

	web_add_cookie("dtSaf4o018pw=true%7CC%7C-1%7CConfirm%7C-%7C1779553169031%7C553167329_451%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%7C%7C%7C%7C; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_36", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=2585793162&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fjpetstore%2Factions%2FOrder.action$tvt=1779553166637$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$rt="
		"1-1779553166637%3Bhttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fcss%2Fjpetstore.css%7Cb672e0f0g0h0i0m0v6014w6014I11M-68001081V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7Cb673e0f0g0h0i0m0v3808w3808E1F17220O287P60I7M761912964V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcart.gif%7Cb673e0f0g0h0i0m0v96w96E1F288O16P18I7M-1891668168V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fseparator.gif%7Cb673e0f0g0h0i0m0v46w46F18N2O1P18I7M688934799V0%7Chttp%3A%2F"
		"%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Ffish.gif%7Cb673e0f0g0h0i0m0v271w271E1F390O26P15I7M-302972535V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fdogs.gif%7Cb673e0f0g0h0i0m0v306w306E1F450O30P15I7M1822807848V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Freptiles.gif%7Cb673e0f0g0h0i0m0v398w398E1F780O52P15I7M-620539332V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fcats.gif%7Cb673e0f0g0h0i0m0v289w289E1F420O28P15I7M1231591079V0%7Chttp%3A%2F%2Floc"
		"alhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fbirds.gif%7Cb674e0f0g0h0i0m0v251w251E1F495O33P15I7M-1591609649V0$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553167329_451$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action$time=1779553169040", 
		LAST);

	web_custom_request("rb_bf32608msb_37", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=5&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=2134059085&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553169414&ss=0&qc=3319922751&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xD2\\xD2\\x01D{\"data_version\":2,\\x05\\x11\\xF4,\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"start_time\":1779553167309,\"duration\":0,\"performance.initiator_type\":\"link\",\"characteristics.has_request\":true,\"url.full\":\"http://localhost:8080/jpetstore/css/jpetstore.css\",\"network.protocol.name\"\tL\\x08\",\".\\xA5\\x00(time_origin\\x1D\\xDAD6637,\"dt.rum.schem=|\\x18\"0.23.0:I\\x00\\x00s=\""
		"\\x14672.10\t\\x01\\x10149016t\\x00(next_hop_pr\t\\xA0\\x08\":\":N\\x004domain_lookup_\\x05\\\\\\x00\"~W\\x0064\\x00\\x08end\\x822\\x00\\x18connect\\x9A`\\x00\\x11.\\x8EZ\\x00\\x18secure_\r3\\x08ion\\x11d\\x0006\\x0B\\x01-\\xF8b\\x1E\\x00\\x14sponse~\\x1F\\x00\\x8E\\x92\\x00\\x10redir\\x1D\\xEDB\\x89\\x00\r\\x1F\\x05L:\\x1D\\x00\\x14workerZ\\x86\\x00\\x10fetch\\x11\\x1Cz\\xFA\\x018render_blocking\\x016\\x14tus\":\"\\x11\\x12:\\x07\\x02\\x14transf\\x01{\\x0Cize\">\\x97\\x000encoded_body_\t\""
		"\\x0C60146b\\x01\\x04deZ%\\x00-{(.server_tim\\x01\\x92@hint\":\"received\",\\x15(\\x0Ctrac%\\xD2\\x00tE\\xBF\t(\\x10from_\tB\\x08\",\"\\x05#\\x00.\\x89Dx343452934a6cc116081301249311005\\x19.$s_sampled\"m\\xFDN \\x04,w3c_resource\r\\xAB\\x00s\\x110m\\xA7\\x18applicaAm\t\\x83<ea7c4b59f27d43eb\\x9D\\xF4\\x10frame:\\xF6\\x04@e08cfe58d8858e47\"\\x95\\x01\\x14agent.\\xB5|\\\\\"1.337.9.20260504-112723>1\\x00\\x04ty\\x85\\xF6$javascript\\x19!\\x00b\\xAD|\\x00s%,x5A1A1CC30FCC34F33FE19DC31EEE92D\\x1D\\x8A\t"
		"0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-\\x81\\x9C-\\x16\\x00i\\xAD\\xDA)\\x13\\x001\\xAD\\xBB\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01\\xAF,evice.orient%[L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":960,\\xD5\\x83\\x14window67\\x001#\r\\x1C\\x118\\x08842B8\\x00\tb\\x1C_pixel_r\\x01\\xA74\":1.25,\"page.u\\xA6M\\x06\\x04acA?\\x1Cs/Order.\t\\x0Ea\\x93\\x01G1J\\x00_%\\xB4J.\\x02\\x05&$detected_n\\xC9s\\x00/\\xD9\\xAA\tOV]\\x00\\x0Ctitl\\xE1\\xA2PJPetStore Demo\",\"view"
		":{\\x00<77e217baaa6649ff\\x11&\\xEE\\xE8\\x00\t\\xE8\\x05m\\xBE\\xC2\\x00\\x04},\\xFEl\\x08\\xFEl\\x08Nl\\x08ur\\x08cha\\xFEn\\x08*n\\x08\\x10ruxit\\x85\\x10pjs_ICA15789NPRTUVXfqrux_10337\\x89\\x18\\x89\\x17\\x0C.js\"\\xFE\\x93\\x08\\xFE\\x93\\x08\\x1A\\x93\\x08\\x009\r\\x01\\x0C25496&\\x06\\xF2\\x93\\x08\rVJW\\x00^\\x93\\x08f2\\x00\\x1A2\\x08\\xE1\\x1A\\x00r\\x1E\\xF3\\x08\\x86.\\x00\\xE5\\xB5\\xE5|f,"
		"\\x00\\xFE\\x93\\x08\\xDE\\x93\\x08f\\x92\\x00\\xFE\\x93\\x08\\xAA\\x93\\x08n\\x85\\x00\\xFE\\x93\\x08z\\x93\\x08\\x141329046o\\x02J\\x95\\x08\\x0C3621A\\x96r\\x97\\x08@not_available_htt\\x0E\\xCF\\x0B\\x112\\x12~\\x08\\x0Es\n.\\xA1\\x08\\x012\\x04se\\xE1{N\t\\x04\\xFEW\\x08\\xFEW\\x08\\xFEW\\x08\\xFEW\\x08\\xFEW\\x08\\xFEW\\x08\\xFEW\\x08\\xFEW\\x08\\xFEW\\x08\\xFEW\\x08\\xFEW\\x08\\xFEW\\x08\\xFEW\\x08\\xFEW\\x08\\xFEW\\x08\\xFEW\\x08\\xC2W\\x08\\x04im\\x0E\\xA3\r"
		"NK\\x04\\x8D\\x86\\x1E\\x95\\x0C\\xAA\\x8D\tPimages/logo-topbar.gi\\x0E\\xD6\t\\x04ne\\xFE\\xC7\\x10\\xEE\\xC7\\x10\\x16\\xC7\\x10\\x0EE\\x0B\\x04er\"\\xD4\\x11\\xEE(\\x08:K\\x00Z\\x1C\\x08:&\\x00J\\x10\\x08Z\"\\x00\"\\x04\\x08: \\x00\\xFE\\xF8\\x07\\xDA\\xF8\\x07:\\x86\\x00\\xFE\\xEC\\x07\\xA6\\xEC\\x07By\\x00Z\\xE0\\x07\\x0Cnon-\\xFEw\\x10\\x1Ew\\x10\\x0C3808\\x86\\xE2\\x07\\x05%m"
		"(\\xFEw\\x10Zw\\x10x3881223f689a154f0643b8963dcd5a3\\xFEw\\x10\\xFEw\\x10\\xFEw\\x10\\xFEw\\x10\\xFEw\\x10\\xFEw\\x10\\xFEw\\x10\\xFEw\\x10\\xFEw\\x10\\xFEw\\x10\\xFEw\\x10\\xFEw\\x10\\xFEw\\x10\\xFEw\\x10\\xFEw\\x10\\xFEw\\x10\\xFEw\\x10\\x82w\\x10\\xFE \\x08j \\x08\\x0Ccart\\xFE\\x19\\x08\\xFE\\x19\\x08\\xFE\\x19\\x08\\xFE\\x19\\x08\\xFE\\x19\\x08\\xFE\\x19\\x08\\xFE\\x19\\x08\\xFE\\x19\\x08\\xFE\\x19\\x08\\xFE\\x19\\x08\\xC2\\x19\\x08\\x0496\\x82\\x17\\x08\\x01#\\xFE\\x15\\x08v\\x15\\x08|"
		"570492c08c75f09b297394998fb21c09\\xFE\\x8C\\x18\\xFE\\x8C\\x18\\xFE\\x8C\\x18\\xFE\\x8C\\x18\\xFE\\x8C\\x18\\xFE\\x8C\\x18\\xFE\\x8C\\x18\\xFE\\x8C\\x18\\xFE\\x8C\\x18\\xFE\\x8C\\x18\\xFE\\x8C\\x18\\xFE\\x8C\\x18\\xFE\\x8C\\x18\\xFE\\x8C\\x18\\xFE\\x8C\\x18\\xFE\\x8C\\x18\\xFE\\x8C\\x18~\\x8C\\x18\\xFE\\x15\\x08j\\x15\\x08\\x1Cseparato\\xFE3\\x10\\xFE3\\x10.3\\x10\\x006\\x16\\xF9 \\xFE\\xFA >\\xFA jW\\x00ZK\\x10j2\\x00JW\\x10\\x8A.\\x00\"c\\x10j,\\x00\\xFEo\\x10\\xDAo\\x10j\\x92\\x00\\xFE"
		"{\\x10\\xA6{\\x10r\\x85\\x00\\xFE\\x87\\x10\\x8A\\x87\\x10\\x004\\x86n\\x08\\x01#\\xFEn\\x08vn\\x08|348f55f2a3c0905ed28d9435f9189a91\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xEEn\\x08\\x14m_fish\\xFE\\x86\\x10\\xFE\\x86\\x10*\\x86\\x10\\x008\\x1A\\xD9\\x1E\\x0C8509\\xFE\\xD3 *\\xD3 jW\\x00Zl\\x08j2\\x00Jl\\x08\\x8A.\\x00\"l\\x08j,"
		"\\x00\\xFEl\\x08\\xDAl\\x08j\\x92\\x00\\xFEl\\x08\\xA6l\\x08r\\x85\\x00\\xFEl\\x08\\x8Al\\x08\\x0427:\\xD6+J\\xD4 \\x05$\\xFEn\\x08vn\\x08|060253210f8790b19f045d76c7a63836\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xC6n\\x08\\x0410\\xAE\\xD41\\xFE\\xDC\\x10n\\xDC\\x10\\x14m_dogs\\xFEn\\x08\\xFEn\\x08\""
		"n\\x08\\x003\\xFE\\xD41V\\xD41rW\\x00Rn\\x08r2\\x00Bn\\x08\\x92.\\x00\\x1An\\x08r,\\x00\\xFEn\\x08\\xD2n\\x08r\\x92\\x00\\xFEn\\x08\\x9En\\x08z\\x85\\x00\\xFEn\\x08\\x8An\\x08\\x0430\\x86\\xDB\\x10\\x05$\\xFEn\\x08vn\\x08x78c4449186f15ce3a8d1129d5513f44\\x0E\\xB5$\\x12\\x86)"
		"\\x00.\\xFE\\xD61\\xFE\\xD61\\xFE\\xD61\\xFE\\xD61\\xFE\\xD61\\xFE\\xD61\\xFE\\xD61\\xFE\\xD61\\xFE\\xD61\\xFE\\xD61\\xFE\\xD61\\xFE\\xD61\\xFE\\xD61\\xFE\\xD61\\xFE\\xD61\\xFE\\xD61\\xA2\\xD61\\xFEn\\x08\\xFEn\\x08.n\\x08\\x18reptile\\xFEr\\x08\\xFEr\\x082r\\x08\\x1A\\xE0\\x10\\x009\\xFE\\xB31.\\xB31\\x043.jW\\x00^r\\x08f\\x89\\x00Nr\\x08\\x86.\\x00&r\\x08f,\\x00\\xFEr\\x08\\xDEr\\x08f\\x92\\x00\\xFEr\\x08\\xAAr\\x08n\\x85\\x00\\xFEr\\x08\\x8Er\\x08\\x009\\x8A\\xD2)"
		"\\x01$\\xFEr\\x08zr\\x08x10e236f5ffa28765b140d44712ee9b4\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xFE\\xE0\\x10\\xF6\\xE0\\x10\\x08cat\\xFEn\\x08\\xFEn\\x08.n\\x08\\x003\\xCDt\\xFEN\\x192N\\x19\\x003nW\\x00Zn\\x08j\\x89\\x00Jn\\x08\\x8A.\\x00\"n\\x08j,"
		"\\x00\\xFEn\\x08\\xDAn\\x08j\\x92\\x00\\xFEn\\x08\\xA6n\\x08r\\x85\\x00\\xFEn\\x08\\x8An\\x08\\x0428:\\xBE\\x1BNN\\x19\\x01$\\xFEn\\x08vn\\x08|99b04d0d3be1cf52ac7ae8a395db1efa\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xFEn\\x08\\xF6n\\x08\\x0Cbird\\xFEo\\x08\\xFEo\\x08.o\\x08j/(\\xE6h:\\x003nW\\x00Zo\\x08j\\x89\\x00Jo\\x08\\x8A.\\x00\"o\\x08j,"
		"\\x00\\xFEo\\x08\\xDAo\\x08j\\x92\\x00\\xFEo\\x08\\xA6o\\x08r\\x85\\x00\\xFEo\\x08\\x8Eo\\x08\\x005\\x8A\\xBD!\\x01$\\xFEo\\x08zo\\x08t816f19d7e450737bad8f89b94aa411\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992n\\x992>\\x83B\\x0Eq\\x1D4elf_monitoring\\x1E\\x8ABJ*\\x00\\x1Cinternal\\x11#\\x12`R\\x0EWO\\x00e*\\x04S\\x0C7361:\n\"\\x1ATNf\\x11S\\x11!\\x08fm_*\\x8AT "
		"timestamp2^\\x00\\x0E\\x8A/\\x0E\\x9BP4\":2000,\"messag\\x0E\\x05M\\x12\\xA6N\\x1C31483296\\x12`L\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E\\xB8O\\x14 JavaS\\x12\\x80O0 tag\\\\\",[]]\"}]&\\xDEO\\xFE8P\\xFE8P\\xFE8P\\xFE8P\\xFE8P\\xFE8P\\xFE8P\\xFE8P\\xFE8P\\xFE8P\\xFE8P\\xFE8P\\xFE8P\\xFE8P\\xFE8P\\x1E8P>\\xE9\\x04\\x0EXX long_taskz\\xEB\\x04\\x001\\x0EQY\"\\xC9X\\x005\\x01\\x0E~\\xFDW\\x15[\\x00.\\x1A\\xEBQ\\xA1\\x80\\x04\",\\x1D\\x18\\x18attribu\\x0ESR\\x0EH\\x0C\\x14tainer\\x16?R\\x8A(\\x00"
		"\rV\\x8A*\\x00\\x08src\\x16BX\\x19\\x93V{\\x00\\x1A\\x92T\\x16SSbY\\x00\ry\\x14unknow\\x0E\\xFFR-\\x0B\\xFE)\\x05\\xFE)\\x05\\xFE)\\x05\\xFE)\\x05\\xFE)\\x05\\xFE)\\x05\\xFE)\\x05\\xFE)\\x05\\xFE)\\x05\\xFE)\\x05\\xFE)\\x05\\xFE)\\x05\\xFE)\\x05\\xFE)\\x05\\xFE)\\x05\\xB5)R\\xEF\t\\x1A\\xF3\\\\\\xB5\\x04\\x10751.6\\x1A\\x10\\x1AJ~\"B\\xDD]\\x10navig\\x0E|W\\x812N\\x8B\\x05\\x1AK\\x0F\\xB1\\x89\\xAA!MZ9W\\xFE\\x1FM\\xFE\\x1FM\\x0006\\xDBBN\\xB3\\x12\\x0E\\xA2R\\x08/"
		"1.\\x0E\\xF49.FM6\\x87\\x12%\\x8F\\x0C\":106\\x97#\\x0E\\xE9Xf5\\x00\\x12b\\x12~3\\x00:\\xBD\\x12\\x9E/\\x00\\x92\\\\\\x00\\xDA\\xBF\\x12\\x04706\\xFD\\x11\\x0026E\\x01\\x00r:\\xF2]\\x0464r\\xAD$\\x15/\\x05\\xB3\\x086446C\\x01>\\\\\\x00\\x1A\\xE3]-q:\\xC0\\x01\"\\xFE\\x12\\x05L:\\x1D\\x00\\xA6\\x02^~e\\x01\\xFA\\x03^\\x0456\\x0E,\r.\\x18\\x02J\\x06^\\x0453>%\\x00JO\\x1B\t%m\\x96\\xFE\\x8FMZ\\x8FMtad00a4d9fa4b4479f8c69b9c53433ar0,\\x12N[\\x16\\xF1]\\xFE\\xDAZ\\x0C?new\\x12\\xD2[\\x10Form="
		"Z\\x82b\\x0E\\x0BV\\x99\\xC4\\x0E\r\\x0F\\x04in&d^N\\xD1\\x04\\x19.\\x91\\xD4.\\x97\\x01\\x1Al\t\r%\\x00e\\x0EF\\\\*HQ\\x14unload\\x16%\\x0FZ\\x90\\x022#\\x00N\\x94\\x02\\x08dom\\x16\\xCA\\x0F\\xA1 \\x1Cve\":735.j\\xB3\\x05\\x010\\x1Ccontent_\\x01~\\x00e:\\x80\\x00\\x08736\\xD2?\\x00\\x05\\x9C\\x10739.8\\x1A\\xF9A\\x08074\\x0E<\\x15.\\xF0\\x00\t|\\x0E\\xE7_\\x00t\\x01\\xA9\\x0447nj\\x00\\x01\\x9D6\\x1B\\x01z\\x8D\\x06\\x1D1\t\\x8Dv\\xBC\\x06u\\xEA\\x08cou\\x0E\\xEE`\\x040,"
		"1\\xA7\\x08ion1\\xB9\\x08har\\x0E\\xFE`-\\xC0\\x05\\x19\\x04ab!\\xAB\\x01\\xC1\\x08\"ex\\x0E\\xBDd\\x04ng\\x1E|]\\x10seque\\x0EAe\\x1Cnumber\":\\x0E;\\x11\\x16B\\x0C\\xFE7\\x0B\\xFE7\\x0B\\xFE7\\x0B\\xFE7\\x0B\\xFE7\\x0B\\xFE7\\x0B\\x0E7\\x0B0battery.level\\xE1k\\x0E\\xE44\\x16\\xDC`\\x1A\\x98`\\xFE\\xB3`\\xFE\\xB3`\\xFE\\xB3`\\xFE\\xB3`\\xFE\\xB3`\\xFE\\xB3`\\xFE\\xB3`\\xB6\\xB3`\\x08]}}", 
		LAST);

	web_url("Order.action_3", 
		"URL=http://localhost:8080/jpetstore/actions/Order.action?newOrder=&confirmed=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf32608msb_38", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=403514491&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1779553169047%7C_wv_%7CAAI%7C1%7CfIS%7C2172%7CfID%7C1%2C1%7C7%7C_event_%7C1779553169939%7C_viewend_%7Cinp%7C0%7Csvn%7C%2Fjpetstore%2Factions%2FOrder.action%7Csvt%7C1779553166637%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1779553169939%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action$rId=RID_1533565351$rpId=1779318640$domR=1779553167385$tvn=%2Fjpetstore%2Factions%2FOrder.action$tvt=1779553166637$tvm="
		"i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553167329_451$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action$time=1779553169943", 
		LAST);

	web_custom_request("rb_bf32608msb_39", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=2&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=234434278&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553169953&ss=1&qc=2948431597&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xA6-D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"view.fo\\x11?(_time\":3311\r\\x1C\\x0Cback\t[\r\\x1C\\\\0,\"error.http_4xx_count\":\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!\"8us\":\"reported\",\\x05\\x18)]:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x14782.89\t\\x01\\x1485099,"
		"\\x05\\x1E\\x1Cloading_\\x01a!\\x83 complete\"\t\\x1F\\x01\\x17>x\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-\\x81\\x182172.30\r\\x01\\x0C745,\\x05Z\\x08dur%>\t\\xC0\\x10id.na!\\xCB,\"pointerdown\\x01\\x9C$id.process\r\\xBE\\x08rt\"\\x01S\\x083.6\t\\xE4\\x0C9925\rS\\x1D)\\x08end\r'9\\x0C\\x001\ty<cancelable\":true\t\\x168ui_element.tag_\r\\x8D\\x00A\r\\x83\\x1D\\x1E\\xA8xpath\":[\"html\",\"body\",\"div[@id=\\\\\"Content\\\\\"]6\\x17\\x00\\x18atalog\\\\\\x05\\x17\\x14a\"],\""
		"fr\\xB4\\x01\\x00prd\\x01\\x00pR\\x9A\\x01\\x04in\\x1D\\x184below_thresholAI\\x04lc\\x1D\\x1F]a\\x01\\x186a\\x02\\x041,\\x05\\x15\\x04st9\\xC7MX\t\\x19!\\xFF-\\xDF\\x000\t\\x12,size\":197475\t\\x12\\x14render\r&2>\\x00\\x10id\":\"-\\x10\\x00\"\t-=a=\\x7F\\x08DIVF \\x00\\xEE\\x81\\x01-\\x81,],\"long_task\\x01\\xE5B\\xFB\\x02\\x19\\x1E\\x0Call.\\x8D1!\\x15\\x156\\x01\\x18\\x0Cavg_Y\\xC7\\x0452.V\\x00\\x01 @slowest_occurrenc\\xA1\\x1E\\x08[{\".W\\x01\\x006!/.E\\x00\\x00}"
		"6\\x9D\\x00\\x08elfR\\x80\\x00\\x05\\x19n\\x81\\x00\\x05!\\xE2\\x82\\x00\\x0CttfbR\\x1A\\x01\\x05\\x19\\x8Dy\\x10643.1y\\x86\\x0849,\t\\x1F\\x0Cwaita\\xAE\\x19\\xD7\\x04106)\\x00\\x0442\r+\\x10cache\\x1D)\\x000\r\\x18\\x08dnsJ\\x16\\x00\\x14connec\\xA5t\\x19\\\\\\x113\\x0Crequ!n\\x19\\x1A,633,\"performa\\xF5\\x14.activ\\x85v\\xA1\\x08\\x00r\\xC9\\x05\\x00v\\xC1S\\x00s\\x01=(nce_number\"!\\xED\\x05\\x19\\x08pre2\\xC9\\x02X0,\"characteristics.has_\\x01,"
		"\\x1C_summary\\x91W\\x10navig\\x05n\\xC1\\xDC\\x01r\\xA5z\\x04ex\\x018\\x00nA\\xFA.\"\\x00\\x04yp\\xA1\\x97\\x08hara\\xAA.\\xB5\\x00\\xC1\\xE3X_origin\":1779553166637,2J\\x02:\\x1B\\x009\\x07\\xE9\\x1E,dt.rum.schem\\xFD\\xC1\\x18\"0.23.0\\x81\\xAB\t!\\x14applic\t\\xB7\\x00ia\\xA9Dea7c4b59f27d43eb\",\\xF5\\xB3\\x10frame:\\xB5\\x07<e08cfe58d8858e47\\x1DZ\\x00g\\xA1^\";\\x08\\\\\"1.337.9.20260504-112723>1\\x00-\\x1A$javascript\\x19!\\x00b\\x1A;"
		"\\x08\\x00s\\x05\\xA9x5A1A1CC30FCC34F33FE19DC31EEE92D\\x1D\\x8A\t0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-=\\x16\\x00i\\x1A\\x99\\x08)\\x131k\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01\\xAF,evice.orient%[<\":\"landscape-priE8\\x04,\"\r)Dbattery.level\":100\\x15\\x1B$screen.wid\\xC1\\x86\\x0C1536>\\x1B\\x00(height\":9609\\xAA\\x14window67\\x001>\r\\x1C\\x118\\x008a\\x9D:\\x1C\\x00\t\\x98\\x1C_pixel_r\\x01\\xC2\\xE0\":1.25,\"page.url.full\":\"http://localhost:8080/jpetstore/ae\\xBF\\x18s/"
		"Ordere\\x91\\x00o\\xE1\\xE8\\x05G1e\\x00_%\\xCFJI\\x02\\x05&\\x1Cdetected\\xF1\\xA4\\x9A]\\x00\\x08tit\\xE1\\xF2\\x14\"JPetS\\x01\\x8B\\x14 Demo\"\\x1A7\n6{\\x00<77e217baaa6649ff\\x11&\\xEE\\xE8\\x00\t\\xE8\\x00v\\x81m\\xBE\\xC2\\x00\\x04},\\xFEF\\x0B:F\\x0B%H&"
		"\\x85\\x0B\\xED\\xA4\\x0C3312-\\xD1\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xFEF\\x0B\\xC6F\\x0B\\x00cJ\\x15\\x0B\\xC1g\\x00_"
		":\\x15\\x0B\\x01\\x14NU\\x0B.\\x0B\\x0B\\x04ab\\xFE-\\x0B\\xF2-\\x0B\\x0E\\xD4\\x12\\x16\\x0C\\x0B\\x00s\\xFE-\\x0B\\xFE-\\x0B\\xFE-\\x0B\\xFE-\\x0B\\xFE-\\x0B\\xFE-\\x0B\\xFE-\\x0B\\xFE-\\x0B\\xFE-\\x0B\\xFE-\\x0B\\xFE-\\x0B\\xFE-\\x0B\\xFE-\\x0B\\xFE-\\x0B\\xCE-\\x0B\\x08]}}", 
		LAST);

	web_add_cookie("rxvtf4o018pw=1779554970031|1779553123580; DOMAIN=localhost");

	web_add_cookie("dtPCf4o018pw=1$553169977_147h-vGRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0e0; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_40", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=471224242&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CConfirm%7CC%7C-%7C553167329_451%7C1779553169031%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%7C%7C%7C%2Fjpetstore%2Factions%2FOrder.action%7C1779553166637%2C1%7C1%7C_load_%7C_load_%7C-%7C1779553169042%7C1779553170034%7Cdn%7C152%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%2C2%7C3%7C_event_%7C1779553169042%7C_vc_%7CV%7C977%5Epc%7CVCD%7C1028%7CVCDS%7C4%7CVCS%7C1069%7CVC"
		"O%7C2080%7CVCI%7C0%7CTS%7C1%7CVE%7C486%5Ep801%5Ep41329%5Eps%5Es%23Banner%7CS%7C976%2C2%7C4%7C_event_%7C1779553169042%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1779553170033%7C1779553170034%7Cdn%7C152%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1779553169042%7C_view_%7Csvn%7C%2Fjpetstore%2Factions%2FOrder.action%7Csvt%7C1779553166637%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$"
		"dO=localhost,$rId=RID_-961076662$rpId=-1624711319$domR=1779553170030$tvn=%2Fjpetstore%2Factions%2FOrder.action$tvt=1779553169042$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$nt=a0b1779553169042e6f6g6h6i6k8l892m893o977p978q982r988s991t992u6342v6042w6042M-1624711319V0$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrder%3D%26confirmed%3Dtrue$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId="
		"553169977_147$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrder%3D%26confirmed%3Dtrue$time=1779553171150", 
		LAST);

	web_custom_request("rb_bf32608msb_41", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=5&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=2339412485&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553172087&ss=0&qc=430805124&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xBD\\xCB\\x01D{\"data_version\":2,\\x05\\x11\\xF4,\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"start_time\":1779553169963,\"duration\":0,\"performance.initiator_type\":\"link\",\"characteristics.has_request\":true,\"url.full\":\"http://localhost:8080/jpetstore/css/jpetstore.css\",\"network.protocol.name\"\tL\\x08\",\".\\xA5\\x00(time_origin.\\xDA\\x00\\x0404!b(t.rum.schem=|\\x18\"0.23.0:I\\x00\\x00s=\""
		"\\x089216f\\x00(next_hop_pr\t\\x92\\x08\":\":@\\x004domain_lookup_\\x05N\\x00\"FI\\x006&\\x00\\x08endJ$\\x00\\x18connectbD\\x00\\x11 V>\\x00\\x18secure_\r%\\x08ion\\x11H\\x0006\\xD3\\x00-\\xB2b\\x1E\\x00\\x14sponse~\\x1F\\x00V\\x84\\x00\\x10redir\\x1D\\xC3B{\\x00\r\\x1F\\x05>:\\x1D\\x00\\x14workerZx\\x00\\x10fetch\\x11\\x1CB\\xA6\\x018render_blocking\\x01(\\x14tus\":\"\\x11\\x12:\\xB3\\x01\\x14transf\\x01m\\x0Cize\">\\x89\\x000encoded_body_\t\"\\x0C60146F\\x01\\x04deZ%\\x00-_"
		"(.server_tim\\x01\\x92@hint\":\"received\",\\x15(\\x0Ctrac%\\xB6\\x00tEk\t(\\x10from_\tB\\x08\",\"\\x05#\\x00.i\\xE2x343452934a6cc116081301249311005\\x19.$s_sampled\"m\\x9BN\\xBE\\x03,w3c_resource\r\\xAB\\x00s\\x110mE\\x18applicaAQ\t\\x83<ea7c4b59f27d43eb\\x9D\\x92\\x10frame:\\x94\\x04D2d5cafa9cfde3ee9\",\\x15Z\\x10gent.\\xB5\\x1A\\\\\"1.337.9.20260504-112723>1\\x00\\x04ty\\x85\\x94$javascript\\x19!\\x00b\\xAD\\x1A\\x00s%,|5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t"
		"0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-\\x81:-\\x16\\x00i\\xADx)\\x13\\x001\\xADY\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01w,evice.orient%[L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B\\x10heigh\\x81x\\x0860,\\xD5!\\x14window67\\x001#\r\\x1C\\x118\\x008\\xA17:\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA74\":1.25,\"page.u\\xA6\\xEB\\x05\\x04acA?\\x1Cs/Order.\t\\x0E\\x0C?new\\x05\\x10<=&confirmed=truea\\xAC\\x01`1c\\x00_%\\xCDJG\\x02\\x05&$detected_n\\xC9*\\x00/\\xD9a\th6v\\x00\\x11]"
		"\\x0Ctitl\\xE1YPJPetStore Demo\",\"view>{\\x00859cba51db59c992\\x11&\\xFE\\x01\\x01j\\x01\\x01\\x05\\x86\\xBE\\xDB\\x00\\x04},\\xFE<\\x08\\xFE<\\x08N<\\x08u\\xA4N\\x80\\x04\\xAD-\\x91s\\xAAR\\x01\\x10ruxit\\x85Bpjs_ICA15789NPRTUVXfqrux_10337\\x89J\\x89I\\x0C.js\"\\xFEc\\x08\\xFEc\\x08\\x12c\\x08\\x08.20\t\\x01\\x1829802,\".\\xD7\\x08\\xEAq\\x08nW\\x00V\\x7F\\x08n2\\x00\\x1AH\\x08\\xE1L\\x00r\\x81Y\\x002\\x92.\\x00\\xE5\\xD9z,"
		"\\x00\\xFE\\xA9\\x08\\xD6\\xA9\\x08n\\xEC\\x00\\xFE\\xB7\\x08\\xA2\\xB7\\x08v\\x85\\x00\\xFE\\xC5\\x08z\\xC5\\x08\\x1013290\\x86\\xC7\\x08\\x14362149&\\xA1\\x08\\x16\\x87\\x08\\x1A\\x1E\\x08\\x1E\\xC9\\x08@not_available_htt\\x0E\\x9F\\x0Bm\\xCEV\\xD3\\x08\\x012\\x04se\\xE1\\xADN\t"
		"\\x04\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\xFE\\x89\\x08\\x8A\\x89\\x08\\x04im\\x0E\\x07\\x0EN}\\x04\\x8D\\xB8\\xCA\\x86\\x08Timages/logo-topbar.gif\\xFEf\\x08\\xFEf\\x08\\x1Af\\x08\\x004\\x16e\\x08\\x1002235\\xFEf\\x08*f\\x08jW\\x00Zf\\x08j2\\x00Jf\\x08\\x8A.\\x00\"f\\x08j,"
		"\\x00\\xFEf\\x08\\xDAf\\x08j\\x92\\x00\\xFEf\\x08\\xA6f\\x08r\\x85\\x00Zf\\x08\\x0Cnon-\\xFE/\\x11\\x1E/\\x11\\x0C38086\\xD7\nJ/\\x11\t%m|Vf\\x08\\xEE/\\x11\\x12/\\x11x3881223f689a154f0643b8963dcd5a3\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11\\xFE/\\x11J/\\x11\\xFE\\xA6\\x08j\\xA6\\x08\\x0Ccart\\xFE\\x9F\\x08\\xFE\\x9F\\x08*\\x9F\\x08\\x0EH\\x14\\x04er\""
		"u\\x1A\\xEE\\xF9\\x10:K\\x00Z\\x87\\x08:&\\x00J{\\x08Z\"\\x00\"o\\x08: \\x00\\xFEc\\x08\\xDAc\\x08"
		":\\x86\\x00\\xFEW\\x08\\xA6W\\x08By\\x00\\xFEK\\x08\\x8AK\\x08\\x0496\\x82I\\x08\\x01#\\xFEG\\x08vG\\x08x570492c08c75f09b297394998fb21c0\\x0E\\xD4\\x18\\x1A\\xA4\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\xFEv\\x19\\x1Ev\\x19\\xFEG\\x08jG\\x08\\x1Cseparato\\xFE\\xEB\\x10\\xFE\\xEB\\x10.\\xEB\\x10\\x006\\x1A\\xEB\\x10\\x0C1490\\xFE\\xC2!&\\xC2"
		"!nW\\x00Zd\\x08j\\x89\\x00Jp\\x08\\x8A.\\x00\"|\\x08j,\\x00\\xFE\\x88\\x08\\xDA\\x88\\x08j\\x92\\x00\\xFE\\x94\\x08\\xA6\\x94\\x08r\\x85\\x00\\xFE\\xA0\\x08\\x8A\\xA0\\x08\\x004\\x86\\xA0\\x08\\x01#\\xFE\\xA0\\x08v\\xA0\\x08|348f55f2a3c0905ed28d9435f9189a91\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"\\xFE\\x16\"F\\x16\""
		"\\xFE\\xA0\\x08n\\xA0\\x08\\x14m_fish\\xFE\\xEA\\x10\\xFE\\xEA\\x10*\\xEA\\x10\\x008\\x1A\\x9E\\x08\\x0C0745\\xFE\\x9E\\x08*\\x9E\\x08jW\\x00Z\\x9E\\x08j2\\x00J\\x9E\\x08\\x8A.\\x00\"\\x9E\\x08j,\\x00\\xFE\\x9E\\x08\\xDA\\x9E\\x08j\\x92\\x00\\xFE\\x9E\\x08\\xA6\\x9E\\x08r\\x85\\x00\\xFE\\x9E\\x08\\x8A\\x9E\\x08\\x0427:p\\x02J\\x88\\x19\\x05$\\xFE\\xA0\\x08v\\xA0\\x08|"
		"060253210f8790b19f045d76c7a63836\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\x92\\xA0\\x08\\x004\\xAE\\xF22\\xFE\\xA0\\x08v\\xA0\\x08\\x0Cdogs\\xFE\\xA0\\x08\\xFE\\xA0\\x08\"\\xA0\\x08\\xFE\\x1B\"\"\\x1B\":I\\x00R\\x84\\x08:$\\x00Bv\\x08Z \\x00\\x1Ah\\x08:\\x1E\\x00\\xFEZ\\x08\\xD2Z\\x08"
		":\\x84\\x00\\xFEL\\x08\\x9EL\\x08Bw\\x00\\xFE>\\x08\\x8A>\\x08\\x0430\\x86\\xDD\\x10\\x05$\\xFE>\\x08v>\\x08x78c4449186f15ce3a8d1129d5513f44\\x0Eo%\\xFE~\\x19\\xFE~\\x19\\xFE~\\x19\\xFE~\\x19\\xFE~\\x19\\xFE~\\x19\\xFE~\\x19\\xFE~\\x19\\xFE~\\x19\\xFE~\\x19\\xFE~\\x19\\xFE~\\x19\\xFE~\\x19\\xFE~\\x19\\xFE~\\x19\\xFE~\\x19\\xFE~\\x19\\x86~\\x19\\xFE>\\x08\\xFE>\\x08*>\\x08\\x18reptile\\xFEB\\x08\\xFEB\\x08*B\\x08\\x04.1\\x1A\\xE2\\x10\\xFE\\x80\\x192\\x80\\x19rW\\x00V^"
		"\\x08n\\x89\\x00Fl\\x08\\x8E.\\x00\\x1Ez\\x08n,"
		"\\x00\\xFE\\x88\\x08\\xD6\\x88\\x08n\\x92\\x00\\xFE\\x96\\x08\\xA2\\x96\\x08v\\x85\\x00\\xFE\\xA4\\x08\\x8E\\xA4\\x08\\x009\\x8Aj*\\x01$\\xFE\\xA4\\x08z\\xA4\\x08x10e236f5ffa28765b140d44712ee9b4\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xFE\\xE2\\x10\\xBE\\xE2\\x10\\x08cat"
		"\\xFE\\xA0\\x08\\xFE\\xA0\\x08.\\xA0\\x08j& \\xE6x*\\x002nW\\x00Z\\xA0\\x08j\\x89\\x00J\\xA0\\x08\\x8A.\\x00\"\\xA0\\x08j,\\x00\\xFE\\xA0\\x08\\xDA\\xA0\\x08j\\x92\\x00\\xFE\\xA0\\x08\\xA6\\xA0\\x08r\\x85\\x00\\xFE\\xA0\\x08\\x8A\\xA0\\x08\\x08289\\x82\\xC1*\\x05$\\xFE\\xA0\\x08v\\xA0\\x08|"
		"99b04d0d3be1cf52ac7ae8a395db1efa\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\xFE\\xA0\\x08\\x92\\xA0\\x08\\x005\\xFE\\x82\\x19\\xFE\\x82\\x19&\\x82\\x19\\x0Cbird\\xFE\\xA1\\x08\\xFE\\xA1\\x08&\\xA1\\x08\\x0036#\\x06\\xE6\\x93\\x08:I\\x00R\\x85\\x08:$\\x00Bw\\x08Z \\x00\\x1Ai\\x08:\\x1E\\x00\\xFE"
		"[\\x08\\xD2[\\x08:\\x84\\x00\\xFEM\\x08\\x9EM\\x08Bw\\x00\\xFE?\\x08\\x8E?\\x08>1$N\\xC1!\\x01$\\xFE?\\x08z?\\x08t816f19d7e450737bad8f89b94aa411\\xFE\\x013\\xFE\\x013\\xFE\\x013\\xFE\\x013\\xFE\\x013\\xFE\\x013\\xFE\\x013\\xFE\\x013\\xFE\\x013\\xFE\\x013\\xFE\\x013\\xFE\\x013\\xFE\\x013\\xFE\\x013\\xFE\\x013\\xFE\\x013\\xFE\\x0136\\x013>\\xA3C\\x0EU74elf_monitoring\\x1E\\xAACJ*\\x00\\x1Cinternal\\x11#\\x12\\x90S\\x0E\\xBDH\\x00e&&T\\x1070011:\\x8C\\x08\\x1A\\xD8Of3T\\x11!\\x08fm_*\\xACU "
		"timestamp\\x19^\\x08699\\x0E\\x928\\x0E\\x1FR\\x04\":\\x0E\\xEAK\\x1C,\"messag\\x0EpN\\x12*P\\x1C31483296\\x12\\xB2M\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E<Q\\x14 JavaS\\x12\\x04Q0 tag\\\\\",[]]\"}]&bQ\\xFE\\xBCQ\\xFE\\xBCQ\\xFE\\xBCQ\\xFE\\xBCQ\\xFE\\xBCQ\\xFE\\xBCQ\\xFE\\xBCQ\\xFE\\xBCQ\\xFE\\xBCQ\\xFE\\xBCQ\\xFE\\xBCQ\\xFE\\xBCQ\\xFE\\xBCQ\\xFE\\xBCQ\\xFE\\xBCQ\\xFE\\xBCQ>\\xBCQ\\x16\\x1EY\"\\xF8Y\\x08991>\\xD5=B\\xFCY\\x10navig\\x0E\\xFDS\\x0E<S"
		">q\\x05\\xF6\\x02ZN\\xA1Sn\\x17T\\x04ne\\xFE\\x1EZ\\xF6\\x1EZ\\x000\\x86\\xA7\r\\x0E\nO\\x08/1.\\x0Er5.\\xDD@6\\x89\r\\xC5\\x94\\x10\":5.7\\x1A7\\x1F\\x12\\x08R\\x003:\\xE3%64\\x00\\x12\\x7F\rz2\\x00:\\xCB\r\\x9A.\\x00\\x8EZ\\x00\\xDA\\xE7\r\\x0076\\x7F\\x15\\x001:O&\\x00r:lZ\\x08892v!Q\\x1A\\x9BZ\\x05\\xB2\\x10893.3-@JY1\\xFE\\x15\\x0E\\x96\\x15\\x0Ezc\\x01\\xFA\\x98Z\\x0463\\x0E\\x96W.H\\x02R\\x9BZ"
		">%\\x00J#\\x0E\\x006\\x05%\\xFE$\\x0Ev$\\x0Ex02431ea19471950fac860d2add113d7n\\x03\\x1F\\x12\\xCAW\\x16\\x86Z\\xFEVWZ\\xA7^\\x0E`R\\x99\\xCA\\x0E\\x10\n\\x04in&\\xEBZN\\xD7\\x04\\x19.\\x1EK\n.\\x89\\x01\\x1A\\x85Z\r%\\x12\\xB4X*\\xCCD\\x14unload\\x16(\nq\\xEE\\x089146\\xF0\\x036M\\x0423\\x00E\\xE1z1\\x00\\x08dom\\x16\\xED\n\\xA1F ve\":976.9m\\x11J\\xF3M\\x010\\x1Ccontent_\\x01\\x9E\\x00e>\\xA0\\x00\\x0478n\\xCD!b?\\x00\t\\xAC\\x008~-="
		"\\x08_co\\x0E\\x8E\\\\\\x00t\\x01\\xA9\\x0487n\\xA9\\x00\\x01\\x9D:;\\x01\\x0491n\\xEB\\x03\\x1D1\t\\x8DF\\xD6\\x06\\x95\\x0E\\x08cou\\x0E\\x89]\\x040,1\\xBB\\x08ion1\\xCD\\x08har\\x0E\\x99]-\\xD4\\x05\\x19\\x04ab!\\xBF\\x01\\xB5\\x08\"ex\\x0E\\xF6`\\x04ng\\x1E\\xFEY\\x10seque\\x0Eza\\x1Cnumber\":\\x0ER\\x0C\\x16x`\\xFEw\\x0B\\xFEw\\x0B\\xFEw\\x0B\\xFEw\\x0B\\xFEw\\x0B\\xFEw\\x0B\\x0Ew\\x0BDbattery.level\":100>3]\\xFEN]\\xFEN]\\xFEN]\\xFEN]\\xFEN]\\xFEN]\\xFEN]\\xFEN]~N]\\x08]}}", 
		LAST);

	web_custom_request("rb_bf32608msb_42", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=4050507402&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fjpetstore%2Factions%2FOrder.action$tvt=1779553169042$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$rt="
		"1-1779553169042%3Bhttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fcss%2Fjpetstore.css%7Cb921e0f0g0h0i0m0v6014w6014I11M-68001081V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7Cb921e0f0g0h0i0m0v3808w3808E1F17220O287P60I7M761912964V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcart.gif%7Cb922e0f0g0h0i0m0v96w96E1F288O16P18I7M-1891668168V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fseparator.gif%7Cb922e0f0g0h0i0m0v46w46F18N2O1P18I7M688934799V0%7Chttp%3A%2F"
		"%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Ffish.gif%7Cb922e0f0g0h0i0m0v271w271E1F390O26P15I7M-302972535V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fdogs.gif%7Cb922e0f0g0h0i0m0v306w306E1F450O30P15I7M1822807848V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Freptiles.gif%7Cb922e0f0g0h0i0m0v398w398E1F780O52P15I7M-620539332V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fcats.gif%7Cb923e0f0g0h0i0m0v289w289E1F420O28P15I7M1231591079V0%7Chttp%3A%2F%2Floc"
		"alhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fbirds.gif%7Cb923e0f0g0h0i0m0v251w251E1F495O33P15I7M-1591609649V0$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrder%3D%26confirmed%3Dtrue$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553169977_147$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrder%3D%26confirmed%3Dtrue$time="
		"1779553173173", 
		LAST);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=12:L1oD3aVnFKX6w-YZSHVbdjQhXBYwgldT3T9T3HOW9rY&cup2hreq=78ac5f116ee3a14c4cd331f94923bd5bc03125be13b5e5a7b0d0919b51346972", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromium\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{6e0540ca-f53b-4fca-9342-91fa245c9a77}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"cohort\":\"1:s6f:3cr3@0.025\",\"cohorthint\":\"Auto\",\"cohortname\":"
		"\"Auto\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.23759e3f6d0119a00038b963cec9fb7abafd7b65a35a7e83c7697511db59e6e7\"}]},\"ping\":{\"ping_freshness\":\"{8a6f2c5e-c12c-41cf-b0a3-f83dff8a9f32}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"20251024.824731831.14\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.c1e517c38fa346ac30e13d8f2369620749c4bc6b145a914e0fab85b33755f308\"}]},\"ping\":{\"ping_freshness\":\"{f4d2692e-0e49-4cca-b8c3-42111162ee43}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"9.68.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.261bea60d22ebca3a95ce335c03ec751a0b58b2b7bdbd6ea51dfa54381b07775\"}]},\"ping\":{\"ping_freshness\":\"{e93331e6-7240-42db-bd09-03e8ad9b85e6}\",\"rd\":7082},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"145.0.7584.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{9420e3b8-7e6f-4f0c-9d23-b10d13f08116}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\""
		"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.fd8fd38c229ab33755ff429ccc9919eba21b566551cbfb17d8e11e35e941ee0e\"}]},\"ping\":{\"ping_freshness\":\"{7aed28ca-90bd-46bc-ab17-616a08e54f02}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"2026.3.23.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{4157d9ff-5cc5-4076-b956-d01f7fdf1097}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"7\"},{\"_internal_experimental_sets\":\"false\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"cohort\":\"1:z1x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate"
		"\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.56c21927faa028be6ce18c931660eec37e41da4bfbfd47cafa48350f828c0dbd\"}]},\"ping\":{\"ping_freshness\":\"{8061bab7-9f57-4026-9c5d-d18d2658b0ec}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"2025.7.24.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"cohort\":\"1:2879:\",\"cohorthint\":\"Auto androidlowmem\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{"
		"\"fp\":\"1.c80a7d63372ce080c313e4a2320dc86178ad781914ecf6fb9b3f00d978ee32ff\"}]},\"ping\":{\"ping_freshness\":\"{793eded4-46de-4ef9-bdc7-d81f081bdcbd}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"10543\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.9bec6c2c0185d3305ac8495047a1aa01e725d58f8f18d219742a2988f07cd93a\"}]},\"ping\":"
		"{\"ping_freshness\":\"{4709e1f4-40bd-4b66-993d-a6cb1aa20848}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"3091\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"cohort\":\"1:ut9/1a0f:\",\"cohorthint\":\"M108 and Above\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c1ac192a5f20b241447721b4bcd7b6dd076398c5eeaccad1f793a4a549a59de3\"}]},\"ping\":{\"ping_freshness\":\"{adc0e42e-377a-4d61-ab89-02d2e6050838}\",\""
		"rd\":7082},\"updatecheck\":{},\"version\":\"2026.5.18.61\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.7b05c14dba04ed522210b733f004cb0e74d7679a653b19bd029f9bc0e6b19903\"}]},\"ping\":{\"ping_freshness\":\"{4714c0da-7a99-4acf-ad3f-b10c9ccdd81b}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"1.1.0.3\"},{\"appid\":\""
		"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{61ee7e2f-6461-407b-b420-d8d5af6f2e6f}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"cohort\":\"1:z9x:\",\"cohorthint\":\"Auto\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0c24e9bd976adffa987e08fc54dc0950c84cf18f9cdb4c5caabc6acf24887c4f\"}]},\"ping\":{\"ping_freshness\":\"{88b2f0c9-0435-493d-ab5a-f799f7249937}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"20220505\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"cohort\":\"1:zor:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.9b212fb00a2ff3bc981a89aa8dd0f52c60f7baeb6f958148396af27431c8f097\"}]},\"ping\":{\"ping_freshness\":\"{d24da14f-1e20-4055-8523-052499d0a2ef}\",\"rd\":7082},\"tag\":\"29.5\",\"updatecheck\":{},\"version\":\"29.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"All users\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{1a0295dc-eeb7-49db-a10e-78710c8405aa}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"dnhnnofocefcglhjeigmkhcgfoaipbaa\",\"cohort\":\"1:16j3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.831f042cb02b1fc2f9fed3106f544be8b336828681a1613ced571c09ebca4cf2\"}]},\"ping\":{\""
		"ping_freshness\":\"{43ecd2f5-2713-463a-96e2-76e13f8784dc}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"2022.11.1.1\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.9b494d3de7d41c7329ee1ffed1ad8674e515e89053651dbbc2489f34200e368a\"}]},\"ping\":{\"ping_freshness\":\"{6d0606c5-3f75-4ef0-8d8f-662777d8ba19}\",\"rd\""
		":7082},\"updatecheck\":{},\"version\":\"1674\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.b504d7eeb36a91391d3e14f0c11dc3431a1ac1e7f7dddaf8090930f5a0e3348f\"}]},\"ping\":{\"ping_freshness\":\"{c22392a1-82f3-4608-8112-702723222545}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"677\"},{\"appid\":\""
		"eeigpngbgcognadeebkilcpcaedhellh\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":7006,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4497d8060d0e53c12b4403aa9ebe7e827d4880bae3f4139a26a4feb7ed64c4a2\"}]},\"ping\":{\"ping_freshness\":\"{92ba0bfe-3479-4fd3-a07b-2a05e57a1073}\",\"rd\":7082},\"updatecheck\":{},\"version\":\"2025.6.13.84507\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\""
		":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.26200.8457\"},\"prodversion\":\"108.0.5359.125\",\"protocol\":\"3.1\",\"requestid\":\"{03fcb33e-edd8-4d6c-9ad2-9b716aad611b}\",\"sessionid\":\"{196c43c9-ff09-46b9-a7ad-1b6358e82b4b}\",\"updaterversion\":\"108.0.5359.125\"}}", 
		LAST);

	web_custom_request("rb_bf32608msb_43", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=5&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=270881569&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553174111&ss=0&qc=229289510&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xA9\\x0BD{\"data_version\":2,\\x05\\x11\\xF0\\xAE\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"characteristics.has_long_task\":true,\"start_time\":1779553172037,\"durati\\x01\\xBA<51,\"dt.rum.schem\\x1D\\xD58\"0.23.0\",\"long_\\x01[\\x0C.nam\\x01\\xBA\\x0Cself2\\x18\\x00Tattribution.container_\\x05\\xBF\\x8A(\\x00\rV\\x8A*\\x00\\x10src\":\\x8E)\\x00\\x08typ\\x01\\xA9\\x14windowbY\\x00\ry\\x1Cunknown\""
		"5\\x0B\\x14applic%#\\x00.\\x05\\xC5<ea7c4b59f27d43eb=\\xB1\\x10frame:\\xB3\\x01<2d5cafa9cfde3ee9\\x1DZ\\x10gent.U9\\\\\"1.337.9.20260504-112723>1\\x00\r\\xCF$javascript\\x19!\\x00bM9\\x00s\\x05\\xA9|5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-A\\x00M!\\x00iM\\x97)\\x13\\x08177ES\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01w,evice.orient%[L\":\"landscape-primary\\x19)Lbattery.level\":100,\"\rDDscreen.width\":1536>\\x1B\\x00,height\":960,u[\\x00wE\r67\\x001>\r"
		"\\x1C\\x118\\x08842B8\\x00\t}\\x1C_pixel_r\\x01\\xC2\\xF0F\":1.25,\"page.url.full\":\"http://localhost:8080/jpetstore/actions/Order.a\\x05\\x0E\\x10?newO\\x01\\x10@=&confirmed=true\"\r`1~\\x00_%\\xE8Jb\\x02\\x05\\x86\\x1CdetectedqTzv\\x00\\x11]0title\":\"JPetS\\x01\\xA4, Demo\",\"view>{\\x00859cba51db59c992\\x11&\\xFE\\x01\\x01j\\x01\\x01\\x05\\x86\\xBE\\xDB\\x00\\x0C}]}}", 
		LAST);

	lr_end_transaction("Checkout",LR_AUTO);

	web_add_cookie("dtSaf4o018pw=true%7CC%7C-1%7CReturn%20to%20Main%20Menu%7C-%7C1779553176431%7C553169977_147%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrder%3D%26confirmed%3Dtrue%7C%7C%7C%7C; DOMAIN=localhost");

	web_url("Catalog.action_4", 
		"URL=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf32608msb_44", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=1476331622&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1779553176436%7C_wv_%7CAAI%7C1%7CfIS%7C7173%7CfID%7C2%2C1%7C7%7C_event_%7C1779553176493%7C_viewend_%7Cinp%7C0%7Csvn%7C%2Fjpetstore%2Factions%2FOrder.action%7Csvt%7C1779553169042%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1779553176493%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrder%3D%26confirmed%3Dtrue$rId=RID_-961076662$rpId=-1624711319$domR=1779553170030$tvn="
		"%2Fjpetstore%2Factions%2FOrder.action$tvt=1779553169042$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrder%3D%26confirmed%3Dtrue$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553169977_147$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf="
		"http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrder%3D%26confirmed%3Dtrue$time=1779553176496", 
		LAST);

	web_custom_request("rb_bf32608msb_45", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=2&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=4177623239&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553176505&ss=1&qc=4194584506&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xB01D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"view.fo\\x11?(_time\":7458\r\\x1C\\x0Cback\t[\r\\x1C\\\\0,\"error.http_4xx_count\":\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!\"8us\":\"reported\",\\x05\\x18)]:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x181013.90\t\\x01\\x1422352,"
		"\\x05\\x1F\\x1Cloading_\\x01b!\\x84 complete\"\t\\x1F\\x01\\x17>y\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-\\x82\\x147172.6\t\\x91\\x100149,\\x05Y\\x08dur%>\\x08\":8\t\\x11\\x04na!\\xCB,\"pointerdown\\x01\\x9B$id.process\r\\xBD\\x08rt\"\\x01R\\x084.4\rR\\x01\\xE4\tB\\x1D)\\x08endb'\\x00<cancelable\":true\t=8ui_element.tag_\r\\x8E\\x00A\r\\x84\\x1D\\x1E\\xA8xpath\":[\"html\",\"body\",\"div[@id=\\\\\"Content\\\\\"]2\\x17\\x00 BackLink\\\\\\x05\\x18\\x14a\"],\""
		"fv\\xB6\\x01\\x00prf\\x01\\x00pR\\x9C\\x01\\x04in\\x1D\\x184below_thresholAL\\x04lc\\x1D\\x1F]d\\x01\\x186d\\x02\\x041,\\x05\\x15\\x04st9\\xC9I[\t\\x18A\\x00-\\xE0\\x10979.8\t\\x16(size\":17220\t\\x11\\x14url\":\"A\\xEF\\xC8://localhost:8080/jpetstore/images/logo-topbar.gif\"\tC\\x1Cresource\tsY7\\x11b9\\xB8Hrender_delay\":92.49\t\\x01\\x0C7764\r\\xA2:N\\x00\t+\\x0C29.1\t*\\x1C99254942\\x11{\\x05Q\\x89e.\\xFE\\x00\\x1Du]-\\x0CIMG\"\t9\\x1D \\x82/\\x02\\x14HeaderI\\x16YE\\x0CLogoN\\x14\\x002]"
		"\\x02\\x18a\",\"imgAK long_task!\\xB2B\\xCA\\x03\\x19\\x1E\\x0Call.\\xAD\\x01!\\xE2\\x156\\x01\\x18\\x08avg=`\\x005B \\x00@slowest_occurrenc\\xA1\\xEE\\x08[{\".$\\x02\\x142995,\"9\\xA6\\x1051}],\\x1D\\x80\\x0CselfR\\x81\\x00\\x05\\x19n\\x82\\x00\\x05!\\xE6\\x83\\x00\\x0CttfbR\\x1C\\x01\\x05\\x19\\x00v\\xA9K\\x10892.2\\x91X\\x109802,\t\\x1F\\x0Cwait\\x81\\x80\\x1D\\xD8\\x04.7.(\\x00\\x003\\x11*\\x10cache\\x1D(\\x000\rB\\x08dnsJ\\x16\\x00\\x14connec\\xC5E\\x19[\\x113\\x0Crequ!o\\x19\\x1A4886.5,\""
		"perform\\x81\\xC7\\x14.activ\\xA5I\\xA1\\xDA\\x00r\\xC9\\xD8\\x00v\\xE1&\\x00s\\x01?(nce_number\"!\\xF0\\x05\\x19\\x08prem*I\\xD9X0,\"characteristics.has_\\x01,\\x1C_summary\\xB1)\\x10navig\\x05n\\xE1\\xAF\\x01r\\xC5L\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\xC1i\\x08har\\x81z.\\xB5\\x00\\x01x\\x18_origin\\x81. 795531690ax.M\\x02\\x0016\\x1B\\x009\t\\xE9\\xF1,dt.rum.schem*\\x94\\x08\\x18\"0.23.0\\xA1}\t!\\x14applic\t\\xB7Xid\":\"ea7c4b59f27d43eb\",\"\\x86\\x08\\x18frame.i2\\x88\\x08"
		"<2d5cafa9cfde3ee9\\x1DZ\\x00g\\xC10\"\\x0E\t\\\\\"1.337.9.20260504-112723>1\\x00-\\x1A$javascript\\x19!\\x00b\\x1A\\x0E\t\\x00s\\x05\\xA9|5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-=\\x16\\x11\\xE4)\\x131k\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01w,evice.orient%[<\":\"landscape-priE8\\x04,\"\r)Dbattery.level\":100\\x15\\x1B$screen.wid\\xE1X\\x0C1536>\\x1B\\x00(height\":9609\\xAA\\x14window67\\x001>\r\\x1C\\x118\\x008AY:\\x1C\\x00\t"
		"\\x98\\x1C_pixel_r\\x01\\xC2\\x10\":1.2a_(age.url.ful\\x8E\\xBE\\x06\\x00ae\\xC1\\x18s/Ordere\\x91\\x14on?new\\x05\\x10H=&confirmed=true\",\"\\x05`1~\\x00_%\\xE8Jb\\x02\\x05&\\x1Cdetected\\x1E\\x8F\\x08\\xFD4Nv\\x00\\x11]\\x08tit\\x0E\\xDD\\x08\\x14\"JPetS\\xE1b\\x14 Demo\"\\x1A#\\x0B:{\\x00859cba51db59c992\\x11&\\xFE\\x01\\x01j\\x01\\x01\\x00v\\x81\\x9F\\xBE\\xDB\\x00\\x04},\\xFEK\\x0C:K\\x0C%a&\\x8A\\x0C\\xAD\r"
		"\\x0C7459-\\xA3\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\xFEK\\x0C\\x12K\\x0CN\\x1A\\x0C\\xE1:\\x00_:\\x1A\\x0C\\x01\\x14NZ\\x0C\\xFE2\\x0C\\xFE2\\x0C*2\\x0C\\x049,"
		"\\xFE2\\x0C\\xFE2\\x0C\\xFE2\\x0C\\xFE2\\x0C\\xFE2\\x0C\\xFE2\\x0C\\xFE2\\x0C\\xFE2\\x0C\\xFE2\\x0C\\xFE2\\x0C\\xFE2\\x0C\\xFE2\\x0C\\xFE2\\x0C\\xFE2\\x0C\\xFE2\\x0C\\xBA2\\x0C\\x08]}}", 
		LAST);

	web_add_cookie("rxvtf4o018pw=1779554976608|1779553123580; DOMAIN=localhost");

	web_add_cookie("dtPCf4o018pw=1$553176533_736h-vGRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0e0; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_46", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=2739017144&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CReturn%20to%20Main%20Menu%7CC%7C-%7C553169977_147%7C1779553176431%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrder%3D%26confirmed%3Dtrue%7C%7C%7C%2Fjpetstore%2Factions%2FOrder.action%7C1779553169042%2C1%7C1%7C_load_%7C_load_%7C-%7C1779553176435%7C1779553176610%7Cdn%7C91%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FOrder.action%3FnewOrder%3D%26confirmed%3Dtrue%2C2%7C3%7C_eve"
		"nt_%7C1779553176435%7C_vc_%7CV%7C164%5Epc%7CVCD%7C1012%7CVCDS%7C2%7CVCS%7C245%7CVCO%7C1249%7CVCI%7C0%7CTS%7C1%7CVE%7C491%5Ep500%5Ep67947%5Eps%5Es%23Banner%7CS%7C160%2C2%7C4%7C_event_%7C1779553176435%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C62%2C2%7C2%7C_onload_%7C_load_%7C-%7C1779553176610%7C1779553176610%7Cdn%7C91%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1779553176435%7C_view_%7Csvn%7C%2Fjpetstore%2Factions%2FOrder.action%7Csvt%7C17"
		"79553169042%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=localhost,$rId=RID_1078536306$rpId=1301096046$domR=1779553176607$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553176435$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$nt=a0b1779553176435e9f9g9h9i9k11l54m55o164p164q167r172s175t175u6039v5739w5739M1301096046V0$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$title=JPetStore%20Demo$latC=0$app="
		"ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553176533_736$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$time=1779553177699", 
		LAST);

	web_add_cookie("dtSaf4o018pw=true%7CC%7C-1%7CSign%20Out%7C-%7C1779553178502%7C553176533_736%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%7C%7C%7C%7C; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_47", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=3515402462&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553176435$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$rt="
		"1-1779553176435%3Bhttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fcss%2Fjpetstore.css%7Cb79e0f0g0h0i0m0v6014w6014I11M-68001081V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7Cb79e0f0g0h0i0m0v3808w3808E1F17220O287P60I7M761912964V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcart.gif%7Cb79e0f0g0h0i0m0v96w96E1F288O16P18I7M-1891668168V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fseparator.gif%7Cb80e0f0g0h0i0m0v46w46F18N2O1P18I7M688934799V0%7Chttp%3A%2F%2Fl"
		"ocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Ffish.gif%7Cb80e0f0g0h0i0m0v271w271E1F390O26P15I7M-302972535V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fdogs.gif%7Cb80e0f0g0h0i0m0v306w306E1F450O30P15I7M1822807848V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Freptiles.gif%7Cb80e0f0g0h0i0m0v398w398E1F780O52P15I7M-620539332V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fcats.gif%7Cb80e0f0g0h0i0m0v289w289E1F420O28P15I7M1231591079V0%7Chttp%3A%2F%2Flocalhost%3"
		"A8080%2Fjpetstore%2Fimages%2Fsm_5Fbirds.gif%7Cb80e0f0g0h0i0m0v251w251E1F495O33P15I7M-1591609649V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Ffish_5Ficon.gif%7Cb80e0f0g0h0i0m0v439w439E1F800O40P20I7M-1858137608V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fdogs_5Ficon.gif%7Cb80e0f0g0h0i0m0v468w468E1F920O46P20I7M-39000523V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcats_5Ficon.gif%7Cb80e0f0g0h0i0m0v408w408E1F860O43P20I7M-246443466V0%7Chttp%3A%2F%2Flocalhost%3A8080%"
		"2Fjpetstore%2Fimages%2Freptiles_5Ficon.gif%7Cb80e0f0g0h0i0m0v669w669E1F1560O78P20I7M355865488V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fbirds_5Ficon.gif%7Cb81e0f0g0h0i0m0v471w471E1F1000O50P20I7M1303219330V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsplash.gif%7Cb81e0f0g0h0i0m0v36097w36097E1F124250O350P355Q357R347I7M-266518883V0$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi="
		"GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553176533_736$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$time=1779553178511", 
		LAST);

	web_url("Account.action_2", 
		"URL=http://localhost:8080/jpetstore/actions/Account.action?signoff=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf32608msb_48", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=956697863&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1779553178519%7C_wv_%7CAAI%7C1%7CfIS%7C1836%7CfID%7C1%2C1%7C7%7C_event_%7C1779553178584%7C_viewend_%7Cinp%7C0%7Csvn%7C%2Fjpetstore%2Factions%2FCatalog.action%7Csvt%7C1779553176435%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1779553178584%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$rId=RID_1078536306$rpId=1301096046$domR=1779553176607$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553176435$tvm="
		"i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$title=JPetStore%20Demo$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553176533_736$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$time=1779553178587", 
		LAST);

	web_custom_request("rb_bf32608msb_49", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=2&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=3224259117&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553178607&ss=1&qc=3052655100&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\x9E\\xE8\\x02D{\"data_version\":2,\\x05\\x11\\xF4,\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"start_time\":1779553176514,\"duration\":0,\"performance.initiator_type\":\"link\",\"characteristics.has_request\":true,\"url.full\":\"http://localhost:8080/jpetstore/css/jpetstore.css\",\"network.protocol.name\"\tL\\x08\",\".\\xA5\\x00(time_origin.\\xDA\\x00@435,\"dt.rum.schem=|\\x18\"0.23.0:I\\x00\\x00s=\""
		"\\x1079.10\t\\x01\\x141490126t\\x00(next_hop_pr\t\\xA0\\x08\":\":N\\x004domain_lookup_\\x05\\\\\\x00\"~W\\x0064\\x00\\x08end\\x822\\x00\\x18connect\\x9A`\\x00\\x11.\\x8EZ\\x00\\x18secure_\r3\\x08ion\\x11d\\x0006\\x0B\\x01-\\xF8b\\x1E\\x00\\x14sponse~\\x1F\\x00\\x8E\\x92\\x00\\x10redir\\x1D\\xEDB\\x89\\x00\r\\x1F\\x05L:\\x1D\\x00\\x14workerZ\\x86\\x00\\x10fetch\\x11\\x1Cz\\xFA\\x018render_blocking\\x016\\x14tus\":\"\\x11\\x12:\\x07\\x02\\x14transf\\x01{\\x0Cize\">\\x97\\x000encoded_body_\t\""
		"\\x0C60146b\\x01\\x04deZ%\\x00-{(.server_tim\\x01\\x92@hint\":\"received\",\\x15(\\x0Ctrac%\\xD2\\x00tE\\xBF\t(\\x10from_\tB\\x08\",\"\\x05#\\x00.\\x89Dx343452934a6cc116081301249311005\\x19.$s_sampled\"m\\xFDN \\x04,w3c_resource\r\\xAB\\x00s\\x110m\\xA7\\x18applicaAm\t\\x83<ea7c4b59f27d43eb\\x9D\\xF4\\x10frame:\\xF6\\x04@558d3135ac4fb97c\"\\x95\\x01\\x14agent.\\xB5|\\\\\"1.337.9.20260504-112723>1\\x00\\x04ty\\x85\\xF6$javascript\\x19!\\x00b\\xAD|\\x00s%,|5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t"
		"0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-\\x81\\x9C-\\x16\\x00i\\xAD\\xDA)\\x13\\x001\\xAD\\xBB\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01w,evice.orient%[L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":960,\\xD5\\x83\\x14window67\\x001#\r\\x1C\\x118\\x08842B8\\x00\tb\\x1C_pixel_r\\x01\\xA74\":1.25,\"page.u\\xA6M\\x06\\x04acA?$s/Catalog.\t\\x10a\\x95\\x01I1L\\x00_)\\xB6F0\\x02\\x05&$detected_n\\xC9u\\x00/\\xD9\\xAC\tO^_\\x00\\x0Ctitl\\xE1\\xA6PJPetStore Demo\",\"view:}"
		"\\x0081c96a634ea12c4dA\\xDC\\x05&\\xFE\\xEC\\x00\\x01\\xEC\\x05I\\xC6\\xC6\\x00\\x04},\\xFEt\\x08\\xFEt\\x08Nt\\x08uzNV\\x04\\xAD\\x03\\x91I\\xAA=\\x01\\x10ruxit\\x85\\x18pjs_ICA15789NPRTUVXfqrux_10337\\x89 \\x89\\x1F\\x0C.js\"\\xFE\\x9B\\x08\\xFE\\x9B\\x08\\x12\\x9B\\x08\\x003\\x16\\x9A\\x08\\x1800745066.\\x06\\xEA\\x9B\\x08nW\\x00V\\x9B\\x08n2\\x00\\x1A:\\x08\\xE1\"\\x00r\\x16\\xFB\\x08\\x8E.\\x00\\xE5\\xBD\\x0479r,"
		"\\x00\\xFE\\x9B\\x08\\xD6\\x9B\\x08n\\xBE\\x00\\xFE\\x9B\\x08\\xA2\\x9B\\x08v\\x85\\x00\\xFE\\x9B\\x08z\\x9B\\x08\\x1013290\\x86\\x9D\\x08\\x14362149&w\\x08\\x16]\\x08\\xED\\xF4\\x1E\\x9F\\x08@not_available_htt\\x0E\\xD7\\x0Bm\\xCEV\\xA9\\x08\\x012\\x04se\\xE1\\x83N\t\\x04\\xFE_\\x08\\xFE_\\x08\\xFE_\\x08\\xFE_\\x08\\xFE_\\x08\\xFE_\\x08\\xFE_\\x08\\xFE_\\x08\\xFE_\\x08\\xFE_\\x08\\xFE_\\x08\\xFE_\\x08\\xFE_\\x08\\xFE_\\x08\\xFE_\\x08\\xFE_\\x08\\xE2_\\x08\\x04im\\x0E\\xB3\r"
		"NS\\x04\\x8D\\x8E\\xCA\\\\\\x08Timages/logo-topbar.gif\\xFE<\\x08\\xFE<\\x08\\x16<\\x08\\x004\\x1A<\\x08\\x14223517\\xFE<\\x08\"<\\x08nW\\x00V<\\x08n2\\x00F<\\x08\\x8E.\\x00\\x1E<\\x08n,\\x00\\xFE<\\x08\\xD6<\\x08n\\x92\\x00\\xFE<\\x08\\xA2<\\x08v\\x85\\x00Z<\\x08\\x0Cnon-\\xFE\\xDB\\x10\\x1E\\xDB\\x10\\x0C38086q\\x02J\\xDB\\x10\t%m|V"
		"<\\x08\\xEE\\xDB\\x10\\x12\\xDB\\x10x3881223f689a154f0643b8963dcd5a3\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xFE\\xDB\\x10\\xA2\\xDB\\x10\\xFE|\\x08j|"
		"\\x08\\x0Ccart\\xFEu\\x08\\xFEu\\x08\\xFEu\\x08\\xFEu\\x08\\xFEu\\x08\\xFEu\\x08\\xFEu\\x08\\xFEu\\x08\\xFEu\\x08\\xFEu\\x08\\xFEu\\x08\\xFEu\\x08\\x12u\\x08\\x009: \\x13Js\\x08\\x01#\\xFEq\\x08vq\\x08|"
		"570492c08c75f09b297394998fb21c09\\xFEL\\x19\\xFEL\\x19\\xFEL\\x19\\xFEL\\x19\\xFEL\\x19\\xFEL\\x19\\xFEL\\x19\\xFEL\\x19\\xFEL\\x19\\xFEL\\x19\\xFEL\\x19\\xFEL\\x19\\xFEL\\x19\\xFEL\\x19\\xFEL\\x19\\xFEL\\x19\\xFEL\\x19\\x9EL\\x19\\xFEq\\x08jq\\x08\\x1Cseparato\\xFE\\xEB\\x10\\xFE\\xEB\\x10*\\xEB\\x10\\x0E?\\x1C\\x04er\"\\xCE\"\\xEA\\x1A\\x19:J\\x00V\\xD1\\x10:%\\x00F\\xC4\\x10Z!\\x00\\x1E\\xB7\\x10:\\x1F\\x00\\xFE\\xAA\\x10\\xD6\\xAA\\x10"
		":\\x85\\x00\\xFE\\x9D\\x10\\xA2\\x9D\\x10Bx\\x00\\xFE\\x90\\x10\\x8A\\x90\\x10\\x004\\x86\\x1B\\x08\\x01#\\xFE\\x1B\\x08v\\x1B\\x08|"
		"348f55f2a3c0905ed28d9435f9189a91\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\xFE\\x1B\\x08\\x0E\\x1B\\x08\\x14m_fish\\xFE\\x8F\\x10\\xFE\\x8F\\x10&\\x8F\\x10\\x007\\x1E\\x04\\x19\\x10980236\\x93\\x16\\xEA&\\x08nW\\x00V3\\x08n2\\x00F@\\x08\\x8E.\\x00\\x1EM\\x08n,"
		"\\x00\\xFEZ\\x08\\xD6Z\\x08n\\x92\\x00\\xFEg\\x08\\xA2g\\x08v\\x85\\x00\\xFEt\\x08\\x8At\\x08\\x082716p\\x02J\\x90\\x10\\x05$\\xFEv\\x08vv\\x08|060253210f8790b19f045d76c7a63836\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\x16v\\x08\\x0Cdogs\\xFEv\\x08\\xFEv\\x08&v\\x08\\x008\\x1Av\\x08\\xFE\\xB6):\\xB6)"
		"nW\\x00Vv\\x08n2\\x00Fv\\x08\\x8E.\\x00\\x1Ev\\x08n,\\x00\\xFEv\\x08\\xD6v\\x08n\\x92\\x00\\xFEv\\x08\\xA2v\\x08v\\x85\\x00\\xFEv\\x08\\x8Av\\x08\\x003>&,Jv\\x08\\x05$\\xFEv\\x08vv\\x08x78c4449186f15ce3a8d1129d5513f44\\x0E\"%\\x1A\\x812\\xFES2\\xFES2\\xFES2\\xFES2\\xFES2\\xFES2\\xFES2\\xFES2\\xFES2\\xFES2\\xFES2\\xFES2\\xFES2\\xFES2\\xFES2\\xFES2\\xC2S2\\x0E\\xED9\\xA2\\xC7:\\xFE\\x07\\x19n\\x07\\x19 m_reptile\\xFEz\\x08\\xFEz\\x08\\x1Ez\\x08\\x04806q\\x0E\\xDE\\xE1\\x10>H\\x00J\\\\\\x08>#\\x00"
		":M\\x08^\\x1F\\x00\\x12>\\x08>\\x1D\\x00\\xFE/\\x08\\xCA/\\x08>\\x83\\x00\\xFE \\x08\\x96 \\x08Fv\\x00\\xFE\\x11\\x08\\x8E\\x11\\x08\\x009\\x8A\\x8A)"
		"\\x01$\\xFE\\x11\\x08z\\x11\\x08x10e236f5ffa28765b140d44712ee9b4\\xFE\\x87\\x10\\xFE\\x87\\x10\\xFE\\x87\\x10\\xFE\\x87\\x10\\xFE\\x87\\x10\\xFE\\x87\\x10\\xFE\\x87\\x10\\xFE\\x87\\x10\\xFE\\x87\\x10\\xFE\\x87\\x10\\xFE\\x87\\x10\\xFE\\x87\\x10\\xFE\\x87\\x10\\xFE\\x87\\x10\\xFE\\x87\\x10\\xFE\\x87\\x10\\xEA\\x87\\x10\\xFE\\x11\\x08\\xFE\\x11\\x08*\\x11\\x08\\x08cat\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08r\r"
		"\\x08\\x082896#\nJ\\x1E\\x10\\x05$\\xFE\r\\x08v\r\\x08|99b04d0d3be1cf52ac7ae8a395db1efa\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\xFE\r\\x08\\x16\r\\x08\\x0Cbird\\xFE\\x0E\\x08\\xFE\\x0E\\x08&\\x0E\\x08\\x04.2\\x1A\\x95\\x18\\xFE\\x0B!.\\x0B!\\x008vW\\x00R9\\x10r\\x89\\x00BH\\x10\\x92.\\x00\\x1AW\\x10r,"
		"\\x00\\xFEf\\x10\\xD2f\\x10r\\x92\\x00\\xFEu\\x10\\x9Eu\\x10z\\x85\\x00\\xFE\\x84\\x10\\x8A\\x84\\x10\\x0425\\x8A\\x0B!\\x01$\\xFEw\\x08zw\\x08t816f19d7e450737bad8f89b94aa411\\xFE\\x9C1\\xFE\\x9C1\\xFE\\x9C1\\xFE\\x9C1\\xFE\\x9C1\\xFE\\x9C1\\xFE\\x9C1\\xFE\\x9C1\\xFE\\x9C1\\xFE\\x9C1\\xFE\\x9C1\\xFE\\x9C1\\xFE\\x9C1\\xFE\\x9C1\\xFE\\x9C1\\xFE\\x9C1\\xEE\\x9C1\\xFE\\x84\\x10\\xFE\\x84\\x10\\x1E\\x84\\x10\\x0E~)\\x10_icon\\xFE\r!\\xFE\r!\\x1A\r"
		"!\\x0480r\\xC9H\\xE6\\xA2\\x18rW\\x00Vx\\x08nRIFx\\x08\\x8E.\\x00\\x1Ex\\x08n,\\x00\\xFEx\\x08\\xD6x\\x08n\\x92\\x00\\xFEx\\x08\\xA2x\\x08v\\x85\\x00\\xFEx\\x08\\x8Ax\\x08\\x0443\\x86\\xEF\\x10\\x05$\\xFEx\\x08vx\\x08x86a2d4a77c95efdf9919761e255ab39\\x0E\\x02R\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\xFE\r!\\x0E\\x80)"
		"\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08*x\\x08\\x006\\x86t!\\x05$\\x14reques\\xFE\\xFDJ^\\xFDJx0106cd0c159eb4f1e7918889de78244\\x0E\\x05[\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\x0Eq!\\xFEx\\x08\\xFEx\\x08:x\\x08n}"
		"Q\\xEA\\xF0\\x10nW\\x00V\\xF0\\x10n2\\x00F\\xF0\\x10\\x8E.\\x00\\x1E\\xF0\\x10n,"
		"\\x00\\xFE\\xF0\\x10\\xD6\\xF0\\x10n\\x92\\x00\\xFE\\xF0\\x10\\xA2\\xF0\\x10v\\x85\\x00\\xFE\\xF0\\x10\\x8E\\xF0\\x10\\x000\\x8Ax\\x08\\x01$\\xFEx\\x08vx\\x08xeec7500495dcb0651786aafded90a82\\x0E\\xA9d\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\x1E\\xFA1\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|"
		"\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08&|\\x08\\x0466\\x86l\\x19\\x05$\\xFE|\\x08z|\\x08td5d0691ccd800f0f220556020af570\\x0E*l\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\xFE|\\x08\\x12X*\\xFEy\\x08\\xFEy\\x08:y\\x08:\\xD5Q\\xEA\\xE8\\x10:J\\x00V\\xDB\\x10:%\\x00F\\xCE\\x10Z!\\x00\\x1E\\xC1\\x10"
		":\\x1F\\x00\\xFE\\xB4\\x10\\xD6\\xB4\\x10:\\x85\\x00\\xFE\\xA7\\x10\\xA2\\xA7\\x10Bx\\x00\\xFE\\x9A\\x10\\x8E\\x9A\\x10\\x8A\r"
		"K\\x05$\\xFE\\x1E\\x08v\\x1E\\x08\\x106135b\\x0E\\x89qT935207e91677816692dbfa\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\xFE\\x9A\\x10\\x0E\\x9A\\x10\\x0Cspla\\xFE\\x82S\\xFE\\x82S\"\\x82S\\x0C80.6\\x1Aw2\\xFE]}.]}zW\\x00V4\\x08n\\x89\\x00FA\\x08\\x8E.\\x00\\x1EN\\x08n,"
		"\\x00\\xFE[\\x08\\xD6[\\x08n\\x92\\x00\\xFEh\\x08\\xA2h\\x08v\\x85\\x00\\xFEu\\x08\\x8Au\\x08\\x0C3609:\\xF8nJ\\xF0:\r&\\xFEy\\x08vy\\x08xd2f3d162109b8290790e1f716620412\\xFE\\xFC[\\xFE\\xFC[\\xFE\\xFC[\\xFE\\xFC[\\xFE\\xFC[\\xFE\\xFC[\\xFE\\xFC[\\xFE\\xFC[\\xFE\\xFC[\\xFE\\xFC[\\xFE\\xFC[\\xFE\\xFC[\\xFE\\xFC[\\xFE\\xFC[\\xFE\\xFC[\\xFE\\xFC[\\x8E\\xFC[>\\xB9t\\x0E:O4elf_monitoring\\x1E\\xC0tJ*\\x00\\x1Cinternal\\x11#\\x12\\xA6\\x84\\x0E\\xA9y\\x00e.J\\x85\\x08570"
		":$\\x86\\x1A\\x9A\\x80fW\\x85\\x11!\\x08fm_*\\xD0\\x86 timestamp2^\\x00\\x0C50,\"\\x0E\\xE1\\x82\\x04\":\\x0E\\x8C:\\x1C,\"messag\\x0EG\\x7F\\x12\\xEC\\x80\\x1C31483296\\x12\\x9E~\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E\\xFE\\x81\\x14 JavaS\\x12\\xC6\\x810 tag\\\\\",[]]\"}]&$\\x82\\xFE~\\x82\\xFE~\\x82\\xFE~\\x82\\xFE~\\x82\\xFE~\\x82\\xFE~\\x82\\xFE~\\x82\\xFE~\\x82\\xFE~\\x82\\xFE~\\x82\\xFE~\\x82\\xFE~\\x82\\xFE~\\x82\\xFE~\\x82\\xFE~\\x82>~\\x82>\\xF1\\x04\\x0E\\xA6\\x8A "
		"long_taskz\\xF3\\x04\\x0419.\\xF3\\x04\\x006\\x0E\\xAD\\x8B~K\\x8A\\x15[\\x00.\\x1A7\\x84\\xA1\\x88\\x04\",\\x1D\\x18\\x18attribu\\x0E\\xA1\\x84\\x0E\\\\\\x0C\\x14tainer\\x16\\x8B\\x84\\x8A(\\x00\rV\\x8A*\\x00\\x08src\\x16\\x90\\x8A\\x19\\x93V{\\x00\\x1A\\xE0\\x86\\x16\\xA1\\x85bY\\x00\ry\\x14unknow\\x0EK\\x85-\\x0B\\xFE1\\x05\\xFE1\\x05\\xFE1\\x05\\xFE1\\x05\\xFE1\\x05\\xFE1\\x05\\xFE1\\x05\\xFE1\\x05\\xFE1\\x05\\xFE1\\x05\\xFE1\\x05\\xFE1\\x05\\xFE1\\x05\\xFE1\\x05\\xFE1\\x05B1\\x05V\\xFF\t"
		"\\x16I\\x8F\"\\\\U\\x08174r\\xD0ZB4\\x90\\x10navig\\x0E\\xD3\\x89\\x81;N\\x94\\x05\\x1Ad\\x0F\\xB1\\x92\\xAA\\xC4\\x87b\\x8E\\x89\\x04ne\\xFE?\\x90\\xF6?\\x90\\x8AsU\\x0E\\xF3\\x84\\x08/1.\\x0E\\xE4\\x0F.\\xA5n6\\xA6\\x12%\\x92\\x04\"::\\x0F\\x87\\x005>\\xD0)2k\\x90\\x12\\x80\\x12z2\\x00:\\xDA\\x12\\x9A.\\x00\\x8EZ\\x00\\xDA\\xDA\\x12\\x04116p\\x91\\x001:\\x9Bm\\x00r:H\\x90\\x0453z\\xCBe\\x1Aw\\x90\\x05\\xB3\\x005v\\xB2\\x02\\xFE\\xFB\\x12\\x96\\xFB\\x12zd\\x01\\xFAX\\x90\\x0460>\\xD5<J"
		"[\\x90\\x0457>%\\x00J\\xF9\\x12\t%m\\x94\\x00.R\\xBC\\x87\\xEE\\x80\\x7F\\x12\\x80\\x7Ft5dfbb3dca2d1af7f6b76eaaad4ba06\\x12\\x0C\\x8D^\\x8F#\\x12\\xA1\\x8D\\x16F\\x90\\xCE+\\x8D\\x10Order\\x1A\\x15\\x8E\\x0C?new\\x05\\x10<=&confirmed=trueZ\\xE2\\x94\\x0Ec\\x88\\x99\\xCD\\x0E'\\x0F\\x04in&\\xC4\\x90N\\xDA\\x04\\x19.\\x91\\xDD.\\xEB\\x03\\x1A~\t\r%\\x01v.\\x1E\\x00\\x14unload\\x16?\\x0F\\x91\\x08:W\\x042#\\x00E\\xEA:!\\x00\\x08dom\\x16\\xE4\\x0F\\xA1)\\x00v\\x0E\\xD5\\x0F\\x0463"
		">\\xE9\\x1D\\x01$\\x1Ccontent_\\x01r\\x00e:t\\x00\\x081646\\x9B\\x03:\\x0B\\x95b@\\x00\\x05\\x91\\x10166.9\\x1A\\xEC\\x17Nr\\x84\t>\\x0E=\\x92\\x00t\\x01\\x9F\\x0471r\\xD7\\x03\\x01\\xA06\\x12\\x01\\xC1\\x8E\\x006\r`NL\\x18\\x1D2\t\\x90\\x007\\x9A\\x0C\\x04\\x08cou\\x0EG\\x93\\x040,1\\xA0\\x08ion1\\xB2\\x08har\\x0E\\x14\\x1E-\\xB9\\x05\\x19\\x04ab!\\xA4\\x01\\xC4\\x08\"ex\\x0E\\x16\\x97\\x04ng\\x1E\\xF7\\x8F\\x00s\\x0E\\xCE7\\x0E\\x9A\\x97 number\""
		":1\\xFEs\\x10\\xFEs\\x10\\xFEs\\x10\\xFEs\\x10\\xFEs\\x10\\xFEs\\x102s\\x10@battery.level\":10\\x0E\\xED\\x12\\x165\\x93\\x1A\\xF1\\x92\\xFE\\x0C\\x93\\xFE\\x0C\\x93\\xFE\\x0C\\x93\\xFE\\x0C\\x93\\xFE\\x0C\\x93\\xFE\\x0C\\x93\\xFE\\x0C\\x93\\xFE\\x0C\\x93\\xFE\\x0C\\x93\\x16\\x0C\\x93\\x12\\x94\\x93&\\xBF\\x9B\\xC1?\\x0E\\xF3\\x14\\x08156\\x1A\\x1F\\x94\\x0Cback\\x16\\xDB\\x9B\r\\x1C 0,\"error.\\x0E+\n"
		"\\x0C_4xx\\x9D\\x95\\x1D\\x19\\x005J\\x19\\x00\\x08exc\\x0E\\x85`\\x04onB3\\x00\\x1Ccsp_viol\\x12\\x91\\x0BB\\x1E\\x00\\x10dropp\\xC1\\x02b@\\x00\\x05\\x8C\\x10other\\x1D=\\x08cls\\x0E>\\x9B\\x16\t\\x99\\x14report\\x12y\\x98\\x01\\x18\\x00u\\x12\\xDD\\x9C:-\\x00\\x0Cvalu\\x16\\x0E\\x99\\x08fcp\\x11\\x0E\\x08204\\xC1\\x9D\\x01\\x12\\xA1\\xB7\\x0E\\xCC\\x98\\x1E\\xF7\\x9C\\x00c\\xD1#\\x00,\\x05\\x1F\\x01\\x17\\x12u\\x99\\x1Dl\\x08fidb\\x18\\x00nO\\x00\t7\\x00r\"\\xF7\\x16\\x088352\\xE0\\x0C\\x00,"
		"\\x05Z&\\x00\r\\x000\t\\x11\\x1A\\x15\\x11\\x04po\\x12D\\x17\\x00d\\x16\\x19\\x11\\x01M\\x18process\r\\xBE\\x0E\\xFA\\x92\\x0C1836JS\\x00\\x1D)\\xC9\\x9B\\x01'.,\\x07\\x002\tj\\x10cance\\x12'\\x91\\x1EE\\x08\\x01g4ui_element.tag\\x1E\\x1D\\x12\\x00A!!\\x04id.\\x1E\\x00\\x08xpa\\x0E\\xCA\\x97\\x14[\"html\\x0EA\\x99\\x04od\\x12\\xEF\\x97Div[@id=\\\\\"Header\\\\\"]\\x0E\\x05\\x98\\x15\\x16\\x0CMenuN\\x14\\x00\\x00C\\x16+\\x08\t\\x1B a[2]\"],\""
		"fB\\xC4\\x01\\x00prt\\x01\\x00pR\\xAA\\x01\\x04in\\x1D\\x184below_threshol\\xE1o\\x04lc\\x1D\\x1F=\\xF9\\x01\\x186e\\x02\\x041,\\x05\\x15\\x12=\rmLM\\\\\\x01,A\r\r\\x16\\x10165.6\r-\\x12\\x9F\\x9B\\x14123879\t\\x12\\x04ur\\x0E\\xD6\\x9DA\\xF0\\x04:/f\\xBD\\x9E\\x1A\\xEB\\x8D2`!\\x01f\\x00r\\x1A\\xEB\\x9A\to2?\\x02\\x01\\x1F=\\xBF\\x1A\\xFA\\x0B\\x14delay\"\\x01\\x82\\x08.89\t\\x01\\x14850988\t\\x8E:P\\x00\t-\\x0426:,\\x00\\x004\\x11-\\x12H\\x1F\\x0E.\\x19\\x0EV\\x19eW:v\\x00]5\\x0CIMG\"\t"
		"8\\x1D\\x96\\x827\\x022\t\\x02]8\\x08ainI\\x1D6\\x14\\x00\\x00I\\x0E\\x13\\x8Fb\\x19\\x002M\\x00\\x0E\\x9Ee\\x00].8\\x15N\\xEF\\x03*\\xDB\\x14\\x08ll.\\x1A\\xAE\t!\\xF9\\x1E\\xE1\\x15\\x00.\\x01\\x18\\x08avg=|\\x0E\\xC7\\x156 \\x004slowest_occurr\\x0E\\xA6\t\\x16z\\xA1.;\\x02!U9\\xC0\\x0462\\x0E3\\x1A\\x19F\\x0E\\xE5\\x15R\\x7F\\x00\\x05\\x19n\\x80\\x00\\x05!\\xDE\\x81\\x00\\x0CttfbR\\x18\\x01\\x05\\x19\\xAD_J%\\x0F\\x05\\x1F\\x0Cwait\\x81\\xA0\\x19\\xD6J\\x9D\\x0E\\x05*\\x10cache\\x1D(\\x040,\t"
		"\\x18\\x08dnsJ\\x16\\x00\\x1AV\\x10\\xC1w\\x19[\\x113\\x1AR\\x0E\\x1D\\x1A\\x0444:\\x1C;:[\\x96\\x12\\xB5\\x0C\\xC9\\xA8%\\x90\\x12>\\x9F\\xE5GNS\\x0B\\x05\\x19\\x08premOI\\xFC\\x0E[\\x1C\\x04ha\\x0E\\xFF\\x0C\\x04er\\x0E\\x96\\x0B\\x04cs\\x12\\x06\\x18\\x01,\\x0C_sum\\x12\\xFB\\x9C\\x00:\\x0E\\xF3\r6\\xE7\\x0BV\\xCE\\x0B.\\xF0\\x0B\\x16\\x19\\x9E\\x1A\t\\x0C.\\xB7\r\\x01x^\\x8E\\xA2\\x05\\xC6\r\\x9A\\x001\\x1A\\xC8\\x9D\\x007"
		">`\\x13\\x16\\x12\\x08\\x1Ac\\x17\\x82b\\x1D\\xFE\\x84\\x17\\xFE\\x84\\x17\\xFE\\x84\\x17\\xFE\\x84\\x17\\xFE\\x84\\x17\\xFE\\x84\\x17\\x0E\\x84\\x17\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\x9EB\\x0C\\x12\\xFB\\x12NB\\x0C\\x0E\\xCE&"
		"\\x08age\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\xFEB\\x0C\\x9AB\\x0CN\\x11\\x0C\\xE1?>\\x11\\x0C\\x01\\x14NQ\\x0C.\\x07\\x0C\\xFE)\\x0C\\xFA)\\x0C\\x047,\\xFE)\\x0C\\xFE)\\x0C\\xFE)\\x0C\\xFE)\\x0C\\xFE)\\x0C\\xFE)\\x0C\\xFE)\\x0C\\xFE)"
		"\\x0C\\xFE)\\x0C\\xFE)\\x0C\\xFE)\\x0C\\xFE)\\x0C\\xFE)\\x0C\\xFE)\\x0C\\xFE)\\x0C\\x12)\\x0C\\x08]}}", 
		LAST);

	web_add_cookie("rxvtf4o018pw=1779554978673|1779553123580; DOMAIN=localhost");

	web_add_cookie("dtPCf4o018pw=1$553178631_488h-vGRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0e0; DOMAIN=localhost");

	web_custom_request("rb_bf32608msb_50", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=580695512&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CSign%20Out%7CC%7C-%7C553176533_736%7C1779553178502%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%7C%7C%7C%2Fjpetstore%2Factions%2FCatalog.action%7C1779553176435%2C1%7C1%7C_load_%7C_load_%7C-%7C1779553178513%7C1779553178674%7Cdn%7C89%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action%2C2%7C3%7C_event_%7C1779553178513%7C_vc_%7CV%7C153%5Epc%7CVCD%7C1015%7CVCDS%7C0%7CVCS%7C2"
		"21%7CVCO%7C1225%7CVCI%7C0%7CTS%7C1%7CVE%7C491%5Ep484%5Ep67947%5Eps%5Es%23Banner%7CS%7C152%2C2%7C4%7C_event_%7C1779553178513%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1779553178674%7C1779553178674%7Cdn%7C89%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1779553178513%7C_view_%7Csvn%7C%2Fjpetstore%2Factions%2FCatalog.action%7Csvt%7C1779553176435%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk"
		"0%5Esh0$dO=localhost,$rId=RID_1078536306$rpId=-314645797$domR=1779553178671$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553178513$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$nt=a0b1779553178513c14d43e43f43g43h43i43k45l65m66o152p153q156r158s161t161u5842v5542w5542M-314645797V0$ni=4g|1.55$egf=1589PRTUX$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553178631_488$v="
		"10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$time=1779553179754", 
		LAST);

	web_custom_request("rb_bf32608msb_51", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?sc=5&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=f4o018pw&cr=1779531483296&av=1.337.9&cy=event&bc=2242414296&co=snappy&si=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&st=1779553180692&ss=0&qc=1652899181&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\x80\\xAE\\x02D{\"data_version\":2,\\x05\\x11\\xF4,\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"6a5e815c4ec02bc1\",\"start_time\":1779553178615,\"duration\":0,\"performance.initiator_type\":\"link\",\"characteristics.has_request\":true,\"url.full\":\"http://localhost:8080/jpetstore/css/jpetstore.css\",\"network.protocol.name\"\tL\\x08\",\".\\xA5\\x00(time_origin.\\xDA\\x00@513,\"dt.rum.schem=|\\x18\"0.23.0:I\\x00\\x00s.\""
		"\\x01\\x1002.80\r\\x01\\x10745066u\\x00(next_hop_pr\t\\xA1\\x08\":\":O\\x004domain_lookup_\\x05]\\x04\":~X\\x0065\\x00\\x08end\\x863\\x00\\x18connect\\x9Eb\\x00\\x11/\\x92\\\\\\x00\\x18secure_\r4\\x08ion\\x11f\\x0006\\x0F\\x01-\\xFDb\\x1E\\x00\\x14sponse~\\x1F\\x00\\x92\\x93\\x00\\x10redir\\x1D\\xF0B\\x8A\\x00\r\\x1F\\x05M:\\x1D\\x00\\x14workerZ\\x87\\x00\\x10fetch\\x11\\x1C~\\xA8\\x018render_blocking\\x017\\x14tus\":\"\\x11\\x12:\r\\x02\\x14transf\\x01|\\x0Cize\">\\x98\\x000encoded_body_\t\""
		"\\x0C60146d\\x01\\x04deZ%\\x00-}(.server_tim\\x01\\x92@hint\":\"received\",\\x15(\\x0Ctrac%\\xD4\\x00tE\\xC5\t(\\x10from_\tB\\x08\",\"\\x05#\\x00.\\x89Kx343452934a6cc116081301249311005\\x19.$s_sampled\"\\x8D\\x04N'\\x04,w3c_resource\r\\xAB\\x00s\\x110m\\xAE\\x18applicaAo\t\\x83<ea7c4b59f27d43eb\\x9D\\xFB\\x10frame:\\xFD\\x04@d80ace40ed2d3af9\"\\x95\\x08\\x14agent.\\xB5\\x83\\\\\"1.337.9.20260504-112723>1\\x00\\x04ty\\x85\\xFD$javascript\\x19!\\x00b\\xAD\\x83\\x00s%,|"
		"5A1A1CC30FCC34F33FE19DC31EEE92D7\\x198\t0\\x80GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-\\x81\\xA3-\\x16\\x00i\\xAD\\xE1)\\x13\\x001\\xAD\\xC2\\x9023578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S\\x01w,evice.orient%[L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":960,\\xD5\\x8A\\x14window67\\x001#\r\\x1C\\x118\\x08842B8\\x00\tb\\x1C_pixel_r\\x01\\xA74\":1.25,\"page.u\\xA6T\\x06\\x04acA?$s/Catalog.\t\\x10a\\x95\\x01I1L\\x00_%\\xB6J0\\x02\\x05&$detected_n\\xC9|\\x00/\\xD9\\xB3\tO^"
		"_\\x00\\x0Ctitl\\xE1\\xADPJPetStore Demo\",\"view:}\\x00847d2d4b318ed67daO\\x05&\\xFE\\xEC\\x00\\x01\\xEC\\x05I\\xC6\\xC6\\x00\\x04},\\xFE{\\x08\\xFE{\\x08N{\\x08uzNV\\x04\\xAD\\x03\\x91I\\xAA=\\x01\\x10ruxit\\x85\\x18pjs_ICA15789NPRTUVXfqrux_10337\\x89 \\x89\\x1F\\x0C.js\"\\xFE\\xA2\\x08\\xFE\\xA2\\x08\\x1A\\xA2\\x08\\x009\t\\x01\\x148509886/\\x06\\xF2\\xA2\\x08\tWRX\\x00^\\xA2\\x08j3\\x00\\x1A?\\x08\\xE1%\\x00r\\x1E\\x04\t\\x8A/"
		"\\x00\\xE5\\xC2\\xE5\\x89j-\\x00\\xFE\\xA2\\x08\\xDE\\xA2\\x08j\\x93\\x00\\xFE\\xA2\\x08\\xAA\\xA2\\x08r\\x86\\x00\\xFE\\xA2\\x08z\\xA2\\x08\\x1013290\\x86\\xA4\\x08\\x14362149&~\\x08\\x16d\\x08\\xED\\xFB\\x1E\\xA6\\x08Dnot_available_http~\\xB0\\x08\\x012\\x04se\\xE1\\x8AN\\x10\\x04\\xFEf\\x08\\xFEf\\x08\\xFEf\\x08\\xFEf\\x08\\xFEf\\x08\\xFEf\\x08\\xFEf\\x08\\xFEf\\x08\\xFEf\\x08\\xFEf\\x08\\xFEf\\x08\\xFEf\\x08\\xFEf\\x08\\xFEf\\x08\\xFEf\\x08\\xFEf\\x08.f\\x08\\x0E\\xBA\n"
		"\\xA2\\xE1\\x10\\x04im\\x0E\\xBA\rNS\\x04\\xE6c\\x08Timages/logo-topbar.gif\\xFEC\\x08\\xFEC\\x08\\x12C\\x08\\x003\\xFE4\\x08\\x1E4\\x08:I\\x00R%\\x08:$\\x00B\\x16\\x08Z \\x00\\x1A\\x07\\x08:\\x1E\\x00\\xFE\\xF8\\x07\\xD2\\xF8\\x07:\\x84\\x00\\xFE\\xE9\\x07\\x9E\\xE9\\x07Bw\\x00Z\\xDA\\x07\\x0Cnon-\\xFE\\x80\\x10\\x1E\\x80\\x10\\x08380:Q\nJ\\x80\\x10\t%m\\x1AV\\xDA\\x07\\xEE\\x80\\x10\\x12\\x80\\x10x3881223f689a154f0643b8963dcd5a3\\x0E1\r"
		"\\x1A\\xAE\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xFE\\x80\\x10\\xC2\\x80\\x10\\xFE\\x1A\\x08\\xFE\\x1A\\x08\\x1E\\x1A\\x08\\x0Ccart\\xFE\\x13\\x08\\xFE\\x13\\x08&\\x13\\x08\\x04.0\\x1AV\\x0E\\x1077648:|\\x06\\xE6V\\x10vX\\x00V1\\x08r\\x8B\\x00F@\\x08\\x92/\\x00\\x1EO\\x08r-\\x00\\xFE^\\x08\\xD6^"
		"\\x08r\\x93\\x00\\xFEm\\x08\\xA2m\\x08z\\x86\\x00\\xFE|\\x08\\x8A|\\x08\\x009:m\\x1BJz\\x08\\x01#\\x14reques\\xFEx\\x08^x\\x08x570492c08c75f09b297394998fb21c0\\x0EV\\x18\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\x1Cseparato\\xFE\\x90\\x10\\xFE\\x90\\x10*\\x90\\x10\\x04.1\\x1A}\\x08\\x14925494\\xFE\\x9F\\x10\"\\x9F\\x10rX\\x00Z}"
		"\\x08n\\x8B\\x00J}\\x08\\x8E/\\x00\"}\\x08n-\\x00\\xFE}\\x08\\xDA}\\x08n\\x93\\x00\\xFE}\\x08\\xA6}\\x08v\\x86\\x00\\xFE}\\x08\\x8A}\\x08\\x004\\x86}\\x08\\x01#\\xFE}\\x08v}\\x08|348f55f2a3c0905ed28d9435f9189a91\\xFEu!\\xFEu!\\xFEu!\\xFEu!\\xFEu!\\xFEu!\\xFEu!\\xFEu!\\xFEu!\\xFEu!\\xFEu!\\xFEu!\\xFEu!\\xFEu!\\xFEu!\\xFEu!\\xEAu!\\xFE\\xF5\\x10\\xFE\\xF5\\x10\\x1E\\xF5\\x10\\x18sm_fish\\xFE\\xF8\\x10\\xFE\\xF8\\x10*\\xF8\\x10\\x003\\x1A\\xEF)\\xFE\\xF0)6\\xF0)\\x003rX\\x00Z{\\x08n\\x8B\\x00J"
		"{\\x08\\x8E/\\x00\"{\\x08n-\\x00\\xFE{\\x08\\xDA{\\x08n\\x93\\x00\\xFE{\\x08\\xA6{\\x08v\\x86\\x00\\xFE{\\x08\\x8A{\\x08\\x082716\\xF1\nJ\\xF9\\x10\\x05$\\xFE}\\x08v}\\x08|060253210f8790b19f045d76c7a63836\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\x16}\\x08\\x0Cdogs\\xFE}\\x08\\xFE}\\x08.}\\x08\\x1A\\xF8\\x10\\xFE\\xCB)6\\xCB)"
		"\\x043.nX\\x00^}\\x08j\\x8B\\x00N}\\x08\\x8A/\\x00&}\\x08j-\\x00\\xFE}\\x08\\xDE}\\x08j\\x93\\x00\\xFE}\\x08\\xAA}\\x08r\\x86\\x00\\xFE}\\x08\\x8A}\\x08\\x003>\\xE34J}\\x08\\x05$\\xFE}\\x08v}\\x08x78c4449186f15ce3a8d1129d5513f44\\x0E7%\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xFEw\\x19\\xEEw\\x19\\x12w\\x19 "
		"m_reptile\\xFE\\x81\\x08\\xFE\\x81\\x08.\\x81\\x08\\x0Ee5\\x04er\"\\xFB;\\xEE\\xE9!:K\\x00Zg\\x08:&\\x00JZ\\x08Z\"\\x00\"M\\x08: \\x00\\xFE@\\x08\\xDA@\\x08:\\x86\\x00\\xFE3\\x08\\xA63\\x08By\\x00\\xFE&\\x08\\x8E&\\x08\\x009\\x8A\\x16*\\x01$\\xFE&\\x08z&"
		"\\x08x10e236f5ffa28765b140d44712ee9b4\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\xFE\\xA3\\x10\\x16\\xA3\\x10\\x08cat\\xFE\"\\x08\\xFE\"\\x082\"\\x08\\x1A\\xA3\\x0E\\xFE\\x18*>\\x18*nX\\x00^<\\x08j\\x8B\\x00NI\\x08\\x8A/\\x00&"
		"V\\x08j-\\x00\\xFEc\\x08\\xDEc\\x08j\\x93\\x00\\xFEp\\x08\\xAAp\\x08r\\x86\\x00\\xFE}\\x08\\x8A}\\x08\\x08289\\x86 \\x19\\x01$\\xFE}\\x08v}\\x08|99b04d0d3be1cf52ac7ae8a395db1efa\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\x16}\\x08\\x0Cbird\\xFE~\\x08\\xFE~\\x08.~\\x08\\xFE\\x8EKV\\x8EK\\x003rX\\x00Z~\\x08n\\x8B\\x00J~\\x08\\x8E/"
		"\\x00\"~\\x08n-\\x00\\xFE~\\x08\\xDA~\\x08n\\x93\\x00\\xFE~\\x08\\xA6~\\x08v\\x86\\x00\\xFE~\\x08\\x8E~\\x08\\x005\\x8A\\x9E!\\x01$\\xFE~\\x08z~\\x08t816f19d7e450737bad8f89b94aa411\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\xFE\\x982\\x0E\\x982\\x0E\\x18*\\x10_icon\\xFE\\xA0!\\xFE\\xA0!*\\xA0!nkI\\xEE,\\x19nX\\x00^\\x7F\\x08\\x1A\\x88\\x0FN+\""
		"N\\x7F\\x08\\x8A/\\x00&\\x7F\\x08j-\\x00\\xFE\\x7F\\x08\\xDE\\x7F\\x08j\\x93\\x00\\xFE\\x7F\\x08\\xAA\\x7F\\x08r\\x86\\x00\\xFE\\x7F\\x08\\x8A\\x7F\\x08\\x0443\\x86\\xFD\\x10\\x05$\\xFE\\x7F\\x08v\\x7F\\x08x86a2d4a77c95efdf9919761e255ab39\\x0E\\xB1R\\xFE\\xA0!\\xFE\\xA0!\\xFE\\xA0!\\xFE\\xA0!\\xFE\\xA0!\\xFE\\xA0!\\xFE\\xA0!\\xFE\\xA0!\\xFE\\xA0!\\xFE\\xA0!\\xFE\\xA0!\\xFE\\xA0!\\xFE\\xA0!\\xFE\\xA0!\\xFE\\xA0!\\xFE\\xA0!\\xDE\\xA0"
		"!\\x007\\xAE\\x8A\\\\\\xFE\\xA9Kj\\xA9K\\x0E\\x1A*\\xFE\\x7F\\x08\\xFE\\x7F\\x086\\x7F\\x08\\xFE\\x08;\"\\x08;:I\\x00Ra\\x08:$\\x00BR\\x08Z \\x00\\x1AC\\x08:\\x1E\\x00\\xFE4\\x08\\xD24\\x08:\\x84\\x00\\xFE%\\x08\\x9E%\\x08Bw\\x00\\xFE\\x16\\x08\\x8E\\x16\\x08\\x006\\x86\\x90!\\x05$\\x00r\\xFE-Cr-Cx0106cd0c159eb4f1e7918889de78244\\x0ER"
		"[\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\xFE\\x16\\x08\\x0E\\x8D!\\xFE\\x16\\x08\\xFE\\x16\\x08:\\x16\\x08r\\xAAI\\xE6\\x95\\x10vX\\x00V4\\x08r\\x8B\\x00FC\\x08\\x92/"
		"\\x00\\x1ER\\x08r-\\x00\\xFEa\\x08\\xD6a\\x08r\\x93\\x00\\xFEp\\x08\\xA2p\\x08z\\x86\\x00\\xFE\\x7F\\x08\\x8E\\x7F\\x08\\x000\\x8A\\x7F\\x08\\x01$\\xFE\\x7F\\x08v\\x7F\\x08<eec7500495dcb065\\x0E\\xD9h"
		"(aafded90a82\\x0E\\xFDd\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\xFE\\x7F\\x08\\x1E22\\xFE\\x83\\x08\\xFE\\x83\\x08>\\x83\\x08n\\xB0I\\xEE\\x83\\x08nX\\x00Z\\x83\\x08n3\\x00J\\x83\\x08\\x8E/\\x00\""
		"\\x83\\x08n-\\x00\\xFE\\x83\\x08\\xDA\\x83\\x08n\\x93\\x00\\xFE\\x83\\x08\\xA6\\x83\\x08v\\x86\\x00\\xFE\\x83\\x08\\x8A\\x83\\x08\\x0466\\x86\\x18\\x19\\x05$\\xFE\\x83\\x08z\\x83\\x08xd5d0691ccd800f0f220556020af570c\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xFE\\x15*\\xEA\\x15*\\xFE\\x18\\x19\\xFE\\x18\\x19\\x1E\\x18\\x19\\x12\\x12*\\xFE\\x80\\x08\\xFE\\x80\\x08"
		">\\x80\\x08n\\xB5I\\xEE\\x80\\x08nX\\x00Z\\x80\\x08n3\\x00J\\x80\\x08\\x8E/\\x00\""
		"\\x80\\x08n-\\x00\\xFE\\x80\\x08\\xDA\\x80\\x08n\\x93\\x00\\xFE\\x80\\x08\\xA6\\x80\\x08v\\x86\\x00\\xFE\\x80\\x08\\x8A\\x80\\x08\\x004\\x8A\\xB5K\\x05$\\xFE\\x80\\x08v\\x80\\x08x6135b4ea1935207e91677816692dbfa\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\xFE\\x03\\x11\\x0E\\"
		"x03\\x11\\x0Cspla\\xFE1T\\xFE1T*1T\\x004r\\\\K\\xF2|\\x08jl(^|\\x08j3\\x00N|\\x08\\x8A/\\x00&|\\x08j-\\x00\\xFE|\\x08\\xDE|\\x08j\\x93\\x00\\xFE|\\x08\\xAA|\\x08r\\x86\\x00\\xFE|\\x08\\x8A|\\x08\\x1036097\\x82\\x13;\r&"
		"\\xFE\\x80\\x08v\\x80\\x08xd2f3d162109b8290790e1f716620412\\xFE\\xB2\\\\\\xFE\\xB2\\\\\\xFE\\xB2\\\\\\xFE\\xB2\\\\\\xFE\\xB2\\\\\\xFE\\xB2\\\\\\xFE\\xB2\\\\\\xFE\\xB2\\\\\\xFE\\xB2\\\\\\xFE\\xB2\\\\\\xFE\\xB2\\\\\\xFE\\xB2\\\\\\xFE\\xB2\\\\\\xFE\\xB2\\\\\\xFE\\xB2\\\\\\xFE\\xB2\\\\\\x8E\\xB2\\\\>vu\\x0E\\xD1q4elf_monitoring\\x1E\\xE0}J*\\x00\\x1Cinternal\\x11#\\x12p\\x85\\x0Efz\\x00e.\\x15\\x86\\x0465>\\xFF\\\\\\x1A^\\x81f\"\\x86\\x11!\\x08fm_*\\x9B\\x87 timestamp2^\\x00\\x0C47,\"\\x0E\\xA5\\x834"
		"\":2000,\"messag\\x0E\\x0B\\x80\\x12\\xB0\\x81\\x1C31483296\\x12b\\x7F\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E\\xC2\\x82\\x14 JavaS\\x12\\x8A\\x820 tag\\\\\",[]]\"}]&\\xE8\\x82\\xFEB\\x83\\xFEB\\x83\\xFEB\\x83\\xFEB\\x83\\xFEB\\x83\\xFEB\\x83\\xFEB\\x83\\xFEB\\x83\\xFEB\\x83\\xFEB\\x83\\xFEB\\x83\\xFEB\\x83\\xFEB\\x83\\xFEB\\x83\\xFEB\\x83\\x96B\\x83\\x16\\xE3\\x8A\"\\xDCz\\x08161r\\x0F\\x13B\\xCE\\x8B\\x10navig\\x0Ef\\x85\\x0E\\x19\\x85>T\\x05\\xF6\\xD4\\x8Bb"
		"!\\x85\\x04ne\\xFE\\xD9\\x8B\\xF6\\xD9\\x8B\\x0006/\\x0BN\\xA7\r\\x0E\\x7F\\x80\\x08/1.\\x0E\\xB3\n.\\x12Q6z\r\\xC5`\\x08\":4: s6%\\x00\\x12C\r>#\\x00:\\x8F\r^\\x1F\\x00R<\\x00\\xDAo\r\\x0444F-P6\\x93\\x8B\\x006f\"\\x00\\x05\\x89\\x0C65.6\\x1A\\xEE\\x0C\\x009J\\x9Ak>t\r\\x001:\\x9C&\\x002:Ui\\x150\\x05]>\\x03\\x01\\xA6\\xA7\\x8B>:\\x00\\xFA\\x97\\x8B\\x005\\x12\\x95\\x88.\\xF5\\x01J\\x9A\\x8B\\x0455\\x0E\\xBA\\x88.%\\x00J*Y\t%\\xFEs\rvs\r"
		"xefb96fbe7fb6acd4c3a88061e6e0fc3n\\xF3\\x15\\x12\\xE0\\x88\\x16\\x85\\x8B\\xFEj\\x88\\x12j\\x88N=\\x04\\x0E\\x84\\x83\\x99b\\x0E\\x8B\t\\x04in&\\xEC\\x8BN2\\x00\\x19.\\x1E\\xC6\t.f\\x01\\x1A\\x86\\x8B\r%\\x00e\\x0E\\xCC\\x89*\\xB0T\\x14unload\\x16\\xA3\tq\\x9D\\x0497r\\x10\\x0523\\x00E\\x89z1\\x00\\x08dom\\x16h\n\\x81\\xDE\\x00v\\x0EY\n\\x0452rb\\x00\\x011\\x1Ccontent_\\x01\\x9F\\x00e:\\xA1\\x00\\x0415F?\\x04V1\\x00\\x05\\x9F\\x08155~"
		"-M\\x08_co\\x0E\\x83\\x8D\\x00t\\x05\\x9D\\x007r\\xB4\\x03\\x01\\x9160\\x01\\xC1An\\xD0!\\x1D2\t\\x90zq\\x06u\\xE6\\x08cou\\x0E\\x8D\\x8E\\x041,1\\xBE\\x08ion1\\xD0\\x08harA\\xAA-\\xD7\\x05\\x19\\x04ab!\\xC2\\x01\\xC4\\x08\"ex\\x0Ec\\x92\\x04ng\\x1E=\\x8B\\x00s\\x0E\\xC72\\x0E\\xE7\\x92\\x18number\"\\x01T\\x1A\\xA2\\x0B\\xFE\\xF5\n\\xFE\\xF5\n\\xFE\\xF5\n\\xFE\\xF5\n\\xFE\\xF5\n\\xFE\\xF5\n\\x0E\\xF5\n0battery.level\\x0E\\xBB\\x92\\x000"
		">7\\x8E\\xFER\\x8E\\xFER\\x8E\\xFER\\x8E\\xFER\\x8E\\xFER\\x8E\\xFER\\x8E\\xFER\\x8E\\xD6R\\x8E\\x08]}}", 
		LAST);

	web_custom_request("rb_bf32608msb_52", 
		"URL=http://localhost:8080/jpetstore/rb_bf32608msb?type=js3&sn=v_4_srv_1_sn_5A1A1CC30FCC34F33FE19DC31EEE92D7_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&vi=GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0&modifiedSince=1779531483296&bp=3&app=ea7c4b59f27d43eb&crc=1154055205&en=f4o018pw&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://localhost:8080/jpetstore/actions/Catalog.action", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fjpetstore%2Factions%2FCatalog.action$tvt=1779553178513$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=842$sw=1536$sh=960$ni=4g|1.55$egf=1589PRTUX$rt="
		"1-1779553178513%3Bhttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fcss%2Fjpetstore.css%7Cb103e0f0g0h0i0m0v6014w6014I11M-68001081V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Flogo-topbar.gif%7Cb103e0f0g0h0i0m0v3808w3808E1F17220O287P60I7M761912964V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcart.gif%7Cb103e0f0g0h0i0m0v96w96E1F288O16P18I7M-1891668168V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fseparator.gif%7Cb103e0f0g0h0i0m0v46w46F18N2O1P18I7M688934799V0%7Chttp%3A%2F"
		"%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Ffish.gif%7Cb103e0f0g0h0i0m0v271w271E1F390O26P15I7M-302972535V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fdogs.gif%7Cb103e0f0g0h0i0m0v306w306E1F450O30P15I7M1822807848V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Freptiles.gif%7Cb104e0f0g0h0i0m0v398w398E1F780O52P15I7M-620539332V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fcats.gif%7Cb104e0f0g0h0i0m0v289w289E1F420O28P15I7M1231591079V0%7Chttp%3A%2F%2Floc"
		"alhost%3A8080%2Fjpetstore%2Fimages%2Fsm_5Fbirds.gif%7Cb104e0f0g0h0i0m0v251w251E1F495O33P15I7M-1591609649V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Ffish_5Ficon.gif%7Cb104e0f0g0h0i0m0v439w439E1F800O40P20I7M-1858137608V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fdogs_5Ficon.gif%7Cb104e0f0g0h0i0m0v468w468E1F920O46P20I7M-39000523V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fcats_5Ficon.gif%7Cb104e0f0g0h0i0m0v408w408E1F860O43P20I7M-246443466V0%7Chttp%3A%2F%2Flocal"
		"host%3A8080%2Fjpetstore%2Fimages%2Freptiles_5Ficon.gif%7Cb104e0f0g0h0i0m0v669w669E1F1560O78P20I7M355865488V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fbirds_5Ficon.gif%7Cb104e0f0g0h0i0m0v471w471E1F1000O50P20I7M1303219330V0%7Chttp%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Fimages%2Fsplash.gif%7Cb104e0f0g0h0i0m0v36097w36097E1F124250O350P355Q357R347I7M-266518883V0$url=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$title=JPetStore%20Demo$latC=0$app=ea7c4b59f27d43eb$vi="
		"GRHCUKABRPGCFBCUCBIUBHRMCIOBPAMD-0$fId=553178631_488$v=10337260504112723$vID=1779553123578QT5ABMH9J4C4DDD3FRFPOB1CN2JR3R5S$rf=http%3A%2F%2Flocalhost%3A8080%2Fjpetstore%2Factions%2FCatalog.action$time=1779553181772", 
		LAST);

	return 0;
}