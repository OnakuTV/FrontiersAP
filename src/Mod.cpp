#define EXPORT extern "C" __declspec(dllexport)

#include <queue>
#include "../APCpp/Archipelago.h"
#include "KronosMemoryTokens.h"
#include "KronosDigSpots.h"
#include "AresMemoryTokens.h"
#include "AresDigSpots.h"
#include "ChaosMemoryTokens.h"
#include "ChaosDigSpots.h"
#include "OuranosMemoryTokens.h"
#include "OuranosDigSpots.h"
#include "Cyberspace.h"
#include "KronosMap.h"
#include "AresMap.h"
#include "ChaosMap.h"
#include "OuranosMap.h"
using namespace std;

enum locations {
	kMemLoc = 163,
	kGearLoc = 17,
	kKeyLoc = 54,
};
const int offset = 101000;
enum items {
	kMemToken = offset,
	kPortalGear = offset + 1,
	kVaultKey = offset + 2,
	aMemToken = offset + 3,
	aPortalGear = offset + 4,
	aVaultKey = offset + 5,
	cMemToken = offset + 6,
	cPortalGear = offset + 7,
	cVaultKey = offset + 8,
	oMemToken = offset + 9,
	oPortalGear = offset + 10,
	oVaultKey = offset + 11,
	KronosBlueChaosEmerald = offset + 12,
	KronosRedChaosEmerald = offset + 13,
	KronosGreenChaosEmerald = offset + 14,
	KronosYellowChaosEmerald = offset + 15,
	KronosCyanChaosEmerald = offset + 16,
	KronosWhiteChaosEmerald = offset + 17,
	AresBlueChaosEmerald = offset + 18,
	AresRedChaosEmerald = offset + 19,
	AresGreenChaosEmerald = offset + 20,
	AresYellowChaosEmerald = offset + 21,
	AresCyanChaosEmerald = offset + 22,
	AresWhiteChaosEmerald = offset + 23,
	ChaosBlueChaosEmerald = offset + 24,
	ChaosRedChaosEmerald = offset + 25,
	ChaosGreenChaosEmerald = offset + 26,
	ChaosYellowChaosEmerald = offset + 27,
	ChaosCyanChaosEmerald = offset + 28,
	ChaosWhiteChaosEmerald = offset + 29,
	OuranosBlueChaosEmerald = offset + 30,
	OuranosRedChaosEmerald = offset + 31,
	OuranosGreenChaosEmerald = offset + 32,
	OuranosYellowChaosEmerald = offset + 33,
	OuranosCyanChaosEmerald = offset + 34,
	OuranosWhiteChaosEmerald = offset + 35,
	TutorialMemToken = offset + 36,
	TutorialGear = offset + 37,
	TutorialKey = offset + 38,
	SkillPoints200 = offset + 39,
	RedPowerSeed = offset + 40,
	BluePowerSeed = offset + 41,
	Kocos20 = offset + 42,
	PhantomRush = offset + 43,
	AirTrick = offset + 44,
	StompAttack = offset + 45,
	QuickCyloop = offset + 46,
	LoopKick = offset + 47,
	SonicBoom = offset + 48,
	WildRush = offset + 49,
	HomingShot = offset +50,
	SpinSlash = offset + 51,
	RecoverySmash = offset +52,
	CycloneKick = offset + 53,
	CrossSlash = offset + 54,
	GrandSlam = offset + 55,
	Victory = offset + 56,
};
bool ga1120 = false;
bool ga1130 = false;
bool ga1134 = false;
bool ga1136 = false;
bool qe1080 = false;
bool qe1100 = false;
bool ga1125 = false;
bool ga2120 = false;
bool ga2134 = false;
bool qe2080 = false;
bool ga2136 = false;
bool ga2135 = false;
bool qe2135 = false;
bool ga3130 = false;
bool ga3135 = false;
bool ga3134 = false;
bool qe3090 = false;
bool ga3136 = false;
bool qe3150 = false;
bool ga1132 = false;
bool ga1131 = false;
bool ga1135 = false;

void itemCallback();
void *getItem(int, bool);
void* itemRecieve(int);
void (*f_getItem)(int64_t, bool);
void getEmeralds(int, app::save::GameData*);

