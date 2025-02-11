// Coppyright Igor Rusakov


#include "AbilitySystem/Abilities/AuraFireBolt.h"

#include "AuraGameplayTags.h"


FString UAuraFireBolt::GetDescription(int32 Level)
{
	const int32 Damage = DamageTypes[FAuraGameplayTags::Get().Damage_Fire].GetValueAtLevel(Level);
	if (Level == 1)
	{
		return FString::Printf(TEXT(
			"<Title>FIRE BOLT</>\n\n"
			"<Default>Launched a bolt of fire, exploding on impact and dealing: </>"
			"<Damage>%d</>"
			"<Default> fire damage with a chance to burn</>\n\n"
			"<Small>Level: </>"
			"<Level>%d</>"), Damage, Level);
	}
	else
	{
		return FString::Printf(TEXT(
			"<Title>FIRE BOLT</>\n\n"
			"<Default>Launched %d bolts of fire, exploding on impact and dealing: </>"
			"<Damage>%d</>"
			"<Default> fire damage with a chance to burn</>\n\n"
			"<Small>Level: </>"
			"<Level>%d</>"), FMath::Min(Level, NumProjectiles), Damage, Level);
	}
}

FString UAuraFireBolt::GetNextLevelDescription(int32 Level)
{
	const int32 Damage = DamageTypes[FAuraGameplayTags::Get().Damage_Fire].GetValueAtLevel(Level);
	return FString::Printf(TEXT(
		"<Title>NEXT LEVEL</>\n\n"
		"<Default>Launched %d bolts of fire, exploding on impact and dealing: </>"
		"<Damage>%d</>"
		"<Default> fire damage with a chance to burn</>\n\n"
		"<Small>Level: </>"
		"<Level>%d</>"), FMath::Min(Level, NumProjectiles), Damage, Level);
}
