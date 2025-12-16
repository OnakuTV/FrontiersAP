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
//0, 8, 13
void chaosDroppedItemCheck(hh::game::GameManager* manager) {
	if (itemControl(manager->GetGameObject("DroppedItem0"))) {
		if (manager->GetGameObject("DroppedItem0")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent0) {
			
				AP_SendItem(30500);
				cDropIsSent0 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem1"))) {
		if (manager->GetGameObject("DroppedItem1")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent1) {
			
				AP_SendItem(30501);
				cDropIsSent1 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem2"))) {
		if (manager->GetGameObject("DroppedItem2")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent2) {
			
				AP_SendItem(30502);
				cDropIsSent2 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem3"))) {
		if (manager->GetGameObject("DroppedItem3")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent3) {
			
				AP_SendItem(30503);
				cDropIsSent3 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem4"))) {
		if (manager->GetGameObject("DroppedItem4")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent4) {
			
				AP_SendItem(30504);
				cDropIsSent4 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem5"))) {
		if (manager->GetGameObject("DroppedItem5")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent5) {
			
				AP_SendItem(30505);
				cDropIsSent5 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem6"))) {
		if (manager->GetGameObject("DroppedItem6")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent6) {
			
				AP_SendItem(30506);
				cDropIsSent6 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem7"))) {
		if (manager->GetGameObject("DroppedItem7")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent7) {
			
				AP_SendItem(30507);
				cDropIsSent7 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem8"))) {
		if (manager->GetGameObject("DroppedItem8")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent8) {
			
				AP_SendItem(30508);
				cDropIsSent8 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem9"))) {
		if (manager->GetGameObject("DroppedItem9")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent9) {
			
				AP_SendItem(30509);
				cDropIsSent9 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem10"))) {
		if (manager->GetGameObject("DroppedItem10")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent10) {
			
				AP_SendItem(30510);
				cDropIsSent10 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem11"))) {
		if (manager->GetGameObject("DroppedItem11")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent11) {
			
				AP_SendItem(30511);
				cDropIsSent11 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem12"))) {
		if (manager->GetGameObject("DroppedItem12")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent12) {
			
				AP_SendItem(30512);
				cDropIsSent12 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem13"))) {
		if (manager->GetGameObject("DroppedItem13")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent13) {
			
				AP_SendItem(30513);
				cDropIsSent13 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem14"))) {
		if (manager->GetGameObject("DroppedItem14")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent14) {
			
				AP_SendItem(30514);
				cDropIsSent14 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem15"))) {
		if (manager->GetGameObject("DroppedItem15")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent15) {
			
				AP_SendItem(30515);
				cDropIsSent15 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem16"))) {
		if (manager->GetGameObject("DroppedItem16")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent16) {
			
				AP_SendItem(30516);
				cDropIsSent16 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem17"))) {
		if (manager->GetGameObject("DroppedItem17")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent17) {
			
				AP_SendItem(30517);
				cDropIsSent17 = true;
			
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem18"))) {
		if (manager->GetGameObject("DroppedItem18")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent18) {
			
				AP_SendItem(30518);
				cDropIsSent18 = true;
		}
	}
	if (itemControl(manager->GetGameObject("DroppedItem19"))) {
		if (manager->GetGameObject("DroppedItem19")->GetComponent<hh::physics::GOCCylinderCollider>()->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) == 0 && !cDropIsSent19) {
			
				AP_SendItem(30519);
				cDropIsSent19 = true;
			
		}
	}
}
//0 = 15, 8 = 16, 13

std::vector<bool> chaosGearSent;
std::vector<bool> chaosKeySent;
std::vector<bool> chaosNewKocoSent;
std::vector<bool> chaosMusicSent;
void chaosDroppedGear(std::vector<hh::game::ObjectData*> chaosGearData, hh::game::ObjectWorldChunk* world) {
	if (chaosGearSent.size() == 0) {
		for (int i = 0; i < chaosGearData.size(); i++) {
			chaosGearSent.emplace_back(false);
		}
	}
	for (int i = 0; i < chaosGearData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(chaosGearData[i]->id).IsShutdown() && !chaosGearSent[i]) {
			AP_SendItem(32000 + i);
			chaosGearSent[i] = true;
		}
	}
}
void chaosDroppedKey(std::vector<hh::game::ObjectData*> chaosKeyData, hh::game::ObjectWorldChunk* world) {
	if (chaosKeySent.size() == 0) {
		for (int i = 0; i < chaosKeyData.size(); i++) {
			chaosKeySent.emplace_back(false);
		}
	}
	for (int i = 0; i < chaosKeyData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(chaosKeyData[i]->id).IsShutdown() && !chaosKeySent[i]) {
			AP_SendItem(33000 + i);
			chaosKeySent[i] = true;
		}
	}
}
void chaosMusicCheck(std::vector<hh::game::ObjectData*> chaosMusicData, hh::game::ObjectWorldChunk* world) {
	if (chaosMusicSent.size() == 0) {
		for (int i = 0; i < chaosMusicData.size(); i++) {
			chaosMusicSent.emplace_back(false);
		}
	}
	for (int i = 0; i < chaosMusicData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(chaosMusicData[i]->id).IsShutdown() && !chaosMusicSent[i]) {
			AP_SendItem(31500 + i);
			chaosMusicSent[i] = true;
		}
	}
}
void chaosNewKocoCheck(std::vector<hh::game::ObjectData*> chaosNewKocoData, hh::game::ObjectWorldChunk* world) {
	if (chaosNewKocoSent.size() == 0) {
		for (int i = 0; i < chaosNewKocoData.size(); i++) {
			chaosNewKocoSent.emplace_back(false);
		}
	}
	for (int i = 0; i < chaosNewKocoData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(chaosNewKocoData[i]->id).IsShutdown() && !chaosNewKocoSent[i]) {
			AP_SendItem(32500 + i);
			chaosNewKocoSent[i] = true;
		}
	}
}