// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

#include "Paddle.h"
#include "Ball.h"


#include "PaddlePlayerController.h"

APaddlePlayerController::APaddlePlayerController() {

}
void APaddlePlayerController::SetupInputComponent()
{
	InputComponent->BindAction("Lanch", IE_Pressed, this, &APaddlePlayerController::Lanch);

	Super::SetupInputComponent();

	EnableInput(this);

	InputComponent->BindAxis("MoveHorizontal", this, &APaddlePlayerController::MoveHorizontal);
}

void APaddlePlayerController::BeginPlay()
{
	TArray<AActor*> CameraActors;//arreglo donde se mete objeto de tipo AActor(se almacena objetos)
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);

	FViewTargetTransitionParams Params;//va recolectar todas las camaras
	SetViewTarget(CameraActors[0], Params);
	SpawnNewBall(); 
}

void APaddlePlayerController::MoveHorizontal(float AxisValue)
{
	auto MyPawn = Cast<APaddle>(GetPawn());

	if (MyPawn) {
		MyPawn->MoveHorizontal(AxisValue);
	}

}

void APaddlePlayerController::SpawnNewBall()
{

	
		if (!MyBall) {
			MyBall = nullptr;
		}

		if (BallObj) {
			MyBall = GetWorld()->SpawnActor<ABall>(BallObj, SpawnLocation, SpawnRotator, SpawnInfo);
		}
	}




void APaddlePlayerController::Lanch()
{
	MyBall->Lauch();
}

