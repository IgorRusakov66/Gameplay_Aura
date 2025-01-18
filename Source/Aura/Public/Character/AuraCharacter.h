// Coppyright Igor Rusakov

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/PlayerInterface.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase, public IPlayerInterface
{
	GENERATED_BODY()
public:
	AAuraCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	/** Player Interface */
	virtual void AddToXP_Implementation(int32 inXP) override;
	virtual void LevelUp_Implementation() override;
	virtual int32 GetXP_Implementation() const override;
	virtual int32 FindLevelForXP_Implementation(int32 InXP) const override;
	virtual int32 GetAttributePointsReward_Implementation(const int32 Level) const override;
	virtual int32 GetSpellPointsReward_Implementation(const int32 Level) const override;
	virtual void AddToPlayerLevel_Implementation(int32 inPlayerLevel) override;
	virtual void AddToAttributePoints_Implementation(int32 inAttributePoints) override;
	virtual void AddToSpellPoints_Implementation(int32 inSpellPoints) override;
	/** end Player Interface */

	/** Combat Interface */
	virtual int32 GetPlayerLevel_Implementation() override;
	/** end Combat Interface */

private:
	virtual void InitAbilityActorInfo() override;

};
