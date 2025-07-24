bool cDropIsSent0 = false;
bool cDropIsSent1 = false;
bool cDropIsSent2 = false;
bool cDropIsSent3 = false;
bool cDropIsSent4 = false;
bool cDropIsSent5 = false;
bool cDropIsSent6 = false;
bool cDropIsSent7 = false;
bool cDropIsSent8 = false;
bool cDropIsSent9 = false;
bool cDropIsSent10 = false;
bool cDropIsSent11 = false;
bool cDropIsSent12 = false;
bool cDropIsSent13 = false;
bool cDropIsSent14 = false;
bool cDropIsSent15 = false;
bool cDropIsSent16 = false;
bool cDropIsSent17 = false;
bool cDropIsSent18 = false;
bool cDropIsSent19 = false;

bool chaosGearIsSent0 = false;
bool chaosGearIsSent1 = false;
bool chaosGearIsSent2 = false;
bool chaosGearIsSent3 = false;
bool chaosGearIsSent4 = false;
bool chaosGearIsSent5 = false;
bool chaosGearIsSent6 = false;
bool chaosGearIsSent7 = false;
bool chaosGearIsSent8 = false;
bool chaosGearIsSent9 = false;
bool chaosGearIsSent10 = false;
bool chaosGearIsSent11 = false;
bool chaosGearIsSent12 = false;

bool chaosGearIsEnabled0 = false;
bool chaosGearIsEnabled1 = false;
bool chaosGearIsEnabled2 = false;
bool chaosGearIsEnabled3 = false;
bool chaosGearIsEnabled4 = false;
bool chaosGearIsEnabled5 = false;
bool chaosGearIsEnabled6 = false;
bool chaosGearIsEnabled7 = false;
bool chaosGearIsEnabled8 = false;
bool chaosGearIsEnabled9 = false;
bool chaosGearIsEnabled10 = false;
bool chaosGearIsEnabled11 = false;
bool chaosGearIsEnabled12 = false;

bool chaosKeyIsSent0 = false;
bool chaosKeyIsSent1 = false;
bool chaosKeyIsSent2 = false;
bool chaosKeyIsSent3 = false;
bool chaosKeyIsSent4 = false;
bool chaosKeyIsSent5 = false;
bool chaosKeyIsSent6 = false;
bool chaosKeyIsSent7 = false;
//0, 8, 13

void chaosDroppedItemCheck(hh::game::GameManager* manager) {
	if (manager->GetGameObject("DroppedItem0")) {
		if (manager->GetGameObject("DroppedItem0")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent0) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14252 + i);
				cDropIsSent0 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem1")) {
		if (manager->GetGameObject("DroppedItem1")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent1) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14260 + i);
				cDropIsSent1 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem2")) {
		if (manager->GetGameObject("DroppedItem2")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent2) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14268 + i);
				cDropIsSent2 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem3")) {
		if (manager->GetGameObject("DroppedItem3")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent3) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14276 + i);
				cDropIsSent3 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem4")) {
		if (manager->GetGameObject("DroppedItem4")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent4) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14284 + i);
				cDropIsSent4 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem5")) {
		if (manager->GetGameObject("DroppedItem5")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent5) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14292 + i);
				cDropIsSent5 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem6")) {
		if (manager->GetGameObject("DroppedItem6")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent6) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14300 + i);
				cDropIsSent6 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem7")) {
		if (manager->GetGameObject("DroppedItem7")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent7) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14308 + i);
				cDropIsSent7 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem8")) {
		if (manager->GetGameObject("DroppedItem8")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent8) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14316 + i);
				cDropIsSent8 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem9")) {
		if (manager->GetGameObject("DroppedItem9")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent9) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14324 + i);
				cDropIsSent9 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem10")) {
		if (manager->GetGameObject("DroppedItem10")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent10) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14332 + i);
				cDropIsSent10 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem11")) {
		if (manager->GetGameObject("DroppedItem11")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent11) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14340 + i);
				cDropIsSent11 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem12")) {
		if (manager->GetGameObject("DroppedItem12")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent12) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14348 + i);
				cDropIsSent12 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem13")) {
		if (manager->GetGameObject("DroppedItem13")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent13) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14356 + i);
				cDropIsSent13 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem14")) {
		if (manager->GetGameObject("DroppedItem14")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent14) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14364 + i);
				cDropIsSent14 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem15")) {
		if (manager->GetGameObject("DroppedItem15")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent15) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14372 + i);
				cDropIsSent15 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem16")) {
		if (manager->GetGameObject("DroppedItem16")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent16) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14380 + i);
				cDropIsSent16 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem17")) {
		if (manager->GetGameObject("DroppedItem17")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent17) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14388 + i);
				cDropIsSent17 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem18")) {
		if (manager->GetGameObject("DroppedItem18")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent18) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14396 + i);
				cDropIsSent18 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem19")) {
		if (manager->GetGameObject("DroppedItem19")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !cDropIsSent19) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(14404 + i);
				cDropIsSent19 = true;
			}
		}
	}
}
//0 = 15, 8 = 16, 13

