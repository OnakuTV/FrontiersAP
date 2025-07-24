bool aDropIsSent0 = false;
bool aDropIsSent1 = false;
bool aDropIsSent2 = false;
bool aDropIsSent3 = false;
bool aDropIsSent4 = false;
bool aDropIsSent5 = false;
bool aDropIsSent6 = false;
bool aDropIsSent7 = false;
bool aDropIsSent8 = false;
bool aDropIsSent9 = false;
bool aDropIsSent10 = false;
bool aDropIsSent11 = false;
bool aDropIsSent12 = false;
bool aDropIsSent13 = false;
bool aDropIsSent14 = false;
bool aDropIsSent15 = false;
bool aDropIsSent16 = false;
bool aDropIsSent17 = false;
bool aDropIsSent18 = false;
bool aDropIsSent19 = false;
bool aDropIsSent20 = false;
bool aDropIsSent21 = false;
bool aDropIsSent22 = false;
bool aDropIsSent23 = false;
bool aDropIsSent24 = false;
bool aDropIsSent25 = false;

bool aresGearIsSent0 = false;
bool aresGearIsSent1 = false;
bool aresGearIsSent2 = false;
bool aresGearIsSent3 = false;
bool aresGearIsSent4 = false;
bool aresGearIsSent5 = false;
bool aresGearIsSent6 = false;
bool aresGearIsSent7 = false;
bool aresGearIsSent8 = false;
bool aresGearIsSent9 = false;
bool aresGearIsSent10 = false;

bool aresGearIsEnabled0 = false;
bool aresGearIsEnabled1 = false;
bool aresGearIsEnabled2 = false;
bool aresGearIsEnabled3 = false;
bool aresGearIsEnabled4 = false;
bool aresGearIsEnabled5 = false;
bool aresGearIsEnabled6 = false;
bool aresGearIsEnabled7 = false;
bool aresGearIsEnabled8 = false;
bool aresGearIsEnabled9 = false;
bool aresGearIsEnabled10 = false;

bool aresKeyIsSent0 = false;
bool aresKeyIsSent1 = false;
bool aresKeyIsSent2 = false;
bool aresKeyIsSent3 = false;
bool aresKeyIsSent4 = false;
bool aresKeyIsSent5 = false;
bool aresKeyIsSent6 = false;

