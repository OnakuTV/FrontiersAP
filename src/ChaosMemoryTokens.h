
std::vector<bool> sentChaos;

void chaosMemCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (sentChaos.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			sentChaos.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(data[i]->id).IsShutdown() && !sentChaos[i]) {
			auto* yay = static_cast<heur::rfl::ObjSequenceItemSpawner*>(data[i]->spawnerData);
			AP_SendItem(30000 + yay->no);
			sentChaos[i] = true;
		}
	}
}