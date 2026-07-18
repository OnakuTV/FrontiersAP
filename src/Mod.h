#include <string>
#include <vector>
using namespace std;
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
	KronosMemTreasure = offset + 36,
	AresMemTreasure = offset + 37,
	ChaosMemTreasure = offset + 38,
	OuranosMemTreasure = offset + 39,
	RedPowerSeed = offset + 40,
	BluePowerSeed = offset + 41,
	Kocos20 = offset + 42,
	PhantomRush = offset + 43,
	AirTrick = offset + 44,
	StompAttack = offset + 45,
	QuickCyloop = offset + 46,
	SpinDash = offset + 47,
	SonicBoom = offset + 48,
	Parry = offset + 49,
	HomingShot = offset + 50,
	SpinSlash = offset + 51,
	RecoverySmash = offset + 52,
	CycloneKick = offset + 53,
	CrossSlash = offset + 54,
	GrandSlam = offset + 55,
	Unlocked1dash2 = offset + 56,
	Unlocked1dash3 = offset + 57,
	Unlocked1dash4 = offset + 58,
	Unlocked1dash5 = offset + 59,
	Unlocked1dash6 = offset + 60,
	Unlocked1dash7 = offset + 61,
	Unlocked2dash1 = offset + 62,
	Unlocked2dash2 = offset + 63,
	Unlocked2dash3 = offset + 64,
	Unlocked2dash4 = offset + 65,
	Unlocked2dash5 = offset + 66,
	Unlocked2dash6 = offset + 67,
	Unlocked2dash7 = offset + 68,
	Unlocked3dash1 = offset + 69,
	Unlocked3dash2 = offset + 70,
	Unlocked3dash3 = offset + 71,
	Unlocked3dash4 = offset + 72,
	Unlocked3dash5 = offset + 73,
	Unlocked3dash6 = offset + 74,
	Unlocked3dash7 = offset + 75,
	Unlocked4dash1 = offset + 76,
	Unlocked4dash2 = offset + 78,
	Unlocked4dash3 = offset + 79,
	Unlocked4dash4 = offset + 80,
	Unlocked4dash5 = offset + 81,
	Unlocked4dash6 = offset + 82,
	Unlocked4dash7 = offset + 83,
	Unlocked4dash8 = offset + 84,
	Unlocked4dash9 = offset + 85,
	Victory = offset + 86,

	WaterTrap = offset + 200,
	RingTrap = offset + 201,
	AutorunTrap = offset + 202,
	FireTrap = offset + 203,
};

