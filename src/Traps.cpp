boolean keepRunning = false;
boolean fireDamage = false;
void fireTrap(hh::game::GameManager*);
void slowTrap(hh::game::GameManager*);
int ringTrap(hh::game::GameManager*);
void autorunTrap(hh::game::GameManager*);
void disableTraps(hh::game::GameManager*, int*);

enum trapTypes {
	SlowMo = 1,
	Ring = 2,
	AutoRun = 3,
	Fire = 4,
};

int shouldKeepRunningCounter = 0;

int handleTrap(int counter, int* activeTrap, hh::game::GameManager* manager) {
	if (activeTrap) {
		switch (*activeTrap) {
			case SlowMo:
				slowTrap(manager);
				break;
			case Ring:
				counter = ringTrap(manager);
				break;
			case AutoRun:
				autorunTrap(manager);
				break;
			case Fire:
				fireTrap(manager);
				break;
			default:
				break;
		}
	}
	//printf("This is Trap Counter: %d\n", counter);
	if (counter >= 3600) {
		disableTraps(manager, activeTrap);
		int num = 0;
		*activeTrap = num;
		return -1;
	}
	else {
		return counter;
	}
}

void fireTrap(hh::game::GameManager* manager) {
	if (hh::game::GameObject* obj = manager->GetGameObject("Sonic")) {
		app::player::GOCPlayerHsm* hsm = obj->GetComponent<app::player::GOCPlayerHsm>();
		if (hsm->GetCurrentState() != 38) {
			int random = rand() % 1000 + 1;
			if (random >= 997) {
				hsm->ChangeState(38, 0);
			}
		}
	}
}
void slowTrap(hh::game::GameManager* manager) {
	if (hh::game::GameObject* obj = manager->GetGameObject("Sonic")) {
		app::player::GOCPlayerParameter* player = obj->GetComponent<app::player::GOCPlayerParameter>();
		player->SetMode(app::player::GOCPlayerParameter::Mode::WATER);
	}
}
void autorunTrap(hh::game::GameManager* manager) {
	if (shouldKeepRunningCounter > 0) {
		shouldKeepRunningCounter--;
		return;
	}
	if (hh::game::GameObject* obj = manager->GetGameObject("Sonic")) {
		app::player::GOCPlayerBlackboard* blackboard = obj->GetComponent<app::player::GOCPlayerBlackboard>();
		blackboard->blackboard->GetContent(csl::ut::HashString("BlackboardStatus"));
				app::player::BlackboardStatus* status = static_cast<app::player::BlackboardStatus*>(blackboard->blackboard->GetContent(csl::ut::HashString("BlackboardStatus")));
				int random = rand() % 1000 + 1;
				if (random >= 998) {
					status->SetWorldFlag(app::player::BlackboardStatus::WorldFlag::AUTO_RUN, true);
					shouldKeepRunningCounter = 90;
				}
				if (shouldKeepRunningCounter <= 0) {
					status->SetWorldFlag(app::player::BlackboardStatus::WorldFlag::AUTO_RUN, false);
				}
	}
}
int ringTrap(hh::game::GameManager* manager) {
	if (hh::game::GameObject* obj = manager->GetGameObject("Sonic")) {
		app::player::GOCPlayerBlackboard* blackboard = obj->GetComponent<app::player::GOCPlayerBlackboard>();
		app::player::BlackboardItem* items = static_cast<app::player::BlackboardItem*>(blackboard->blackboard->GetContent(csl::ut::HashString("BlackboardItem")));
		if (items->ringCount < 150) {
			items->ringCount = 0;
		}
		else {
			items->ringCount -= 150;
		}
	}
	return 4000;
}
void disableTraps(hh::game::GameManager* manager, int* trap) {
	if (*trap == SlowMo) {
		if (hh::game::GameObject* obj = manager->GetGameObject("Sonic")) {
			app::player::GOCPlayerParameter* player = obj->GetComponent<app::player::GOCPlayerParameter>();
			player->SetMode(app::player::GOCPlayerParameter::Mode::NORMAL);
		}
	}
	else if (*trap == AutoRun) {
		if (hh::game::GameObject* obj = manager->GetGameObject("Sonic")) {
			app::player::GOCPlayerBlackboard* blackboard = obj->GetComponent<app::player::GOCPlayerBlackboard>();
			for (auto& content : blackboard->blackboard->contents) {
				if (csl::ut::HashString("BlackboardStatus") == content->GetNameHash()) {
					app::player::BlackboardStatus status = static_cast<app::player::BlackboardStatus&>(*content);
					status.ResetWorldFlag(app::player::BlackboardStatus::WorldFlag::AUTO_RUN);
					shouldKeepRunningCounter = 0;
				}
			}
		}
	}
}