
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DeadByDaylight
/// dependency: Engine

/// Class /Script/DBDGameplayPresenter.SurvivorStatusComponent
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class USurvivorStatusComponent : public UActorComponent
{ 
public:
	class ACamperPlayer*                               _survivor;                                                  // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x00C0   (0x0038)  MISSED


	/// Functions
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionStarted
	// void OnValidatedInteractionStarted();                                                                                 // [0x54d05f0] Final|Native|Private 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionEnded
	// void OnValidatedInteractionEnded();                                                                                   // [0x54d05f0] Final|Native|Private 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnSuvivorDamaged
	// void OnSuvivorDamaged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);                          // [0x54d0610] Final|Native|Private 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnSurivorStatusChange
	// void OnSurivorStatusChange();                                                                                         // [0x66265f0] Event|Public|BlueprintEvent 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnRunningAndMovementChanged
	// void OnRunningAndMovementChanged(bool isRunningAndMoving);                                                            // [0x54d0560] Final|Native|Private 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnHookedStateChanged
	// void OnHookedStateChanged();                                                                                          // [0x54d05f0] Final|Native|Private 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnGuidedStateChanged
	// void OnGuidedStateChanged();                                                                                          // [0x54d05f0] Final|Native|Private 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnCrouchChanged
	// void OnCrouchChanged(bool isCrouched);                                                                                // [0x54d0560] Final|Native|Private 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsSleeping
	// bool IsSleeping();                                                                                                    // [0x54d0530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsRunning
	// bool IsRunning();                                                                                                     // [0x54d0500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsInjured
	// bool IsInjured();                                                                                                     // [0x54d04d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsHooked
	// bool IsHooked();                                                                                                      // [0x54d04a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsHiding
	// bool IsHiding();                                                                                                      // [0x54d0470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsHealing
	// bool IsHealing();                                                                                                     // [0x54d0440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsHarpooned
	// bool IsHarpooned();                                                                                                   // [0x54d0410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsGettingStrangled
	// bool IsGettingStrangled();                                                                                            // [0x54d03e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsGettingSacrificed
	// bool IsGettingSacrificed();                                                                                           // [0x54d03b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsDying
	// bool IsDying();                                                                                                       // [0x54d0380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsDead
	// bool IsDead();                                                                                                        // [0x54d0350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsCrouching
	// bool IsCrouching();                                                                                                   // [0x54d0320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsCaptured
	// bool IsCaptured();                                                                                                    // [0x54d02f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.GetMovementSpeed
	// void GetMovementSpeed(float& currentMovementSpeed, float& percentMovementSpeed, float& maximumMovementSpeed);         // [0x54d01b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

