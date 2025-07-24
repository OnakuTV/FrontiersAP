#include <queue>
using namespace std;

bool kDropIsSent0 = false;
bool kDropIsSent1 = false;
bool kDropIsSent2 = false;
bool kDropIsSent3 = false;
bool kDropIsSent4 = false;
bool kDropIsSent5 = false;
bool kDropIsSent6 = false;
bool kDropIsSent7 = false;
bool kDropIsSent8 = false;

bool kronosGearIsSent0 = false;
bool kronosGearIsSent1 = false;
bool kronosGearIsSent2 = false;
bool kronosGearIsSent3 = false;
bool kronosGearIsSent4 = false;
bool kronosGearIsSent5 = false;
bool kronosGearIsSent6 = false;
bool kronosGearIsSent7 = false;
bool kronosGearIsSent8 = false;
bool kronosGearIsSent9 = false;
bool kronosGearIsSent10 = false;
bool kronosGearIsSent11 = false;
bool kronosGearIsSent12 = false;
bool kronosGearIsSent13 = false;
bool kronosGearIsSent14 = false;
bool kronosGearIsSent15 = false;
bool kronosGearIsSent16 = false;

bool kronosGearIsEnabled0 = false;
bool kronosGearIsEnabled1 = false;
bool kronosGearIsEnabled2 = false;
bool kronosGearIsEnabled3 = false;
bool kronosGearIsEnabled4 = false;
bool kronosGearIsEnabled5 = false;
bool kronosGearIsEnabled6 = false;
bool kronosGearIsEnabled7 = false;
bool kronosGearIsEnabled8 = false;
bool kronosGearIsEnabled9 = false;
bool kronosGearIsEnabled10 = false;
bool kronosGearIsEnabled11 = false;
bool kronosGearIsEnabled12 = false;
bool kronosGearIsEnabled13 = false;
bool kronosGearIsEnabled14 = false;
bool kronosGearIsEnabled15 = false;
bool kronosGearIsEnabled16 = false;

bool kronosKeyIsSent0 = false;
bool kronosKeyIsSent1 = false;
bool kronosKeyIsSent2 = false;
bool kronosKeyIsSent3 = false;
bool kronosKeyIsSent4 = false;

queue<int> itemsToSend;

hh::physics::GOCSphereCollider* getCollider(hh::game::GameObject* obj);

