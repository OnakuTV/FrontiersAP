bool kronosIsSpawned0 = false;
bool kronosIsSpawned1 = false;
bool kronosIsSpawned2 = false;
bool kronosIsSpawned3 = false;
bool kronosIsSpawned4 = false;
bool kronosIsSpawned5 = false;
bool kronosIsSpawned6 = false;
bool kronosIsSpawned7 = false;
bool kronosIsSpawned8 = false;
bool kronosIsSpawned9 = false;
bool kronosIsSpawned10 = false;
bool kronosIsSpawned11 = false;
bool kronosIsSpawned12 = false;
bool kronosIsSpawned13 = false;
bool kronosIsSpawned14 = false;
bool kronosIsSpawned15 = false;
bool kronosIsSpawned16 = false;
bool kronosIsSpawned17 = false;
bool kronosIsSpawned18 = false;
bool kronosIsSpawned19 = false;
bool kronosIsSpawned20 = false;
bool kronosIsSpawned21 = false;
bool kronosIsSpawned22 = false;
bool kronosIsSpawned23 = false;
bool kronosIsSpawned24 = false;

void kronosMapCheck(hh::game::GameManager* manager) {
	if (manager->GetGameObject("PowerupSeed0")) {
		if (manager->GetGameObject("PowerupSeed0")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned0) {
			AP_SendItem(10241);
			kronosIsSpawned0 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed1")) {
		if (manager->GetGameObject("PowerupSeed1")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned1) {
			AP_SendItem(10242);
			kronosIsSpawned1 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed2")) {
		if (manager->GetGameObject("PowerupSeed2")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned2) {
			AP_SendItem(10243);
			kronosIsSpawned2 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed3")) {
		if (manager->GetGameObject("PowerupSeed3")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned3) {
			AP_SendItem(10244);
			kronosIsSpawned3 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed4")) {
		if (manager->GetGameObject("PowerupSeed4")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned4) {
			AP_SendItem(10245);
			kronosIsSpawned4 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed5")) {
		if (manager->GetGameObject("PowerupSeed5")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned5) {
			AP_SendItem(10246);
			kronosIsSpawned5 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed6")) {
		if (manager->GetGameObject("PowerupSeed6")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned6) {
			AP_SendItem(10247);
			kronosIsSpawned6 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed7")) {
		if (manager->GetGameObject("PowerupSeed7")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned7) {
			AP_SendItem(10248);
			kronosIsSpawned7 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed8")) {
		if (manager->GetGameObject("PowerupSeed8")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned8) {
			AP_SendItem(10249);
			kronosIsSpawned8 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed9")) {
		if (manager->GetGameObject("PowerupSeed9")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned9) {
			AP_SendItem(10250);
			kronosIsSpawned9 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed10")) {
		if (manager->GetGameObject("PowerupSeed10")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned10) {
			AP_SendItem(10251);
			kronosIsSpawned10 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed11")) {
		if (manager->GetGameObject("PowerupSeed11")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned11) {
			AP_SendItem(10252);
			kronosIsSpawned11 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed12")) {
		if (manager->GetGameObject("PowerupSeed12")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned12) {
			AP_SendItem(10253);
			kronosIsSpawned12 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed13")) {
		if (manager->GetGameObject("PowerupSeed13")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned13) {
			AP_SendItem(10254);
			kronosIsSpawned13 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed14")) {
		if (manager->GetGameObject("PowerupSeed14")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned14) {
			AP_SendItem(10255);
			kronosIsSpawned14 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed15")) {
		if (manager->GetGameObject("PowerupSeed15")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned15) {
			AP_SendItem(10256);
			kronosIsSpawned15 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed16")) {
		if (manager->GetGameObject("PowerupSeed16")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned16) {
			AP_SendItem(10257);
			kronosIsSpawned16 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed17")) {
		if (manager->GetGameObject("PowerupSeed17")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned17) {
			AP_SendItem(10258);
			kronosIsSpawned17 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed18")) {
		if (manager->GetGameObject("PowerupSeed18")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned18) {
			AP_SendItem(10259);
			kronosIsSpawned18 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed19")) {
		if (manager->GetGameObject("PowerupSeed19")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned19) {
			AP_SendItem(10260);
			kronosIsSpawned19 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed20")) {
		if (manager->GetGameObject("PowerupSeed20")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned20) {
			AP_SendItem(10261);
			kronosIsSpawned20 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed21")) {
		if (manager->GetGameObject("PowerupSeed21")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned21) {
			AP_SendItem(10262);
			kronosIsSpawned21 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed22")) {
		if (manager->GetGameObject("PowerupSeed22")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned22) {
			AP_SendItem(10263);
			kronosIsSpawned22 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed23")) {
		if (manager->GetGameObject("PowerupSeed23")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned23) {
			AP_SendItem(10264);
			kronosIsSpawned23 = true;
		}
	}
	if (manager->GetGameObject("PowerupSeed24")) {
		if (manager->GetGameObject("PowerupSeed24")->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned24) {
			AP_SendItem(10265);
			kronosIsSpawned24 = true;
		}
	}
}