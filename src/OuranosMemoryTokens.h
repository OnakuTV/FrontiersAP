
std::vector<bool> sentOuranos;

void ouranosMemCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (sent.size() == 0) {
		for (int i = 0; i < data.size() + 1; i++) {
			sent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data.at(i));
		if (!sphereColliderCheck(obj) && !sentOuranos[i]) {
			auto* yay = static_cast<heur::rfl::ObjSequenceItemSpawner*>(data[i]->spawnerData);
			AP_SendItem(40000 + yay->no);
			sent[i] = true;
		}
	}
}