std::map <int, string> itemToStringMap = {
{kMemToken,"Kronos Memory Token"},
{kPortalGear,"Kronos Portal Gear"},
{kVaultKey,"Kronos Vault Key"},
{aMemToken,"Ares Memory Token"},
{aPortalGear,"Ares Portal Gear"},
{aVaultKey,"Ares Vault Key"},
{cMemToken,"Chaos Memory Token"},
{cPortalGear,"Chaos Portal Gear"},
{cVaultKey,"Chaos Vault Key"},
{oMemToken,"Ouranos Memory Token"},
{oPortalGear,"Ouranos Portal Gear"},
{oVaultKey,"Ouranos Vault Key"},
{KronosBlueChaosEmerald,"Progressive Chaos Emerald"},
{KronosRedChaosEmerald,"Kronos Red Chaos Emerald"},
{KronosGreenChaosEmerald,"Kronos Green Chaos Emerald"},
{KronosYellowChaosEmerald,"Kronos Yellow Chaos Emerald"},
{KronosCyanChaosEmerald,"Kronos Cyan Chaos Emerald"},
{KronosWhiteChaosEmerald,"Kronos White Chaos Emerald"},
{AresBlueChaosEmerald,"Ares Blue Chaos Emerald"},
{AresRedChaosEmerald,"Ares Red Chaos Emerald"},
{AresGreenChaosEmerald,"Ares Green Chaos Emerald"},
{AresYellowChaosEmerald,"Ares Yellow Chaos Emerald"},
{AresCyanChaosEmerald,"Ares Cyan Chaos Emerald"},
{AresWhiteChaosEmerald,"Ares White Chaos Emerald"},
{ChaosBlueChaosEmerald,"Chaos Blue Chaos Emerald"},
{ChaosRedChaosEmerald,"Chaos Red Chaos Emerald"},
{ChaosGreenChaosEmerald,"Chaos Green Chaos Emerald"},
{ChaosYellowChaosEmerald,"Chaos Yellow Chaos Emerald"},
{ChaosCyanChaosEmerald,"Chaos Cyan Chaos Emerald"},
{ChaosWhiteChaosEmerald,"Chaos White Chaos Emerald"},
{OuranosBlueChaosEmerald,"Ouranos Blue Chaos Emerald"},
{OuranosRedChaosEmerald,"Ouranos Red Chaos Emerald"},
{OuranosGreenChaosEmerald,"Ouranos Green Chaos Emerald"},
{OuranosYellowChaosEmerald,"Ouranos Yellow Chaos Emerald"},
{OuranosCyanChaosEmerald,"Ouranos Cyan Chaos Emerald"},
{OuranosWhiteChaosEmerald,"Ouranos White Chaos Emerald"},
{KronosMemTreasure,"Kronos Memory Treasure"},
{AresMemTreasure,"Ares Memory Treasure"},
{ChaosMemTreasure,"Chaos Memory Treasure"},
{OuranosMemTreasure,"Ouranos Memory Treasure"},
{RedPowerSeed,"Red Power Seed"},
{BluePowerSeed,"Blue Power Seed"},
{Kocos20,"Nothing!"},
{PhantomRush,"Phantom Rush"},
{AirTrick,"Air Trick"},
{StompAttack,"Stomp Attack"},
{QuickCyloop,"Quick Cyloop"},
{SpinDash,"Spin Dash"},
{SonicBoom,"Sonic Boom"},
{Parry,"Parry"},
{HomingShot,"Homing Shot"},
{SpinSlash,"Spin Slash"},
{RecoverySmash,"Recovery Smash"},
{CycloneKick,"Cyclone Kick"},
{CrossSlash,"Cross Slash"},
{GrandSlam,"Grand Slam"},
{Unlocked1dash2,"1-2 Portal Unlocked"},
{Unlocked1dash3,"1-3 Portal Unlocked"},
{Unlocked1dash4,"1-4 Portal Unlocked"},
{Unlocked1dash5,"1-5 Portal Unlocked"},
{Unlocked1dash6,"1-6 Portal Unlocked"},
{Unlocked1dash7,"1-7 Portal Unlocked"},
{Unlocked2dash1,"2-1 Portal Unlocked"},
{Unlocked2dash2,"2-2 Portal Unlocked"},
{Unlocked2dash3,"2-3 Portal Unlocked"},
{Unlocked2dash4,"2-4 Portal Unlocked"},
{Unlocked2dash5,"2-5 Portal Unlocked"},
{Unlocked2dash6,"2-6 Portal Unlocked"},
{Unlocked2dash7,"2-7 Portal Unlocked"},
{Unlocked3dash1,"3-1 Portal Unlocked"},
{Unlocked3dash2,"3-2 Portal Unlocked"},
{Unlocked3dash3,"3-3 Portal Unlocked"},
{Unlocked3dash4,"3-4 Portal Unlocked"},
{Unlocked3dash5,"3-5 Portal Unlocked"},
{Unlocked3dash6,"3-6 Portal Unlocked"},
{Unlocked3dash7,"3-7 Portal Unlocked"},
{Unlocked4dash1,"4-1 Portal Unlocked"},
{Unlocked4dash2,"4-2 Portal Unlocked"},
{Unlocked4dash3,"4-3 Portal Unlocked"},
{Unlocked4dash4,"4-4 Portal Unlocked"},
{Unlocked4dash5,"4-5 Portal Unlocked"},
{Unlocked4dash6,"4-6 Portal Unlocked"},
{Unlocked4dash7,"4-7 Portal Unlocked"},
{Unlocked4dash8,"4-8 Portal Unlocked"},
{Unlocked4dash9,"4-9 Portal Unlocked"},
{WaterTrap,"Water Trap"},
{RingTrap,"Ring Trap"},
{AutorunTrap,"Auto Run Trap"},
{FireTrap,"Fire Trap"},
};
vector<hh::game::ObjectData*> kronosSequnceItem;
vector<hh::game::ObjectData*> aresSequnceItem;
vector<hh::game::ObjectData*> chaosSequnceItem;
vector<hh::game::ObjectData*> ouranosSequnceItem;

