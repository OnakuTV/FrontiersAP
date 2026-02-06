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
bool sphereColliderCheck(hh::game::GameObject* obj) {
	if (obj) {
		hh::physics::GOCSphereCollider* collider = obj->GetComponent<hh::physics::GOCSphereCollider>();
		if (collider) {
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
void kronosDroppedItemCheck(std::vector<hh::game::ObjectData*> droppedItemData, hh::game::ObjectWorldChunk* world) {
	if (kronosDroppedItemSent.size() == 0) {
		for (int i = 0; i < droppedItemData.size() + 1; i++) {
			kronosDroppedItemSent.emplace_back(false);
		}
	}
	for (int i = 0; i < droppedItemData.size(); i++) {
		hh::game::GameObject* obj = world->GetGameObject(droppedItemData.at(i));
		if (obj) {
			hh::physics::GOCCylinderCollider* cylinder = obj->GetComponent<hh::physics::GOCCylinderCollider>();
			if (cylinder) {
				if (!cylinder->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED)) {
					itemsToSend.push(10500 + i);
				}
			}
		}
	}
}
void kronosDroppedGear(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (kronosGearSent.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			kronosGearSent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		if (!sphereColliderCheck(obj) && !kronosGearSent[i]) {
			AP_SendItem(12000 + i);
			kronosGearSent[i] = true;
		}
	}
}
void kronosDroppedKey(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (kronosKeySent.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			kronosKeySent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		hh::physics::GOCCapsuleCollider* collider = obj->GetComponent<hh::physics::GOCCapsuleCollider>();
		if (collider) {
			if (!sphereColliderCheck(obj) && !collider->flags.test(hh::physics::GOCCapsuleCollider::Flag::ENABLED) && !kronosKeySent[i]) {
				AP_SendItem(13000 + i);
				kronosKeySent[i] = true;
			}
		}
		else {
			if (!sphereColliderCheck(obj) && !kronosKeySent[i]) {
				AP_SendItem(13000 + i);
				kronosKeySent[i] = true;
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
		if (!sphereColliderCheck(obj) && !kronosMusicSent[i]) {
			AP_SendItem(11500 + i);
			kronosMusicSent[i] = true;
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
		if (!sphereColliderCheck(obj) && !kronosNewKocoSent[i]) {
			AP_SendItem(12500 + i);
			kronosNewKocoSent[i] = true;
		}
	}
}
void kronosPurpleCoinCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (kronosPurpleCoinSent.size() == 0) {
		for (int i = 0; i < data.size()+1; i++) {
			kronosPurpleCoinSent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		if (!sphereColliderCheck(obj) && !kronosPurpleCoinSent[i]) {
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
		csl::math::Vector3* scale = new csl::math::Vector3(1, 1, 1);
		obj->GetComponent<hh::gfx::GOCVisualModel>()->SetLocalScale(*scale);
		if (!sphereColliderCheck(obj) && !kronosKocoSent[i]) {
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