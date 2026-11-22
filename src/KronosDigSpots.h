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
	return false;
}
bool effectCheck(hh::game::GameObject* obj) {
	if (obj) {
		hh::eff::GOCEffect* eff = obj->GetComponent<hh::eff::GOCEffect>();
		if (eff) {
			if (eff->newEffects.size() > 0) {
				const char* name = eff->newEffects[0].handle.GetName();
				if (name) {
					if (strcmp(name, "ef_ob_portalbit_move01") == 0 || strcmp(name, "ef_ob_portalbit_move02") == 0 || strcmp(name, "ef_ob_portalbit_move03") == 0 || strcmp(name, "ef_ob_portalbit_move04") == 0) {
						return true;
					}
				}

			}
			if (eff->newEffects.size() == 2) {
				const char* name2 = eff->newEffects[1].handle.GetName();
				if (name2) {
					if (strcmp(name2, "ef_ob_spanner_move01") == 0) {
						return true;
					}
				}
			}
		}
	}
	return false;
}
bool sphereColliderCheck(hh::game::GameObject* obj) {
	if (obj) {
		hh::physics::GOCSphereCollider* collider = obj->GetComponent<hh::physics::GOCSphereCollider>();
		if (collider) {
			//printf("%s: %d\n", obj->name.c_str(), collider->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED));
			return collider->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED);
		}
	}
	return true;
}
std::vector<bool> kronosDroppedItemSent;
std::vector<bool> kronosGearSent;
std::vector<bool> kronosKeySent;
std::vector<bool> kronosNewKocoSent;
std::vector<bool> kronosMusicSent;
std::vector<bool> kronosPurpleCoinSent;
std::vector<bool> kronosKocoSent;

void kronosDroppedItemCheck(std::vector<hh::game::ObjectData*> kronosDroppedItemData, hh::game::ObjectWorldChunk* world) {
	if (kronosDroppedItemSent.size() != kronosDroppedItemData.size()) {
		for (int i = kronosDroppedItemSent.size(); i < kronosDroppedItemData.size() + 1; i++) {
			kronosDroppedItemSent.emplace_back(false);
		}
	}
	for (int i = 0; i < kronosDroppedItemData.size(); i++) {
		hh::game::GameObject* obj = world->GetGameObject(kronosDroppedItemData.at(i));
		if (obj) {
			hh::physics::GOCCylinderCollider* cylinder = obj->GetComponent<hh::physics::GOCCylinderCollider>();
			if (cylinder) {
				auto* yay = static_cast<heur::rfl::ObjDroppedItemSpawner*>(kronosDroppedItemData[i]->spawnerData);
				int id = kronosDroppedItemIDMap.find(yay->no)->second;
				if (cylinder->flags.bits == 0 && !kronosDroppedItemSent[id]) {
					itemsToSend.push(10500 + i);
					kronosDroppedItemSent[id] = true;
				}
			}
		}
	}
}
void kronosDroppedGear(std::vector<hh::game::ObjectData*> kronosGearData, hh::game::ObjectWorldChunk* world) {
	if (kronosGearSent.size() == 0) {
		for (int i = 0; i < kronosGearData.size(); i++) {
			kronosGearSent.emplace_back(false);
		}
	}
	for (int i = 0; i < kronosGearData.size(); i++) {
		auto* obj = world->GetGameObject(kronosGearData[i]);
		if (obj) {
		auto* yay = static_cast<heur::rfl::ObjPortalBitSpawner*>(kronosGearData[i]->spawnerData);
		int id = kronosPortalBitIDMap.find(yay->no)->second;
			if(effectCheck(obj) && !kronosGearSent[id]) {
				AP_SendItem(12000 + i);
				kronosGearSent[id] = true;
			}
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
		auto* obj = world->GetGameObject(kronosKeyData[i]);
		if (obj) {
			auto* yay = static_cast<heur::rfl::ObjStorageKeySpawner*>(kronosKeyData[i]->spawnerData);
			int id = kronosStorageKeyIDMap.find(yay->no)->second;
			if (hh::physics::GOCCylinderCollider* collider = obj->GetComponent<hh::physics::GOCCylinderCollider>()) {
				if (!sphereColliderCheck(obj) && !collider->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !kronosKeySent[id]) {
					AP_SendItem(13000 + i);
					kronosKeySent[id] = true;
				}
			}
			else {
				if (!sphereColliderCheck(obj) && !kronosKeySent[id]) {
					AP_SendItem(13000 + i);
					kronosKeySent[id] = true;
				}
			}
		}
	}
}
void kronosMusicCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (kronosMusicSent.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			kronosMusicSent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		if (obj) {
			auto* yay = static_cast<heur::rfl::ObjMusicMemorySpawner*>(data[i]->spawnerData);
			int id = kronosMusicMemoryIDMap.find(yay->no)->second;
			if (!sphereColliderCheck(obj) && !kronosMusicSent[id]) {
				AP_SendItem(11500 + i);
				kronosMusicSent[id] = true;
			}
		}
	}
}
void kronosNewKocoCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (kronosNewKocoSent.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			kronosNewKocoSent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		if (obj) {
			auto* yay = static_cast<heur::rfl::ObjKodamaNewFormSpawner*>(data[i]->spawnerData);
			int id = kronosNewKodamaIDMap.find(yay->no)->second;
			if (!sphereColliderCheck(obj) && !kronosNewKocoSent[id]) {
				AP_SendItem(12500 + i);
				kronosNewKocoSent[id] = true;
			}
		}
	}
}
void kronosPurpleCoinCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (kronosPurpleCoinSent.size() == 0) {
		for (int i = 0; i < data.size() + 1; i++) {
			kronosPurpleCoinSent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		if (obj) {
			auto* yay = static_cast<heur::rfl::ObjFishCoinSpawner*>(data[i]->spawnerData);
			int id = kronosFishCoinIDMap.find(yay->no)->second;
			if (!sphereColliderCheck(obj) && !kronosPurpleCoinSent[id]) {
				AP_SendItem(14000 + i);
				kronosPurpleCoinSent[id] = true;
			}
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
		csl::math::Vector3* scale = new csl::math::Vector3(12, 12, 12);
		obj->GetComponent<hh::gfx::GOCVisualModel>()->SetLocalScale(*scale);
		auto* yay = static_cast<heur::rfl::ObjKodamaSpawner*>(kronosKocoData[i]->spawnerData);
		int id = kronosKodamaIDMap.find(yay->no)->second;
		if (!sphereColliderCheck(obj) && !kronosKocoSent[id]) {
			AP_SendItem(16000 + i);
			kronosKocoSent[id] = true;
		}
	}
}

void sendChecks() {
	if (!itemsToSend.empty()) {
		AP_SendItem(itemsToSend.front());
		itemsToSend.pop();
	}
}