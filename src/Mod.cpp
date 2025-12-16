#define EXPORT extern "C" __declspec(dllexport)

#include <iostream>
#include <queue>
#include <json/json.h>
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
#include "Mod.h"
#include "utilities/SimpleIni.h"
#include <filesystem>
using namespace std;
using namespace hh::fnd;
//Booleans to check if a cutscene has been played
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

bool increaseSkillPoints = false;
bool increaseRedSeeds = false;
bool increaseBlueSeeds = false;

bool sonicDied = false;

bool kronosUnlockedMapChanged = true;
bool aresUnlockedMapChanged = true;
bool chaosUnlockedMapChanged = true;
bool ouranosUnlockedMapChanged = true;

std::vector<pair<string, bool>> unlockedKronosStages = { {"Portal1", false}, {"Portal7", false},{"Portal4", false}, {"Portal2", false},{"Portal3", false}, {"Portal6", false}};
std::vector<pair<string, bool>> unlockedAresStages = { {"Portal1", false}, {"Portal0", false},{"Portal4", false}, {"Portal2", false},{"Portal5", false}, {"Portal6", false},{"Portal3", false}};
std::vector<pair<string, bool>> unlockedChaosStages = { {"Portal0", false}, {"Portal1", false},{"Portal2", false}, {"Portal3", false},{"Portal4", false}, {"Portal5", false},{"Portal6", false} };
std::vector<pair<string, bool>> unlockedOuranosStages = { {"Portal4", false}, {"Portal9", false},{"Portal5", false}, {"Portal7", false},{"Portal2", false}, {"Portal1", false},{"Portal6", false}, { "Portal3", false },{"Portal8", false} };
std::vector<string> randomKronosStages;
std::vector<string> randomAresStages;
std::vector<string> randomChaosStages;
std::vector<string> randomOuranosStages;
std::map<string, int> cyberspaceStages = { {"w6d01", 0}, {"w8d01",18}, {"w9d04",26}, {"w6d02",1}, {"w7d04",13}, {"w6d06", 5},
	{"w9d06",28}, {"w6d05",4}, {"w8d03",20}, {"w7d02",11}, {"w7d06",15}, {"w8d04",21}, {"w6d03",2}, {"w8d05",22}, {"w6d04",3}, 
{"w6d08",7}, {"w8d02",19}, {"w6d09",8}, {"w6d07",6}, {"w8d06",23}, {"w7d03",12}, {"w7d08",17}, {"w9d02",24}, {"w7d01",10}, 
	{"w9d03",25}, {"w6d10",9}, {"w7d07",16}, {"w9d05",27}, {"w7d05",14}, {"w9d07",29} };
//{"1-1", 36}
std::map<string, int> cyberspaceSRankTimesMap = { {"w6d01", 36}, {"w8d01",45}, {"w9d04",35}, {"w6d02",43}, {"w7d04",45}, {"w6d06", 45},
	{"w9d06",38}, {"w6d05",45}, {"w8d03",22}, {"w7d02",30}, {"w7d06",32}, {"w8d04",38}, {"w6d03",60}, {"w8d05",40}, {"w6d04",42},
{"w6d08",30}, {"w8d02",70}, {"w6d09",60}, {"w6d07",35}, {"w8d06",80}, {"w7d03",60}, {"w7d08",58}, {"w9d02",75}, {"w7d01",37},
	{"w9d03",90}, {"w6d10",53}, {"w7d07",75}, {"w9d05",45}, {"w7d05",25}, {"w9d07",50} };

vector<string> randomizedStages = { "w6d01","w8d01", "w9d04", "w6d02", "w7d04", "w6d06", "w9d06", "w6d05", "w8d03", "w7d02", "w7d06", "w8d04", "w6d03", "w8d05", "w6d04",
"w6d08", "w8d02", "w6d09", "w6d07", "w8d06", "w7d03", "w7d08", "w9d02", "w7d01", "w9d03", "w6d10", "w7d07", "w9d05", "w7d05", "w9d07"};
vector<int> randomizedOrder;

