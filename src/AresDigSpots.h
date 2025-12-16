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
	if (itemControl(manager->GetGameObject("DroppedItem30"))) {
		if (manager->GetGameObject("DroppedItem30")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent0) {
			
				AP_SendItem(20500);
				aDropIsSent0 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem1"))) {
		if (manager->GetGameObject("DroppedItem1")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent1) {
			
				AP_SendItem(20501);
				aDropIsSent1 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem2"))) {
		if (manager->GetGameObject("DroppedItem2")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent2) {
			
				AP_SendItem(20502);
				aDropIsSent2 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem3"))) {
		if (manager->GetGameObject("DroppedItem3")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent3) {
			
				AP_SendItem(20503);
				aDropIsSent3 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem4"))) {
		if (manager->GetGameObject("DroppedItem4")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent4) {
			
				AP_SendItem(20504);
				aDropIsSent4 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem5"))) {
		if (manager->GetGameObject("DroppedItem5")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent5) {
			
				AP_SendItem(20505);
				aDropIsSent5 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem6"))) {
		if (manager->GetGameObject("DroppedItem6")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent6) {
			
				AP_SendItem(20506);
				aDropIsSent6 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem7"))) {
		if (manager->GetGameObject("DroppedItem7")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent7) {
			
				AP_SendItem(20507);
				aDropIsSent7 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem8"))) {
		if (manager->GetGameObject("DroppedItem8")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent8) {
			
				AP_SendItem(20508);
				aDropIsSent8 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem9"))) {
		if (manager->GetGameObject("DroppedItem9")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent9) {
			
				AP_SendItem(20509);
				aDropIsSent9 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem10"))) {
		if (manager->GetGameObject("DroppedItem10")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent10) {
			
				AP_SendItem(20510);
				aDropIsSent10 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem11"))) {
		if (manager->GetGameObject("DroppedItem11")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent11) {
			
				AP_SendItem(20511);
				aDropIsSent11 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem12"))) {
		if (manager->GetGameObject("DroppedItem12")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent12) {
			
				AP_SendItem(20512);
				aDropIsSent12 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem13"))) {
		if (manager->GetGameObject("DroppedItem13")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent13) {
			
				AP_SendItem(20513);
				aDropIsSent13 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem14"))) {
		if (manager->GetGameObject("DroppedItem14")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent14) {
			
				AP_SendItem(20514);
				aDropIsSent14 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem15"))) {
		if (manager->GetGameObject("DroppedItem15")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent15) {
			
				AP_SendItem(20515);
				aDropIsSent15 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem16"))) {
		if (manager->GetGameObject("DroppedItem16")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent16) {
			
				AP_SendItem(20516);
				aDropIsSent16 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem17"))) {
		if (manager->GetGameObject("DroppedItem17")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent17) {
			
			AP_SendItem(20517);
			aDropIsSent17 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem18"))) {
		if (manager->GetGameObject("DroppedItem18")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent18) {
			
				AP_SendItem(20518);
				aDropIsSent18 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem19"))) {
		if (manager->GetGameObject("DroppedItem19")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent19) {
			
				AP_SendItem(20519);
				aDropIsSent19 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem20"))) {
		if (manager->GetGameObject("DroppedItem20")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent20) {
			
				AP_SendItem(20520);
				aDropIsSent20 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem21"))) {
		if (manager->GetGameObject("DroppedItem21")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent21) {
			
				AP_SendItem(20521);
				aDropIsSent21 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem22"))) {
		if (manager->GetGameObject("DroppedItem22")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent22) {
			
				AP_SendItem(20522);
				aDropIsSent22 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem23"))) {
		if (manager->GetGameObject("DroppedItem23")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent23) {
			
				AP_SendItem(20523);
				aDropIsSent23 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem24"))) {
		if (manager->GetGameObject("DroppedItem24")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent24) {
			
				AP_SendItem(20524);
				aDropIsSent24 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem32"))) {
		if (manager->GetGameObject("DroppedItem32")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !aDropIsSent25) {
			
				AP_SendItem(20525);
				aDropIsSent25 = true;
		}
	}
}
std::vector<bool> aresGearSent;
std::vector<bool> aresKeySent;
std::vector<bool> aresNewKocoSent;
std::vector<bool> aresMusicSent;
void aresDroppedGear(std::vector<hh::game::ObjectData*> aresGearData, hh::game::ObjectWorldChunk* world) {
	if (aresGearSent.size() == 0) {
		for (int i = 0; i < aresGearData.size(); i++) {
			aresGearSent.emplace_back(false);
		}
	}
	for (int i = 0; i < aresGearData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(aresGearData[i]->id).IsShutdown() && !aresGearSent[i]) {
			AP_SendItem(22000 + i);
			aresGearSent[i] = true;
		}
	}
}
void aresDroppedKey(std::vector<hh::game::ObjectData*> aresKeyData, hh::game::ObjectWorldChunk* world) {
	if (aresKeySent.size() == 0) {
		for (int i = 0; i < aresKeyData.size(); i++) {
			aresKeySent.emplace_back(false);
		}
	}
	for (int i = 0; i < aresKeyData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(aresKeyData[i]->id).IsShutdown() && !aresKeySent[i]) {
			AP_SendItem(23000 + i);
			aresKeySent[i] = true;
		}
	}
}
void aresMusicCheck(std::vector<hh::game::ObjectData*> aresMusicData, hh::game::ObjectWorldChunk* world) {
	if (aresMusicSent.size() == 0) {
		for (int i = 0; i < aresMusicData.size(); i++) {
			aresMusicSent.emplace_back(false);
		}
	}
	for (int i = 0; i < aresMusicData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(aresMusicData[i]->id).IsShutdown() && !aresMusicSent[i]) {
			AP_SendItem(21500 + i);
			aresMusicSent[i] = true;
		}
	}
}
void aresNewKocoCheck(std::vector<hh::game::ObjectData*> aresNewKocoData, hh::game::ObjectWorldChunk* world) {
	if (aresNewKocoSent.size() == 0) {
		for (int i = 0; i < aresNewKocoData.size(); i++) {
			aresNewKocoSent.emplace_back(false);
		}
	}
	for (int i = 0; i < aresNewKocoData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(aresNewKocoData[i]->id).IsShutdown() && !aresNewKocoSent[i]) {
			AP_SendItem(22500 + i);
			aresNewKocoSent[i] = true;
		}
	}
}