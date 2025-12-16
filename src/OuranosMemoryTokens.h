
std::vector<bool> sentOuranos;

void ouranosMemCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (sentOuranos.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			sentOuranos.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(data[i]->id).IsShutdown() && !sentOuranos[i]) {
			auto* yay = static_cast<heur::rfl::ObjSequenceItemSpawner*>(data[i]->spawnerData);
			AP_SendItem(40000 + yay->no);
			sentOuranos[i] = true;
		}
	}
}