std::map<app::player::BlackboardStatus::CombatFlag, bool> unlockedSkillsMap = {
	{app::player::BlackboardStatus::CombatFlag::CROSS_SLASH, false}, {app::player::BlackboardStatus::CombatFlag::GRAND_SLAM, false}, {app::player::BlackboardStatus::CombatFlag::CYCLONE_KICK, false},
	{app::player::BlackboardStatus::CombatFlag::PHANTOM_RUSH, false}, {app::player::BlackboardStatus::CombatFlag::PARRY, false}, {app::player::BlackboardStatus::CombatFlag::STOMP_ATTACK, false},
	{app::player::BlackboardStatus::CombatFlag::HOMING_SHOT, false}, {app::player::BlackboardStatus::CombatFlag::QUICK_CYLOOP, false},{app::player::BlackboardStatus::CombatFlag::RECOVERY_SMASH, false},
	{app::player::BlackboardStatus::CombatFlag::SPIN_DASH, false}, {app::player::BlackboardStatus::CombatFlag::AUTO_COMBO, false}, {app::player::BlackboardStatus::CombatFlag::AIR_TRICK, false},
	{app::player::BlackboardStatus::CombatFlag::SONIC_BOOM, false}, {app::player::BlackboardStatus::CombatFlag::SPIN_SLASH, false}
};
std::vector<app::player::BlackboardStatus::CombatFlag> skillVector = {
	app::player::BlackboardStatus::CombatFlag::CROSS_SLASH, app::player::BlackboardStatus::CombatFlag::GRAND_SLAM, app::player::BlackboardStatus::CombatFlag::CYCLONE_KICK,
	app::player::BlackboardStatus::CombatFlag::PHANTOM_RUSH, app::player::BlackboardStatus::CombatFlag::PARRY, app::player::BlackboardStatus::CombatFlag::STOMP_ATTACK,
	app::player::BlackboardStatus::CombatFlag::HOMING_SHOT, app::player::BlackboardStatus::CombatFlag::QUICK_CYLOOP,app::player::BlackboardStatus::CombatFlag::RECOVERY_SMASH,
	app::player::BlackboardStatus::CombatFlag::SPIN_DASH, app::player::BlackboardStatus::CombatFlag::AUTO_COMBO, app::player::BlackboardStatus::CombatFlag::AIR_TRICK,
	app::player::BlackboardStatus::CombatFlag::SONIC_BOOM, app::player::BlackboardStatus::CombatFlag::SPIN_SLASH
};
void itemCallback();
void getItem(int, bool);
void* itemRecieve(int);
void (*f_getItem)(int64_t, bool);
void getEmeralds(int, app::save::GameData*);
void contactRange(hh::game::GameObject*, int, int);
void unlockStages(hh::game::ObjectData*, hh::game::GameManager*, string, ucsl::memory::IAllocator*);
void lockCyberspace(hh::game::ObjectData*, string, ucsl::memory::IAllocator*);
void getSlotData();
void setCyberspaceTimes(bool);
void setMemoryTokenSanity(bool);
void setMemoryTokenBundle(bool);
hh::game::GOComponent* contact;

std::queue<int> apMessageQueue;
std::string serverAddress;
std::string serverUsername;
std::string serverPassword;

bool memTokenSanity = false;
bool memTokenBundle = false;
bool cyberspaceTimes = false;
bool connected = false;


EXPORT void Init()
{
}
EXPORT void PostInit()
{
	CSimpleIniA ini;

	SI_Error rc = ini.LoadFile("Mods/Archipelago/mod.ini");
	if (rc < 0) {
		printf("yo wtf\n");
	}
	CSimpleIniA::TNamesDepend sections;
	ini.GetAllSections(sections);

	serverAddress = ini.GetValue("archipelagoinformation", "address");
	serverUsername = ini.GetValue("archipelagoinformation", "username");
	serverPassword = ini.GetValue("archipelagoinformation", "password");
	std::erase(serverAddress, '"');
	std::erase(serverUsername, '"');
	std::erase(serverPassword, '"');
}

//FrameCounters

int frameCounter = 0;
int textCounter = 0;
//levels needed for all skills 18 + 50 + 15 + 50 + 90 = 223

//int eCount = 0;
int playtime = 0;
const char* goalCutscene;
int hashSeed = 0;

hh::game::GOComponent* portalContact;

