bool kMemIsSent0 = false;
bool kMemIsSent1 = false;
bool kMemIsSent2 = false;
bool kMemIsSent3 = false;
bool kMemIsSent4 = false;
bool kMemIsSent5 = false;
bool kMemIsSent6 = false;
bool kMemIsSent7 = false;
bool kMemIsSent8 = false;
bool kMemIsSent9 = false;
bool kMemIsSent10 = false;
bool kMemIsSent11 = false;
bool kMemIsSent12 = false;
bool kMemIsSent13 = false;
bool kMemIsSent14 = false;
bool kMemIsSent15 = false;
bool kMemIsSent16 = false;
bool kMemIsSent17 = false;
bool kMemIsSent18 = false;
bool kMemIsSent19 = false;
bool kMemIsSent20 = false;
bool kMemIsSent21 = false;
bool kMemIsSent22 = false;
bool kMemIsSent23 = false;
bool kMemIsSent24 = false;
bool kMemIsSent25 = false;
bool kMemIsSent26 = false;
bool kMemIsSent27 = false;
bool kMemIsSent28 = false;
bool kMemIsSent29 = false;
bool kMemIsSent30 = false;
bool kMemIsSent31 = false;
bool kMemIsSent32 = false;
bool kMemIsSent33 = false;
bool kMemIsSent34 = false;
bool kMemIsSent35 = false;
bool kMemIsSent36 = false;
bool kMemIsSent37 = false;
bool kMemIsSent38 = false;
bool kMemIsSent39 = false;
bool kMemIsSent40 = false;
bool kMemIsSent41 = false;
bool kMemIsSent42 = false;
bool kMemIsSent43 = false;
bool kMemIsSent44 = false;
bool kMemIsSent45 = false;
bool kMemIsSent46 = false;
bool kMemIsSent47 = false;
bool kMemIsSent48 = false;
bool kMemIsSent49 = false;
bool kMemIsSent50 = false;
bool kMemIsSent51 = false;
bool kMemIsSent52 = false;
bool kMemIsSent53 = false;
bool kMemIsSent54 = false;
bool kMemIsSent55 = false;
bool kMemIsSent56 = false;
bool kMemIsSent57 = false;
bool kMemIsSent58 = false;
bool kMemIsSent59 = false;
bool kMemIsSent60 = false;
bool kMemIsSent61 = false;
bool kMemIsSent62 = false;
bool kMemIsSent63 = false;
bool kMemIsSent64 = false;
bool kMemIsSent65 = false;
bool kMemIsSent66 = false;
bool kMemIsSent67 = false;
bool kMemIsSent68 = false;
bool kMemIsSent69 = false;
bool kMemIsSent70 = false;
bool kMemIsSent71 = false;
bool kMemIsSent72 = false;
bool kMemIsSent73 = false;
bool kMemIsSent74 = false;
bool kMemIsSent75 = false;
bool kMemIsSent76 = false;
bool kMemIsSent77 = false;
bool kMemIsSent78 = false;
bool kMemIsSent79 = false;
bool kMemIsSent80 = false;
bool kMemIsSent81 = false;
bool kMemIsSent82 = false;
bool kMemIsSent83 = false;
bool kMemIsSent84 = false;
bool kMemIsSent85 = false;
bool kMemIsSent86 = false;
bool kMemIsSent87 = false;
bool kMemIsSent88 = false;
bool kMemIsSent89 = false;
bool kMemIsSent90 = false;

