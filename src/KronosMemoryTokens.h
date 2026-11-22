#include "KronosIDMaps.h"
std::vector<bool> sent;
bool sphereColliderCheck(hh::game::GameObject*);

void kronosMemCheck(std::vector<hh::game::ObjectData*> data, hh::game::ObjectWorldChunk* world) {
	if (sent.size() == 0) {
		for (int i = 0; i < data.size()+1; i++) {
			sent.emplace_back(false);
		}
	}
	for (int i = 0; i < data.size(); i++) {
		auto* obj = world->GetGameObject(data.at(i));
		if (obj) {
			auto* yay = static_cast<heur::rfl::ObjSequenceItemSpawner*>(data[i]->spawnerData);
			int id = kronosMemoryTokenIDMap.find(yay->no)->second;
			if ((!obj->GetComponent<hh::game::GOCActivator>()->enabled || obj->GetWorldObjectStatus()->IsShutdown()) && !sent[id]) {
				AP_SendItem(10000 + id);
				sent[id] = true;
			}
		}
	}
}