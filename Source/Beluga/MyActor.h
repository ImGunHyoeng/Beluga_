#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class BELUGA_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:
	// 이 actor의 속성에 대한 기본값을 설정합니다.
	AMyActor();


protected:
	// 게임이 시작되거나 생성될 때 호출됩니다.
	virtual void BeginPlay() override;

public:
	// 매 프레임마다 호출됨
	virtual void Tick(float DeltaTime) override;
};
