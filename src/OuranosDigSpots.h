bool oDropIsSent0 = false;
bool oDropIsSent1 = false;
bool oDropIsSent2 = false;
bool oDropIsSent3 = false;
bool oDropIsSent4 = false;
bool oDropIsSent5 = false;
bool oDropIsSent6 = false;
bool oDropIsSent7 = false;
bool oDropIsSent8 = false;
bool oDropIsSent9 = false;
bool oDropIsSent10 = false;
bool oDropIsSent11 = false;
bool oDropIsSent12 = false;
bool oDropIsSent13 = false;
bool oDropIsSent14 = false;
bool oDropIsSent15 = false;

bool ouranosGearIsSent0 = false;
bool ouranosGearIsSent1 = false;
bool ouranosGearIsSent2 = false;
bool ouranosGearIsSent3 = false;
bool ouranosGearIsSent4 = false;
bool ouranosGearIsSent5 = false;
bool ouranosGearIsSent6 = false;
bool ouranosGearIsSent7 = false;
bool ouranosGearIsSent8 = false;
bool ouranosGearIsSent9 = false;
bool ouranosGearIsSent10 = false;
bool ouranosGearIsSent11 = false;
bool ouranosGearIsSent12 = false;
bool ouranosGearIsSent13 = false;
bool ouranosGearIsSent14 = false;
bool ouranosGearIsSent15 = false;
bool ouranosGearIsSent16 = false;
bool ouranosGearIsSent17 = false;
bool ouranosGearIsSent18 = false;
bool ouranosGearIsSent19 = false;
bool ouranosGearIsSent20 = false;

bool ouranosGearIsEnabled0 = false;
bool ouranosGearIsEnabled1 = false;
bool ouranosGearIsEnabled2 = false;
bool ouranosGearIsEnabled3 = false;
bool ouranosGearIsEnabled4 = false;
bool ouranosGearIsEnabled5 = false;
bool ouranosGearIsEnabled6 = false;
bool ouranosGearIsEnabled7 = false;
bool ouranosGearIsEnabled8 = false;
bool ouranosGearIsEnabled9 = false;
bool ouranosGearIsEnabled10 = false;
bool ouranosGearIsEnabled11 = false;
bool ouranosGearIsEnabled12 = false;
bool ouranosGearIsEnabled13 = false;
bool ouranosGearIsEnabled14 = false;
bool ouranosGearIsEnabled15 = false;
bool ouranosGearIsEnabled16 = false;
bool ouranosGearIsEnabled17 = false;
bool ouranosGearIsEnabled18 = false;
bool ouranosGearIsEnabled19 = false;
bool ouranosGearIsEnabled20 = false;

bool ouranosKeyIsSent0 = false;
bool ouranosKeyIsSent1 = false;
bool ouranosKeyIsSent2 = false;
bool ouranosKeyIsSent3 = false;
bool ouranosKeyIsSent4 = false;
bool ouranosKeyIsSent5 = false;
bool ouranosKeyIsSent6 = false;
bool ouranosKeyIsSent7 = false;

