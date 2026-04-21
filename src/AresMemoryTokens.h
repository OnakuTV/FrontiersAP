std::vector<bool> sentAres;

void aresMemCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	while (sentAres.size() < data.size()+1000) {
		sentAres.emplace_back(false);
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data.at(i));
		if (obj) {
			if (!obj->GetComponent<hh::game::GOCActivator>()->enabled && !sentAres[i]) {
				auto* yay = static_cast<heur::rfl::ObjSequenceItemSpawner*>(data[i]->spawnerData);
				AP_SendItem(20000 + yay->no);
				sentAres[i] = true;
			}
		}
	}
}