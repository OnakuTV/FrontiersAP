#include <queue>
using namespace std;

bool kDropIsSent0 = false;
bool kDropIsSent1 = false;
bool kDropIsSent2 = false;
bool kDropIsSent3 = false;
bool kDropIsSent4 = false;
bool kDropIsSent5 = false;
bool kDropIsSent6 = false;
bool kDropIsSent7 = false;
bool kDropIsSent8 = false;

queue<int> itemsToSend;
bool itemControl(hh::game::GameObject* obj) {
	if (obj) {
		if (obj->components.size() == 6) {
			return true;
		}
		else {
			return false;
		}
	}
}
void kronosDroppedItemCheck(hh::game::GameManager *manager) {
	if (manager->GetGameObject("DroppedItem9")) {
		if (!kDropIsSent0) {
			if (manager->GetGameObject("SequenceItem")) {
				itemsToSend.push(10500);
				kDropIsSent0 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem10")) {
		if (!kDropIsSent1) {
			if (manager->GetGameObject("SequenceItem")) {
				itemsToSend.push(10501);
				kDropIsSent1 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem2")) {
		if (!kDropIsSent2) {
			if (manager->GetGameObject("SequenceItem")) {
				itemsToSend.push(10502);
				kDropIsSent2 = true;

			}
		}
	}
	if (manager->GetGameObject("DroppedItem3")) {
		if (!kDropIsSent3) {
			if (manager->GetGameObject("SequenceItem")) {
				itemsToSend.push(10503);
				kDropIsSent3 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem4")) {
		if (!kDropIsSent4) {
			if (manager->GetGameObject("SequenceItem")) {
				itemsToSend.push(10504);
				kDropIsSent4 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem5")) {
		if (!kDropIsSent5) {
			if (manager->GetGameObject("SequenceItem")) {
				
					itemsToSend.push(10505);
					kDropIsSent5 = true;

			}
		}
	}
	if (manager->GetGameObject("DroppedItem6")) {
		if (!kDropIsSent6) {
			if (manager->GetGameObject("SequenceItem")) {
				
					itemsToSend.push(10506);
					kDropIsSent6 = true;
				
			}	
		}
	}
	if (manager->GetGameObject("DroppedItem7")) {
		if (!kDropIsSent7) {
			if (manager->GetGameObject("SequenceItem")) {
					itemsToSend.push(10507);
					kDropIsSent7 = true;
			}
		}
	}
	if (manager->GetGameObject("DroppedItem8")) {
		if (!kDropIsSent8) {
			if (manager->GetGameObject("SequenceItem")) {
				
					itemsToSend.push(10508);
					kDropIsSent8 = true;
				
			}			
		}
	}
}

std::vector<bool> kronosGearSent;
std::vector<bool> kronosKeySent;
std::vector<bool> kronosNewKocoSent;
std::vector<bool> kronosMusicSent;
std::vector<bool> kronosPurpleCoinSent;
std::vector<bool> kronosKocoSent;
void kronosDroppedGear(std::vector<hh::game::ObjectData*> kronosGearData, hh::game::ObjectWorldChunk* world) {
	if (kronosGearSent.size() == 0) {
		for (int i = 0; i < kronosGearData.size(); i++) {
			kronosGearSent.emplace_back(false);
		}
	}
	for (int i = 0; i < kronosGearData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(kronosGearData[i]->id).IsShutdown() && !kronosGearSent[i]) {
			AP_SendItem(12000 + i);
			kronosGearSent[i] = true;
		}
	}
}
void kronosDroppedKey(std::vector<hh::game::ObjectData*> kronosKeyData, hh::game::ObjectWorldChunk* world) {
	if (kronosKeySent.size() == 0) {
		for (int i = 0; i < kronosKeyData.size(); i++) {
			kronosKeySent.emplace_back(false);
		}
	}
	for (int i = 0; i < kronosKeyData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(kronosKeyData[i]->id).IsShutdown() && !kronosKeySent[i]) {
			AP_SendItem(13000 + i);
			kronosKeySent[i] = true;
		}
	}
}
void kronosMusicCheck(std::vector<hh::game::ObjectData*> kronosMusicData, hh::game::ObjectWorldChunk* world) {
	if (kronosMusicSent.size() == 0) {
		for (int i = 0; i < kronosMusicData.size(); i++) {
			kronosMusicSent.emplace_back(false);
		}
	}
	for (int i = 0; i < kronosMusicData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(kronosMusicData[i]->id).IsShutdown() && !kronosMusicSent[i]) {
			AP_SendItem(11500 + i);
			kronosMusicSent[i] = true;
		}
	}
}
void kronosNewKocoCheck(std::vector<hh::game::ObjectData*> kronosNewKocoData, hh::game::ObjectWorldChunk* world) {
	if (kronosNewKocoSent.size() == 0) {
		for (int i = 0; i < kronosNewKocoData.size(); i++) {
			kronosNewKocoSent.emplace_back(false);
		}
	}
	for (int i = 0; i < kronosNewKocoData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(kronosNewKocoData[i]->id).IsShutdown() && !kronosNewKocoSent[i]) {
			AP_SendItem(12500 + i);
			kronosNewKocoSent[i] = true;
		}
	}
}
void kronosPurpleCoinCheck(std::vector<hh::game::ObjectData*> kronosPurpleCoinData, hh::game::ObjectWorldChunk* world) {
	if (kronosPurpleCoinSent.size() == 0) {
		for (int i = 0; i < kronosPurpleCoinData.size()+1; i++) {
			kronosPurpleCoinSent.emplace_back(false);
		}
	}
	for (int i = 0; i < kronosPurpleCoinData.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(kronosPurpleCoinData[i]->id).IsShutdown() && !kronosPurpleCoinSent[i]) {
			AP_SendItem(14000 + i);
			kronosPurpleCoinSent[i] = true;
		}
	}
}
void kronosKocoCheck(std::vector<hh::game::ObjectData*> kronosKocoData, hh::game::ObjectWorldChunk* world) {
	if (kronosKocoSent.size() == 0) {
		for (int i = 0; i < kronosKocoData.size(); i++) {
			kronosKocoSent.emplace_back(false);
		}
	}
	for (int i = 0; i < kronosKocoData.size(); i++) {
		auto *obj = world->GetGameObject(kronosKocoData[i]);
		if (!obj) {
			continue;
		}
		csl::math::Vector3* scale = new csl::math::Vector3(5, 5, 5);
		obj->GetComponent<hh::gfx::GOCVisualModel>()->SetLocalScale(*scale);
		if (!obj->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) && !kronosKocoSent[i]) {
			AP_SendItem(16000 + i);
			kronosKocoSent[i] = true;
		}
	}
}

void sendChecks() {
	if (!itemsToSend.empty()) {
		AP_SendItem(itemsToSend.front());
		itemsToSend.pop();
	}
}