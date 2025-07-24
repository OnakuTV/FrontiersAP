bool chaosIsSpawned0 = false;
bool chaosIsSpawned1 = false;
bool chaosIsSpawned2 = false;
bool chaosIsSpawned3 = false;
bool chaosIsSpawned4 = false;
bool chaosIsSpawned5 = false;
bool chaosIsSpawned6 = false;
bool chaosIsSpawned7 = false;
bool chaosIsSpawned8 = false;
bool chaosIsSpawned9 = false;
bool chaosIsSpawned10 = false;
bool chaosIsSpawned11 = false;
bool chaosIsSpawned12 = false;
bool chaosIsSpawned13 = false;
bool chaosIsSpawned14 = false;
bool chaosIsSpawned15 = false;
bool chaosIsSpawned16 = false;
bool chaosIsSpawned17 = false;
bool chaosIsSpawned18 = false;
bool chaosIsSpawned19 = false;
bool chaosIsSpawned20 = false;
bool chaosIsSpawned21 = false;
bool chaosIsSpawned22 = false;
bool chaosIsSpawned23 = false;

void chaosMapCheck(hh::game::GameManager* manager) {
	if (manager->GetGameObject("PowerupSeed1")) {
		if (manager->GetGameObject("PowerupSeed1")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned0) {
			AP_SendItem(14488);
			chaosIsSpawned0 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed2")) {
		if (manager->GetGameObject("PowerupSeed2")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned1) {
			AP_SendItem(14489);
			chaosIsSpawned1 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed3")) {
		if (manager->GetGameObject("PowerupSeed3")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned2) {
			AP_SendItem(14490);
			chaosIsSpawned2 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed4")) {
		if (manager->GetGameObject("PowerupSeed4")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned3) {
			AP_SendItem(14491);
			chaosIsSpawned3 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed5")) {
		if (manager->GetGameObject("PowerupSeed5")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned4) {
			AP_SendItem(14492);
			chaosIsSpawned4 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed6")) {
		if (manager->GetGameObject("PowerupSeed6")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned5) {
			AP_SendItem(14493);
			chaosIsSpawned5 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed7")) {
		if (manager->GetGameObject("PowerupSeed7")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned6) {
			AP_SendItem(14494);
			chaosIsSpawned6 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed8")) {
		if (manager->GetGameObject("PowerupSeed8")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned7) {
			AP_SendItem(14495);
			chaosIsSpawned7 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed9")) {
		if (manager->GetGameObject("PowerupSeed9")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned8) {
			AP_SendItem(14496);
			chaosIsSpawned8 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed10")) {
		if (manager->GetGameObject("PowerupSeed10")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned9) {
			AP_SendItem(14497);
			chaosIsSpawned9 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed11")) {
		if (manager->GetGameObject("PowerupSeed11")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned10) {
			AP_SendItem(14498);
			chaosIsSpawned10 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed12")) {
		if (manager->GetGameObject("PowerupSeed12")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned11) {
			AP_SendItem(14499);
			chaosIsSpawned11 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed13")) {
		if (manager->GetGameObject("PowerupSeed13")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned12) {
			AP_SendItem(14500);
			chaosIsSpawned12 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed14")) {
		if (manager->GetGameObject("PowerupSeed14")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned13) {
			AP_SendItem(14501);
			chaosIsSpawned13 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed15")) {
		if (manager->GetGameObject("PowerupSeed15")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned14) {
			AP_SendItem(14502);
			chaosIsSpawned14 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed16")) {
		if (manager->GetGameObject("PowerupSeed16")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned15) {
			AP_SendItem(14503);
			chaosIsSpawned15 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed17")) {
		if (manager->GetGameObject("PowerupSeed17")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned16) {
			AP_SendItem(14504);
			chaosIsSpawned16 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed18")) {
		if (manager->GetGameObject("PowerupSeed18")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned17) {
			AP_SendItem(14505);
			chaosIsSpawned17 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed19")) {
		if (manager->GetGameObject("PowerupSeed19")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned18) {
			AP_SendItem(14506);
			chaosIsSpawned18 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed20")) {
		if (manager->GetGameObject("PowerupSeed20")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned19) {
			AP_SendItem(14507);
			chaosIsSpawned19 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed21")) {
		if (manager->GetGameObject("PowerupSeed21")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned20) {
			AP_SendItem(14508);
			chaosIsSpawned20 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed22")) {
		if (manager->GetGameObject("PowerupSeed22")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned21) {
			AP_SendItem(14509);
			chaosIsSpawned21 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed23")) {
		if (manager->GetGameObject("PowerupSeed23")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned22) {
			AP_SendItem(14510);
			chaosIsSpawned22 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed24")) {
		if (manager->GetGameObject("PowerupSeed24")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !chaosIsSpawned23) {
			AP_SendItem(14511);
			chaosIsSpawned23 = true;
		}
	}
}