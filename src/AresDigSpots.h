std::vector<bool> aresDroppedItemSent;
std::vector<bool> aresGearSent;
std::vector<bool> aresKeySent;
std::vector<bool> aresNewKocoSent;
std::vector<bool> aresMusicSent;
std::vector<bool> aresPurpleCoinSent;
std::vector<bool> aresKocoSent;
void aresDroppedItemCheck(std::vector<hh::game::ObjectData*> aresDroppedItemData, hh::game::ObjectWorldChunk* world) {
	if (aresDroppedItemSent.size() != aresDroppedItemData.size()) {
		for (int i = aresDroppedItemSent.size(); i < aresDroppedItemData.size() + 1; i++) {
			aresDroppedItemSent.emplace_back(false);
		}
	}
	for (int i = 0; i < aresDroppedItemData.size(); i++) {
		hh::game::GameObject* obj = world->GetGameObject(aresDroppedItemData.at(i));
		if (obj) {
			hh::physics::GOCCylinderCollider* cylinder = obj->GetComponent<hh::physics::GOCCylinderCollider>();
			if (cylinder) {
				auto* yay = static_cast<heur::rfl::ObjDroppedItemSpawner*>(aresDroppedItemData[i]->spawnerData);
				if (cylinder->flags.bits == 0 && !aresDroppedItemSent[i]) {
					itemsToSend.push(20500 + i);
					aresDroppedItemSent[i] = true;
				}
			}
		}
	}
}
void aresDroppedGear(std::vector<hh::game::ObjectData*> aresGearData, hh::game::ObjectWorldChunk* world) {
	if (aresGearSent.size() == 0) {
		for (int i = 0; i < aresGearData.size(); i++) {
			aresGearSent.emplace_back(false);
		}
	}
	for (int i = 0; i < aresGearData.size(); i++) {
		auto* obj = world->GetGameObject(aresGearData[i]);
		if (obj) {
			auto* yay = static_cast<heur::rfl::ObjPortalBitSpawner*>(aresGearData[i]->spawnerData);
			if (effectCheck(obj) && !aresGearSent[i]) {
				AP_SendItem(22000 + i);
				aresGearSent[i] = true;
			}
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
		auto* obj = world->GetGameObject(aresKeyData[i]);
		if (obj) {
			auto* yay = static_cast<heur::rfl::ObjStorageKeySpawner*>(aresKeyData[i]->spawnerData);
			if (hh::physics::GOCCylinderCollider* collider = obj->GetComponent<hh::physics::GOCCylinderCollider>()) {
				if (!sphereColliderCheck(obj) && !collider->flags.test(hh::physics::GOCCylinderCollider::Flag::ENABLED) && !aresKeySent[i]) {
					AP_SendItem(23000 + i);
					aresKeySent[i] = true;
				}
			}
			else {
				if (!sphereColliderCheck(obj) && !aresKeySent[i]) {
					AP_SendItem(23000 + i);
					aresKeySent[i] = true;
				}
			}
		}
	}
}
void aresMusicCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (aresMusicSent.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			aresMusicSent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		if (obj) {
			auto* yay = static_cast<heur::rfl::ObjMusicMemorySpawner*>(data[i]->spawnerData);
			if (!sphereColliderCheck(obj) && !aresMusicSent[i]) {
				AP_SendItem(21500 + i);
				aresMusicSent[i] = true;
			}
		}
	}
}
void aresNewKocoCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (aresNewKocoSent.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			aresNewKocoSent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		if (obj) {
			auto* yay = static_cast<heur::rfl::ObjKodamaNewFormSpawner*>(data[i]->spawnerData);
			if (!sphereColliderCheck(obj) && !aresNewKocoSent[i]) {
				AP_SendItem(22500 + i);
				aresNewKocoSent[i] = true;
			}
		}
	}
}
void aresPurpleCoinCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (aresPurpleCoinSent.size() == 0) {
		for (int i = 0; i < data.size() + 1; i++) {
			aresPurpleCoinSent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data[i]);
		if (obj) {
			auto* yay = static_cast<heur::rfl::ObjFishCoinSpawner*>(data[i]->spawnerData);
			if (!sphereColliderCheck(obj) && !aresPurpleCoinSent[i]) {
				AP_SendItem(24000 + i - 1);
				aresPurpleCoinSent[i - 1] = true;
			}
		}
	}
}
void aresKocoCheck(std::vector<hh::game::ObjectData*> aresKocoData, hh::game::ObjectWorldChunk* world) {
	if (aresKocoSent.size() == 0) {
		for (int i = 0; i < aresKocoData.size(); i++) {
			aresKocoSent.emplace_back(false);
		}
	}
	for (int i = 0; i < aresKocoData.size(); i++) {
		auto* obj = world->GetGameObject(aresKocoData[i]);
		if (!obj) {
			continue;
		}
		csl::math::Vector3* scale = new csl::math::Vector3(12, 12, 12);
		obj->GetComponent<hh::gfx::GOCVisualModel>()->SetLocalScale(*scale);
		auto* yay = static_cast<heur::rfl::ObjKodamaSpawner*>(aresKocoData[i]->spawnerData);
		if (!sphereColliderCheck(obj) && !aresKocoSent[i]) {
			AP_SendItem(26000 + i);
			aresKocoSent[i] = true;
		}
	}
}