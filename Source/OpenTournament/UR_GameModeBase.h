// Copyright 2019 Open Tournament Project, All Rights Reserved.

/////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"

#include "UR_GameModeBase.generated.h"

/////////////////////////////////////////////////////////////////////////////////////////////////


/**
 * 
 */
UCLASS()
class OPENTOURNAMENT_API AUR_GameModeBase : public AGameMode
{
    GENERATED_BODY()

public:

    AUR_GameModeBase();

	/////////////////////////////////////////////////////////////////////////////////////////////////

	TArray<class UUR_ChatComponent*> ChatComponents;

	UFUNCTION(BlueprintCallable, Category = "Chat")
	virtual void RegisterChatComponent(class UUR_ChatComponent* Comp);

	UFUNCTION(BlueprintCallable, Category = "Chat")
	virtual void UnregisterChatComponent(class UUR_ChatComponent* Comp);

};
