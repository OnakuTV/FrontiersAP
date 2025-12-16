bool ouranosIsSpawned0 = false;
bool ouranosIsSpawned1 = false;
bool ouranosIsSpawned2 = false;
bool ouranosIsSpawned3 = false;
bool ouranosIsSpawned4 = false;
bool ouranosIsSpawned5 = false;
bool ouranosIsSpawned6 = false;
bool ouranosIsSpawned7 = false;
bool ouranosIsSpawned8 = false;
bool ouranosIsSpawned9 = false;
bool ouranosIsSpawned10 = false;
bool ouranosIsSpawned11 = false;
bool ouranosIsSpawned12 = false;
bool ouranosIsSpawned13 = false;
bool ouranosIsSpawned14 = false;
bool ouranosIsSpawned15 = false;
bool ouranosIsSpawned16 = false;
bool ouranosIsSpawned17 = false;
bool ouranosIsSpawned18 = false;
bool ouranosIsSpawned19 = false;
bool ouranosIsSpawned20 = false;
bool ouranosIsSpawned21 = false;
bool ouranosIsSpawned22 = false;
bool ouranosIsSpawned23 = false;
bool ouranosIsSpawned24 = false;
bool ouranosIsSpawned25 = false;
bool ouranosIsSpawned26 = false;

void ouranosMapCheck(hh::game::GameManager* manager) {
	if (manager->GetGameObject("PowerupSeed1")) {
		if (manager->GetGameObject("PowerupSeed1")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned0) {
			AP_SendItem(45000);
			ouranosIsSpawned0 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed2")) {
		if (manager->GetGameObject("PowerupSeed2")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned1) {
			AP_SendItem(45001);
			ouranosIsSpawned1 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed3")) {
		if (manager->GetGameObject("PowerupSeed3")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned2) {
			AP_SendItem(45002);
			ouranosIsSpawned2 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed4")) {
		if (manager->GetGameObject("PowerupSeed4")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned3) {
			AP_SendItem(45003);
			ouranosIsSpawned3 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed5")) {
		if (manager->GetGameObject("PowerupSeed5")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned4) {
			AP_SendItem(45004);
			ouranosIsSpawned4 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed6")) {
		if (manager->GetGameObject("PowerupSeed6")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned5) {
			AP_SendItem(45005);
			ouranosIsSpawned5 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed7")) {
		if (manager->GetGameObject("PowerupSeed7")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned6) {
			AP_SendItem(45006);
			ouranosIsSpawned6 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed8")) {
		if (manager->GetGameObject("PowerupSeed8")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned7) {
			AP_SendItem(45007);
			ouranosIsSpawned7 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed9")) {
		if (manager->GetGameObject("PowerupSeed9")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned8) {
			AP_SendItem(45008);
			ouranosIsSpawned8 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed10")) {
		if (manager->GetGameObject("PowerupSeed10")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned9) {
			AP_SendItem(45009);
			ouranosIsSpawned9 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed11")) {
		if (manager->GetGameObject("PowerupSeed11")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned10) {
			AP_SendItem(45010);
			ouranosIsSpawned10 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed12")) {
		if (manager->GetGameObject("PowerupSeed12")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned11) {
			AP_SendItem(45011);
			ouranosIsSpawned11 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed13")) {
		if (manager->GetGameObject("PowerupSeed13")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned12) {
			AP_SendItem(45012);
			ouranosIsSpawned12 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed14")) {
		if (manager->GetGameObject("PowerupSeed14")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned13) {
			AP_SendItem(45013);
			ouranosIsSpawned13 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed15")) {
		if (manager->GetGameObject("PowerupSeed15")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned14) {
			AP_SendItem(45014);
			ouranosIsSpawned14 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed16")) {
		if (manager->GetGameObject("PowerupSeed16")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned15) {
			AP_SendItem(45015);
			ouranosIsSpawned15 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed17")) {
		if (manager->GetGameObject("PowerupSeed17")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned16) {
			AP_SendItem(45016);
			ouranosIsSpawned16 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed18")) {
		if (manager->GetGameObject("PowerupSeed18")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned17) {
			AP_SendItem(45017);
			ouranosIsSpawned17 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed19")) {
		if (manager->GetGameObject("PowerupSeed19")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned18) {
			AP_SendItem(45018);
			ouranosIsSpawned18 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed20")) {
		if (manager->GetGameObject("PowerupSeed20")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned19) {
			AP_SendItem(45019);
			ouranosIsSpawned19 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed21")) {
		if (manager->GetGameObject("PowerupSeed21")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned20) {
			AP_SendItem(45020);
			ouranosIsSpawned20 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed22")) {
		if (manager->GetGameObject("PowerupSeed22")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned21) {
			AP_SendItem(45021);
			ouranosIsSpawned21 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed23")) {
		if (manager->GetGameObject("PowerupSeed23")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned22) {
			AP_SendItem(45022);
			ouranosIsSpawned22 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed24")) {
		if (manager->GetGameObject("PowerupSeed24")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned23) {
			AP_SendItem(45023);
			ouranosIsSpawned23 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed25")) {
		if (manager->GetGameObject("PowerupSeed25")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned24) {
			AP_SendItem(45024);
			ouranosIsSpawned24 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed26")) {
		if (manager->GetGameObject("PowerupSeed26")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned25) {
			AP_SendItem(45025);
			ouranosIsSpawned25 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed27")) {
		if (manager->GetGameObject("PowerupSeed27")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosIsSpawned26) {
			AP_SendItem(45026);
			ouranosIsSpawned26 = true;
		}
	}
}