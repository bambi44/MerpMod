#define MOD_ECUID 426B0400B3
#define MOD_DATE 12.02.21.20.26
#include "Gratis.h"
#define MOD_CONFIG Gratis
#define MOD_BUILD Testing
#define MOD_RELEASE 0
#define ECU_CALIBRATION_ID A2ZJ500I
#define ECU_IDENTIFIER 3112485106
/////////////////////
// NonSpecific Rom Info and Routines
/////////////////////

#define dCalId (0x00002000)
#define dEcuId (0x0006229C)
#define dRomHoleStart (0xFFFF8550)
#define pRamHoleStart (0xFFFFAA9C)
#define pRamHoleEnd (0xFFFFA9F0)

/////////////////////
// Switch Hacks
/////////////////////

#define tTipInEnrich (0x000549C0)
#define tCrankingFuelA (0x000546B8)
#define tCrankingFuelB (0x000546CC)
#define tCrankingFuelC (0x000546E0)
#define tCrankingFuelD (0x000546F4)
#define tStartupEnrich2_1A (0x0005D8C2)
#define tStartupEnrich2_1B (0x0005D8E2)
#define tStartupEnrich2_2A (0x0005D902)
#define tStartupEnrich2_2B (0x0005D922)
#define tStartupEnrich3_1A (0x00054708)
#define tStartupEnrich3_1B (0x0005471C)
#define tStartupEnrich3_2A (0x00054730)
#define tStartupEnrich3_2B (0x00054744)

/////////////////////
// Rev Limit Hack
/////////////////////

#define hRevLimDelete (0x0001122C)
#define sRevLimStart (0x00029B54)
#define sRevLimEnd (0x00029B8A)
#define pFlagsRevLim ((unsigned char*)0xFFFFAD58)
#define RevLimBitMask (0x80)

/////////////////////
// Speed Density Hack
/////////////////////

#define hMafCalc (0x000076EC)
#define sMafCalc (0x0000768C)

/////////////////////
// Injector Hack
/////////////////////

#define dInjectorScaling ((float*)0x0005CF14)

/////////////////////
// Cel Hacks
/////////////////////


/////////////////////
// Boost Hacks
/////////////////////


/////////////////////
// WGDC Hacks
/////////////////////


/////////////////////
// Primary Open Loop Fueling Hacks
/////////////////////

#define pPolf4Byte (0xFFFFAC3C)
#define pPolfEnrich (0xFFFFAC3C)

/////////////////////
// Timing Hacks
/////////////////////

#define pBaseTiming (0xFFFFAF40)
#define pKcaIam (0xFFFFB074)

/////////////////////
// Requested Torque Hacks
/////////////////////


/////////////////////
// Spark Cut
/////////////////////


/////////////////////
// Flags-Signals
/////////////////////

#define pResumeFlags ((unsigned char*)0xFFFFA32C)
#define ResumeBitMask ((unsigned char)0x04)
#define pCoastFlags ((unsigned char*)0xFFFFA32C)
#define CoastBitMask ((unsigned char)0x02)
#define pBrakeFlags ((unsigned char*)0xFFFFA32C)
#define BrakeBitMask ((unsigned char)0x08)
#define pClutchFlags ((unsigned char*)0xFFFFA75D)
#define ClutchBitMask ((unsigned char)0x80)

/////////////////////
// NonSpecific Engine params
/////////////////////

#define pFbkc4 ((float*)0xFFFFAFC0)
#define pIam4 ((float*)0xFFFF854C)
#define pEngineSpeed ((float*)0xFFFFA78C)
#define pVehicleSpeed ((float*)0x0004276C)
#define pCoolantTemp ((float*)0x0004274C)
#define pAtmoPress ((float*)0x000427B8)
#define pManifoldAbsolutePressure ((float*)0xFFFFA528)
#define pIntakeAirTemp ((float*)0xFFFF90B8)
#define pMassAirFlow ((float*)0x00042778)
#define pMafSensorVoltage ((short*)0x000427A0)
#define pEngineLoad ((float*)0xFFFFA6AC)
#define pReqTorque ((float*)0xFFFFB114)
#define pThrottlePlate ((float*)0xFFFFB168)
#define pCurrentGear ((unsigned char*)0xFFFFA881)
#define pAf1Res ((float*)0xFFFFA120)

/////////////////////
// OBD Experimental stuff
/////////////////////


/////////////////////
// New Definitions
/////////////////////

#define dLoadSmoothingA (0x00057C7C)
#define dLoadSmoothingB (0x00057C80)
#define dLoadSmoothingFinal (0x00057C84)

/////////////////////
// Memory Reset
/////////////////////

#define sMemoryReset (0x0000EDE4)
#define hMemoryReset (0x0000C968)
#define pMemoryResetLimit (0xFFFFDFFB)
#define hMemoryResetLimit (0x0000EFCC)

