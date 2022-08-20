#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EDeathCause : uint8 
{
	FallDamage,
	Pistol,
	Shotgun,
	Rifle,
	SMG,
	Sniper,
	SniperNoScope,
	Melee,
	InfinityBlade,
	Grenade,
	C4,
	GrenadeLauncher,
	RocketLauncher,
	Minigun,
	Bow,
	Trap,
	DBNOTimeout,
	Banhammer,
	RemovedFromGame,
	MassiveMelee,
	MassiveDiveBomb,
	MassiveRanged,
	Vehicle,
	ShoppingCart,
	ATK,
	QuadCrasher,
	Biplane,
	BiplaneGun,
	LMG,
	GasGrenade,
	InstantEnvironmental,
	InstantEnvironmentalFellOutOfWorld,
	InstantEnvironmentalUnderLandscape,
	Turret,
	ShipCannon,
	Cube,
	Balloon,
	StormSurge,
	Lava,
	BasicFiend,
	EliteFiend,
	RangedFiend,
	BasicBrute,
	EliteBrute,
	MegaBrute,
	SilentSwitchingToSpectate,
	LoggedOut,
	TeamSwitchSuicide,
	WonMatch,
	Unspecified,
	EDeathCause_MAX,
};