void kronosDroppedItemCheck(hh::game::GameManager *manager) {
	if (manager->GetGameObject("DroppedItem9")) {
		if (!kDropIsSent0) {
			if (manager->GetGameObject("SequenceItem")) {
				for (int i = 0; i < 8; i++) {
					itemsToSend.push(10091 + i);
					kDropIsSent0 = true;
				}
			}
		}
	}
	if (manager->GetGameObject("DroppedItem10")) {
		if (!kDropIsSent1) {
			if (manager->GetGameObject("SequenceItem")) {
				for (int i = 0; i < 8; i++) {
					itemsToSend.push(10099 + i);
					kDropIsSent1 = true;
				}
			}
		}
	}
	if (manager->GetGameObject("DroppedItem2")) {
		if (!kDropIsSent2) {
			if (manager->GetGameObject("SequenceItem")) {
				for (int i = 0; i < 8; i++) {
					itemsToSend.push(10107 + i);
					kDropIsSent2 = true;
				}
			}
		}
	}
	if (manager->GetGameObject("DroppedItem3")) {
		if (!kDropIsSent3) {
			if (manager->GetGameObject("SequenceItem")) {
				for (int i = 0; i < 8; i++) {
					itemsToSend.push(10115 + i);
					kDropIsSent3 = true;
				}
			}
		}
	}
	if (manager->GetGameObject("DroppedItem4")) {
		if (!kDropIsSent4) {
			if (manager->GetGameObject("SequenceItem")) {
				for (int i = 0; i < 8; i++) {
					itemsToSend.push(10123+i);
					kDropIsSent4 = true;
				}
			}
		}
	}
	if (manager->GetGameObject("DroppedItem5")) {
		if (!kDropIsSent5) {
			if (manager->GetGameObject("SequenceItem")) {
				for (int i = 0; i < 8; i++) {
					itemsToSend.push(10131+i);
					kDropIsSent5 = true;
				}
			}
		}
	}
	if (manager->GetGameObject("DroppedItem6")) {
		if (!kDropIsSent6) {
			if (manager->GetGameObject("SequenceItem")) {
				for (int i = 0; i < 8; i++) {
					itemsToSend.push(10139+i);
					kDropIsSent6 = true;
				}
			}	
		}
	}
	if (manager->GetGameObject("DroppedItem7")) {
		if (!kDropIsSent7) {
			if (manager->GetGameObject("SequenceItem")) {
				for (int i = 0; i < 8; i++) {
					itemsToSend.push(10147+i);
					kDropIsSent7 = true;
				}
			}
		}
	}
	if (manager->GetGameObject("DroppedItem8")) {
		if (!kDropIsSent8) {
			if (manager->GetGameObject("SequenceItem")) {
				for (int i = 0; i < 8; i++) {
					itemsToSend.push(10155+i);
					kDropIsSent8 = true;
				}
			}			
		}
	}
}
void kronosDroppedGear(hh::game::GameManager* manager) {
	if (manager->GetGameObject("PortalBit0")) {

		if (getCollider(manager->GetGameObject("PortalBit0"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled0) {
			kronosGearIsEnabled0 = true;
		}
		
		if (getCollider(manager->GetGameObject("PortalBit0"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent0 && kronosGearIsEnabled0) {
				AP_SendItem(10212);
				kronosGearIsSent0 = true;
		}
	}
	if (manager->GetGameObject("PortalBit1")) {
		if (getCollider(manager->GetGameObject("PortalBit1"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled1) {
			kronosGearIsEnabled1 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit1"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent1 && kronosGearIsEnabled1) {
			
				AP_SendItem(10213);
				kronosGearIsSent1 = true;
			
		}
	}
	if (manager->GetGameObject("PortalBit2")) {
		if (getCollider(manager->GetGameObject("PortalBit2"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled2) {
			kronosGearIsEnabled2 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit2"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent2 && kronosGearIsEnabled2) {
			
				AP_SendItem(10214);
				kronosGearIsSent2 = true;
			
		}
	}
	if (manager->GetGameObject("PortalBit_Darumatuto")) {
		if (getCollider(manager->GetGameObject("PortalBit_Darumatuto"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled3) {
			kronosGearIsEnabled3 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit_Darumatuto"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent3 && kronosGearIsEnabled3) {
			
				AP_SendItem(10215);
				kronosGearIsSent3 = true;
			
		}
	}
	if (manager->GetGameObject("PortalBit4")) {
		if (getCollider(manager->GetGameObject("PortalBit4"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled4) {
			kronosGearIsEnabled4 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit4"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent4 && kronosGearIsEnabled4) {
			
				AP_SendItem(10216);
				kronosGearIsSent4 = true;
			
		}
	}
	if (manager->GetGameObject("PortalBit5")) {
		if (getCollider(manager->GetGameObject("PortalBit5"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled5) {
			kronosGearIsEnabled5 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit5"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent5 && kronosGearIsEnabled5) {
			
				AP_SendItem(10217);
				kronosGearIsSent5 = true;
			
		}
	}
	if (manager->GetGameObject("PortalBit6")) {
		if (getCollider(manager->GetGameObject("PortalBit6"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled6) {
			kronosGearIsEnabled6 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit6"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent6 && kronosGearIsEnabled6) {
			
			AP_SendItem(10218);
			kronosGearIsSent6 = true;
			
		}
	}
	if (manager->GetGameObject("PortalBit7")) {
		if (getCollider(manager->GetGameObject("PortalBit7"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled7) {
			kronosGearIsEnabled7 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit7"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent7 && kronosGearIsEnabled7) {
			
				AP_SendItem(10219);
				kronosGearIsSent7 = true;
			
		}
	}
	if (manager->GetGameObject("PortalBit8")) {
		if (getCollider(manager->GetGameObject("PortalBit8"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled8) {
			kronosGearIsEnabled8 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit8"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent8 && kronosGearIsEnabled8) {
			
				AP_SendItem(10220);
				kronosGearIsSent8 = true;
			
		}
	}
	if (manager->GetGameObject("PortalBit9")) {
		if (getCollider(manager->GetGameObject("PortalBit9"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled9) {
			kronosGearIsEnabled9 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit9"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent9 && kronosGearIsEnabled9) {
				AP_SendItem(10221);
				kronosGearIsSent9 = true;
		}
	}
	if (manager->GetGameObject("PortalBit10")) {
		if (getCollider(manager->GetGameObject("PortalBit10"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled10) {
			kronosGearIsEnabled10 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit10"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent10 && kronosGearIsEnabled10) {
				AP_SendItem(10222);
				kronosGearIsSent10 = true;

		}
	}
	if (manager->GetGameObject("PortalBit11")) {
		if (getCollider(manager->GetGameObject("PortalBit11"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled11) {
			kronosGearIsEnabled11 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit11"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent11 && kronosGearIsEnabled11) {
				AP_SendItem(10223);
				kronosGearIsSent11 = true;
		}
	}
	if (manager->GetGameObject("PortalBit12")) {
		if (getCollider(manager->GetGameObject("PortalBit12"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled12) {
			kronosGearIsEnabled12 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit12"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent12 && kronosGearIsEnabled12) {
				AP_SendItem(10224);
				kronosGearIsSent12 = true;
		}
	}
	if (manager->GetGameObject("PortalBit13")) {
		if (getCollider(manager->GetGameObject("PortalBit13"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled13) {
			kronosGearIsEnabled13 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit13"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent13 && kronosGearIsEnabled13) {
				AP_SendItem(10225);
				kronosGearIsSent13 = true;
		}
	}
	if (manager->GetGameObject("PortalBit14")) {
		if (getCollider(manager->GetGameObject("PortalBit14"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled14) {
			kronosGearIsEnabled14 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit14"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent14 && kronosGearIsEnabled14) {
				AP_SendItem(10226);
				kronosGearIsSent14 = true;
		}
	}
	if (manager->GetGameObject("PortalBit15")) {
		if (getCollider(manager->GetGameObject("PortalBit15"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled15) {
			kronosGearIsEnabled15 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit15"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent15 && kronosGearIsEnabled15) {
				AP_SendItem(10227);
				kronosGearIsSent15 = true;
		}
	}
	if (manager->GetGameObject("PortalBit_Ninjatuto")) {
		if (getCollider(manager->GetGameObject("PortalBit_Ninjatuto"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosGearIsEnabled16) {
			kronosGearIsEnabled16 = true;
		}
		if (getCollider(manager->GetGameObject("PortalBit_Ninjatuto"))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !kronosGearIsSent16 && kronosGearIsEnabled16) {
				AP_SendItem(10228);
				kronosGearIsSent16 = true;
		}
	}
}
void kronosDroppedKey(hh::game::GameManager *manager) {
	if (manager->GetGameObject("StorageKey6")) {
		if (manager->GetGameObject("StorageKey6")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kronosKeyIsSent0) {
			AP_SendItem(10229);
			kronosKeyIsSent0 = true;
		}
	}
	if (manager->GetGameObject("StorageKey8")) {
		if (manager->GetGameObject("StorageKey8")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kronosKeyIsSent1) {
			AP_SendItem(10230);
			kronosKeyIsSent1 = true;
		}
	}
	if (manager->GetGameObject("StorageKey2")) {
		PRINT_INTEGER(manager->GetGameObject("StorageKey2")->GetComponent<hh::game::GOCActivator>()->enabled);
		if (manager->GetGameObject("StorageKey2")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kronosKeyIsSent2) {
			AP_SendItem(10231);
			kronosKeyIsSent2 = true;
		}
	}
	if (manager->GetGameObject("StorageKey3")) {
		if (manager->GetGameObject("StorageKey3")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kronosKeyIsSent3) {
			AP_SendItem(10232);
			kronosKeyIsSent3 = true;
		}
	}
	if (manager->GetGameObject("StorageKey7")) {
		if (manager->GetGameObject("StorageKey7")->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !kronosKeyIsSent4) {
			AP_SendItem(10233);
			kronosKeyIsSent4 = true;
		}
	}
}
void kronosSendChecks() {
	if (!itemsToSend.empty()) {
		AP_SendItem(itemsToSend.front());
		itemsToSend.pop();
	}
}
hh::physics::GOCSphereCollider* getCollider(hh::game::GameObject *obj) {
	auto goc = (hh::physics::GOCSphereCollider*)*std::find_if(obj->components.begin(), obj->components.end(), [](hh::game::GOComponent* component) {
		return component->pStaticClass == hh::physics::GOCSphereCollider::GetClass() && component->nameHash == 0x13d151a5;
		});
	return goc;
}