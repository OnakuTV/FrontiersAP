std::vector<bool> sentAres;

void aresMemCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (sentAres.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			sentAres.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(data[i]->id).IsShutdown() && !sentAres[i]) {
			auto* yay = static_cast<heur::rfl::ObjSequenceItemSpawner*>(data[i]->spawnerData);
			AP_SendItem(20000 + yay->no);
			sentAres[i] = true;
		}
	}
}