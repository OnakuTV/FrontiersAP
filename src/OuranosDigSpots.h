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

void ouranosDroppedItemCheck(hh::game::GameManager* manager) {
	if (manager->GetGameObject("DroppedItem0")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent0) {
			
				AP_SendItem(40500);
				oDropIsSent0 = true;
			
		}
	}
	if (manager->GetGameObject("DroppedItem1")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent1) {
			
				AP_SendItem(40501);
				oDropIsSent1 = true;
			
		}
	}
	if (manager->GetGameObject("DroppedItem2")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent2) {
			
				AP_SendItem(40502);
				oDropIsSent2 = true;
			
		}
	}
	if (manager->GetGameObject("DroppedItem3")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent3) {
			
				AP_SendItem(40503);
				oDropIsSent3 = true;
			
		}
	}
	if (manager->GetGameObject("DroppedItem4")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent4) {
			
				AP_SendItem(40504);
				oDropIsSent4 = true;
			
		}
	}
	if (manager->GetGameObject("DroppedItem5")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent5) {
			
				AP_SendItem(40505);
				oDropIsSent5 = true;
			
		}
	}
	if (manager->GetGameObject("DroppedItem6")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent6) {
			
				AP_SendItem(40506);
				oDropIsSent6 = true;
			
		}
	}
	if (manager->GetGameObject("DroppedItem7")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent7) {
			
				AP_SendItem(40507);
				oDropIsSent7 = true;
			
		}
	}
	if (manager->GetGameObject("DroppedItem8")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent8) {
			
				AP_SendItem(40508);
				oDropIsSent8 = true;
			
		}
	}
	if (manager->GetGameObject("DroppedItem9")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent9) {
			
				AP_SendItem(40509);
				oDropIsSent9 = true;
			
		}
	}
	if (manager->GetGameObject("DroppedItem10")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent10) {
			
				AP_SendItem(40510);
				oDropIsSent10 = true;
			
		}
	}
	if (manager->GetGameObject("DroppedItem11")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent11) {
			
				AP_SendItem(40511);
				oDropIsSent11 = true;
			
		}
	}
	if (manager->GetGameObject("DroppedItem12")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent12) {
			
				AP_SendItem(40512);
				oDropIsSent12 = true;
			
		}
	}
	if (manager->GetGameObject("DroppedItem13")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent13) {
			
				AP_SendItem(40513);
				oDropIsSent13 = true;
			
		}
	}
	if (manager->GetGameObject("DroppedItem14")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent14) {
			
				AP_SendItem(40514);
				oDropIsSent14 = true;
			
		}
	}
	if (manager->GetGameObject("DroppedItem15")) {
		if (manager->GetGameObject("SeqeunceItem") && !oDropIsSent15) {
			
				AP_SendItem(40515);
				oDropIsSent15 = true;
			
		}
	}
}
std::vector<bool> ouranosGearSent;
std::vector<bool> ouranosKeySent;
std::vector<bool> ouranosNewKocoSent;
std::vector<bool> ouranosMusicSent;
void ouranosDroppedGear(std::vector<hh::game::ObjectData*> ouranosGearData, hh::game::ObjectWorldChunk* world) {
	if (ouranosGearSent.size() == 0) {
		for (int i = 0; i < ouranosGearData.size(); i++) {
			ouranosGearSent.emplace_back(false);
		}
	}
	for (int i = 0; i < ouranosGearData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(ouranosGearData[i]->id).IsShutdown() && !ouranosGearSent[i]) {
			AP_SendItem(42000 + i);
			ouranosGearSent[i] = true;
		}
	}
}
void ouranosDroppedKey(std::vector<hh::game::ObjectData*> ouranosKeyData, hh::game::ObjectWorldChunk* world) {
	if (ouranosKeySent.size() == 0) {
		for (int i = 0; i < ouranosKeyData.size(); i++) {
			ouranosKeySent.emplace_back(false);
		}
	}
	for (int i = 0; i < ouranosKeyData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(ouranosKeyData[i]->id).IsShutdown() && !ouranosKeySent[i]) {
			AP_SendItem(43000 + i);
			ouranosKeySent[i] = true;
		}
	}
}
void ouranosMusicCheck(std::vector<hh::game::ObjectData*> ouranosMusicData, hh::game::ObjectWorldChunk* world) {
	if (ouranosMusicSent.size() == 0) {
		for (int i = 0; i < ouranosMusicData.size(); i++) {
			ouranosMusicSent.emplace_back(false);
		}
	}
	for (int i = 0; i < ouranosMusicData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(ouranosMusicData[i]->id).IsShutdown() && !ouranosMusicSent[i]) {
			AP_SendItem(41500 + i);
			ouranosMusicSent[i] = true;
		}
	}
}
void ouranosNewKocoCheck(std::vector<hh::game::ObjectData*> ouranosNewKocoData, hh::game::ObjectWorldChunk* world) {
	if (ouranosNewKocoSent.size() == 0) {
		for (int i = 0; i < ouranosNewKocoData.size(); i++) {
			ouranosNewKocoSent.emplace_back(false);
		}
	}
	for (int i = 0; i < ouranosNewKocoData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(ouranosNewKocoData[i]->id).IsShutdown() && !ouranosNewKocoSent[i]) {
			AP_SendItem(42500 + i);
			ouranosNewKocoSent[i] = true;
		}
	}
}
std::vector<bool> ouranosPurpleCoinSent;
std::vector<bool> ouranosKocoSent;
void ouranosPurpleCoinCheck(std::vector<hh::game::ObjectData*> ouranosPurpleCoinData, hh::game::ObjectWorldChunk* world) {
	if (ouranosPurpleCoinSent.size() == 0) {
		for (int i = 0; i < ouranosPurpleCoinData.size() + 1; i++) {
			ouranosPurpleCoinSent.emplace_back(false);
		}
	}
	for (int i = 0; i < ouranosPurpleCoinData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(ouranosPurpleCoinData[i]->id).IsShutdown() && !ouranosPurpleCoinSent[i]) {
			AP_SendItem(14000 + i);
			ouranosPurpleCoinSent[i] = true;
		}
	}
}
void ouranosKocoCheck(std::vector<hh::game::ObjectData*> ouranosKocoData, hh::game::ObjectWorldChunk* world) {
	if (ouranosKocoSent.size() == 0) {
		for (int i = 0; i < ouranosKocoData.size(); i++) {
			ouranosKocoSent.emplace_back(false);
		}
	}
	for (int i = 0; i < ouranosKocoData.size(); i++) {
		auto* obj = world->GetGameObject(ouranosKocoData[i]);
		if (!obj) {
			continue;
		}
		csl::math::Vector3* scale = new csl::math::Vector3(5, 5, 5);
		obj->GetComponent<hh::gfx::GOCVisualModel>()->SetLocalScale(*scale);
		if (!obj->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) && !ouranosKocoSent[i]) {
			AP_SendItem(16000 + i);
			ouranosKocoSent[i] = true;
		}
	}
}