void ouranosDroppedItemCheck(hh::game::GameManager* manager) {
	if (manager->GetGameObject("DroppedItem0")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent0) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16200 + i);
				oDropIsSent0 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem1")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent1) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16208 + i);
				oDropIsSent1 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem2")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent2) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16216 + i);
				oDropIsSent2 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem3")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent3) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16224 + i);
				oDropIsSent3 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem4")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent4) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16232 + i);
				oDropIsSent4 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem5")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent5) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16240 + i);
				oDropIsSent5 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem6")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent6) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16248 + i);
				oDropIsSent6 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem7")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent7) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16256 + i);
				oDropIsSent7 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem8")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent8) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16264 + i);
				oDropIsSent8 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem9")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent9) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16272 + i);
				oDropIsSent9 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem10")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent10) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16280 + i);
				oDropIsSent10 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem11")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent11) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16288 + i);
				oDropIsSent11 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem12")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent12) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16296 + i);
				oDropIsSent12 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem13")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent13) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16304 + i);
				oDropIsSent13 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem14")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent14) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16312 + i);
				oDropIsSent14 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem15")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent15) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(16320 + i);
				oDropIsSent15 = true;
			}
		}
	}
}
void ouranosDroppedGear(hh::game::GameManager* manager) {
	if (manager->GetGameObject("PortalBit0")) {
		if (getCollider(manager->GetGameObject("PortalBit0"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled0) {
			ouranosGearIsEnabled0 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit0"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent0 && ouranosGearIsEnabled0) {
			AP_SendItem(16393);
			ouranosGearIsSent0 = true;
		}
	}
	if (manager->GetGameObject("PortalBit1")) {
		if (getCollider(manager->GetGameObject("PortalBit1"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled1) {
			ouranosGearIsEnabled1 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit1"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent1 && ouranosGearIsEnabled1) {
			AP_SendItem(16394);
			ouranosGearIsSent1 = true;
		}
	}
	if (manager->GetGameObject("PortalBit2")) {
		if (getCollider(manager->GetGameObject("PortalBit2"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled2) {
			ouranosGearIsEnabled2 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit2"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent2 && ouranosGearIsEnabled2) {
			AP_SendItem(16395);
			ouranosGearIsSent2 = true;
		}
	}
	if (manager->GetGameObject("PortalBit3")) {
		if (getCollider(manager->GetGameObject("PortalBit3"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled3) {
			ouranosGearIsEnabled3 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit3"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent3 && ouranosGearIsEnabled3) {
			AP_SendItem(16396);
			ouranosGearIsSent3 = true;
		}
	}
	if (manager->GetGameObject("PortalBit4")) {
		if (getCollider(manager->GetGameObject("PortalBit4"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled4) {
			ouranosGearIsEnabled4 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit4"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent4 && ouranosGearIsEnabled4) {
			AP_SendItem(16397);
			ouranosGearIsSent4 = true;
		}
	}
	if (manager->GetGameObject("PortalBit5")) {
		if (getCollider(manager->GetGameObject("PortalBit5"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled5) {
			ouranosGearIsEnabled5 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit5"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent5 && ouranosGearIsEnabled5) {
			AP_SendItem(16398);
			ouranosGearIsSent5 = true;
		}
	}
	if (manager->GetGameObject("PortalBit6")) {
		if (getCollider(manager->GetGameObject("PortalBit6"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled6) {
			ouranosGearIsEnabled6 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit6"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent6 && ouranosGearIsEnabled6) {
			AP_SendItem(16399);
			ouranosGearIsSent6 = true;
		}
	}
	if (manager->GetGameObject("PortalBit7")) {
		if (getCollider(manager->GetGameObject("PortalBit7"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled7) {
			ouranosGearIsEnabled7 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit7"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent7 && ouranosGearIsEnabled7) {
			AP_SendItem(16400);
			ouranosGearIsSent7 = true;
		}
	}
	if (manager->GetGameObject("PortalBit8")) {
		if (getCollider(manager->GetGameObject("PortalBit8"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled8) {
			ouranosGearIsEnabled8 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit8"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent8 && ouranosGearIsEnabled8) {
			AP_SendItem(16401);
			ouranosGearIsSent8 = true;
		}
	}
	if (manager->GetGameObject("PortalBit9")) {
		if (getCollider(manager->GetGameObject("PortalBit9"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled9) {
			ouranosGearIsEnabled9 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit9"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent9 && ouranosGearIsEnabled9) {
			AP_SendItem(16402);
			ouranosGearIsSent9 = true;
		}
	}
	if (manager->GetGameObject("PortalBit10")) {
		if (getCollider(manager->GetGameObject("PortalBit10"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled10) {
			ouranosGearIsEnabled10 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit10"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent10 && ouranosGearIsEnabled10) {
			AP_SendItem(16403);
			ouranosGearIsSent10 = true;
		}
	}
	if (manager->GetGameObject("PortalBit11")) {
		if (getCollider(manager->GetGameObject("PortalBit11"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled11) {
			ouranosGearIsEnabled11 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit11"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent11 && ouranosGearIsEnabled11) {
			AP_SendItem(16404);
			ouranosGearIsSent11 = true;
		}
	}
	if (manager->GetGameObject("PortalBit12")) {
		if (getCollider(manager->GetGameObject("PortalBit12"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled12) {
			ouranosGearIsEnabled12 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit12"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent12 && ouranosGearIsEnabled12) {
			AP_SendItem(16405);
			ouranosGearIsSent12 = true;
		}
	}
	if (manager->GetGameObject("PortalBit13")) {
		if (getCollider(manager->GetGameObject("PortalBit13"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled13) {
			ouranosGearIsEnabled13 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit13"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent13 && ouranosGearIsEnabled13) {
			AP_SendItem(16406);
			ouranosGearIsSent13 = true;
		}
	}
	if (manager->GetGameObject("PortalBit14")) {
		if (getCollider(manager->GetGameObject("PortalBit14"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled14) {
			ouranosGearIsEnabled14 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit14"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent14 && ouranosGearIsEnabled14) {
			AP_SendItem(16407);
			ouranosGearIsSent14 = true;
		}
	}
	if (manager->GetGameObject("PortalBit15")) {
		if (getCollider(manager->GetGameObject("PortalBit15"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled15) {
			ouranosGearIsEnabled15 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit15"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent15 && ouranosGearIsEnabled15) {
			AP_SendItem(16408);
			ouranosGearIsSent15 = true;
		}
	}
	if (manager->GetGameObject("PortalBit16")) {
		if (getCollider(manager->GetGameObject("PortalBit16"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled16) {
			ouranosGearIsEnabled16 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit16"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent16 && ouranosGearIsEnabled16) {
			AP_SendItem(16409);
			ouranosGearIsSent16 = true;
		}
	}
	if (manager->GetGameObject("PortalBit17")) {
		if (getCollider(manager->GetGameObject("PortalBit17"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled17) {
			ouranosGearIsEnabled17 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit17"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent17 && ouranosGearIsEnabled17) {
			AP_SendItem(16410);
			ouranosGearIsSent17 = true;
		}
	}
	if (manager->GetGameObject("PortalBit18")) {
		if (getCollider(manager->GetGameObject("PortalBit18"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled18) {
			ouranosGearIsEnabled18 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit18"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent18 && ouranosGearIsEnabled18) {
			AP_SendItem(16411);
			ouranosGearIsSent18 = true;
		}
	}
	if (manager->GetGameObject("PortalBit19")) {
		if (getCollider(manager->GetGameObject("PortalBit19"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled19) {
			ouranosGearIsEnabled19 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit19"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent19 && ouranosGearIsEnabled19) {
			AP_SendItem(16412);
			ouranosGearIsSent19 = true;
		}
	}
	if (manager->GetGameObject("PortalBit20")) {
		if (getCollider(manager->GetGameObject("PortalBit20"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled20) {
			ouranosGearIsEnabled20 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit20"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent20 && ouranosGearIsEnabled20) {
			AP_SendItem(16413);
			ouranosGearIsSent20 = true;
		}
	}
}
void ouranosDroppedKey(hh::game::GameManager* manager) {
	if (manager->GetGameObject("StorageKey8")) {
		if (manager->GetGameObject("StorageKey8")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !ouranosKeyIsSent0) {
			AP_SendItem(16414);
			ouranosKeyIsSent0 = true;
		}
	}
	if (manager->GetGameObject("StorageKey1")) {
		if (manager->GetGameObject("StorageKey1")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !ouranosKeyIsSent1) {
			AP_SendItem(16415);
			ouranosKeyIsSent1 = true;
		}
	}
	if (manager->GetGameObject("StorageKey9")) {
		if (manager->GetGameObject("StorageKey9")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !ouranosKeyIsSent2) {
			AP_SendItem(16416);
			ouranosKeyIsSent2 = true;
		}
	}
	if (manager->GetGameObject("StorageKey3")) {
		if (manager->GetGameObject("StorageKey3")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !ouranosKeyIsSent3) {
			AP_SendItem(16417);
			ouranosKeyIsSent3 = true;
		}
	}
	if (manager->GetGameObject("StorageKey4")) {
		if (manager->GetGameObject("StorageKey4")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !ouranosKeyIsSent4) {
			AP_SendItem(16418);
			ouranosKeyIsSent4 = true;
		}
	}
	if (manager->GetGameObject("StorageKey5")) {
		if (manager->GetGameObject("StorageKey5")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !ouranosKeyIsSent5) {
			AP_SendItem(16419);
			ouranosKeyIsSent5 = true;
		}
	}
	if (manager->GetGameObject("StorageKey6")) {
		if (manager->GetGameObject("StorageKey6")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !ouranosKeyIsSent6) {
			AP_SendItem(16420);
			ouranosKeyIsSent6 = true;
		}
	}
	if (manager->GetGameObject("StorageKey7")) {
		if (manager->GetGameObject("StorageKey7")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !ouranosKeyIsSent7) {
			AP_SendItem(16421);
			ouranosKeyIsSent7 = true;
		}
	}
}