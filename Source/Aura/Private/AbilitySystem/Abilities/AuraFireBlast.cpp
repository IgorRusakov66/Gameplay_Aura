// Copyright Igor Rusakov


#include "AbilitySystem/Abilities/AuraFireBlast.h"

FString UAuraFireBlast::GetDescription(int32 Level)
{
	const int32 ScaleDamage = Damage.GetValueAtLevel(Level);
	const float ManaCost = FMath::Abs(GetManaCost(Level));
	const float Cooldown = GetCooldown(Level);
	
	return FString::Printf(TEXT(
			// Title
			"<Title>FIRE BLAST</>\n\n"
			// Details
			"<Small>Level: </><Level>%d</>\n"
			"<Small>Mana Cost: </><ManaCost>%.1f</>\n"
			"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"
			// Description
			"<Default>Launches %d fire blast in all direction, each coming back and exploding upon return, causing: </><Damage>%d</>"
			"<Default> radial fire damage with a chance to burn</>"),
			// Values
			Level,
			ManaCost,
			Cooldown,
			NumFireBlast,
			ScaleDamage);
}

FString UAuraFireBlast::GetNextLevelDescription(int32 Level)
{
	const int32 ScaleDamage = Damage.GetValueAtLevel(Level);
	const float ManaCost = FMath::Abs(GetManaCost(Level));
	const float Cooldown = GetCooldown(Level);
	
	return FString::Printf(TEXT(
			// Title
			"<Title>NEXT LEVEL</>\n\n"
			// Details
			"<Small>Level: </><Level>%d</>\n"
			"<Small>Mana Cost: </><ManaCost>%.1f</>\n"
			"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"
			// Description
			"<Default>Launches %d fire blast in all direction, each coming back and exploding upon return, causing: </><Damage>%d</>"
			"<Default> radial fire damage with a chance to burn</>"),
			// Values
			Level,
			ManaCost,
			Cooldown,
			NumFireBlast,
			ScaleDamage);
}