vector<hh::game::ObjectData*> kronosDroppedItem;
vector<hh::game::ObjectData*> aresDroppedItem;
vector<hh::game::ObjectData*> chaosDroppedItem;
vector<hh::game::ObjectData*> ouranosDroppedItem;

vector<hh::game::ObjectData*> kronosPortalBit;
vector<hh::game::ObjectData*> aresPortalBit;
vector<hh::game::ObjectData*> chaosPortalBit;
vector<hh::game::ObjectData*> ouranosPortalBit;

vector<hh::game::ObjectData*> kronosNewKoco;
vector<hh::game::ObjectData*> aresNewKoco;
vector<hh::game::ObjectData*> chaosNewKoco;
vector<hh::game::ObjectData*> ouranosNewKoco;

vector<hh::game::ObjectData*> kronosStorageKey;
vector<hh::game::ObjectData*> aresStorageKey;
vector<hh::game::ObjectData*> chaosStorageKey;
vector<hh::game::ObjectData*> ouranosStorageKey;

vector<hh::game::ObjectData*> kronosMusicNote;
vector<hh::game::ObjectData*> aresMusicNote;
vector<hh::game::ObjectData*> chaosMusicNote;
vector<hh::game::ObjectData*> ouranosMusicNote;

vector<hh::game::ObjectData*> kronosPurpleCoins;
vector<hh::game::ObjectData*> aresPurpleCoins;
vector<hh::game::ObjectData*> chaosPurpleCoins;
vector<hh::game::ObjectData*> ouranosPurpleCoins;

vector<hh::game::ObjectData*> kronosKocoSanity;
vector<hh::game::ObjectData*> aresKocoSanity;
vector<hh::game::ObjectData*> chaosKocoSanity;
vector<hh::game::ObjectData*> ouranosKocoSanity;

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
int progressiveEmeralds = 0;

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
bool deathlink = false;
bool deathlinkActive = false;
bool deathlinkSent = false;

bool kronosUnlockedMapChanged = true;
bool aresUnlockedMapChanged = true;
bool chaosUnlockedMapChanged = true;
bool ouranosUnlockedMapChanged = true;

int* currentTrap;
std::queue<int> trapQueue;

std::vector<pair<string, bool>> unlockedKronosStages = { {"Portal1", false}, {"Portal7", false},{"Portal4", false}, {"Portal2", false},{"Portal3", false}, {"Portal6", false} };
std::vector<pair<string, bool>> unlockedAresStages = { {"Portal1", false}, {"Portal0", false},{"Portal4", false}, {"Portal2", false},{"Portal5", false}, {"Portal6", false},{"Portal3", false} };
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
"w6d08", "w8d02", "w6d09", "w6d07", "w8d06", "w7d03", "w7d08", "w9d02", "w7d01", "w9d03", "w6d10", "w7d07", "w9d05", "w7d05", "w9d07" };
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
void setKocoSanity(bool);
void setChallengeKoco(bool);
void setMusicSanity(bool);
void setPurpleCoinSanity(bool);
void setDeathlink(bool);