void kronosMemCheck(hh::game::GameManager *manager) {
	if (manager->GetGameObject("SequenceItem0")) {
		if (manager->GetGameObject("SequenceItem0")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent0) {
			AP_SendItem(10000);
			kMemIsSent0 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem1")) {
		if (manager->GetGameObject("SequenceItem1")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent1) {
			AP_SendItem(10001);
			kMemIsSent1 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem2")) {
		if (manager->GetGameObject("SequenceItem2")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent2) {
			AP_SendItem(10002);
			kMemIsSent2 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem3")) {
		if (manager->GetGameObject("SequenceItem3")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent3) {
			AP_SendItem(10003);
			kMemIsSent3 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem4")) {
		if (manager->GetGameObject("SequenceItem4")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent4) {
			AP_SendItem(10004);
			kMemIsSent4 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem5")) {
		if (manager->GetGameObject("SequenceItem5")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent5) {
			AP_SendItem(10005);
			kMemIsSent5 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem6")) {
		if (manager->GetGameObject("SequenceItem6")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent6) {
			AP_SendItem(10006);
			kMemIsSent6 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem7")) {
		if (manager->GetGameObject("SequenceItem7")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent7) {
			AP_SendItem(10007);
			kMemIsSent7 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem8")) {
		if (manager->GetGameObject("SequenceItem8")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent8) {
			AP_SendItem(10008);
			kMemIsSent8 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem9")) {
		if (manager->GetGameObject("SequenceItem9")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent9) {
			AP_SendItem(10009);
			kMemIsSent9 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem10")) {
		if (manager->GetGameObject("SequenceItem10")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent10) {
			AP_SendItem(10010);
			kMemIsSent10 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem11")) {
		if (manager->GetGameObject("SequenceItem11")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent11) {
			AP_SendItem(10011);
			kMemIsSent11 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem12")) {
		if (manager->GetGameObject("SequenceItem12")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent12) {
			AP_SendItem(10012);
			kMemIsSent12 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem13")) {
		if (manager->GetGameObject("SequenceItem13")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent13) {
			AP_SendItem(10013);
			kMemIsSent13 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem14")) {
		if (manager->GetGameObject("SequenceItem14")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent14) {
			AP_SendItem(10014);
			kMemIsSent14 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem15")) {
		if (manager->GetGameObject("SequenceItem15")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent15) {
			AP_SendItem(10015);
			kMemIsSent15 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem16")) {
		if (manager->GetGameObject("SequenceItem16")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent16) {
			AP_SendItem(10016);
			kMemIsSent16 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem17")) {
		if (manager->GetGameObject("SequenceItem17")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent17) {
			AP_SendItem(10017);
			kMemIsSent17 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem18")) {
		if (manager->GetGameObject("SequenceItem18")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent18) {
			AP_SendItem(10018);
			kMemIsSent18 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem19")) {
		if (manager->GetGameObject("SequenceItem19")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent19) {
			AP_SendItem(10019);
			kMemIsSent19 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem20")) {
		if (manager->GetGameObject("SequenceItem20")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent20) {
			AP_SendItem(10020);
			kMemIsSent20 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem21")) {
		if (manager->GetGameObject("SequenceItem21")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent21) {
			AP_SendItem(10021);
			kMemIsSent21 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem22")) {
		if (manager->GetGameObject("SequenceItem22")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent22) {
			AP_SendItem(10022);
			kMemIsSent22 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem23")) {
		if (manager->GetGameObject("SequenceItem23")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent23) {
			AP_SendItem(10023);
			kMemIsSent23 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem24")) {
		if (manager->GetGameObject("SequenceItem24")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent24) {
			AP_SendItem(10024);
			kMemIsSent24 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem25")) {
		if (manager->GetGameObject("SequenceItem25")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent25) {
			AP_SendItem(10025);
			kMemIsSent25 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem26")) {
		if (manager->GetGameObject("SequenceItem26")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent26) {
			AP_SendItem(10026);
			kMemIsSent26 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem27")) {
		if (manager->GetGameObject("SequenceItem27")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent27) {
			AP_SendItem(10027);
			kMemIsSent27 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem28")) {
		if (manager->GetGameObject("SequenceItem28")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent28) {
			AP_SendItem(10028);
			kMemIsSent28 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem29")) {
		if (manager->GetGameObject("SequenceItem29")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent29) {
			AP_SendItem(10029);
			kMemIsSent29 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem30")) {
		if (manager->GetGameObject("SequenceItem30")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent30) {
			AP_SendItem(10030);
			kMemIsSent30 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem31")) {
		if (manager->GetGameObject("SequenceItem31")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent31) {
			AP_SendItem(10031);
			kMemIsSent31 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem32")) {
		if (manager->GetGameObject("SequenceItem32")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent32) {
			AP_SendItem(10032);
			kMemIsSent32 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem33")) {
		if (manager->GetGameObject("SequenceItem33")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent33) {
			AP_SendItem(10033);
			kMemIsSent33 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem34")) {
		if (manager->GetGameObject("SequenceItem34")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent34) {
			AP_SendItem(10034);
			kMemIsSent34 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem35")) {
		if (manager->GetGameObject("SequenceItem35")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent35) {
			AP_SendItem(10035);
			kMemIsSent35 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem36")) {
		if (manager->GetGameObject("SequenceItem36")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent36) {
			AP_SendItem(10036);
			kMemIsSent36 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem37")) {
		if (manager->GetGameObject("SequenceItem37")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent37) {
			AP_SendItem(10037);
			kMemIsSent37 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem38")) {
		if (manager->GetGameObject("SequenceItem38")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent38) {
			AP_SendItem(10038);
			kMemIsSent38 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem39")) {
		if (manager->GetGameObject("SequenceItem39")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent39) {
			AP_SendItem(10039);
			kMemIsSent39 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem40")) {
		if (manager->GetGameObject("SequenceItem40")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent40) {
			AP_SendItem(10040);
			kMemIsSent40 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem41")) {
		if (manager->GetGameObject("SequenceItem41")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent41) {
			AP_SendItem(10041);
			kMemIsSent41 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem42")) {
		if (manager->GetGameObject("SequenceItem42")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent42) {
			AP_SendItem(10042);
			kMemIsSent42 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem43")) {
		if (manager->GetGameObject("SequenceItem43")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent43) {
			AP_SendItem(10043);
			kMemIsSent43 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem44")) {
		if (manager->GetGameObject("SequenceItem44")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent44) {
			AP_SendItem(10044);
			kMemIsSent44 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem45")) {
		if (manager->GetGameObject("SequenceItem45")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent45) {
			AP_SendItem(10045);
			kMemIsSent45 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem46")) {
		if (manager->GetGameObject("SequenceItem46")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent46) {
			AP_SendItem(10046);
			kMemIsSent46 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem47")) {
		if (manager->GetGameObject("SequenceItem47")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent47) {
			AP_SendItem(10047);
			kMemIsSent47 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem48")) {
		if (manager->GetGameObject("SequenceItem48")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent48) {
			AP_SendItem(10048);
			kMemIsSent48 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem49")) {
		if (manager->GetGameObject("SequenceItem49")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent49) {
			AP_SendItem(10049);
			kMemIsSent49 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem50")) {
		if (manager->GetGameObject("SequenceItem50")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent50) {
			AP_SendItem(10050);
			kMemIsSent50 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem51")) {
		if (manager->GetGameObject("SequenceItem51")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent51) {
			AP_SendItem(10051);
			kMemIsSent51 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem52")) {
		if (manager->GetGameObject("SequenceItem52")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent52) {
			AP_SendItem(10052);
			kMemIsSent52 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem53")) {
		if (manager->GetGameObject("SequenceItem53")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent53) {
			AP_SendItem(10053);
			kMemIsSent53 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem54")) {
		if (manager->GetGameObject("SequenceItem54")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent54) {
			AP_SendItem(10054);
			kMemIsSent54 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem55")) {
		if (manager->GetGameObject("SequenceItem55")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent55) {
			AP_SendItem(10055);
			kMemIsSent55 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem56")) {
		if (manager->GetGameObject("SequenceItem56")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent56) {
			AP_SendItem(10056);
			kMemIsSent56 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem57")) {
		if (manager->GetGameObject("SequenceItem57")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent57) {
			AP_SendItem(10057);
			kMemIsSent57 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem58")) {
		if (manager->GetGameObject("SequenceItem58")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent58) {
			AP_SendItem(10058);
			kMemIsSent58 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem59")) {
		if (manager->GetGameObject("SequenceItem59")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent59) {
			AP_SendItem(10059);
			kMemIsSent59 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem60")) {
		if (manager->GetGameObject("SequenceItem60")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent60) {
			AP_SendItem(10060);
			kMemIsSent60 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem61")) {
		if (manager->GetGameObject("SequenceItem61")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent61) {
			AP_SendItem(10061);
			kMemIsSent61 = true;
		}
		if (manager->GetGameObject("SequenceItem61")->GetComponent<hh::game::GOCActivator>()->enabled == 1 && kMemIsSent61) {
			manager->GetGameObject("SequenceItem61")->name.Set("SequenceItem85");
		}
	}
	if (manager->GetGameObject("SequenceItem62")) {
		if (manager->GetGameObject("SequenceItem62")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent62) {
			AP_SendItem(10062);
			kMemIsSent62 = true;
		}
		if (manager->GetGameObject("SequenceItem62")->GetComponent<hh::game::GOCActivator>()->enabled == 1 && kMemIsSent62) {
			manager->GetGameObject("SequenceItem62")->name.Set("SequenceItem86");
		}
	}
	if (manager->GetGameObject("SequenceItem63")) {
		if (manager->GetGameObject("SequenceItem63")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent63) {
			AP_SendItem(10063);
			kMemIsSent63 = true;
		}
		if (manager->GetGameObject("SequenceItem63")->GetComponent<hh::game::GOCActivator>()->enabled == 1 && kMemIsSent63) {
			manager->GetGameObject("SequenceItem63")->name.Set("SequenceItem87");
		}
	}
	if (manager->GetGameObject("SequenceItem64")) {
		if (manager->GetGameObject("SequenceItem64")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent64) {
			AP_SendItem(10064);
			kMemIsSent64 = true;
		}
		if (manager->GetGameObject("SequenceItem64")->GetComponent<hh::game::GOCActivator>()->enabled == 1 && kMemIsSent64) {
			manager->GetGameObject("SequenceItem64")->name.Set("SequenceItem88");
		}
	}
	if (manager->GetGameObject("SequenceItem65")) {
		if (manager->GetGameObject("SequenceItem65")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent65) {
			AP_SendItem(10065);
			kMemIsSent65 = true;
		}
		if (manager->GetGameObject("SequenceItem65")->GetComponent<hh::game::GOCActivator>()->enabled == 1 && kMemIsSent65) {
			manager->GetGameObject("SequenceItem65")->name.Set("SequenceItem89");
		}
	}
	if (manager->GetGameObject("SequenceItem66")) {
		if (manager->GetGameObject("SequenceItem66")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent66) {
			AP_SendItem(10066);
			kMemIsSent66 = true;
		}
		if (manager->GetGameObject("SequenceItem66")->GetComponent<hh::game::GOCActivator>()->enabled == 1 && kMemIsSent66) {
			manager->GetGameObject("SequenceItem66")->name.Set("SequenceItem90");
		}
	}
	if (manager->GetGameObject("SequenceItem67")) {
		if (manager->GetGameObject("SequenceItem67")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent67) {
			AP_SendItem(10067);
			kMemIsSent67 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem68")) {
		if (manager->GetGameObject("SequenceItem68")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent68) {
			AP_SendItem(10068);
			kMemIsSent68 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem69")) {
		if (manager->GetGameObject("SequenceItem69")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent69) {
			AP_SendItem(10069);
			kMemIsSent69 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem70")) {
		if (manager->GetGameObject("SequenceItem70")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent70) {
			AP_SendItem(10070);
			kMemIsSent70 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem71")) {
		if (manager->GetGameObject("SequenceItem71")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent71) {
			AP_SendItem(10071);
			kMemIsSent71 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem72")) {
		if (manager->GetGameObject("SequenceItem72")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent72) {
			AP_SendItem(10072);
			kMemIsSent72 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem73")) {
		if (manager->GetGameObject("SequenceItem73")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent73) {
			AP_SendItem(10073);
			kMemIsSent73 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem74")) {
		if (manager->GetGameObject("SequenceItem74")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent74) {
			AP_SendItem(10074);
			kMemIsSent74 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem75")) {
		if (manager->GetGameObject("SequenceItem75")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent75) {
			AP_SendItem(10075);
			kMemIsSent75 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem76")) {
		if (manager->GetGameObject("SequenceItem76")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent76) {
			AP_SendItem(10076);
			kMemIsSent76 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem77")) {
		if (manager->GetGameObject("SequenceItem77")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent77) {
			AP_SendItem(10077);
			kMemIsSent77 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem78")) {
		if (manager->GetGameObject("SequenceItem78")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent78) {
			AP_SendItem(10078);
			kMemIsSent78 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem79")) {
		if (manager->GetGameObject("SequenceItem79")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent79) {
			AP_SendItem(10079);
			kMemIsSent79 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem80")) {
		if (manager->GetGameObject("SequenceItem80")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent80) {
			AP_SendItem(10080);
			kMemIsSent80 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem81")) {
		if (manager->GetGameObject("SequenceItem81")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent81) {
			AP_SendItem(10081);
			kMemIsSent81 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem82")) {
		if (manager->GetGameObject("SequenceItem82")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent82) {
			AP_SendItem(10082);
			kMemIsSent82 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem83")) {
		if (manager->GetGameObject("SequenceItem83")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent83) {
			AP_SendItem(10083);
			kMemIsSent83 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem84")) {
		if (manager->GetGameObject("SequenceItem84")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent84) {
			AP_SendItem(10084);
			kMemIsSent84 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem85")) {
		if (manager->GetGameObject("SequenceItem85")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent85) {
			AP_SendItem(10085);
			kMemIsSent85 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem86")) {
		if (manager->GetGameObject("SequenceItem86")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent86) {
			AP_SendItem(10086);
			kMemIsSent86 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem87")) {
		if (manager->GetGameObject("SequenceItem87")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent87) {
			AP_SendItem(10087);
			kMemIsSent87 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem88")) {
		if (manager->GetGameObject("SequenceItem88")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent88) {
			AP_SendItem(10088);
			kMemIsSent88 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem89")) {
		if (manager->GetGameObject("SequenceItem89")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent89) {
			AP_SendItem(10089);
			kMemIsSent89 = true;
		}
	}
	if (manager->GetGameObject("SequenceItem90")) {
		if (manager->GetGameObject("SequenceItem90")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kMemIsSent90) {
			AP_SendItem(10090);
			kMemIsSent90 = true;
		}
	}
}