bool test = false;
void set_goal(int goal) {
	printf("This is Goal: %d", goal);
	switch (goal) {
	case 1:
		goalCutscene = "";
		break;
	case 2:
		goalCutscene = "";
		break;
	case 3: 
		goalCutscene = "";
		break;
	default:
		goalCutscene = "ev5040";
		break;
	}
}
EXPORT void OnFrame() {
	
	hh::game::GameManager* manager = hh::game::GameManager::GetInstance();
	if (manager->GetGameObject("Sonic")) {
		textCounter++;
	}
	else {
		return;
	}
	if (firstRun) {
		AP_Init("localhost:38281", "Sonic Frontiers", "Onaku", "None");
		//AP_Init(serverAddress.c_str(), "Sonic Frontiers", serverUsername.c_str(), serverPassword.c_str());
		AP_SetItemClearCallback(itemCallback);

		AP_SetItemRecvCallback(&getItem);
		AP_SetLocationCheckedCallback(itemRecieve);
		AP_RegisterSlotDataIntCallback("Goal", &set_goal);
		AP_RegisterSlotDataIntCallback("cyberspace_times", &setCyberspaceTimes);
		AP_RegisterSlotDataIntCallback("memory_token_sanity", &setMemoryTokenSanity);
		AP_RegisterSlotDataIntCallback("memory_token_bundle", &setMemoryTokenBundle);
		AP_Start();
		firstRun = false;
	}
	frameCounter++;
	if (frameCounter > 1) {
		if (AP_GetConnectionStatus() == AP_ConnectionStatus::Authenticated && !connected) {
			AP_RoomInfo info;
			AP_GetRoomInfo(&info);
			int hashSeed = 7;
			for (int i = 0; i < info.seed_name.length(); i++) {
				hashSeed = hashSeed * 31 + info.seed_name[i];
			}
			printf("Hash is: %d", hashSeed);
			srand(hashSeed);
			int numOfStages = randomizedStages.size();
			for (int i = 0; i < numOfStages; i++) {
				int num = rand() % randomizedStages.size();
				randomizedOrder.emplace_back(cyberspaceStages.find(randomizedStages[num])->second);
				printf("%d\n", randomizedOrder.back());
				if (i < 7) {
					randomKronosStages.emplace_back(randomizedStages[num].data());
				}
				else if (i < 14) {
					randomAresStages.emplace_back(randomizedStages[num].data());
				}
				else if (i < 21) {
					randomChaosStages.emplace_back(randomizedStages[num].data());
				}
				else {
					randomOuranosStages.emplace_back(randomizedStages[num].data());
				}
				randomizedStages.erase(randomizedStages.begin() + num);
				//printf("%d\n", randomizedOrder.back());
			}
			if (cyberspaceTimes) {
				if (auto* banger = manager->GetService<app::level::StageInfo>()) {
					for (int i = 0; i < banger->stages.size() - 1; i++) {
						if (banger->stages[i]) {
							if (banger->stages[i]->rankTimes[0] > 0) {

								banger->stages[i]->rankTimes[0] = cyberspaceSRankTimesMap.find(banger->stages[i]->GetStageName())->second;
							}
						}
					}
				}
			}
			connected = true;
		}
		if (AP_GetConnectionStatus() != AP_ConnectionStatus::Authenticated) {
			connected = false;
			return;
		}
		if (!manager->GetGameObject("Sonic")) {
			sonicDied = true;
			return;
		}
		auto* levelInfo = manager->GetService<app::level::LevelInfo>();
		if (strcmp(levelInfo->stageData->name.c_str(), "w1r03")  != 0 && strcmp(levelInfo->stageData->name.c_str(), "w2r01") != 0 && strcmp(levelInfo->stageData->name.c_str(), "w3r01") != 0 && strcmp(levelInfo->stageData->name.c_str(), "w1r04") != 0) {
			//printf(levelInfo->GetStageName());
			sonicDied = true;
		}
		if (manager->GetService<app::save::SaveManager>())
		{
			app::save::SaveManager* savemgr = hh::game::GameManager::GetInstance()->GetService<app::save::SaveManager>();

			app::save::SaveInterface* saveInt = savemgr->saveInterface;
			app::save::GameData* gameData = saveInt->GetGameDataAccessor().data;
			if (manager->GetGameObject("Sonic")) {
				app::player::GOCPlayerBlackboard* sonicBlackboard = manager->GetGameObject("Sonic")->GetComponent<app::player::GOCPlayerBlackboard>();
				for (auto& content : sonicBlackboard->blackboard->contents) {
					if (content->GetNameHash() == csl::ut::HashString("BlackboardStatus")) {
						app::player::BlackboardStatus& yippie = static_cast<app::player::BlackboardStatus&>(*content);
						for (std::vector<app::player::BlackboardStatus::CombatFlag>::iterator it = skillVector.begin(); it != skillVector.end(); it++) {
							yippie.SetCombatFlag(*it, unlockedSkillsMap.find(*it)->second);
						}
					}
				}
			}
			if (textCounter > 120) {
				if (!apMessageQueue.empty()) {
					if (auto* overlayService = manager->GetService<app::ui::UIOverlayService>()) {
						auto* allocator = manager->GetAllocator();
						auto* request = app::ui::RequestOverlayCaption::Create(allocator);
						auto* caption = request->captions.Add({ .allocator = allocator });

						caption->label.copyFrom("archipelago_item_recieved");
						caption->duration = 2.0f;
						request->unk206 = 3;
						request->AddVariable({ .allocator = allocator })->SetUntranslatedValue("archipelago_item", itemToStringMap.find(apMessageQueue.front())->second.c_str());
						overlayService->QueueBeginRequest(request);
						apMessageQueue.pop();
					}
					textCounter = 0;
				}
			}
			//Kronos Island
			if (strcmp(levelInfo->GetStageName(), "w1r03") == 0) {
				if (!test) {
					test = true;
				}
				hh::game::ObjectWorldChunk* objChunk = manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0];
				if(sonicDied || kronosUnlockedMapChanged) {
					if (kronosSequnceItem.size() > 0) {
						kronosSequnceItem.clear();
						kronosPortalBit.clear();
						kronosStorageKey.clear();
						kronosNewKoco.clear();
						kronosMusicNote.clear();
					}
					std::vector<hh::game::ObjectData*> sequenceItemVector;
					for (int i = 0; i < objChunk->GetObjectStatuses().size(); i++) {
						hh::game::ObjectData *data = objChunk->GetObjectStatuses()[i].objectData;
						if (data) {
							if (strcmp(data->gameObjectClass, "SequenceItem") == 0) {
								kronosSequnceItem.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "PortalBit") == 0) {
								kronosPortalBit.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "StorageKey") == 0) {
								kronosStorageKey.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "KodamaNewForm") == 0) {
								kronosNewKoco.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "MusicMemory") == 0) {
								kronosMusicNote.emplace_back(data);
							}
							else if(strcmp(data->gameObjectClass, "DroppedItem") == 0){
								auto* yippie = data->spawnerData;
								auto* lootBug = static_cast<heur::rfl::ObjDroppedItemSpawner*>(yippie);
								lootBug->viewItemNum = 1;
							}
							else if (strcmp(data->gameObjectClass, "FishCoin") == 0) {
								kronosPurpleCoins.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "Kodama") == 0) {
								kronosKocoSanity.emplace_back(data);
							}
						}
					}
					int i = 0;
					for (std::vector<pair<string, bool>>::iterator it = unlockedKronosStages.begin(); it != unlockedKronosStages.end(); it++) {
						if (it->second == true) {
							//printf("stagecode: %s\n",randomKronosStages.at(i).data());
							unlockStages(manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0]->GetObjectDataByName(it->first.c_str()).objectData, manager, randomKronosStages.at(i), manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0]->GetAllocator());
						}
						else {
							lockCyberspace(manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0]->GetObjectDataByName(it->first.c_str()).objectData, randomKronosStages.at(i), manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0]->GetAllocator());
						}
						i++;
					}
					kronosUnlockedMapChanged = false;
				}
				if (memTokenSanity) {
					kronosMemCheck(kronosSequnceItem, objChunk);
				}
				kronosDroppedItemCheck(manager);
				kronosDroppedGear(kronosPortalBit, objChunk);
				kronosDroppedKey(kronosStorageKey, objChunk);
				kronosMusicCheck(kronosMusicNote, objChunk);
				kronosNewKocoCheck(kronosNewKoco, objChunk);
				kronosPurpleCoinCheck(kronosPurpleCoins, objChunk);
				kronosKocoCheck(kronosKocoSanity, objChunk);
				kronosMapCheck(manager);
				if (hh::game::GameManager::GetInstance()->GetService<hh::dv::DiEventManager>()) {
					hh::dv::DiEventManager* evtMngr = hh::game::GameManager::GetInstance()->GetService<hh::dv::DiEventManager>();
					if (evtMngr->GetDvSceneControl()) {
						//Blue
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1120") == 0 && !ga1120) {
							ga1120 = true;
							AP_SendItem(11000);
						}
						//Red
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1134") == 0 && !ga1134) {
							ga1134 = true;
							AP_SendItem(11001);
						}
						//Green
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("qe1080") == 0 && !qe1080) {
							qe1080 = true;
							AP_SendItem(11002);
						}
						//Yellow
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1136") == 0 && !ga1136) {
							ga1136 = true;
							AP_SendItem(11003);
						}
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("qe1110") == 0 && !qe1100) {
							qe1100 = true;
							AP_SendItem(11004);
						}
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1125") == 0 && !ga1125) {
							ga1125 = true;
							AP_SendItem(11005);
						}
					}
				}
				if (manager->GetGameObject("ChaosEmeraldStorage1")) {
					contactRange(manager->GetGameObject("ChaosEmeraldStorage1"), kronosKeys, 2);
				}
				if (manager->GetGameObject("ChaosEmeraldStorage3")) {
					contactRange(manager->GetGameObject("ChaosEmeraldStorage3"), kronosKeys, 5);
				}
				if (manager->GetGameObject("ChaosEmeraldStorage0")) {
					contactRange(manager->GetGameObject("ChaosEmeraldStorage0"), kronosKeys, 12);
				}
				if (manager->GetGameObject("ChaosEmeraldStorage2")) {
					contactRange(manager->GetGameObject("ChaosEmeraldStorage2"), kronosKeys, 20);
				}
				int gearDiff = kronosGears - gameData->worldFlags.worldDatas[0].byteFlags[1];
				if (gearDiff > 0 && !kRecievedGear) {
					for (int i = 0; i < gearDiff; i++) {
						kronosGears--;
					}
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
			if (strcmp(levelInfo->GetStageName(), "w2r01") == 0) {
				hh::game::ObjectWorldChunk* objChunk = manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0];
				if (sonicDied || aresUnlockedMapChanged) {
					if (aresSequnceItem.size() > 0) {
						aresSequnceItem.clear();
						aresPortalBit.clear();
						aresStorageKey.clear();
						aresNewKoco.clear();
						aresMusicNote.clear();
					}
					std::vector<hh::game::ObjectData*> sequenceItemVector;
					for (int i = 0; i < objChunk->GetObjectStatuses().size(); i++) {
						hh::game::ObjectData* data = objChunk->GetObjectStatuses()[i].objectData;
						if (data) {
							if (strcmp(data->gameObjectClass, "SequenceItem") == 0) {
								aresSequnceItem.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "PortalBit") == 0) {
								aresPortalBit.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "StorageKey") == 0) {
								aresStorageKey.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "KodamaNewForm") == 0) {
								aresNewKoco.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "MusicMemory") == 0) {
								aresMusicNote.emplace_back(data);
							}
						}
					}
					int i = 0;
					for (std::vector<pair<string, bool>>::iterator it = unlockedAresStages.begin(); it != unlockedAresStages.end(); it++) {
						if (it->second == true) {
							//printf("stagecode: %s\n",randomKronosStages.at(i).data());
							unlockStages(manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0]->GetObjectDataByName(it->first.c_str()).objectData, manager, randomAresStages.at(i), manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0]->GetAllocator());
						}
						else {
							lockCyberspace(manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0]->GetObjectDataByName(it->first.c_str()).objectData, randomAresStages.at(i), objChunk->GetAllocator());
						}
						i++;
					}
					aresUnlockedMapChanged = false;
				}
				if (memTokenSanity) {
					aresMemCheck(aresSequnceItem, objChunk);
				}
				aresDroppedGear(aresPortalBit, objChunk);
				aresDroppedKey(aresStorageKey, objChunk);
				aresDroppedItemCheck(manager);
				aresMapCheck(manager);
				aresMusicCheck(aresMusicNote, objChunk);
				aresNewKocoCheck(aresNewKoco, objChunk);
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
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga2124") == 0 && !ga2120) {
							ga2120 = true;
							AP_SendItem(21000);
						}
						//Red
						else if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga2134") == 0 && !ga2134) {
							ga2134 = true;
							AP_SendItem(21001);
						}
						//Green
						else if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("qe2080") == 0 && !qe2080) {
							qe2080 = true;
							AP_SendItem(21002);
						}
						//Yellow
						else if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga2136") == 0 && !ga2136) {
							ga2136 = true;
							AP_SendItem(21003);
						}
						//Cyan
						else if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("qe2135") == 0 && !qe2135) {
							qe2135 = true;
							AP_SendItem(21004);
						}
						//White
						else if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga2135") == 0 && !ga2135) {
							ga2135 = true;
							AP_SendItem(21005);
						}
					}
				}
				if (manager->GetGameObject("ChaosEmeraldStorage0")) {
					contactRange(manager->GetGameObject("ChaosEmeraldStorage0"), aresKeys, 7);
				}
				if (manager->GetGameObject("ChaosEmeraldStorage1")) {
					contactRange(manager->GetGameObject("ChaosEmeraldStorage1"), aresKeys, 14);
				}
				if (manager->GetGameObject("ChaosEmeraldStorage2")) {
					contactRange(manager->GetGameObject("ChaosEmeraldStorage2"), aresKeys, 17);
				}
				if (manager->GetGameObject("ChaosEmeraldStorage3")) {
					contactRange(manager->GetGameObject("ChaosEmeraldStorage3"), aresKeys, 24);
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
			if (strcmp(levelInfo->GetStageName(), "w3r01") == 0) {
				hh::game::ObjectWorldChunk* objChunk = manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0];
				if (sonicDied || chaosUnlockedMapChanged) {
					if (chaosSequnceItem.size() > 0) {
						chaosSequnceItem.clear();
						chaosPortalBit.clear();
						chaosStorageKey.clear();
						chaosNewKoco.clear();
						chaosMusicNote.clear();
					}
					std::vector<hh::game::ObjectData*> sequenceItemVector;
					for (int i = 0; i < objChunk->GetObjectStatuses().size(); i++) {
						hh::game::ObjectData* data = objChunk->GetObjectStatuses()[i].objectData;
						if (data) {
							if (strcmp(data->gameObjectClass, "SequenceItem") == 0) {
								chaosSequnceItem.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "PortalBit") == 0) {
								chaosPortalBit.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "StorageKey") == 0) {
								chaosStorageKey.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "KodamaNewForm") == 0) {
								chaosNewKoco.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "MusicMemory") == 0) {
								chaosMusicNote.emplace_back(data);
							}
						}
					}
					int i = 0;
					for (std::vector<pair<string, bool>>::iterator it = unlockedChaosStages.begin(); it != unlockedChaosStages.end(); it++) {
						if (it->second == true) {
							//printf("stagecode: %s\n",randomKronosStages.at(i).data());
							unlockStages(manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0]->GetObjectDataByName(it->first.c_str()).objectData, manager, randomChaosStages.at(i), manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0]->GetAllocator());
						}
						else {
							lockCyberspace(manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0]->GetObjectDataByName(it->first.c_str()).objectData, randomChaosStages.at(i), objChunk->GetAllocator());
						}
						i++;
					}
					chaosUnlockedMapChanged = false;
				}
				if (memTokenSanity) {
					chaosMemCheck(chaosSequnceItem, objChunk);
				}
				chaosDroppedItemCheck(manager);
				chaosDroppedGear(chaosPortalBit, objChunk);
				chaosDroppedKey(chaosStorageKey, objChunk);
				chaosMapCheck(manager);
				chaosMusicCheck(chaosMusicNote, objChunk);
				chaosNewKocoCheck(chaosNewKoco, objChunk);
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
							AP_SendItem(31000);
						}
						//Red
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga3134") == 0 && !ga3134) {
							ga3134 = true;
							AP_SendItem(31001);
						}
						//Green
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("qe3090") == 0 && !qe3090) {
							qe3090 = true;
							AP_SendItem(31002);
						}
						//Yellow
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga3136") == 0 && !ga3136) {
							ga3136 = true;
							AP_SendItem(31003);
						}
						//Cyan
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("qe3150") == 0 && !qe3150) {
							qe3150 = true;
							AP_SendItem(31004);
						}
						//White
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga3135") == 0 && !ga3135) {
							ga3135 = true;
							AP_SendItem(31005);
						}
					}
				}
				if (manager->GetGameObject("ChaosEmeraldStorage0")) {
					contactRange(manager->GetGameObject("ChaosEmeraldStorage0"), chaosKeys, 7);
				}
				if (manager->GetGameObject("ChaosEmeraldStorage1")) {
					contactRange(manager->GetGameObject("ChaosEmeraldStorage1"), chaosKeys, 14);
				}
				if (manager->GetGameObject("ChaosEmeraldStorage2")) {
					contactRange(manager->GetGameObject("ChaosEmeraldStorage2"), chaosKeys, 21);
				}
				if (manager->GetGameObject("ChaosEmeraldStorage3")) {
					contactRange(manager->GetGameObject("ChaosEmeraldStorage3"), chaosKeys, 25);
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
			if (strcmp(levelInfo->GetStageName(), "w1r04") == 0) {
				if (firstVisit) {
					ga1132 = false;
					ga1134 = false;
					ga1136 = false;
					ga1130 = false;
					firstVisit = false;
				}
				hh::game::ObjectWorldChunk* objChunk = manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0];
				if (sonicDied || ouranosUnlockedMapChanged) {
					if (chaosSequnceItem.size() > 0) {
						ouranosSequnceItem.clear();
						ouranosPortalBit.clear();
						ouranosStorageKey.clear();
						ouranosNewKoco.clear();
						ouranosMusicNote.clear();
					}
					std::vector<hh::game::ObjectData*> sequenceItemVector;
					for (int i = 0; i < objChunk->GetObjectStatuses().size(); i++) {
						hh::game::ObjectData* data = objChunk->GetObjectStatuses()[i].objectData;
						if (data) {
							if (strcmp(data->gameObjectClass, "SequenceItem") == 0) {
								ouranosSequnceItem.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "PortalBit") == 0) {
								ouranosPortalBit.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "StorageKey") == 0) {
								ouranosStorageKey.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "KodamaNewForm") == 0) {
								ouranosNewKoco.emplace_back(data);
							}
							else if (strcmp(data->gameObjectClass, "MusicMemory") == 0) {
								ouranosMusicNote.emplace_back(data);
							}
						}
					}
					int i = 0;
					for (std::vector<pair<string, bool>>::iterator it = unlockedOuranosStages.begin(); it != unlockedOuranosStages.end(); it++) {
						if (it->second == true) {
							//printf("stagecode: %s\n",randomKronosStages.at(i).data());
							unlockStages(objChunk->GetObjectDataByName(it->first.c_str()).objectData, manager, randomOuranosStages.at(i), objChunk->GetAllocator());
						}
						else {
							lockCyberspace(objChunk->GetObjectDataByName(it->first.c_str()).objectData, randomOuranosStages.at(i), objChunk->GetAllocator());
						}
						i++;
					}
					ouranosUnlockedMapChanged = false;
				}
				if (memTokenSanity) {
					ouranosMemCheck(ouranosSequnceItem, objChunk);
				}
				ouranosDroppedItemCheck(manager);
				ouranosDroppedGear(ouranosPortalBit, objChunk);
				ouranosDroppedKey(ouranosStorageKey, objChunk);
				ouranosMapCheck(manager);
				ouranosMusicCheck(ouranosMusicNote, objChunk);
				ouranosNewKocoCheck(ouranosNewKoco, objChunk);

				int gearDiff = ouranosGears - gameData->worldFlags.worldDatas[4].byteFlags[1];
				if (gearDiff > 0 && !oRecievedGear) {
					for (int i = 0; i < gearDiff; i++) {
						ouranosGears--;
					}
				}
				if (hh::game::GameManager::GetInstance()->GetService<hh::dv::DiEventManager>()) {
					hh::dv::DiEventManager* evtMngr = hh::game::GameManager::GetInstance()->GetService<hh::dv::DiEventManager>();
					if (evtMngr->GetDvSceneControl()) {

						printf("%s", evtMngr->GetDvSceneControl()->GetCutsceneName());
						//evtMngr->GetDvSceneControl()->diEvtMgr.
						//Blue
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1130") == 0 && !ga1130) {
							ga1130 = true;
							AP_SendItem(41000);
						}
						//Red
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1134") == 0 && !ga1134) {
							ga2134 = true;
							AP_SendItem(41001);
						}
						//Green
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1132") == 0 && !ga1132) {
							ga1132 = true;
							AP_SendItem(41002);
						}
						//Yellow
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1136") == 0 && !ga1136) {
							ga1136 = true;
							AP_SendItem(41003);
						}
						//Cyan
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1131") == 0 && !ga1131) {
							ga1131 = true;
							AP_SendItem(41004);
						}
						//White
						if (evtMngr->GetDvSceneControl()->cutsceneName.Compare("ga1135") == 0 && !ga1135) {
							ga1135 = true;
							AP_SendItem(41005);
						}
					}
					if (manager->GetGameObject("ChaosEmeraldStorage0")) {
						contactRange(manager->GetGameObject("ChaosEmeraldStorage0"), ouranosKeys, 3);
					}
					if (manager->GetGameObject("ChaosEmeraldStorage1")) {
						contactRange(manager->GetGameObject("ChaosEmeraldStorage1"), ouranosKeys, 9);
					}
					if (manager->GetGameObject("ChaosEmeraldStorage3")) {
						contactRange(manager->GetGameObject("ChaosEmeraldStorage3"), ouranosKeys, 23);
					}
					if (manager->GetGameObject("ChaosEmeraldStorage5")) {
						contactRange(manager->GetGameObject("ChaosEmeraldStorage5"), ouranosKeys, 33);
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
			if (manager->GetGameObject("Sonic") && strcmp(levelInfo->GetStageName(), "w1r03") == 0 && strcmp(levelInfo->GetStageName(), "w1r04") == 0 && strcmp(levelInfo->GetStageName(), "w2r01") == 0 && strcmp(levelInfo->GetStageName(), "w3r01") == 0) {
				sonicDied = false;
			}
			cyberspaceChecks(gameData, randomizedOrder);
			sendChecks();
			
			if (increaseRedSeeds) {
				gameData->character.numPowerSeeds += 1;
				increaseRedSeeds = false;
			}
			if (increaseBlueSeeds) {
				gameData->character.numGuardSeeds += 1;
				increaseBlueSeeds = false;
			}

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
void getItem(int id, bool alert) {

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
		else if (id == KronosMemTreasure) {
			kronosMemToken += 8;
		}
		else if (id == AresMemTreasure) {
			aresMemToken += 8;
		}
		else if (id == ChaosMemTreasure) {
			chaosMemToken += 8;
		}
		else if (id == OuranosMemTreasure) {
			ouranosMemToken += 8;
		}
		else if (id == RedPowerSeed) {
			increaseRedSeeds = true;
		}
		else if (id == BluePowerSeed) {
			increaseBlueSeeds = true;
		}
		else if (id == Kocos20) {
			kocos += 20;
		}
		if (id == Unlocked1dash2) {
			unlockedKronosStages.at(0).second = true;
			kronosUnlockedMapChanged = true;
		}
		if (id == Unlocked1dash3) {
			unlockedKronosStages.at(1).second = true;
			kronosUnlockedMapChanged = true;
		}
		if (id == Unlocked1dash4) {
			unlockedKronosStages.at(2).second = true;
			kronosUnlockedMapChanged = true;
		}
		if (id == Unlocked1dash5) {
			unlockedKronosStages.at(3).second = true;
			kronosUnlockedMapChanged = true;
		}
		if (id == Unlocked1dash6) {
			unlockedKronosStages.at(4).second = true;
			kronosUnlockedMapChanged = true;
		}
		if (id == Unlocked1dash7) {
			unlockedKronosStages.at(5).second = true;
			kronosUnlockedMapChanged = true;
		}
		if (id == Unlocked2dash1) {
			unlockedAresStages.at(0).second = true;
			aresUnlockedMapChanged = true;
		}
		if (id == Unlocked2dash2) {
			unlockedAresStages.at(1).second = true;
			aresUnlockedMapChanged = true;
		}
		if (id == Unlocked2dash3) {
			unlockedAresStages.at(2).second = true;
			aresUnlockedMapChanged = true;
		}
		if (id == Unlocked2dash4) {
			unlockedAresStages.at(3).second = true;
			aresUnlockedMapChanged = true;
		}
		if (id == Unlocked2dash5) {
			unlockedAresStages.at(4).second = true;
			aresUnlockedMapChanged = true;
		}
		if (id == Unlocked2dash6) {
			unlockedAresStages.at(5).second = true;
			aresUnlockedMapChanged = true;
		}
		if (id == Unlocked2dash7) {
			unlockedAresStages.at(6).second = true;
			aresUnlockedMapChanged = true;
		}
		if (id == Unlocked3dash1) {
			unlockedChaosStages.at(0).second = true;
			chaosUnlockedMapChanged = true;
		}
		if (id == Unlocked3dash2) {
			unlockedChaosStages.at(1).second = true;
			chaosUnlockedMapChanged = true;
		}
		if (id == Unlocked3dash3) {
			unlockedChaosStages.at(2).second = true;
			chaosUnlockedMapChanged = true;
		}
		if (id == Unlocked3dash4) {
			unlockedChaosStages.at(3).second = true;
			chaosUnlockedMapChanged = true;
		}
		if (id == Unlocked3dash5) {
			unlockedChaosStages.at(4).second = true;
			chaosUnlockedMapChanged = true;
		}
		if (id == Unlocked3dash6) {
			unlockedChaosStages.at(5).second = true;
			chaosUnlockedMapChanged = true;
		}
		if (id == Unlocked3dash7) {
			unlockedChaosStages.at(6).second = true;
			chaosUnlockedMapChanged = true;
		}
		if (id == Unlocked4dash1) {
			unlockedOuranosStages.at(0).second = true;
			ouranosUnlockedMapChanged = true;
		}
		if (id == Unlocked4dash2) {
			unlockedOuranosStages.at(1).second = true;
			ouranosUnlockedMapChanged = true;
		}
		if (id == Unlocked4dash3) {
			unlockedOuranosStages.at(2).second = true;
			ouranosUnlockedMapChanged = true;
		}
		if (id == Unlocked4dash4) {
			unlockedOuranosStages.at(3).second = true;
			ouranosUnlockedMapChanged = true;
		}
		if (id == Unlocked4dash5) {
			unlockedOuranosStages.at(4).second = true;
			ouranosUnlockedMapChanged = true;
		}
		if (id == Unlocked4dash6) {
			unlockedOuranosStages.at(5).second = true;
			ouranosUnlockedMapChanged = true;
		}
		if (id == Unlocked4dash7) {
			unlockedOuranosStages.at(6).second = true;
			ouranosUnlockedMapChanged = true;
		}
		if (id == Unlocked4dash8) {
			unlockedOuranosStages.at(6).second = true;
			ouranosUnlockedMapChanged = true;
		}
		if (id == Unlocked4dash9) {
			unlockedOuranosStages.at(6).second = true;
			ouranosUnlockedMapChanged = true;
		}
		if (id == PhantomRush) {
			unlockedSkillsMap.find(app::player::BlackboardStatus::CombatFlag::PHANTOM_RUSH)->second = true;
		}
		if (id == AirTrick) {
			unlockedSkillsMap.find(app::player::BlackboardStatus::CombatFlag::AIR_TRICK)->second = true;
		}
		if (id == StompAttack) {
			unlockedSkillsMap.find(app::player::BlackboardStatus::CombatFlag::STOMP_ATTACK)->second = true;
		}
		if (id == QuickCyloop) {
			unlockedSkillsMap.find(app::player::BlackboardStatus::CombatFlag::QUICK_CYLOOP)->second = true;
		}
		if (id == SonicBoom) {
			unlockedSkillsMap.find(app::player::BlackboardStatus::CombatFlag::SONIC_BOOM)->second = true;
		}
		if (id == SpinDash) {
			unlockedSkillsMap.find(app::player::BlackboardStatus::CombatFlag::SPIN_DASH)->second = true;
		}
		if (id == Parry) {
			unlockedSkillsMap.find(app::player::BlackboardStatus::CombatFlag::PARRY)->second = true;
		}
		if (id == HomingShot) {
			unlockedSkillsMap.find(app::player::BlackboardStatus::CombatFlag::HOMING_SHOT)->second = true;
		}
		if (id == SpinSlash) {
			unlockedSkillsMap.find(app::player::BlackboardStatus::CombatFlag::SPIN_SLASH)->second = true;
		}
		if (id == RecoverySmash) {
			unlockedSkillsMap.find(app::player::BlackboardStatus::CombatFlag::RECOVERY_SMASH)->second = true;
		}
		if (id == CycloneKick) {
			unlockedSkillsMap.find(app::player::BlackboardStatus::CombatFlag::CYCLONE_KICK)->second = true;
		}
		if (id == CrossSlash) {
			unlockedSkillsMap.find(app::player::BlackboardStatus::CombatFlag::CROSS_SLASH)->second = true;
		}
		if (id == GrandSlam) {
			unlockedSkillsMap.find(app::player::BlackboardStatus::CombatFlag::GRAND_SLAM)->second = true;
		}
		apMessageQueue.push(id);
}
void getEmeralds(int emeralds, app::save::GameData* gameData) {
	if (emeralds == 1) {
		gameData->character.hasChaosEmeralds = 1;
		gameData->character.obtainChaosEmeralds = 1;
	}
	else if (emeralds == 2) {
		gameData->character.hasChaosEmeralds = 17;
		gameData->character.obtainChaosEmeralds = 17;
	}
	else if (emeralds == 3) {
		gameData->character.hasChaosEmeralds = 21;
		gameData->character.obtainChaosEmeralds = 21;
	}
	else if (emeralds == 4) {
		gameData->character.hasChaosEmeralds = 85;
		gameData->character.obtainChaosEmeralds = 85;
	}
	else if (emeralds == 5) {
		gameData->character.hasChaosEmeralds = 87;
		gameData->character.obtainChaosEmeralds = 87;
	}
	else if (emeralds == 6) {
		gameData->character.hasChaosEmeralds = 119;
		gameData->character.obtainChaosEmeralds = 119;
	}
	else if (emeralds == 0) {
		gameData->character.hasChaosEmeralds = 0;
		gameData->character.obtainChaosEmeralds = 0;
	}
}
void contactRange(hh::game::GameObject* obj, int keys, int required) {
	auto* contact = obj->GetComponent<app::game::GOCContact>();
	if (keys < required) {
		contact->range = 0;
	}
	else if (keys >= required) {
		contact->range = 5;
	}
}
void unlockStages(hh::game::ObjectData* objData, hh::game::GameManager* manager, string stageCode, ucsl::memory::IAllocator *bruh) {
	if (objData) {
		auto* portalData = static_cast<heur::rfl::ObjPortalSpawner*>(objData->spawnerData);
		if (portalData->portalBitActivateCount > 0 || portalData->stageCode.Compare(stageCode.c_str()) != 0) {
			portalData->portalBitActivateCount = 0;
			portalData->stageCode.Set(stageCode.data(), 6, bruh);
			if (manager->GetGameObject(objData->name)) {
				hh::game::GameObject* portal = manager->GetGameObject(objData->name);
				manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0]->Despawn(objData);
				manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0]->ShutdownPendingObjects();
				manager->GetService<app::game::ObjectWorldService>()->objectWorld->worldChunks[0]->Spawn(objData);
			}
		}
	}
}
void lockCyberspace(hh::game::ObjectData* objData, string stageCode, ucsl::memory::IAllocator *bruh) {
	if (objData) {
		auto* portalData = static_cast<heur::rfl::ObjPortalSpawner*>(objData->spawnerData);
		portalData->portalBitActivateCount = 999;
		portalData->stageCode.Set(stageCode.data(), 6, bruh);
	}
	//portalData->stageCode.SetDataUserFree(portalData->stageCode.GetAllocator(), stageCode.data());
}
void getSlotData() {
	AP_RegisterSlotDataIntCallback("Goal", &set_goal);
}
void setCyberspaceTimes(bool enabled) {
	cyberspaceTimes = enabled;
	printf("Cyberspace Times: %d\n", enabled);
}
void setMemoryTokenSanity(bool enabled) {
	memTokenSanity = enabled;
	printf("Token Sanity: %d\n", enabled);
}
void setMemoryTokenBundle(bool enabled) {
	memTokenBundle = enabled;
	printf("Bundle: %d\n", enabled);
}