EXPORT void Init()
{
}
EXPORT void PostInit()
{
	//25. 29, 24, 27
	for (int i = 0; i < 25; i++) {
		//printf("bool ouranosIsSpawned%d = false;\n", i);
		//printf("if(manager->GetGameObject('StorageKey%d')) {\nif (manager->GetGameObject('StorageKey%d')->status->IsShutdown() == 1 && !ouranosKeyIsSent%d) {\nAP_SendItem(%d);\nouranosKeyIsSent%d = true;\n}\n}\n", i, i, i, 102688 + i, i);
		
		//printf("if(manager->GetGameObject('SequenceItem%d')) {\nif (manager->GetGameObject('SequenceItem%d')->GetComponent<hh::game::GOCActivator>()->enabled == 0 && !oMemIsSent%d) {\nAP_SendItem(%d);\noMemIsSent%d = true;\n}\n}\n", i, i, i, 16000 + i, i);
		// 
		//printf("if (manager->GetGameObject('PortalBit%d')) {\nif (manager->GetGameObject('PortalBit%d')->status->IsShutdown() == 1 && !kronosGearIsSent%d) {\nfor(int i = 0; i < 8; i++) {\nAP_SendItem(%d+i);\nkronosGearIsSent%d = true;\n}\n}\n}\n", i, i, i, 102623 + i, i);
		//printf("if(manager->GetGameObject('PortalBit%d')) {\nif (manager->GetGameObject('PortalBit%d')->status->IsShutdown() == 1 && !ouranosGearIsSent%d) {\nAP_SendItem(%d);\nouranosGearIsSent%d = true;\n}\n}\n", i, i, i, 102647 + i, i);
		//printf("if(manager->GetGameObject('PortalBit%d')){\n", i);
		//printf("if(getCollider(manager->GetGameObject('PortalBit%d'))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled%d) {\nouranosGearIsEnabled%d = true; \n}\nif(getCollider(manager->GetGameObject('PortalBit%d'))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent%d && ouranosGearIsEnabled%d) {", i, i, i, i, i, i);
		//printf("\nAP_SendItem(%d);\nouranosGearIsSent%d = true;\n}\n}\n", 102647 + i, i);


		//printf("if(manager->GetGameObject('PowerupSeed%d')){\n", i);
		//printf("if(manager->GetGameObject('PowerupSeed%d')->GetComponent<hh::physics::GOCSphereCollider>()->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !kronosIsSpawned%d){\n",i,i);
		//printf("AP_SendItem(%d); \nkronosIsSpawned%d = true; \n}\n}\n", 10241 + i, i);
		//printf("if(getCollider(manager->GetGameObject('PortalBit%d'))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 1 && !ouranosGearIsEnabled%d) {\nouranosGearIsEnabled%d = true; \n}\nif(getCollider(manager->GetGameObject('PortalBit%d'))->flags.test(hh::physics::GOCSphereCollider::Flag::ENABLED) == 0 && !ouranosGearIsSent%d && ouranosGearIsEnabled%d) {", i, i, i, i, i, i);
		//printf("\nAP_SendItem(%d);\nouranosGearIsSent%d = true;\n}\n}\n", 102647 + i, i);

		
		//printf("if(data->stages.actStages[%d].flags == 55295 || data->stages.actStages[%d].flags == 51199 && !cyberspaceIsSent%d){\nfor (int i = 0; i < 7; i++) {\nAP_SendItem(%d);\ncyberspaceIsSent%d = true;\n}\n}\n", i, i, i, 102396 + i*7, i);
	}
}
bool tutorialTokens = true;
bool tutorialGears = true;
bool tutorialKeys = true;

int kronosMemToken = 0;
int kronosKeys = 0;
int kronosGears = 0;
int kronosMapRelease = 0;

int aresMemToken = 0;
int aresKeys = 0;
int aresGears = 0;
int aresMapRelease = 0;

int chaosMemToken = 0;
int chaosKeys = 0;
int chaosGears = 0;
int chaosMapRelease = 0;