void aresDroppedItemCheck(hh::game::GameManager* manager) {
	if (manager->GetGameObject("DroppedItem30")) {
		if (manager->GetGameObject("DroppedItem30")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent0) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12285 + i);
				aDropIsSent0 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem1")) {
		if (manager->GetGameObject("DroppedItem1")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent1) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12293 + i);
				aDropIsSent1 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem2")) {
		if (manager->GetGameObject("DroppedItem2")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent2) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12301 + i);
				aDropIsSent2 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem3")) {
		if (manager->GetGameObject("DroppedItem3")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent3) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12309 + i);
				aDropIsSent3 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem4")) {
		if (manager->GetGameObject("DroppedItem4")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent4) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12317 + i);
				aDropIsSent4 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem5")) {
		if (manager->GetGameObject("DroppedItem5")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent5) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12325 + i);
				aDropIsSent5 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem6")) {
		if (manager->GetGameObject("DroppedItem6")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent6) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12333 + i);
				aDropIsSent6 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem7")) {
		if (manager->GetGameObject("DroppedItem7")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent7) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12341 + i);
				aDropIsSent7 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem8")) {
		if (manager->GetGameObject("DroppedItem8")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent8) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12349 + i);
				aDropIsSent8 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem9")) {
		if (manager->GetGameObject("DroppedItem9")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent9) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12357 + i);
				aDropIsSent9 = true;
			}
			manager->GetGameObject("DroppedItem9")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCollider::Flag::ENABLED);
		}
	}
	if (manager->GetGameObject("DroppedItem10")) {
		if (manager->GetGameObject("DroppedItem10")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent10) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12365 + i);
				aDropIsSent10 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem11")) {
		if (manager->GetGameObject("DroppedItem11")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent11) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12373 + i);
				aDropIsSent11 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem12")) {
		if (manager->GetGameObject("DroppedItem12")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent12) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12381 + i);
				aDropIsSent12 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem13")) {
		if (manager->GetGameObject("DroppedItem13")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent13) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12389 + i);
				aDropIsSent13 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem14")) {
		if (manager->GetGameObject("DroppedItem14")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent14) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12397 + i);
				aDropIsSent14 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem15")) {
		if (manager->GetGameObject("DroppedItem15")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent15) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12405 + i);
				aDropIsSent15 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem16")) {
		if (manager->GetGameObject("DroppedItem16")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent16) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12413 + i);
				aDropIsSent16 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem17")) {
		if (manager->GetGameObject("DroppedItem17")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent17) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12421+ i);
				aDropIsSent17 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem18")) {
		if (manager->GetGameObject("DroppedItem18")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent18) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12429 + i);
				aDropIsSent18 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem19")) {
		if (manager->GetGameObject("DroppedItem19")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent19) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12437 + i);
				aDropIsSent19 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem20")) {
		if (manager->GetGameObject("DroppedItem20")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent20) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12445 + i);
				aDropIsSent20 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem21")) {
		if (manager->GetGameObject("DroppedItem21")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent21) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12453 + i);
				aDropIsSent21 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem22")) {
		if (manager->GetGameObject("DroppedItem22")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent22) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12461 + i);
				aDropIsSent22 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem23")) {
		if (manager->GetGameObject("DroppedItem23")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent23) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12469 + i);
				aDropIsSent23 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem24")) {
		if (manager->GetGameObject("DroppedItem24")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent24) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12477 + i);
				aDropIsSent24 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem32")) {
		if (manager->GetGameObject("DroppedItem32")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent25) {
			for (int i = 0; i < 8; i++) {
				AP_SendItem(12485 + i);
				aDropIsSent25 = true;
			}
		}
	}
}
void aresDroppedGear(hh::game::GameManager* manager) {
	if (manager->GetGameObject("PortalBit0")) {
		if (getCollider(manager->GetGameObject("PortalBit0"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !aresGearIsEnabled0) {
			aresGearIsEnabled0 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit0"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !aresGearIsSent0 && aresGearIsEnabled0) {
			AP_SendItem(12536);
			aresGearIsSent0 = true;
		}
	}
	if (manager->GetGameObject("PortalBit1")) {
		if (getCollider(manager->GetGameObject("PortalBit1"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !aresGearIsEnabled1) {
			aresGearIsEnabled1 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit1"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !aresGearIsSent1 && aresGearIsEnabled1) {
			AP_SendItem(12537);
			aresGearIsSent1 = true;
		}
	}
	if (manager->GetGameObject("PortalBit2")) {
		if (getCollider(manager->GetGameObject("PortalBit2"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !aresGearIsEnabled2) {
			aresGearIsEnabled2 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit2"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !aresGearIsSent2 && aresGearIsEnabled2) {
			AP_SendItem(12538);
			aresGearIsSent2 = true;
		}
	}
	if (manager->GetGameObject("PortalBit3")) {
		if (getCollider(manager->GetGameObject("PortalBit3"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !aresGearIsEnabled3) {
			aresGearIsEnabled3 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit3"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !aresGearIsSent3 && aresGearIsEnabled3) {
			AP_SendItem(12539);
			aresGearIsSent3 = true;
		}
	}
	if (manager->GetGameObject("PortalBit4")) {
		if (getCollider(manager->GetGameObject("PortalBit4"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !aresGearIsEnabled4) {
			aresGearIsEnabled4 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit4"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !aresGearIsSent4 && aresGearIsEnabled4) {
			AP_SendItem(12540);
			aresGearIsSent4 = true;
		}
	}
	if (manager->GetGameObject("PortalBit5")) {
		if (getCollider(manager->GetGameObject("PortalBit5"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !aresGearIsEnabled5) {
			aresGearIsEnabled5 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit5"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !aresGearIsSent5 && aresGearIsEnabled5) {
			AP_SendItem(12541);
			aresGearIsSent5 = true;
		}
	}
	if (manager->GetGameObject("PortalBit6")) {
		if (getCollider(manager->GetGameObject("PortalBit6"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !aresGearIsEnabled6) {
			aresGearIsEnabled6 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit6"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !aresGearIsSent6 && aresGearIsEnabled6) {
			AP_SendItem(12542);
			aresGearIsSent6 = true;
		}
	}
	if (manager->GetGameObject("PortalBit7")) {
		if (getCollider(manager->GetGameObject("PortalBit7"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !aresGearIsEnabled7) {
			aresGearIsEnabled7 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit7"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !aresGearIsSent7 && aresGearIsEnabled7) {
			AP_SendItem(12543);
			aresGearIsSent7 = true;
		}
	}
	if (manager->GetGameObject("PortalBit8")) {
		if (getCollider(manager->GetGameObject("PortalBit8"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !aresGearIsEnabled8) {
			aresGearIsEnabled8 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit8"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !aresGearIsSent8 && aresGearIsEnabled8) {
			AP_SendItem(12544);
			aresGearIsSent8 = true;
		}
	}
	if (manager->GetGameObject("PortalBit11")) {
		if (getCollider(manager->GetGameObject("PortalBit11"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !aresGearIsEnabled9) {
			aresGearIsEnabled9 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit11"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !aresGearIsSent9 && aresGearIsEnabled9) {
			AP_SendItem(12545);
			aresGearIsSent9 = true;
		}
	}
	if (manager->GetGameObject("PortalBit10")) {
		if (getCollider(manager->GetGameObject("PortalBit10"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !aresGearIsEnabled10) {
			aresGearIsEnabled10 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit10"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !aresGearIsSent10 && aresGearIsEnabled10) {
			AP_SendItem(12546);
			aresGearIsSent10 = true;
		}
	}
}
void aresDroppedKey(hh::game::GameManager* manager) {
	if (manager->GetGameObject("StorageKey0")) {
		if (manager->GetGameObject("StorageKey0")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !aresKeyIsSent0) {
			AP_SendItem(12547);
			aresKeyIsSent0 = true;
		}
	}
	if (manager->GetGameObject("StorageKey1")) {
		if (manager->GetGameObject("StorageKey1")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !aresKeyIsSent1) {
			AP_SendItem(12548);
			aresKeyIsSent1 = true;
		}
	}
	if (manager->GetGameObject("StorageKey2")) {
		if (manager->GetGameObject("StorageKey2")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !aresKeyIsSent2) {
			AP_SendItem(12549);
			aresKeyIsSent2 = true;
		}
	}
	if (manager->GetGameObject("StorageKey3")) {
		if (manager->GetGameObject("StorageKey3")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !aresKeyIsSent3) {
			AP_SendItem(12550);
			aresKeyIsSent3 = true;
		}
	}
	if (manager->GetGameObject("StorageKey4")) {
		if (manager->GetGameObject("StorageKey4")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !aresKeyIsSent4) {
			AP_SendItem(12551);
			aresKeyIsSent4 = true;
		}
	}
	if (manager->GetGameObject("StorageKey5")) {
		if (manager->GetGameObject("StorageKey5")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !aresKeyIsSent5) {
			AP_SendItem(12552);
			aresKeyIsSent5 = true;
		}
	}
	if (manager->GetGameObject("StorageKey6")) {
		if (manager->GetGameObject("StorageKey6")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !aresKeyIsSent6) {
			AP_SendItem(12553);
			aresKeyIsSent6 = true;
		}
	}
}