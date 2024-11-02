// Coppyright Igor Rusakov


#include "AuraGameplayTags.h"

#include "GameplayTagsManager.h"

//FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.Armor"), FString("Reduces damage take, improvers Block Chance"));
}
