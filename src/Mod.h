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
	KronosKeyBundle = offset + 86,
	AresKeyBundle = offset + 87,
	ChaosKeyBundle = offset + 88,
	OuranosKeyBundle = offset + 89,
	Victory = offset + 90,
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
{KronosBlueChaosEmerald,"Kronos Blue Chaos Emerald"},
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
{Kocos20,"Kocos (20)"},
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
{Unlocked1dash2,"1-2 Unlocked"},
{Unlocked1dash3,"1-3 Unlocked"},
{Unlocked1dash4,"1-4 Unlocked"},
{Unlocked1dash5,"1-5 Unlocked"},
{Unlocked1dash6,"1-6 Unlocked"},
{Unlocked1dash7,"1-7 Unlocked"},
{Unlocked2dash1,"2-1 Unlocked"},
{Unlocked2dash2,"2-2 Unlocked"},
{Unlocked2dash3,"2-3 Unlocked"},
{Unlocked2dash4,"2-4 Unlocked"},
{Unlocked2dash5,"2-5 Unlocked"},
{Unlocked2dash6,"2-6 Unlocked"},
{Unlocked2dash7,"2-7 Unlocked"},
{Unlocked3dash1,"3-1 Unlocked"},
{Unlocked3dash2,"3-2 Unlocked"},
{Unlocked3dash3,"3-3 Unlocked"},
{Unlocked3dash4,"3-4 Unlocked"},
{Unlocked3dash5,"3-5 Unlocked"},
{Unlocked3dash6,"3-6 Unlocked"},
{Unlocked3dash7,"3-7 Unlocked"},
{Unlocked4dash1,"4-1 Unlocked"},
{Unlocked4dash2,"4-2 Unlocked"},
{Unlocked4dash3,"4-3 Unlocked"},
{Unlocked4dash4,"4-4 Unlocked"},
{Unlocked4dash5,"4-5 Unlocked"},
{Unlocked4dash6,"4-6 Unlocked"},
{Unlocked4dash7,"4-7 Unlocked"},
{Unlocked4dash8,"4-8 Unlocked"},
{Unlocked4dash9,"4-9 Unlocked"},
};
vector<hh::game::ObjectData*> kronosSequnceItem;
vector<hh::game::ObjectData*> aresSequnceItem;
vector<hh::game::ObjectData*> chaosSequnceItem;
vector<hh::game::ObjectData*> ouranosSequnceItem;

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