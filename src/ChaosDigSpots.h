std::vector<bool> chaosDroppedItemSent;
std::vector<bool> chaosGearSent;
std::vector<bool> chaosKeySent;
std::vector<bool> chaosNewKocoSent;
std::vector<bool> chaosMusicSent;
std::vector<bool> chaosPurpleCoinSent;
std::vector<bool> chaosKocoSent;
void chaosDroppedItemCheck(std::vector<hh::game::ObjectData*> chaosDroppedItemData, hh::game::ObjectWorldChunk* world) {
	if (chaosDroppedItemSent.size() != chaosDroppedItemData.size()) {
		for (int i = chaosDroppedItemSent.size(); i < chaosDroppedItemData.size() + 1; i++) {
			chaosDroppedItemSent.emplace_back(false);
		}
	}
	for (int i = 0; i < chaosDroppedItemData.size(); i++) {
		hh::game::GameObject* obj = world->GetGameObject(chaosDroppedItemData.at(i));
		if (obj) {
			hh::physics::GOCCylinderCollider* cylinder = obj->GetComponent<hh::physics::GOCCylinderCollider>();
			if (cylinder) {
				auto* yay = static_cast<heur::rfl::ObjDroppedItemSpawner*>(chaosDroppedItemData[i]->spawnerData);
				if (cylinder->flags.bits == 0 && !chaosDroppedItemSent[i]) {
					itemsToSend.push(30500 + i);
					chaosDroppedItemSent[i] = true;
				}
			}
		}
	}
}
void chaosDroppedGear(std::vector<hh::game::ObjectData*> chaosGearData, hh::game::ObjectWorldChunk* world) {
	if (chaosGearSent.size() == 0) {
		for (int i = 0; i < chaosGearData.size(); i++) {
			chaosGearSent.emplace_back(false);
		}
	}
	for (int i = 0; i < chaosGearData.size(); i++) {
		auto* obj = world->GetGameObject(chaosGearData[i]);
		if (obj) {
			auto* yay = static_cast<heur::rfl::ObjPortalBitSpawner*>(chaosGearData[i]->spawnerData);
			if (effectCheck(obj) && !chaosGearSent[i]) {
				AP_SendItem(32000 + i);
				chaosGearSent[i] = true;
			}
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
		auto* obj = world->GetGameObject(chaosKeyData[i]);
		if (obj) {
			auto* yay = static_cast<heur::rfl::ObjStorageKeySpawner*>(chaosKeyData[i]->spawnerData);
			if (hh::physics::GOCCylinderCollider* collider = obj->GetComponent<hh::physics::GOCCylinderCollider>()) {
				if (!sphereColliderCheck(obj) && !collider->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !chaosKeySent[i]) {
					AP_SendItem(33000 + i);
					chaosKeySent[i] = true;
				}
			}
			else {
				if (!sphereColliderCheck(obj) && !chaosKeySent[i]) {
					AP_SendItem(33000 + i);
					chaosKeySent[i] = true;
				}
			}
		}
	}
}
void chaosMusicCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (chaosMusicSent.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			chaosMusicSent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		if (obj) {
			auto* yay = static_cast<heur::rfl::ObjMusicMemorySpawner*>(data[i]->spawnerData);
			if (!sphereColliderCheck(obj) && !chaosMusicSent[i]) {
				AP_SendItem(31500 + i);
				chaosMusicSent[i] = true;
			}
		}
	}
}
void chaosNewKocoCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (chaosNewKocoSent.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			chaosNewKocoSent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		if (obj) {
			auto* yay = static_cast<heur::rfl::ObjKodamaNewFormSpawner*>(data[i]->spawnerData);
			if (!sphereColliderCheck(obj) && !chaosNewKocoSent[i]) {
				AP_SendItem(32500 + i);
				chaosNewKocoSent[i] = true;
			}
		}
	}
}
void chaosPurpleCoinCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (chaosPurpleCoinSent.size() == 0) {
		for (int i = 0; i < data.size() + 1; i++) {
			chaosPurpleCoinSent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		if (obj) {
			auto* yay = static_cast<heur::rfl::ObjFishCoinSpawner*>(data[i]->spawnerData);
			if (!sphereColliderCheck(obj) && !chaosPurpleCoinSent[i]) {
				AP_SendItem(34000 + i - 1);
				chaosPurpleCoinSent[i - 1] = true;
			}
		}
	}
}
void chaosKocoCheck(std::vector<hh::game::ObjectData*> chaosKocoData, hh::game::ObjectWorldChunk* world) {
	if (chaosKocoSent.size() == 0) {
		for (int i = 0; i < chaosKocoData.size(); i++) {
			chaosKocoSent.emplace_back(false);
		}
	}
	for (int i = 0; i < chaosKocoData.size(); i++) {
		auto* obj = world->GetGameObject(chaosKocoData[i]);
		if (!obj) {
			continue;
		}
		csl::math::Vector3* scale = new csl::math::Vector3(12, 12, 12);
		obj->GetComponent<hh::gfx::GOCVisualModel>()->SetLocalScale(*scale);
		auto* yay = static_cast<heur::rfl::ObjKodamaSpawner*>(chaosKocoData[i]->spawnerData);
		if (!sphereColliderCheck(obj) && !chaosKocoSent[i]) {
			AP_SendItem(36000 + i);
			chaosKocoSent[i] = true;
		}
	}
}