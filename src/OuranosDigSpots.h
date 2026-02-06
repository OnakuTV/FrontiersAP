std::vector<bool> ouranosDroppedItemSent;
std::vector<bool> ouranosGearSent;
std::vector<bool> ouranosKeySent;
std::vector<bool> ouranosNewKocoSent;
std::vector<bool> ouranosMusicSent;
std::vector<bool> ouranosPurpleCoinSent;
std::vector<bool> ouranosKocoSent;
void ouranosDroppedItemCheck(std::vector<hh::game::ObjectData*> droppedItemData, hh::game::ObjectWorldChunk* world) {
	if (ouranosDroppedItemSent.size() == 0) {
		for (int i = 0; i < droppedItemData.size() + 1; i++) {
			ouranosDroppedItemSent.emplace_back(false);
		}
	}
	for (int i = 0; i < droppedItemData.size(); i++) {
		hh::game::GameObject* obj = world->GetGameObject(droppedItemData.at(i));
		if (obj) {
			hh::physics::GOCCylinderCollider* cylinder = obj->GetComponent<hh::physics::GOCCylinderCollider>();
			if (cylinder) {
				if (!cylinder->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED)) {
					itemsToSend.push(40500 + i);
				}
			}
		}
	}
}
void ouranosDroppedGear(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (ouranosGearSent.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			ouranosGearSent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		if (!sphereColliderCheck(obj) && !ouranosGearSent[i]) {
			AP_SendItem(42000 + i);
			ouranosGearSent[i] = true;
		}
	}
}
void ouranosDroppedKey(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (ouranosKeySent.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			ouranosKeySent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		hh::physics::GOCCapsuleCollider* collider = obj->GetComponent<hh::physics::GOCCapsuleCollider>();
		if (collider) {
			if (!sphereColliderCheck(obj) && !collider->flags.test(hh::physics::GOCCapsuleCollider::Flag::ENABLED) && !ouranosKeySent[i]) {
				AP_SendItem(43000 + i);
				ouranosKeySent[i] = true;
			}
		}
		else {
			if (!sphereColliderCheck(obj) && !ouranosKeySent[i]) {
				AP_SendItem(43000 + i);
				ouranosKeySent[i] = true;
			}
		}
	}
}
void ouranosMusicCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (ouranosMusicSent.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			ouranosMusicSent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		if (!sphereColliderCheck(obj) && !ouranosMusicSent[i]) {
			AP_SendItem(41500 + i);
			ouranosMusicSent[i] = true;
		}
	}
}
void ouranosNewKocoCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (ouranosNewKocoSent.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			ouranosNewKocoSent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		if (!sphereColliderCheck(obj) && !ouranosNewKocoSent[i]) {
			AP_SendItem(42500 + i);
			ouranosNewKocoSent[i] = true;
		}
	}
}
void ouranosPurpleCoinCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (ouranosPurpleCoinSent.size() == 0) {
		for (int i = 0; i < data.size() + 1; i++) {
			ouranosPurpleCoinSent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		if (!sphereColliderCheck(obj) && !ouranosPurpleCoinSent[i]) {
			AP_SendItem(44000 + i);
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
		csl::math::Vector3* scale = new csl::math::Vector3(1, 1, 1);
		obj->GetComponent<hh::gfx::GOCVisualModel>()->SetLocalScale(*scale);
		if (!sphereColliderCheck(obj) && !ouranosKocoSent[i]) {
			AP_SendItem(46000 + i);
			ouranosKocoSent[i] = true;
		}
	}
}