int ouranosMemToken = 0;
int ouranosKeys = 0;
int ouranosGears = 0;
int ouranosMapRelease = 0;

int kronosEmeralds = 0;
int aresEmeralds = 0;
int chaosEmeralds = 0;
int ouranosEmeralds = 0;

bool firstRun = true;
bool firstSend = true;
bool firstVisit = true;

bool kRecievedGear = false;
bool aRecievedGear = false;
bool cRecievedGear = false;
bool oRecievedGear = false;

int kMemTokenCount = 0;
int kKeyCount = 0;
int kGearCount = 0;
int kMapCount = 0;

int aMemTokenCount = 0;
int aGearCount = 0;
int aKeyCount = 0;
int aMapCount = 0;

int cMemTokenCount = 0;
int cKeyCount = 0;
int cGearCount = 0;
int cMapCount = 0;

int oMemTokenCount = 0;
int oKeyCount = 0;
int oGearCount = 0;
int oMapCount = 0;


int skillPoints = 0;
int lvlCounter = 0;
int kocos = 0;
int redPowerSeed = 0;
int bluePowerSeed = 0;

int frameCounter = 0;
//levels needed for all skills 18 + 50 + 15 + 50 + 90 = 223

//int eCount = 0;
int playtime = 0;

EXPORT void OnFrame() {
	csl::fnd::IAllocator* allocator;
	hh::game::GameService* service;
	hh::game::GameManager* manager = hh::game::GameManager::GetInstance();

	if (manager->GetGameObject("Sonic")) {
		if (firstRun) {
			//AP_Init("localhost:38281", "Sonic Frontiers", "Onaku", "None");
			AP_Init("archipelago.gg:54425", "Sonic Frontiers", "Onaku", "None");
			AP_SetItemClearCallback(itemCallback);

			void* f_getItem = &getItem;
			AP_SetItemRecvCallback(getItem);
			AP_SetLocationCheckedCallback(itemRecieve);
			AP_Start();
			firstRun = false;
		}
	}
	else {
		return;
	}
	frameCounter++;
	if (frameCounter > 1) {
		if (manager->GetService<app::save::SaveManager>())
		{

			app::save::SaveManager* savemgr = hh::game::GameManager::GetInstance()->GetService<app::save::SaveManager>();

			app::save::SaveInterface* saveInt = savemgr->saveInterface;
			app::save::GameData* gameData = saveInt->GetGameDataAccessor().data;


			if (AP_GetConnectionStatus() != AP_ConnectionStatus::Authenticated) {
				return;
			}

			
			//Kronos Island
			if (gameData->header.icon == app::save::HeaderData::SaveDataIcon::IconIsland1) {
				if (firstSend) {
					app::player::GOCPlayerBlackboard *sonicBlackboard = manager->GetGameObject("Sonic")->GetComponent<app::player::GOCPlayerBlackboard>();
					//sonicBlackboard->SetMode(app::player::GOCPlayerParameter::Mode::WATER);
					firstSend = false;
				}
				kronosMemCheck(manager);
				kronosDroppedItemCheck(manager);
				kronosDroppedGear(manager);
				kronosDroppedKey(manager);
				kronosMapCheck(manager);
				kronosSendChecks();
				//kronosDroppedItemCheck(manager);
				/*int kMemDiff = gameData->worldFlags.worldDatas[0].intDatas[344] - kronosMemToken;
				if (kMemDiff != 0) {
					if (tutorialTokens) {
						for (int i = 0; i < kMemDiff; i++) {
							AP_SendItem(101000 + kMemTokenCount);
							kMemTokenCount++;
							if (kMemTokenCount >= 27) {
								tutorialTokens = false;
								kMemTokenCount = 0;
							}
						}
					}
					else {
						for (int i = 0; i < kMemDiff; i++) {
							AP_SendItem(101038 + kMemTokenCount);
							kMemTokenCount++;
						}
					}
				}*/
				int gearDiff = kronosGears - gameData->worldFlags.worldDatas[0].byteFlags[1];
				if (gearDiff > 0 && !kRecievedGear) {
					for (int i = 0; i < gearDiff; i++) {
						kronosGears--;
					}
				}
				if (hh::game::GameManager::GetInstance()->GetService<hh::dv::DiEventManager>()) {
					hh::dv::DiEventManager* evtMngr = hh::game::GameManager::GetInstance()->GetService<hh::dv::DiEventManager>();
					if (evtMngr->GetDvSceneControl()) {
						printf(evtMngr->GetDvSceneControl()->cutsceneName);
						printf("\n");
						//Blue
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1120") == 0 && !ga1120) {
							ga1120 = true;
							AP_SendItem(10235);
						}
						//Red
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1134") == 0 && !ga1134) {
							ga1134 = true;
							AP_SendItem(10236);
						}
						//Green
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("qe1080") == 0 && !qe1080) {
							qe1080 = true;
							AP_SendItem(10237);
						}
						//Yellow
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1136") == 0 && !ga1136) {
							ga1136 = true;
							AP_SendItem(10238);
						}
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("qe1100") == 0 && !qe1100) {
							qe1100 = true;
							AP_SendItem(10239);
						}
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1125") == 0 && !ga1125) {
							ga1125 = true;
							AP_SendItem(10240);
						}
					}
				}
				if (gameData->character.expPoint > skillPoints) {
					skillPoints = gameData->character.expPoint;
				}
				gameData->worldFlags.worldDatas[0].intDatas[344] = kronosMemToken;
				gameData->worldFlags.worldDatas[0].byteFlags[0] = kronosKeys;
				gameData->worldFlags.worldDatas[0].byteFlags[1] = kronosGears;
				if (kRecievedGear) {
					kRecievedGear = false;
				}
				getEmeralds(kronosEmeralds, gameData);
			}
			//Ares Island
			if (gameData->header.icon == app::save::HeaderData::SaveDataIcon::IconIsland2) {

				aresMemCheck(manager);
				aresDroppedGear(manager);
				aresDroppedKey(manager);
				aresDroppedItemCheck(manager);
				aresMapCheck(manager);
				int gearDiff = aresGears - gameData->worldFlags.worldDatas[1].byteFlags[1];

				if (gearDiff > 0 && !aRecievedGear) {
					for (int i = 0; i < gearDiff; i++) {
						aresGears--;
					}
				}
				if (hh::game::GameManager::GetInstance()->GetService<hh::dv::DiEventManager>()) {
					hh::dv::DiEventManager* evtMngr = hh::game::GameManager::GetInstance()->GetService<hh::dv::DiEventManager>();
					if (evtMngr->GetDvSceneControl()) {
						//Blue
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga2120") == 0 && !ga2120) {
							ga2120 = true;
							AP_SendItem(12547);
						}
						//Red
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga2134") == 0 && !ga2134) {
							ga2134 = true;
							AP_SendItem(12548);
						}
						//Green
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("qe2080") == 0 && !qe2080) {
							qe2080 = true;
							AP_SendItem(12549);
						}
						//Yellow
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga2136") == 0 && !ga2136) {
							ga2136 = true;
							AP_SendItem(12550);
						}
						//Cyan
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("qe2135") == 0 && !qe2135) {
							qe2135 = true;
							AP_SendItem(12551);
						}
						//White
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga2135") == 0 && !ga2135) {
							ga2135 = true;
							AP_SendItem(12552);
						}
					}
				}

				gameData->worldFlags.worldDatas[1].intDatas[344] = aresMemToken;
				gameData->worldFlags.worldDatas[1].byteFlags[0] = aresKeys;
				gameData->worldFlags.worldDatas[1].byteFlags[1] = aresGears;
				if (aRecievedGear) {
					aRecievedGear = false;
				}
				getEmeralds(aresEmeralds, gameData);
			}
			//Chaos Island
			if (gameData->header.icon == app::save::HeaderData::SaveDataIcon::IconIsland3) {

				chaosMemCheck(manager);
				chaosDroppedItemCheck(manager);
				chaosDroppedGear(manager);
				chaosDroppedKey(manager);
				chaosMapCheck(manager);
				int gearDiff = chaosGears - gameData->worldFlags.worldDatas[2].byteFlags[1];
				if (gearDiff > 0 && !cRecievedGear) {
					for (int i = 0; i < gearDiff; i++) {
						chaosGears--;
					}
				}
				if (hh::game::GameManager::GetInstance()->GetService<hh::dv::DiEventManager>()) {
					hh::dv::DiEventManager* evtMngr = hh::game::GameManager::GetInstance()->GetService<hh::dv::DiEventManager>();
					if (evtMngr->GetDvSceneControl()) {
						//Blue
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga3130") == 0 && !ga3130) {
							ga3130 = true;
							AP_SendItem(14482);
						}
						//Red
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga3134") == 0 && !ga3134) {
							ga3134 = true;
							AP_SendItem(14483);
						}
						//Green
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("qe3090") == 0 && !qe3090) {
							qe3090 = true;
							AP_SendItem(14484);
						}
						//Yellow
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga3136") == 0 && !ga3136) {
							ga3136 = true;
							AP_SendItem(14485);
						}
						//Cyan
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("qe3150") == 0 && !qe3150) {
							qe3150 = true;
							AP_SendItem(14486);
						}
						//White
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga3135") == 0 && !ga3135) {
							ga3135 = true;
							AP_SendItem(14487);
						}
					}
				}
				gameData->worldFlags.worldDatas[2].intDatas[344] = chaosMemToken;
				gameData->worldFlags.worldDatas[2].byteFlags[0] = chaosKeys;
				gameData->worldFlags.worldDatas[2].byteFlags[1] = chaosGears;
				if (cRecievedGear) {
					cRecievedGear = false;
				}
				getEmeralds(chaosEmeralds, gameData);
			}

			//Ouranos Island
			if (gameData->header.icon == app::save::HeaderData::SaveDataIcon::IconIsland5) {
				if (firstVisit) {
					ga1132 = false;
					ga1134 = false;
					ga1136 = false;
					ga1130 = false;
					firstVisit = false;
				}
				ouranosMemCheck(manager);
				ouranosDroppedItemCheck(manager);
				ouranosDroppedGear(manager);
				ouranosDroppedKey(manager);
				ouranosMapCheck(manager);
				int gearDiff = ouranosGears - gameData->worldFlags.worldDatas[4].byteFlags[1];
				if (gearDiff > 0 && !oRecievedGear) {
					for (int i = 0; i < gearDiff; i++) {
						ouranosGears--;
					}
				}
				if (hh::game::GameManager::GetInstance()->GetService<hh::dv::DiEventManager>()) {
					hh::dv::DiEventManager* evtMngr = hh::game::GameManager::GetInstance()->GetService<hh::dv::DiEventManager>();
					if (evtMngr->GetDvSceneControl()) {
						//Blue
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1130") == 0 && !ga1130) {
							ga1130 = true;
							AP_SendItem(16422);
						}
						//Red
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1134") == 0 && !ga1134) {
							ga2134 = true;
							AP_SendItem(16423);
						}
						//Green
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1132") == 0 && !ga1132) {
							ga1132 = true;
							AP_SendItem(16424);
						}
						//Yellow
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1136") == 0 && !ga1136) {
							ga1136 = true;
							AP_SendItem(16425);
						}
						//Cyan
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1131") == 0 && !ga1131) {
							ga1131 = true;
							AP_SendItem(16426);
						}
						//White
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1135") == 0 && !ga1135) {
							ga1135 = true;
							AP_SendItem(16427);
						}
					}
				}
				gameData->worldFlags.worldDatas[4].intDatas[344] = ouranosMemToken;
				gameData->worldFlags.worldDatas[4].byteFlags[0] = ouranosKeys;
				gameData->worldFlags.worldDatas[4].byteFlags[1] = ouranosGears;
				if (oRecievedGear) {
					oRecievedGear = false;
				}
				getEmeralds(ouranosEmeralds, gameData);
			}
			cyberspaceChecks(gameData);
			frameCounter = 0;
		}
	}
}
void itemCallback() {
	kMemTokenCount = 0;
	kKeyCount = 0;
	kGearCount = 0;
	kMapCount = 0;

	aMemTokenCount = 0;
	aGearCount = 0;
	aKeyCount = 0;
	aMapCount = 0;

	cMemTokenCount = 0;
	cKeyCount = 0;
	cGearCount = 0;
	cMapCount = 0;

	oMemTokenCount = 0;
	oKeyCount = 0;
	oGearCount = 0;
	oMapCount = 0;


	skillPoints = 0;
	lvlCounter = 0;
	kocos = 0;
	redPowerSeed = 0;
	bluePowerSeed = 0;
	printf("clearing state");
	return;
}
void *itemRecieve(int id) {
	/*
	PRINT_INTEGER(id);
	if ((id >= 101000 && id < 101027) || (id >= 101038 && id < 101174)) {
		kMemTokenCount++;
	}
	else if ((id >= 101027 && id < 101029) || (id >= 101174 && id < 10189)) {
		kGearCount++;
	}
	else if ((id >= 101029 && id < 101036) || (id >= 101189 && id < 101236)) {
		kKeyCount++;
	}
	else if (id == aMemToken) {
		aMemTokenCount++;
	}
	else if (id == aPortalGear) {
		aGearCount++;
	}
	else if (id == aVaultKey) {
		aKeyCount++;
	}
	else if (id == cMemToken) {
		cMemTokenCount++;
	}
	else if (id == cPortalGear) {
		cGearCount++;
	}
	else if (id == cVaultKey) {
		cKeyCount++;
	}
	else if (id == oMemToken) {
		oMemTokenCount++;
	}
	else if (id == oPortalGear) {
		oGearCount++;
	}
	else if (id == oVaultKey) {
		oKeyCount++;
	}
	else if (id == KronosBlueChaosEmerald) {
		kronosEmeralds++;
	}
	else if (id == KronosRedChaosEmerald) {
		kronosEmeralds++;
	}
	else if (id == KronosGreenChaosEmerald) {
		kronosEmeralds++;
	}
	else if (id == KronosYellowChaosEmerald) {
		kronosEmeralds++;
	}
	else if (id == KronosCyanChaosEmerald) {
		kronosEmeralds++;
	}
	else if (id == KronosWhiteChaosEmerald) {
		kronosEmeralds++;
	}
	else if (id == AresBlueChaosEmerald) {
		aresEmeralds++;
	}
	else if (id == AresRedChaosEmerald) {
		aresEmeralds++;
	}
	else if (id == AresGreenChaosEmerald) {
		aresEmeralds++;
	}
	else if (id == AresYellowChaosEmerald) {
		aresEmeralds++;
	}
	else if (id == AresCyanChaosEmerald) {
		aresEmeralds++;
	}
	else if (id == AresWhiteChaosEmerald) {
		aresEmeralds++;
	}
	else if (id == ChaosBlueChaosEmerald) {
		chaosEmeralds++;
	}
	else if (id == ChaosRedChaosEmerald) {
		chaosEmeralds++;
	}
	else if (id == ChaosGreenChaosEmerald) {
		chaosEmeralds++;
	}
	else if (id == ChaosYellowChaosEmerald) {
		chaosEmeralds++;
	}
	else if (id == ChaosCyanChaosEmerald) {
		chaosEmeralds++;
	}
	else if (id == ChaosWhiteChaosEmerald) {
		chaosEmeralds++;
	}
	else if (id == OuranosBlueChaosEmerald) {
		ouranosEmeralds++;
	}
	else if (id == OuranosRedChaosEmerald) {
		ouranosEmeralds++;
	}
	else if (id == OuranosGreenChaosEmerald) {
		ouranosEmeralds++;
	}
	else if (id == OuranosYellowChaosEmerald) {
		ouranosEmeralds++;
	}
	else if (id == OuranosCyanChaosEmerald) {
		ouranosEmeralds++;
	}
	else if (id == OuranosWhiteChaosEmerald) {
		ouranosEmeralds++;
	}
	else
	{
	}*/
	return 0;
}
void* getItem(int id, bool alert) {
	if (id == kMemToken) {
		kronosMemToken++;
	}
	else if (id == kPortalGear) {
		kronosGears++;
		kRecievedGear = true;
	}
	else if (id == kVaultKey) {
		kronosKeys++;
	}
	else if (id == aMemToken) {
		aresMemToken++;
	}
	else if (id == aPortalGear) {
		aresGears++;
		aRecievedGear = true;
	}
	else if (id == aVaultKey) {
		aresKeys++;
	}
	else if (id == cMemToken) {
		chaosMemToken++;
	}
	else if (id == cPortalGear) {
		chaosGears++;
		cRecievedGear = true;
	}
	else if (id == cVaultKey) {
		chaosKeys++;
	}
	else if (id == oMemToken) {
		ouranosMemToken++;
	}
	else if (id == oPortalGear) {
		ouranosGears++;
		oRecievedGear = true;
	}
	else if (id == oVaultKey) {
		ouranosKeys++;
	}
	else if (id == KronosBlueChaosEmerald) {
		kronosEmeralds++;
	}
	else if (id == KronosRedChaosEmerald) {
		kronosEmeralds++;
	}
	else if (id == KronosGreenChaosEmerald) {
		kronosEmeralds++;
	}
	else if (id == KronosYellowChaosEmerald) {
		kronosEmeralds++;
	}
	else if (id == KronosCyanChaosEmerald) {
		kronosEmeralds++;
	}
	else if (id == KronosWhiteChaosEmerald) {
		kronosEmeralds++;
	}
	else if (id == AresBlueChaosEmerald) {
		aresEmeralds++;
	}
	else if (id == AresRedChaosEmerald) {
		aresEmeralds++;
	}
	else if (id == AresGreenChaosEmerald) {
		aresEmeralds++;
	}
	else if (id == AresYellowChaosEmerald) {
		aresEmeralds++;
	}
	else if (id == AresCyanChaosEmerald) {
		aresEmeralds++;
	}
	else if (id == AresWhiteChaosEmerald) {
		aresEmeralds++;
	}
	else if (id == ChaosBlueChaosEmerald) {
		chaosEmeralds++;
	}
	else if (id == ChaosRedChaosEmerald) {
		chaosEmeralds++;
	}
	else if (id == ChaosGreenChaosEmerald) {
		chaosEmeralds++;
	}
	else if (id == ChaosYellowChaosEmerald) {
		chaosEmeralds++;
	}
	else if (id == ChaosCyanChaosEmerald) {
		chaosEmeralds++;
	}
	else if (id == ChaosWhiteChaosEmerald) {
		chaosEmeralds++;
	}
	else if (id == OuranosBlueChaosEmerald) {
		ouranosEmeralds++;
	}
	else if (id == OuranosRedChaosEmerald) {
		ouranosEmeralds++;
	}
	else if (id == OuranosGreenChaosEmerald) {
		ouranosEmeralds++;
	}
	else if (id == OuranosYellowChaosEmerald) {
		ouranosEmeralds++;
	}
	else if (id == OuranosCyanChaosEmerald) {
		ouranosEmeralds++;
	}
	else if (id == OuranosWhiteChaosEmerald) {
		ouranosEmeralds++;
	}
	else if (id == TutorialMemToken) {
		kronosMemToken++;
	}
	else if (id == TutorialGear) {
		kRecievedGear = true;
		kronosGears++;
	}
	else if (id == TutorialKey) {
		kronosKeys++;
	}
	else if (id == SkillPoints200) {
		skillPoints++;
	}
	else if (id == RedPowerSeed) {
		redPowerSeed++;
	}
	else if (id == BluePowerSeed) {
		bluePowerSeed++;
	}
	else if (id == Kocos20) {
		kocos += 20;
	}
	return 0;
}
void getEmeralds(int emeralds, app::save::GameData* gameData) {
	if (emeralds == 1) {
		gameData->character.hasChaosEmeralds = 1;
	}
	else if (emeralds == 2) {
		gameData->character.hasChaosEmeralds = 17;
	}
	else if (emeralds == 3) {
		gameData->character.hasChaosEmeralds = 21;
	}
	else if (emeralds == 4) {
		gameData->character.hasChaosEmeralds = 85;
	}
	else if (emeralds == 5) {
		gameData->character.hasChaosEmeralds = 87;
	}
	else if (emeralds == 6) {
		gameData->character.hasChaosEmeralds = 119;
	}
}