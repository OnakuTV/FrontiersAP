std::vector<bool> sent;

void kronosMemCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (sent.size() == 0) {
		for (int i = 0; i < data.size(); i++) {
			sent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		if (world->GetWorldObjectStatusByObjectId(data[i]->id).IsShutdown() && !sent[i]) {
			auto* yay = static_cast<heur::rfl::ObjSequenceItemSpawner*>(data[i]->spawnerData);
			AP_SendItem(10000 + yay->no);
			sent[i] = true;
		}
	}
}