void chaosDroppedGear(hh::game::GameManager* manager) {
	if (manager->GetGameObject("PortalBit15")) {
		if (getCollider(manager->GetGameObject("PortalBit15"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosGearIsEnabled0) {
			chaosGearIsEnabled0 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit15"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !chaosGearIsSent0 && chaosGearIsEnabled0) {
			AP_SendItem(14463);
			chaosGearIsSent0 = true;
		}
	}
	if (manager->GetGameObject("PortalBit1")) {
		if (getCollider(manager->GetGameObject("PortalBit1"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosGearIsEnabled1) {
			chaosGearIsEnabled1 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit1"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !chaosGearIsSent1 && chaosGearIsEnabled1) {
			AP_SendItem(14464);
			chaosGearIsSent1 = true;
		}
	}
	if (manager->GetGameObject("PortalBit2")) {
		if (getCollider(manager->GetGameObject("PortalBit2"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosGearIsEnabled2) {
			chaosGearIsEnabled2 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit2"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !chaosGearIsSent2 && chaosGearIsEnabled2) {
			AP_SendItem(14465);
			chaosGearIsSent2 = true;
		}
	}
	if (manager->GetGameObject("PortalBit3")) {
		if (getCollider(manager->GetGameObject("PortalBit3"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosGearIsEnabled3) {
			chaosGearIsEnabled3 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit3"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !chaosGearIsSent3 && chaosGearIsEnabled3) {
			AP_SendItem(14466);
			chaosGearIsSent3 = true;
		}
	}
	if (manager->GetGameObject("PortalBit4")) {
		if (getCollider(manager->GetGameObject("PortalBit4"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosGearIsEnabled4) {
			chaosGearIsEnabled4 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit4"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !chaosGearIsSent4 && chaosGearIsEnabled4) {
			AP_SendItem(14465);
			chaosGearIsSent4 = true;
		}
	}
	if (manager->GetGameObject("PortalBit5")) {
		if (getCollider(manager->GetGameObject("PortalBit5"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosGearIsEnabled5) {
			chaosGearIsEnabled5 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit5"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !chaosGearIsSent5 && chaosGearIsEnabled5) {
			AP_SendItem(14466);
			chaosGearIsSent5 = true;
		}
	}
	if (manager->GetGameObject("PortalBit6")) {
		if (getCollider(manager->GetGameObject("PortalBit6"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosGearIsEnabled6) {
			chaosGearIsEnabled6 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit6"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !chaosGearIsSent6 && chaosGearIsEnabled6) {
			AP_SendItem(14467);
			chaosGearIsSent6 = true;
		}
	}
	if (manager->GetGameObject("PortalBit7")) {
		if (getCollider(manager->GetGameObject("PortalBit7"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosGearIsEnabled7) {
			chaosGearIsEnabled7 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit7"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !chaosGearIsSent7 && chaosGearIsEnabled7) {
			AP_SendItem(14468);
			chaosGearIsSent7 = true;
		}
	}
	if (manager->GetGameObject("PortalBit16")) {
		if (getCollider(manager->GetGameObject("PortalBit16"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosGearIsEnabled8) {
			chaosGearIsEnabled8 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit16"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !chaosGearIsSent8 && chaosGearIsEnabled8) {
			AP_SendItem(14469);
			chaosGearIsSent8 = true;
		}
	}
	if (manager->GetGameObject("PortalBit9")) {
		if (getCollider(manager->GetGameObject("PortalBit9"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosGearIsEnabled9) {
			chaosGearIsEnabled9 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit9"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !chaosGearIsSent9 && chaosGearIsEnabled9) {
			AP_SendItem(14470);
			chaosGearIsSent9 = true;
		}
	}
	if (manager->GetGameObject("PortalBit10")) {
		if (getCollider(manager->GetGameObject("PortalBit10"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosGearIsEnabled10) {
			chaosGearIsEnabled10 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit10"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !chaosGearIsSent10 && chaosGearIsEnabled10) {
			AP_SendItem(14471);
			chaosGearIsSent10 = true;
		}
	}
	if (manager->GetGameObject("PortalBit11")) {
		if (getCollider(manager->GetGameObject("PortalBit11"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosGearIsEnabled11) {
			chaosGearIsEnabled11 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit11"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !chaosGearIsSent11 && chaosGearIsEnabled11) {
			AP_SendItem(14472);
			chaosGearIsSent11 = true;
		}
	}
	if (manager->GetGameObject("PortalBit12")) {
		if (getCollider(manager->GetGameObject("PortalBit12"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosGearIsEnabled12) {
			chaosGearIsEnabled12 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit12"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !chaosGearIsSent12 && chaosGearIsEnabled12) {
			AP_SendItem(14473);
			chaosGearIsSent12 = true;
		}
	}
}
void chaosDroppedKey(hh::game::GameManager* manager) {
	if (manager->GetGameObject("StorageKey0")) {
		if (manager->GetGameObject("StorageKey0")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !chaosKeyIsSent0) {
			AP_SendItem(14474);
			chaosKeyIsSent0 = true;
		}
	}
	if (manager->GetGameObject("StorageKey1")) {
		if (manager->GetGameObject("StorageKey1")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !chaosKeyIsSent1) {
			AP_SendItem(14475);
			chaosKeyIsSent1 = true;
		}
	}
	if (manager->GetGameObject("StorageKey2")) {
		if (manager->GetGameObject("StorageKey2")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !chaosKeyIsSent2) {
			AP_SendItem(14476);
			chaosKeyIsSent2 = true;
		}
	}
	if (manager->GetGameObject("StorageKey3")) {
		if (manager->GetGameObject("StorageKey3")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !chaosKeyIsSent3) {
			AP_SendItem(14477);
			chaosKeyIsSent3 = true;
		}
	}
	if (manager->GetGameObject("StorageKey4")) {
		if (manager->GetGameObject("StorageKey4")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !chaosKeyIsSent4) {
			AP_SendItem(14478);
			chaosKeyIsSent4 = true;
		}
	}
	if (manager->GetGameObject("StorageKey5")) {
		if (manager->GetGameObject("StorageKey5")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !chaosKeyIsSent5) {
			AP_SendItem(14479);
			chaosKeyIsSent5 = true;
		}
	}
	if (manager->GetGameObject("StorageKey6")) {
		if (manager->GetGameObject("StorageKey6")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !chaosKeyIsSent6) {
			AP_SendItem(14480);
			chaosKeyIsSent6 = true;
		}
	}
	if (manager->GetGameObject("StorageKey8")) {
		if (manager->GetGameObject("StorageKey8")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !chaosKeyIsSent7) {
			AP_SendItem(14481);
			chaosKeyIsSent7 = true;
		}
	}
}