#pragma once
#include "../pch.h"
#include <extensions/ScriptCommands.h>
#include <extensions/scripting/ScriptCommandNames.h>

class PyOpcodes
{
private:
    // CLEO4 Opcodes
    static PyObject* _FreeLibrary(PyObject* self, PyObject* args);
    static PyObject* _GetProcAddress(PyObject* self, PyObject* args);
    static PyObject* _LoadLibrary(PyObject* self, PyObject* args);
    static PyObject* CallFunction(PyObject* self, PyObject* args);
    static PyObject* CallMethod(PyObject* self, PyObject* args);
    static PyObject* GetCarHandle(PyObject* self, PyObject* args);
    static PyObject* GetCarPointer(PyObject* self, PyObject* args);
    static PyObject* GetCharHandle(PyObject* self, PyObject* args);
    static PyObject* GetCharPointer(PyObject* self, PyObject* args);
    static PyObject* GetClosestPed(PyObject* self, PyObject* args);
    static PyObject* GetClosestVehicle(PyObject* self, PyObject* args);
    static PyObject* GetObjectHandle(PyObject* self, PyObject* args);
    static PyObject* GetObjectPointer(PyObject* self, PyObject* args);
    static PyObject* IsOnCutscene(PyObject* self, PyObject* args);
    static PyObject* IsOnMission(PyObject* self, PyObject* args);
    static PyObject* GetLargestGangIdInZone(PyObject* self, PyObject* args);

    // Game Opcodes
    static PyObject* ActivateGarage(PyObject* self, PyObject* args);
    static PyObject* ActivateHeliSpeedCheat(PyObject* self, PyObject* args);
    static PyObject* ActivateInteriorPeds(PyObject* self, PyObject* args);
    static PyObject* ActivateMenuItem(PyObject* self, PyObject* args);
    static PyObject* ActivatePimpCheat(PyObject* self, PyObject* args);
    static PyObject* ActivateSaveMenu(PyObject* self, PyObject* args);
    static PyObject* AddAmmoToChar(PyObject* self, PyObject* args);
    static PyObject* AddArmourToChar(PyObject* self, PyObject* args);
    static PyObject* AddAttractor(PyObject* self, PyObject* args);
    static PyObject* AddBigGunFlash(PyObject* self, PyObject* args);
    static PyObject* AddBlipForCar(PyObject* self, PyObject* args);
    static PyObject* AddBlipForCarOld(PyObject* self, PyObject* args);
    static PyObject* AddBlipForChar(PyObject* self, PyObject* args);
    static PyObject* AddBlipForCoord(PyObject* self, PyObject* args);
    static PyObject* AddBlipForCoordOld(PyObject* self, PyObject* args);
    static PyObject* AddBlipForDeadChar(PyObject* self, PyObject* args);
    static PyObject* AddBlipForObject(PyObject* self, PyObject* args);
    static PyObject* AddBlipForPickup(PyObject* self, PyObject* args);
    static PyObject* AddBlipForSearchlight(PyObject* self, PyObject* args);
    static PyObject* AddBlood(PyObject* self, PyObject* args);
    static PyObject* AddCharDecisionMakerEventResponse(PyObject* self, PyObject* args);
    static PyObject* AddContinuousSound(PyObject* self, PyObject* args);
    static PyObject* AddExplosion(PyObject* self, PyObject* args);
    static PyObject* AddExplosionNoSound(PyObject* self, PyObject* args);
    static PyObject* AddExplosionVariableShake(PyObject* self, PyObject* args);
    static PyObject* AddGroupDecisionMakerEventResponse(PyObject* self, PyObject* args);
    static PyObject* AddHospitalRestart(PyObject* self, PyObject* args);
    static PyObject* AddNextMessageToPreviousBriefs(PyObject* self, PyObject* args);
    static PyObject* AddOneOffSound(PyObject* self, PyObject* args);
    static PyObject* AddPedtypeAsAttractorUser(PyObject* self, PyObject* args);
    static PyObject* AddPoliceRestart(PyObject* self, PyObject* args);
    static PyObject* AddPriceModifier(PyObject* self, PyObject* args);
    static PyObject* AddScore(PyObject* self, PyObject* args);
    static PyObject* AddSetPiece(PyObject* self, PyObject* args);
    static PyObject* AddShortRangeSpriteBlipForContactPoint(PyObject* self, PyObject* args);
    static PyObject* AddShortRangeSpriteBlipForCoord(PyObject* self, PyObject* args);
    static PyObject* AddSmokeParticle(PyObject* self, PyObject* args);
    static PyObject* AddSparks(PyObject* self, PyObject* args);
    static PyObject* AddSphere(PyObject* self, PyObject* args);
    static PyObject* AddSpriteBlipForContactPoint(PyObject* self, PyObject* args);
    static PyObject* AddSpriteBlipForCoord(PyObject* self, PyObject* args);
    static PyObject* AddStuckCarCheck(PyObject* self, PyObject* args);
    static PyObject* AddStuckCarCheckWithWarp(PyObject* self, PyObject* args);
    static PyObject* AddStuntJump(PyObject* self, PyObject* args);
    static PyObject* AddToCarRotationVelocity(PyObject* self, PyObject* args);
    static PyObject* AddToObjectRotationVelocity(PyObject* self, PyObject* args);
    static PyObject* AddToObjectVelocity(PyObject* self, PyObject* args);
    static PyObject* AddUpsidedownCarCheck(PyObject* self, PyObject* args);
    static PyObject* AddVehicleMod(PyObject* self, PyObject* args);
    static PyObject* AddVelocityRelativeToObjectVelocity(PyObject* self, PyObject* args);
    static PyObject* AllocateStreamedScriptToObject(PyObject* self, PyObject* args);
    static PyObject* AllocateStreamedScriptToRandomPed(PyObject* self, PyObject* args);
    static PyObject* AllowFixedCameraCollision(PyObject* self, PyObject* args);
    static PyObject* AllowPauseInWidescreen(PyObject* self, PyObject* args);
    static PyObject* AlterWantedLevel(PyObject* self, PyObject* args);
    static PyObject* AlterWantedLevelNoDrop(PyObject* self, PyObject* args);
    static PyObject* AnchorBoat(PyObject* self, PyObject* args);
    static PyObject* AppendToNextCutscene(PyObject* self, PyObject* args);
    static PyObject* ApplyBrakesToPlayersCar(PyObject* self, PyObject* args);
    static PyObject* ApplyForceToCar(PyObject* self, PyObject* args);
    static PyObject* AreAnyCarCheatsActivated(PyObject* self, PyObject* args);
    static PyObject* AreAnyCharsNearChar(PyObject* self, PyObject* args);
    static PyObject* AreCreditsFinished(PyObject* self, PyObject* args);
    static PyObject* AreMeasurementsInMetres(PyObject* self, PyObject* args);
    static PyObject* AreSubtitlesSwitchedOn(PyObject* self, PyObject* args);
    static PyObject* AttachAnimsToModel(PyObject* self, PyObject* args);
    static PyObject* AttachCameraToChar(PyObject* self, PyObject* args);
    static PyObject* AttachCameraToCharLookAtChar(PyObject* self, PyObject* args);
    static PyObject* AttachCameraToVehicle(PyObject* self, PyObject* args);
    static PyObject* AttachCameraToVehicleLookAtChar(PyObject* self, PyObject* args);
    static PyObject* AttachCameraToVehicleLookAtVehicle(PyObject* self, PyObject* args);
    static PyObject* AttachCarToCar(PyObject* self, PyObject* args);
    static PyObject* AttachCarToObject(PyObject* self, PyObject* args);
    static PyObject* AttachCharToBike(PyObject* self, PyObject* args);
    static PyObject* AttachCharToCar(PyObject* self, PyObject* args);
    static PyObject* AttachCharToObject(PyObject* self, PyObject* args);
    static PyObject* AttachFxSystemToCharBone(PyObject* self, PyObject* args);
    static PyObject* AttachMissionAudioToCar(PyObject* self, PyObject* args);
    static PyObject* AttachMissionAudioToChar(PyObject* self, PyObject* args);
    static PyObject* AttachMissionAudioToObject(PyObject* self, PyObject* args);
    static PyObject* AttachObjectToCar(PyObject* self, PyObject* args);
    static PyObject* AttachObjectToChar(PyObject* self, PyObject* args);
    static PyObject* AttachObjectToObject(PyObject* self, PyObject* args);
    static PyObject* AttachSearchlightToSearchlightObject(PyObject* self, PyObject* args);
    static PyObject* AttachTrailerToCab(PyObject* self, PyObject* args);
    static PyObject* AttachWinchToHeli(PyObject* self, PyObject* args);
    static PyObject* AwardPlayerMissionRespect(PyObject* self, PyObject* args);
    static PyObject* BoatGotoCoords(PyObject* self, PyObject* args);
    static PyObject* BoatStop(PyObject* self, PyObject* args);
    static PyObject* BreakObject(PyObject* self, PyObject* args);
    static PyObject* Breakpoint(PyObject* self, PyObject* args);
    static PyObject* BuildPlayerModel(PyObject* self, PyObject* args);
    static PyObject* BurstCarTyre(PyObject* self, PyObject* args);
    static PyObject* BuyItem(PyObject* self, PyObject* args);
    static PyObject* CameraIsVectorMoveRunning(PyObject* self, PyObject* args);
    static PyObject* CameraIsVectorTrackRunning(PyObject* self, PyObject* args);
    static PyObject* CameraPersistFov(PyObject* self, PyObject* args);
    static PyObject* CameraPersistPos(PyObject* self, PyObject* args);
    static PyObject* CameraPersistTrack(PyObject* self, PyObject* args);
    static PyObject* CameraResetNewScriptables(PyObject* self, PyObject* args);
    static PyObject* CameraSetLerpFov(PyObject* self, PyObject* args);
    static PyObject* CameraSetShakeSimulationSimple(PyObject* self, PyObject* args);
    static PyObject* CameraSetVectorMove(PyObject* self, PyObject* args);
    static PyObject* CameraSetVectorTrack(PyObject* self, PyObject* args);
    static PyObject* CanCharSeeDeadChar(PyObject* self, PyObject* args);
    static PyObject* CanPlayerStartMission(PyObject* self, PyObject* args);
    static PyObject* CanTriggerGangWarWhenOnAMission(PyObject* self, PyObject* args);
    static PyObject* CancelOverrideRestart(PyObject* self, PyObject* args);
    static PyObject* CarGotoCoordinates(PyObject* self, PyObject* args);
    static PyObject* CarGotoCoordinatesAccurate(PyObject* self, PyObject* args);
    static PyObject* CarGotoCoordinatesRacing(PyObject* self, PyObject* args);
    static PyObject* CarSetIdle(PyObject* self, PyObject* args);
    static PyObject* CarWanderRandomly(PyObject* self, PyObject* args);
    static PyObject* ChangeBlipColour(PyObject* self, PyObject* args);
    static PyObject* ChangeBlipDisplay(PyObject* self, PyObject* args);
    static PyObject* ChangeBlipScale(PyObject* self, PyObject* args);
    static PyObject* ChangeCarColour(PyObject* self, PyObject* args);
    static PyObject* ChangeCarColourFromMenu(PyObject* self, PyObject* args);
    static PyObject* ChangeGarageType(PyObject* self, PyObject* args);
    static PyObject* ChangePlaybackToUseAi(PyObject* self, PyObject* args);
    static PyObject* ClearAllCharRelationships(PyObject* self, PyObject* args);
    static PyObject* ClearAllScriptFireFlags(PyObject* self, PyObject* args);
    static PyObject* ClearAllScriptRoadblocks(PyObject* self, PyObject* args);
    static PyObject* ClearAllViewVariables(PyObject* self, PyObject* args);
    static PyObject* ClearArea(PyObject* self, PyObject* args);
    static PyObject* ClearAreaOfCars(PyObject* self, PyObject* args);
    static PyObject* ClearAreaOfChars(PyObject* self, PyObject* args);
    static PyObject* ClearAttractor(PyObject* self, PyObject* args);
    static PyObject* ClearCarLastDamageEntity(PyObject* self, PyObject* args);
    static PyObject* ClearCarLastWeaponDamage(PyObject* self, PyObject* args);
    static PyObject* ClearCharDecisionMakerEventResponse(PyObject* self, PyObject* args);
    static PyObject* ClearCharLastDamageEntity(PyObject* self, PyObject* args);
    static PyObject* ClearCharLastWeaponDamage(PyObject* self, PyObject* args);
    static PyObject* ClearCharRelationship(PyObject* self, PyObject* args);
    static PyObject* ClearCharTasks(PyObject* self, PyObject* args);
    static PyObject* ClearCharTasksImmediately(PyObject* self, PyObject* args);
    static PyObject* ClearConversationForChar(PyObject* self, PyObject* args);
    static PyObject* ClearCutscene(PyObject* self, PyObject* args);
    static PyObject* ClearExtraColours(PyObject* self, PyObject* args);
    static PyObject* ClearGlobalVarBitConst(PyObject* self, PyObject* args);
    static PyObject* ClearGlobalVarBitLvar(PyObject* self, PyObject* args);
    static PyObject* ClearGlobalVarBitVar(PyObject* self, PyObject* args);
    static PyObject* ClearGroupDecisionMakerEventResponse(PyObject* self, PyObject* args);
    static PyObject* ClearHeliOrientation(PyObject* self, PyObject* args);
    static PyObject* ClearHelp(PyObject* self, PyObject* args);
    static PyObject* ClearLastBuildingModelShotByPlayer(PyObject* self, PyObject* args);
    static PyObject* ClearLoadedShop(PyObject* self, PyObject* args);
    static PyObject* ClearLocalVarBitConst(PyObject* self, PyObject* args);
    static PyObject* ClearLocalVarBitLvar(PyObject* self, PyObject* args);
    static PyObject* ClearLocalVarBitVar(PyObject* self, PyObject* args);
    static PyObject* ClearLookAt(PyObject* self, PyObject* args);
    static PyObject* ClearMissionAudio(PyObject* self, PyObject* args);
    static PyObject* ClearObjectLastWeaponDamage(PyObject* self, PyObject* args);
    static PyObject* ClearOnscreenCounter(PyObject* self, PyObject* args);
    static PyObject* ClearOnscreenTimer(PyObject* self, PyObject* args);
    static PyObject* ClearPrints(PyObject* self, PyObject* args);
    static PyObject* ClearRelationship(PyObject* self, PyObject* args);
    static PyObject* ClearSequenceTask(PyObject* self, PyObject* args);
    static PyObject* ClearSkip(PyObject* self, PyObject* args);
    static PyObject* ClearSmallPrints(PyObject* self, PyObject* args);
    static PyObject* ClearSpecificZonesToTriggerGangWar(PyObject* self, PyObject* args);
    static PyObject* ClearThisBigPrint(PyObject* self, PyObject* args);
    static PyObject* ClearThisFloatWatchpoint(PyObject* self, PyObject* args);
    static PyObject* ClearThisIntegerWatchpoint(PyObject* self, PyObject* args);
    static PyObject* ClearThisPrint(PyObject* self, PyObject* args);
    static PyObject* ClearThisPrintBigNow(PyObject* self, PyObject* args);
    static PyObject* ClearThisViewFloatVariable(PyObject* self, PyObject* args);
    static PyObject* ClearThisViewIntegerVariable(PyObject* self, PyObject* args);
    static PyObject* ClearWantedLevel(PyObject* self, PyObject* args);
    static PyObject* ClearWantedLevelInGarage(PyObject* self, PyObject* args);
    static PyObject* CloseAllCarDoors(PyObject* self, PyObject* args);
    static PyObject* CloseGarage(PyObject* self, PyObject* args);
    static PyObject* CloseSequenceTask(PyObject* self, PyObject* args);
    static PyObject* ConnectLods(PyObject* self, PyObject* args);
    static PyObject* ConstFloat(PyObject* self, PyObject* args);
    static PyObject* ConstInt(PyObject* self, PyObject* args);
    static PyObject* ControlCarDoor(PyObject* self, PyObject* args);
    static PyObject* ControlCarHydraulics(PyObject* self, PyObject* args);
    static PyObject* ControlMovableVehiclePart(PyObject* self, PyObject* args);
    static PyObject* ConvertMetresToFeet(PyObject* self, PyObject* args);
    static PyObject* ConvertMetresToFeetInt(PyObject* self, PyObject* args);
    static PyObject* CopyCharDecisionMaker(PyObject* self, PyObject* args);
    static PyObject* CopyGroupDecisionMaker(PyObject* self, PyObject* args);
    static PyObject* CopySharedCharDecisionMaker(PyObject* self, PyObject* args);
    static PyObject* Cos(PyObject* self, PyObject* args);
    static PyObject* CreateBirds(PyObject* self, PyObject* args);
    static PyObject* CreateCar(PyObject* self, PyObject* args);
    static PyObject* CreateCarGenerator(PyObject* self, PyObject* args);
    static PyObject* CreateCarGeneratorWithPlate(PyObject* self, PyObject* args);
    static PyObject* CreateChar(PyObject* self, PyObject* args);
    static PyObject* CreateCharAsPassenger(PyObject* self, PyObject* args);
    static PyObject* CreateCharAtAttractor(PyObject* self, PyObject* args);
    static PyObject* CreateCharInsideCar(PyObject* self, PyObject* args);
    static PyObject* CreateCheckpoint(PyObject* self, PyObject* args);
    static PyObject* CreateCollectable1(PyObject* self, PyObject* args);
    static PyObject* CreateEmergencyServicesCar(PyObject* self, PyObject* args);
    static PyObject* CreateForsalePropertyPickup(PyObject* self, PyObject* args);
    static PyObject* CreateFxSystem(PyObject* self, PyObject* args);
    static PyObject* CreateFxSystemOnCar(PyObject* self, PyObject* args);
    static PyObject* CreateFxSystemOnCarWithDirection(PyObject* self, PyObject* args);
    static PyObject* CreateFxSystemOnChar(PyObject* self, PyObject* args);
    static PyObject* CreateFxSystemOnCharWithDirection(PyObject* self, PyObject* args);
    static PyObject* CreateFxSystemOnObject(PyObject* self, PyObject* args);
    static PyObject* CreateFxSystemOnObjectWithDirection(PyObject* self, PyObject* args);
    static PyObject* CreateGroup(PyObject* self, PyObject* args);
    static PyObject* CreateHorseshoePickup(PyObject* self, PyObject* args);
    static PyObject* CreateLockedPropertyPickup(PyObject* self, PyObject* args);
    static PyObject* CreateMenu(PyObject* self, PyObject* args);
    static PyObject* CreateMenuGrid(PyObject* self, PyObject* args);
    static PyObject* CreateMissionTrain(PyObject* self, PyObject* args);
    static PyObject* CreateMoneyPickup(PyObject* self, PyObject* args);
    static PyObject* CreateObject(PyObject* self, PyObject* args);
    static PyObject* CreateObjectNoOffset(PyObject* self, PyObject* args);
    static PyObject* CreateOysterPickup(PyObject* self, PyObject* args);
    static PyObject* CreatePickup(PyObject* self, PyObject* args);
    static PyObject* CreatePickupWithAmmo(PyObject* self, PyObject* args);
    static PyObject* CreatePlayer(PyObject* self, PyObject* args);
    static PyObject* CreateProtectionPickup(PyObject* self, PyObject* args);
    static PyObject* CreateRandomCarForCarPark(PyObject* self, PyObject* args);
    static PyObject* CreateRandomChar(PyObject* self, PyObject* args);
    static PyObject* CreateRandomCharAsDriver(PyObject* self, PyObject* args);
    static PyObject* CreateRandomCharAsPassenger(PyObject* self, PyObject* args);
    static PyObject* CreateScriptRoadblock(PyObject* self, PyObject* args);
    static PyObject* CreateSearchlight(PyObject* self, PyObject* args);
    static PyObject* CreateSearchlightOnVehicle(PyObject* self, PyObject* args);
    static PyObject* CreateSnapshotPickup(PyObject* self, PyObject* args);
    static PyObject* CreateSwatRope(PyObject* self, PyObject* args);
    static PyObject* CreateUser3DMarker(PyObject* self, PyObject* args);
    static PyObject* CustomPlateDesignForNextCar(PyObject* self, PyObject* args);
    static PyObject* CustomPlateForNextCar(PyObject* self, PyObject* args);
    static PyObject* DamageCarDoor(PyObject* self, PyObject* args);
    static PyObject* DamageCarPanel(PyObject* self, PyObject* args);
    static PyObject* DamageChar(PyObject* self, PyObject* args);
    static PyObject* DeactivateGarage(PyObject* self, PyObject* args);
    static PyObject* DeclareMissionFlag(PyObject* self, PyObject* args);
    static PyObject* DecrementFloatStat(PyObject* self, PyObject* args);
    static PyObject* DecrementIntStat(PyObject* self, PyObject* args);
    static PyObject* DeleteAllTrains(PyObject* self, PyObject* args);
    static PyObject* DeleteCar(PyObject* self, PyObject* args);
    static PyObject* DeleteChar(PyObject* self, PyObject* args);
    static PyObject* DeleteCheckpoint(PyObject* self, PyObject* args);
    static PyObject* DeleteMenu(PyObject* self, PyObject* args);
    static PyObject* DeleteMissionTrain(PyObject* self, PyObject* args);
    static PyObject* DeleteMissionTrains(PyObject* self, PyObject* args);
    static PyObject* DeleteObject(PyObject* self, PyObject* args);
    static PyObject* DeletePlayer(PyObject* self, PyObject* args);
    static PyObject* DeleteSearchlight(PyObject* self, PyObject* args);
    static PyObject* DetachCar(PyObject* self, PyObject* args);
    static PyObject* DetachCharFromCar(PyObject* self, PyObject* args);
    static PyObject* DetachObject(PyObject* self, PyObject* args);
    static PyObject* DetachTrailerFromCab(PyObject* self, PyObject* args);
    static PyObject* Disable2NdPadForDebug(PyObject* self, PyObject* args);
    static PyObject* DisableAllEntryExits(PyObject* self, PyObject* args);
    static PyObject* DisableCharSpeech(PyObject* self, PyObject* args);
    static PyObject* DisableHeliAudio(PyObject* self, PyObject* args);
    static PyObject* DisablePlayerSprint(PyObject* self, PyObject* args);
    static PyObject* DisplayCarNames(PyObject* self, PyObject* args);
    static PyObject* DisplayHud(PyObject* self, PyObject* args);
    static PyObject* DisplayNonMinigameHelpMessages(PyObject* self, PyObject* args);
    static PyObject* DisplayNthOnscreenCounterWithString(PyObject* self, PyObject* args);
    static PyObject* DisplayOnscreenCounterWithString(PyObject* self, PyObject* args);
    static PyObject* DisplayOnscreenTimer(PyObject* self, PyObject* args);
    static PyObject* DisplayOnscreenTimerWithString(PyObject* self, PyObject* args);
    static PyObject* DisplayRadar(PyObject* self, PyObject* args);
    static PyObject* DisplayText(PyObject* self, PyObject* args);
    static PyObject* DisplayTextWith2Numbers(PyObject* self, PyObject* args);
    static PyObject* DisplayTextWithFloat(PyObject* self, PyObject* args);
    static PyObject* DisplayTextWithNumber(PyObject* self, PyObject* args);
    static PyObject* DisplayTimerBars(PyObject* self, PyObject* args);
    static PyObject* DisplayZoneNames(PyObject* self, PyObject* args);
    static PyObject* Do2DRectanglesCollide(PyObject* self, PyObject* args);
    static PyObject* DoCameraBump(PyObject* self, PyObject* args);
    static PyObject* DoFade(PyObject* self, PyObject* args);
    static PyObject* DoWeaponStuffAtStartOf2PGame(PyObject* self, PyObject* args);
    static PyObject* DoesBlipExist(PyObject* self, PyObject* args);
    static PyObject* DoesCarHaveHydraulics(PyObject* self, PyObject* args);
    static PyObject* DoesCarHaveStuckCarCheck(PyObject* self, PyObject* args);
    static PyObject* DoesCharExist(PyObject* self, PyObject* args);
    static PyObject* DoesDecisionMakerExist(PyObject* self, PyObject* args);
    static PyObject* DoesGroupExist(PyObject* self, PyObject* args);
    static PyObject* DoesObjectExist(PyObject* self, PyObject* args);
    static PyObject* DoesObjectHaveThisModel(PyObject* self, PyObject* args);
    static PyObject* DoesPickupExist(PyObject* self, PyObject* args);
    static PyObject* DoesScriptFireExist(PyObject* self, PyObject* args);
    static PyObject* DoesSearchlightExist(PyObject* self, PyObject* args);
    static PyObject* DoesVehicleExist(PyObject* self, PyObject* args);
    static PyObject* DontRemoveChar(PyObject* self, PyObject* args);
    static PyObject* DontRemoveObject(PyObject* self, PyObject* args);
    static PyObject* DontSuppressAnyCarModels(PyObject* self, PyObject* args);
    static PyObject* DontSuppressCarModel(PyObject* self, PyObject* args);
    static PyObject* DrawCorona(PyObject* self, PyObject* args);
    static PyObject* DrawCrosshair(PyObject* self, PyObject* args);
    static PyObject* DrawLightWithRange(PyObject* self, PyObject* args);
    static PyObject* DrawOddjobTitleBeforeFade(PyObject* self, PyObject* args);
    static PyObject* DrawRect(PyObject* self, PyObject* args);
    static PyObject* DrawShadow(PyObject* self, PyObject* args);
    static PyObject* DrawSphere(PyObject* self, PyObject* args);
    static PyObject* DrawSprite(PyObject* self, PyObject* args);
    static PyObject* DrawSpriteWithRotation(PyObject* self, PyObject* args);
    static PyObject* DrawSubtitlesBeforeFade(PyObject* self, PyObject* args);
    static PyObject* DrawWeaponshopCorona(PyObject* self, PyObject* args);
    static PyObject* DrawWindow(PyObject* self, PyObject* args);
    static PyObject* DropObject(PyObject* self, PyObject* args);
    static PyObject* DropSecondObject(PyObject* self, PyObject* args);
    static PyObject* EnableAmbientCrime(PyObject* self, PyObject* args);
    static PyObject* EnableBurglaryHouses(PyObject* self, PyObject* args);
    static PyObject* EnableCharSpeech(PyObject* self, PyObject* args);
    static PyObject* EnableConversation(PyObject* self, PyObject* args);
    static PyObject* EnableCraneControls(PyObject* self, PyObject* args);
    static PyObject* EnableDisabledAttractorsOnObject(PyObject* self, PyObject* args);
    static PyObject* EnableEntryExitPlayerGroupWarping(PyObject* self, PyObject* args);
    static PyObject* EnsurePlayerHasDriveByWeapon(PyObject* self, PyObject* args);
    static PyObject* ExplodeCar(PyObject* self, PyObject* args);
    static PyObject* ExplodeCarInCutscene(PyObject* self, PyObject* args);
    static PyObject* ExplodeCarInCutsceneShakeAndBits(PyObject* self, PyObject* args);
    static PyObject* ExplodeCharHead(PyObject* self, PyObject* args);
    static PyObject* ExtendPatrolRoute(PyObject* self, PyObject* args);
    static PyObject* ExtendRoute(PyObject* self, PyObject* args);
    static PyObject* ExtinguishFireAtPoint(PyObject* self, PyObject* args);
    static PyObject* FailCurrentMission(PyObject* self, PyObject* args);
    static PyObject* FailKillFrenzy(PyObject* self, PyObject* args);
    static PyObject* FetchNextCard(PyObject* self, PyObject* args);
    static PyObject* FindMaxNumberOfGroupMembers(PyObject* self, PyObject* args);
    static PyObject* FindNumberTagsTagged(PyObject* self, PyObject* args);
    static PyObject* FindTrainDirection(PyObject* self, PyObject* args);
    static PyObject* FinishSettingUpConversation(PyObject* self, PyObject* args);
    static PyObject* FinishSettingUpConversationNoSubtitles(PyObject* self, PyObject* args);
    static PyObject* FireHunterGun(PyObject* self, PyObject* args);
    static PyObject* FireSingleBullet(PyObject* self, PyObject* args);
    static PyObject* FixCar(PyObject* self, PyObject* args);
    static PyObject* FixCarDoor(PyObject* self, PyObject* args);
    static PyObject* FixCarPanel(PyObject* self, PyObject* args);
    static PyObject* FixCarTyre(PyObject* self, PyObject* args);
    static PyObject* FlashHudObject(PyObject* self, PyObject* args);
    static PyObject* FlushPatrolRoute(PyObject* self, PyObject* args);
    static PyObject* FlushRoute(PyObject* self, PyObject* args);
    static PyObject* ForceAllVehicleLightsOff(PyObject* self, PyObject* args);
    static PyObject* ForceBigMessageAndCounter(PyObject* self, PyObject* args);
    static PyObject* ForceCarLights(PyObject* self, PyObject* args);
    static PyObject* ForceDeathRestart(PyObject* self, PyObject* args);
    static PyObject* ForceInteriorLightingForPlayer(PyObject* self, PyObject* args);
    static PyObject* ForceWeather(PyObject* self, PyObject* args);
    static PyObject* ForceWeatherNow(PyObject* self, PyObject* args);
    static PyObject* FreezeCarPosition(PyObject* self, PyObject* args);
    static PyObject* FreezeCarPositionAndDontLoadCollision(PyObject* self, PyObject* args);
    static PyObject* FreezeCharPosition(PyObject* self, PyObject* args);
    static PyObject* FreezeCharPositionAndDontLoadCollision(PyObject* self, PyObject* args);
    static PyObject* FreezeObjectPosition(PyObject* self, PyObject* args);
    static PyObject* FreezeOnscreenTimer(PyObject* self, PyObject* args);
    static PyObject* GenerateRandomFloatInRange(PyObject* self, PyObject* args);
    static PyObject* GenerateRandomIntInRange(PyObject* self, PyObject* args);
    static PyObject* Get2DLinesIntersectPoint(PyObject* self, PyObject* args);
    static PyObject* GetActiveCameraCoordinates(PyObject* self, PyObject* args);
    static PyObject* GetActiveCameraPointAt(PyObject* self, PyObject* args);
    static PyObject* GetAmmoInCharWeapon(PyObject* self, PyObject* args);
    static PyObject* GetAngleBetween2DVectors(PyObject* self, PyObject* args);
    static PyObject* GetAreaVisible(PyObject* self, PyObject* args);
    static PyObject* GetAvailableVehicleMod(PyObject* self, PyObject* args);
    static PyObject* GetBeatProximity(PyObject* self, PyObject* args);
    static PyObject* GetBeatTrackStatus(PyObject* self, PyObject* args);
    static PyObject* GetCameraFov(PyObject* self, PyObject* args);
    static PyObject* GetCarBlockingCar(PyObject* self, PyObject* args);
    static PyObject* GetCarCharIsUsing(PyObject* self, PyObject* args);
    static PyObject* GetCarColours(PyObject* self, PyObject* args);
    static PyObject* GetCarCoordinates(PyObject* self, PyObject* args);
    static PyObject* GetCarDoorLockStatus(PyObject* self, PyObject* args);
    static PyObject* GetCarForwardX(PyObject* self, PyObject* args);
    static PyObject* GetCarForwardY(PyObject* self, PyObject* args);
    static PyObject* GetCarHeading(PyObject* self, PyObject* args);
    static PyObject* GetCarHealth(PyObject* self, PyObject* args);
    static PyObject* GetCarMass(PyObject* self, PyObject* args);
    static PyObject* GetCarModel(PyObject* self, PyObject* args);
    static PyObject* GetCarModelValue(PyObject* self, PyObject* args);
    static PyObject* GetCarMovingComponentOffset(PyObject* self, PyObject* args);
    static PyObject* GetCarPitch(PyObject* self, PyObject* args);
    static PyObject* GetCarRoll(PyObject* self, PyObject* args);
    static PyObject* GetCarSpeed(PyObject* self, PyObject* args);
    static PyObject* GetCarSpeedVector(PyObject* self, PyObject* args);
    static PyObject* GetCarUprightValue(PyObject* self, PyObject* args);
    static PyObject* GetCharAnimCurrentTime(PyObject* self, PyObject* args);
    static PyObject* GetCharAnimTotalTime(PyObject* self, PyObject* args);
    static PyObject* GetCharAreaVisible(PyObject* self, PyObject* args);
    static PyObject* GetCharArmour(PyObject* self, PyObject* args);
    static PyObject* GetCharCoordinates(PyObject* self, PyObject* args);
    static PyObject* GetCharHeading(PyObject* self, PyObject* args);
    static PyObject* GetCharHealth(PyObject* self, PyObject* args);
    static PyObject* GetCharHeightAboveGround(PyObject* self, PyObject* args);
    static PyObject* GetCharHighestPriorityEvent(PyObject* self, PyObject* args);
    static PyObject* GetCharInCarPassengerSeat(PyObject* self, PyObject* args);
    static PyObject* GetCharModel(PyObject* self, PyObject* args);
    static PyObject* GetCharSpeed(PyObject* self, PyObject* args);
    static PyObject* GetCharSwimState(PyObject* self, PyObject* args);
    static PyObject* GetCharVelocity(PyObject* self, PyObject* args);
    static PyObject* GetCharWeaponInSlot(PyObject* self, PyObject* args);
    static PyObject* GetCityFromCoords(PyObject* self, PyObject* args);
    static PyObject* GetCityPlayerIsIn(PyObject* self, PyObject* args);
    static PyObject* GetClosestCarNode(PyObject* self, PyObject* args);
    static PyObject* GetClosestCarNodeWithHeading(PyObject* self, PyObject* args);
    static PyObject* GetClosestCharNode(PyObject* self, PyObject* args);
    static PyObject* GetClosestStealableObject(PyObject* self, PyObject* args);
    static PyObject* GetClosestStraightRoad(PyObject* self, PyObject* args);
    static PyObject* GetClothesItem(PyObject* self, PyObject* args);
    static PyObject* GetControllerMode(PyObject* self, PyObject* args);
    static PyObject* GetCurrentCarMod(PyObject* self, PyObject* args);
    static PyObject* GetCurrentCharWeapon(PyObject* self, PyObject* args);
    static PyObject* GetCurrentDate(PyObject* self, PyObject* args);
    static PyObject* GetCurrentDayOfWeek(PyObject* self, PyObject* args);
    static PyObject* GetCurrentLanguage(PyObject* self, PyObject* args);
    static PyObject* GetCurrentPopulationZoneType(PyObject* self, PyObject* args);
    static PyObject* GetCurrentVehiclePaintjob(PyObject* self, PyObject* args);
    static PyObject* GetCutsceneOffset(PyObject* self, PyObject* args);
    static PyObject* GetCutsceneTime(PyObject* self, PyObject* args);
    static PyObject* GetDeadCharCoordinates(PyObject* self, PyObject* args);
    static PyObject* GetDeadCharPickupCoords(PyObject* self, PyObject* args);
    static PyObject* GetDebugCameraCoordinates(PyObject* self, PyObject* args);
    static PyObject* GetDebugCameraPointAt(PyObject* self, PyObject* args);
    static PyObject* GetDistanceBetweenCoords2D(PyObject* self, PyObject* args);
    static PyObject* GetDistanceBetweenCoords3D(PyObject* self, PyObject* args);
    static PyObject* GetDoorAngleRatio(PyObject* self, PyObject* args);
    static PyObject* GetDriverOfCar(PyObject* self, PyObject* args);
    static PyObject* GetExtraCarColours(PyObject* self, PyObject* args);
    static PyObject* GetFadingStatus(PyObject* self, PyObject* args);
    static PyObject* GetFloatStat(PyObject* self, PyObject* args);
    static PyObject* GetGameTimer(PyObject* self, PyObject* args);
    static PyObject* GetGroundZFor3DCoord(PyObject* self, PyObject* args);
    static PyObject* GetGroupMember(PyObject* self, PyObject* args);
    static PyObject* GetGroupSize(PyObject* self, PyObject* args);
    static PyObject* GetHashKey(PyObject* self, PyObject* args);
    static PyObject* GetHeadingFromVector2D(PyObject* self, PyObject* args);
    static PyObject* GetHudColour(PyObject* self, PyObject* args);
    static PyObject* GetIntStat(PyObject* self, PyObject* args);
    static PyObject* GetItemInShop(PyObject* self, PyObject* args);
    static PyObject* GetLatestConsoleCommand(PyObject* self, PyObject* args);
    static PyObject* GetLevelDesignCoordsForObject(PyObject* self, PyObject* args);
    static PyObject* GetLoadedShop(PyObject* self, PyObject* args);
    static PyObject* GetMaxWantedLevel(PyObject* self, PyObject* args);
    static PyObject* GetMaximumNumberOfPassengers(PyObject* self, PyObject* args);
    static PyObject* GetMenuItemAccepted(PyObject* self, PyObject* args);
    static PyObject* GetMenuItemSelected(PyObject* self, PyObject* args);
    static PyObject* GetMinutesToTimeOfDay(PyObject* self, PyObject* args);
    static PyObject* GetModelDimensions(PyObject* self, PyObject* args);
    static PyObject* GetNameOfEntryExitCharUsed(PyObject* self, PyObject* args);
    static PyObject* GetNameOfInfoZone(PyObject* self, PyObject* args);
    static PyObject* GetNameOfItem(PyObject* self, PyObject* args);
    static PyObject* GetNameOfZone(PyObject* self, PyObject* args);
    static PyObject* GetNearestTagPosition(PyObject* self, PyObject* args);
    static PyObject* GetNthClosestCarNode(PyObject* self, PyObject* args);
    static PyObject* GetNthClosestCarNodeWithHeading(PyObject* self, PyObject* args);
    static PyObject* GetNumAvailablePaintjobs(PyObject* self, PyObject* args);
    static PyObject* GetNumCarColours(PyObject* self, PyObject* args);
    static PyObject* GetNumOfModelsKilledByPlayer(PyObject* self, PyObject* args);
    static PyObject* GetNumberOfFiresInArea(PyObject* self, PyObject* args);
    static PyObject* GetNumberOfFiresInRange(PyObject* self, PyObject* args);
    static PyObject* GetNumberOfFollowers(PyObject* self, PyObject* args);
    static PyObject* GetNumberOfInstancesOfStreamedScript(PyObject* self, PyObject* args);
    static PyObject* GetNumberOfItemsInShop(PyObject* self, PyObject* args);
    static PyObject* GetNumberOfPassengers(PyObject* self, PyObject* args);
    static PyObject* GetObjectAnimCurrentTime(PyObject* self, PyObject* args);
    static PyObject* GetObjectCoordinates(PyObject* self, PyObject* args);
    static PyObject* GetObjectHeading(PyObject* self, PyObject* args);
    static PyObject* GetObjectHealth(PyObject* self, PyObject* args);
    static PyObject* GetObjectMass(PyObject* self, PyObject* args);
    static PyObject* GetObjectModel(PyObject* self, PyObject* args);
    static PyObject* GetObjectQuaternion(PyObject* self, PyObject* args);
    static PyObject* GetObjectRotationVelocity(PyObject* self, PyObject* args);
    static PyObject* GetObjectSpeed(PyObject* self, PyObject* args);
    static PyObject* GetObjectTurnMass(PyObject* self, PyObject* args);
    static PyObject* GetObjectVelocity(PyObject* self, PyObject* args);
    static PyObject* GetOffsetFromCarInWorldCoords(PyObject* self, PyObject* args);
    static PyObject* GetOffsetFromCharInWorldCoords(PyObject* self, PyObject* args);
    static PyObject* GetOffsetFromObjectInWorldCoords(PyObject* self, PyObject* args);
    static PyObject* GetPadState(PyObject* self, PyObject* args);
    static PyObject* GetParkingNodeInArea(PyObject* self, PyObject* args);
    static PyObject* GetPcMouseMovement(PyObject* self, PyObject* args);
    static PyObject* GetPedType(PyObject* self, PyObject* args);
    static PyObject* GetPercentageTaggedInArea(PyObject* self, PyObject* args);
    static PyObject* GetPickupCoordinates(PyObject* self, PyObject* args);
    static PyObject* GetPlaneUndercarriagePosition(PyObject* self, PyObject* args);
    static PyObject* GetPlayerChar(PyObject* self, PyObject* args);
    static PyObject* GetPlayerGroup(PyObject* self, PyObject* args);
    static PyObject* GetPlayerInCarCameraMode(PyObject* self, PyObject* args);
    static PyObject* GetPlayerMaxArmour(PyObject* self, PyObject* args);
    static PyObject* GetPositionOfAnalogueSticks(PyObject* self, PyObject* args);
    static PyObject* GetPositionOfEntryExitCharUsed(PyObject* self, PyObject* args);
    static PyObject* GetPriceOfItem(PyObject* self, PyObject* args);
    static PyObject* GetProgressPercentage(PyObject* self, PyObject* args);
    static PyObject* GetRadioChannel(PyObject* self, PyObject* args);
    static PyObject* GetRandomCarInSphereNoSave(PyObject* self, PyObject* args);
    static PyObject* GetRandomCarModelInMemory(PyObject* self, PyObject* args);
    static PyObject* GetRandomCarOfTypeInAngledAreaNoSave(PyObject* self, PyObject* args);
    static PyObject* GetRandomCarOfTypeInArea(PyObject* self, PyObject* args);
    static PyObject* GetRandomCarOfTypeInAreaNoSave(PyObject* self, PyObject* args);
    static PyObject* GetRandomCharInAreaOffsetNoSave(PyObject* self, PyObject* args);
    static PyObject* GetRandomCharInSphere(PyObject* self, PyObject* args);
    static PyObject* GetRandomCharInSphereNoBrain(PyObject* self, PyObject* args);
    static PyObject* GetRandomCharInSphereOnlyDrugsBuyers(PyObject* self, PyObject* args);
    static PyObject* GetRandomCharInZone(PyObject* self, PyObject* args);
    static PyObject* GetRemoteControlledCar(PyObject* self, PyObject* args);
    static PyObject* GetRidOfPlayerProstitute(PyObject* self, PyObject* args);
    static PyObject* GetRopeHeightForObject(PyObject* self, PyObject* args);
    static PyObject* GetScriptFireCoords(PyObject* self, PyObject* args);
    static PyObject* GetScriptTaskStatus(PyObject* self, PyObject* args);
    static PyObject* GetSequenceProgress(PyObject* self, PyObject* args);
    static PyObject* GetSequenceProgressRecursive(PyObject* self, PyObject* args);
    static PyObject* GetShoppingExtraInfo(PyObject* self, PyObject* args);
    static PyObject* GetSoundLevelAtCoords(PyObject* self, PyObject* args);
    static PyObject* GetStringWidth(PyObject* self, PyObject* args);
    static PyObject* GetStringWidthWithNumber(PyObject* self, PyObject* args);
    static PyObject* GetTerritoryUnderControlPercentage(PyObject* self, PyObject* args);
    static PyObject* GetTimeOfDay(PyObject* self, PyObject* args);
    static PyObject* GetTotalNumberOfPedsKilledByPlayer(PyObject* self, PyObject* args);
    static PyObject* GetTrainCaboose(PyObject* self, PyObject* args);
    static PyObject* GetTrainCarriage(PyObject* self, PyObject* args);
    static PyObject* GetUserOfClosestMapAttractor(PyObject* self, PyObject* args);
    static PyObject* GetVehicleClass(PyObject* self, PyObject* args);
    static PyObject* GetVehicleModType(PyObject* self, PyObject* args);
    static PyObject* GetVehicleQuaternion(PyObject* self, PyObject* args);
    static PyObject* GetWaterHeightAtCoords(PyObject* self, PyObject* args);
    static PyObject* GetWeapontypeModel(PyObject* self, PyObject* args);
    static PyObject* GetWeapontypeSlot(PyObject* self, PyObject* args);
    static PyObject* GetWheelieStats(PyObject* self, PyObject* args);
    static PyObject* GetZoneDealerStrength(PyObject* self, PyObject* args);
    static PyObject* GetZoneGangStrength(PyObject* self, PyObject* args);
    static PyObject* GiveMeleeAttackToChar(PyObject* self, PyObject* args);
    static PyObject* GiveNonPlayerCarNitro(PyObject* self, PyObject* args);
    static PyObject* GivePlayerClothes(PyObject* self, PyObject* args);
    static PyObject* GivePlayerClothesOutsideShop(PyObject* self, PyObject* args);
    static PyObject* GiveRemoteControlledModelToPlayer(PyObject* self, PyObject* args);
    static PyObject* GiveVehiclePaintjob(PyObject* self, PyObject* args);
    static PyObject* GiveWeaponToChar(PyObject* self, PyObject* args);
    static PyObject* GrabEntityOnRopeForObject(PyObject* self, PyObject* args);
    static PyObject* GrabEntityOnWinch(PyObject* self, PyObject* args);
    static PyObject* HasAnimationLoaded(PyObject* self, PyObject* args);
    static PyObject* HasCarBeenDamagedByCar(PyObject* self, PyObject* args);
    static PyObject* HasCarBeenDamagedByChar(PyObject* self, PyObject* args);
    static PyObject* HasCarBeenDamagedByWeapon(PyObject* self, PyObject* args);
    static PyObject* HasCarBeenResprayed(PyObject* self, PyObject* args);
    static PyObject* HasCarRecordingBeenLoaded(PyObject* self, PyObject* args);
    static PyObject* HasCharBeenArrested(PyObject* self, PyObject* args);
    static PyObject* HasCharBeenDamagedByCar(PyObject* self, PyObject* args);
    static PyObject* HasCharBeenDamagedByChar(PyObject* self, PyObject* args);
    static PyObject* HasCharBeenDamagedByWeapon(PyObject* self, PyObject* args);
    static PyObject* HasCharBeenPhotographed(PyObject* self, PyObject* args);
    static PyObject* HasCharGotWeapon(PyObject* self, PyObject* args);
    static PyObject* HasCharSpottedChar(PyObject* self, PyObject* args);
    static PyObject* HasCharSpottedCharInFront(PyObject* self, PyObject* args);
    static PyObject* HasCutsceneFinished(PyObject* self, PyObject* args);
    static PyObject* HasCutsceneLoaded(PyObject* self, PyObject* args);
    static PyObject* HasDeatharrestBeenExecuted(PyObject* self, PyObject* args);
    static PyObject* HasGameJustReturnedFromFrontend(PyObject* self, PyObject* args);
    static PyObject* HasLanguageChanged(PyObject* self, PyObject* args);
    static PyObject* HasMissionAudioFinished(PyObject* self, PyObject* args);
    static PyObject* HasMissionAudioLoaded(PyObject* self, PyObject* args);
    static PyObject* HasModelLoaded(PyObject* self, PyObject* args);
    static PyObject* HasObjectBeenDamaged(PyObject* self, PyObject* args);
    static PyObject* HasObjectBeenDamagedByWeapon(PyObject* self, PyObject* args);
    static PyObject* HasObjectBeenPhotographed(PyObject* self, PyObject* args);
    static PyObject* HasObjectBeenUprooted(PyObject* self, PyObject* args);
    static PyObject* HasObjectCollidedWithAnything(PyObject* self, PyObject* args);
    static PyObject* HasObjectOfTypeBeenSmashed(PyObject* self, PyObject* args);
    static PyObject* HasPickupBeenCollected(PyObject* self, PyObject* args);
    static PyObject* HasPlayerBoughtItem(PyObject* self, PyObject* args);
    static PyObject* HasSaveGameFinished(PyObject* self, PyObject* args);
    static PyObject* HasSpecialCharacterLoaded(PyObject* self, PyObject* args);
    static PyObject* HasStreamedScriptLoaded(PyObject* self, PyObject* args);
    static PyObject* HasTrainDerailed(PyObject* self, PyObject* args);
    static PyObject* HasVehicleModLoaded(PyObject* self, PyObject* args);
    static PyObject* HeliAttackPlayer(PyObject* self, PyObject* args);
    static PyObject* HeliFollowEntity(PyObject* self, PyObject* args);
    static PyObject* HeliGotoCoords(PyObject* self, PyObject* args);
    static PyObject* HeliKeepEntityInView(PyObject* self, PyObject* args);
    static PyObject* HeliLandAtCoords(PyObject* self, PyObject* args);
    static PyObject* HideAllFrontendBlips(PyObject* self, PyObject* args);
    static PyObject* HideCharWeaponForScriptedCutscene(PyObject* self, PyObject* args);
    static PyObject* HighlightMenuItem(PyObject* self, PyObject* args);
    static PyObject* IgnoreHeightDifferenceFollowingNodes(PyObject* self, PyObject* args);
    static PyObject* ImproveCarByCheating(PyObject* self, PyObject* args);
    static PyObject* IncreasePlayerMaxArmour(PyObject* self, PyObject* args);
    static PyObject* IncreasePlayerMaxHealth(PyObject* self, PyObject* args);
    static PyObject* IncrementFloatStat(PyObject* self, PyObject* args);
    static PyObject* IncrementFloatStatNoMessage(PyObject* self, PyObject* args);
    static PyObject* IncrementIntStat(PyObject* self, PyObject* args);
    static PyObject* IncrementIntStatNoMessage(PyObject* self, PyObject* args);
    static PyObject* InitZonePopulationSettings(PyObject* self, PyObject* args);
    static PyObject* Is2PlayerGameGoingOn(PyObject* self, PyObject* args);
    static PyObject* IsAnyPickupAtCoords(PyObject* self, PyObject* args);
    static PyObject* IsAreaOccupied(PyObject* self, PyObject* args);
    static PyObject* IsAttachedPlayerHeadingAchieved(PyObject* self, PyObject* args);
    static PyObject* IsAustralianGame(PyObject* self, PyObject* args);
    static PyObject* IsBigVehicle(PyObject* self, PyObject* args);
    static PyObject* IsButtonPressed(PyObject* self, PyObject* args);
    static PyObject* IsCarDead(PyObject* self, PyObject* args);
    static PyObject* IsCarDoorDamaged(PyObject* self, PyObject* args);
    static PyObject* IsCarDoorFullyOpen(PyObject* self, PyObject* args);
    static PyObject* IsCarHealthGreater(PyObject* self, PyObject* args);
    static PyObject* IsCarInAirProper(PyObject* self, PyObject* args);
    static PyObject* IsCarInArea2D(PyObject* self, PyObject* args);
    static PyObject* IsCarInArea3D(PyObject* self, PyObject* args);
    static PyObject* IsCarInWater(PyObject* self, PyObject* args);
    static PyObject* IsCarLowRider(PyObject* self, PyObject* args);
    static PyObject* IsCarModel(PyObject* self, PyObject* args);
    static PyObject* IsCarOnFire(PyObject* self, PyObject* args);
    static PyObject* IsCarOnScreen(PyObject* self, PyObject* args);
    static PyObject* IsCarPassengerSeatFree(PyObject* self, PyObject* args);
    static PyObject* IsCarStopped(PyObject* self, PyObject* args);
    static PyObject* IsCarStoppedInArea2D(PyObject* self, PyObject* args);
    static PyObject* IsCarStoppedInArea3D(PyObject* self, PyObject* args);
    static PyObject* IsCarStreetRacer(PyObject* self, PyObject* args);
    static PyObject* IsCarStuck(PyObject* self, PyObject* args);
    static PyObject* IsCarStuckOnRoof(PyObject* self, PyObject* args);
    static PyObject* IsCarTouchingCar(PyObject* self, PyObject* args);
    static PyObject* IsCarTyreBurst(PyObject* self, PyObject* args);
    static PyObject* IsCarUpright(PyObject* self, PyObject* args);
    static PyObject* IsCarUpsidedown(PyObject* self, PyObject* args);
    static PyObject* IsCarVisiblyDamaged(PyObject* self, PyObject* args);
    static PyObject* IsCarWaitingForWorldCollision(PyObject* self, PyObject* args);
    static PyObject* IsCharAtScriptedAttractor(PyObject* self, PyObject* args);
    static PyObject* IsCharAttachedToAnyCar(PyObject* self, PyObject* args);
    static PyObject* IsCharDead(PyObject* self, PyObject* args);
    static PyObject* IsCharDucking(PyObject* self, PyObject* args);
    static PyObject* IsCharGettingInToACar(PyObject* self, PyObject* args);
    static PyObject* IsCharHeadMissing(PyObject* self, PyObject* args);
    static PyObject* IsCharHealthGreater(PyObject* self, PyObject* args);
    static PyObject* IsCharHoldingObject(PyObject* self, PyObject* args);
    static PyObject* IsCharInAir(PyObject* self, PyObject* args);
    static PyObject* IsCharInAngledArea2D(PyObject* self, PyObject* args);
    static PyObject* IsCharInAngledArea3D(PyObject* self, PyObject* args);
    static PyObject* IsCharInAngledAreaInCar2D(PyObject* self, PyObject* args);
    static PyObject* IsCharInAngledAreaInCar3D(PyObject* self, PyObject* args);
    static PyObject* IsCharInAngledAreaOnFoot2D(PyObject* self, PyObject* args);
    static PyObject* IsCharInAngledAreaOnFoot3D(PyObject* self, PyObject* args);
    static PyObject* IsCharInAnyBoat(PyObject* self, PyObject* args);
    static PyObject* IsCharInAnyCar(PyObject* self, PyObject* args);
    static PyObject* IsCharInAnyHeli(PyObject* self, PyObject* args);
    static PyObject* IsCharInAnyPlane(PyObject* self, PyObject* args);
    static PyObject* IsCharInAnyPoliceVehicle(PyObject* self, PyObject* args);
    static PyObject* IsCharInAnySearchlight(PyObject* self, PyObject* args);
    static PyObject* IsCharInAnyTrain(PyObject* self, PyObject* args);
    static PyObject* IsCharInArea2D(PyObject* self, PyObject* args);
    static PyObject* IsCharInArea3D(PyObject* self, PyObject* args);
    static PyObject* IsCharInAreaInCar2D(PyObject* self, PyObject* args);
    static PyObject* IsCharInAreaInCar3D(PyObject* self, PyObject* args);
    static PyObject* IsCharInAreaOnFoot2D(PyObject* self, PyObject* args);
    static PyObject* IsCharInAreaOnFoot3D(PyObject* self, PyObject* args);
    static PyObject* IsCharInCar(PyObject* self, PyObject* args);
    static PyObject* IsCharInFlyingVehicle(PyObject* self, PyObject* args);
    static PyObject* IsCharInModel(PyObject* self, PyObject* args);
    static PyObject* IsCharInSearchlight(PyObject* self, PyObject* args);
    static PyObject* IsCharInTaxi(PyObject* self, PyObject* args);
    static PyObject* IsCharInWater(PyObject* self, PyObject* args);
    static PyObject* IsCharInZone(PyObject* self, PyObject* args);
    static PyObject* IsCharMale(PyObject* self, PyObject* args);
    static PyObject* IsCharModel(PyObject* self, PyObject* args);
    static PyObject* IsCharOnAnyBike(PyObject* self, PyObject* args);
    static PyObject* IsCharOnFoot(PyObject* self, PyObject* args);
    static PyObject* IsCharOnScreen(PyObject* self, PyObject* args);
    static PyObject* IsCharPlayingAnim(PyObject* self, PyObject* args);
    static PyObject* IsCharRespondingToEvent(PyObject* self, PyObject* args);
    static PyObject* IsCharShooting(PyObject* self, PyObject* args);
    static PyObject* IsCharShootingInArea(PyObject* self, PyObject* args);
    static PyObject* IsCharSittingInAnyCar(PyObject* self, PyObject* args);
    static PyObject* IsCharSittingInCar(PyObject* self, PyObject* args);
    static PyObject* IsCharStopped(PyObject* self, PyObject* args);
    static PyObject* IsCharStoppedInAngledArea2D(PyObject* self, PyObject* args);
    static PyObject* IsCharStoppedInAngledArea3D(PyObject* self, PyObject* args);
    static PyObject* IsCharStoppedInAngledAreaInCar2D(PyObject* self, PyObject* args);
    static PyObject* IsCharStoppedInAngledAreaInCar3D(PyObject* self, PyObject* args);
    static PyObject* IsCharStoppedInAngledAreaOnFoot2D(PyObject* self, PyObject* args);
    static PyObject* IsCharStoppedInAngledAreaOnFoot3D(PyObject* self, PyObject* args);
    static PyObject* IsCharStoppedInArea2D(PyObject* self, PyObject* args);
    static PyObject* IsCharStoppedInArea3D(PyObject* self, PyObject* args);
    static PyObject* IsCharStoppedInAreaInCar2D(PyObject* self, PyObject* args);
    static PyObject* IsCharStoppedInAreaInCar3D(PyObject* self, PyObject* args);
    static PyObject* IsCharStoppedInAreaOnFoot2D(PyObject* self, PyObject* args);
    static PyObject* IsCharStoppedInAreaOnFoot3D(PyObject* self, PyObject* args);
    static PyObject* IsCharStuckUnderCar(PyObject* self, PyObject* args);
    static PyObject* IsCharSwimming(PyObject* self, PyObject* args);
    static PyObject* IsCharTalking(PyObject* self, PyObject* args);
    static PyObject* IsCharTouchingChar(PyObject* self, PyObject* args);
    static PyObject* IsCharTouchingObject(PyObject* self, PyObject* args);
    static PyObject* IsCharTouchingObjectOnFoot(PyObject* self, PyObject* args);
    static PyObject* IsCharTouchingVehicle(PyObject* self, PyObject* args);
    static PyObject* IsCharUsingMapAttractor(PyObject* self, PyObject* args);
    static PyObject* IsCharWaitingForWorldCollision(PyObject* self, PyObject* args);
    static PyObject* IsClosestObjectOfTypeSmashedOrDamaged(PyObject* self, PyObject* args);
    static PyObject* IsConversationAtNode(PyObject* self, PyObject* args);
    static PyObject* IsCopVehicleInArea3DNoSave(PyObject* self, PyObject* args);
    static PyObject* IsCurrentCharWeapon(PyObject* self, PyObject* args);
    static PyObject* IsDebugCameraOn(PyObject* self, PyObject* args);
    static PyObject* IsEmergencyServicesVehicle(PyObject* self, PyObject* args);
    static PyObject* IsExplosionInArea(PyObject* self, PyObject* args);
    static PyObject* IsFlameInAngledArea2D(PyObject* self, PyObject* args);
    static PyObject* IsFlameInAngledArea3D(PyObject* self, PyObject* args);
    static PyObject* IsFloatLvarEqualToFloatVar(PyObject* self, PyObject* args);
    static PyObject* IsGangWarFightingGoingOn(PyObject* self, PyObject* args);
    static PyObject* IsGangWarGoingOn(PyObject* self, PyObject* args);
    static PyObject* IsGarageClosed(PyObject* self, PyObject* args);
    static PyObject* IsGarageOpen(PyObject* self, PyObject* args);
    static PyObject* IsGermanGame(PyObject* self, PyObject* args);
    static PyObject* IsGlobalVarBitSetConst(PyObject* self, PyObject* args);
    static PyObject* IsGlobalVarBitSetLvar(PyObject* self, PyObject* args);
    static PyObject* IsGlobalVarBitSetVar(PyObject* self, PyObject* args);
    static PyObject* IsGroupLeader(PyObject* self, PyObject* args);
    static PyObject* IsGroupMember(PyObject* self, PyObject* args);
    static PyObject* IsHelpMessageBeingDisplayed(PyObject* self, PyObject* args);
    static PyObject* IsIntLvarEqualToIntVar(PyObject* self, PyObject* args);
    static PyObject* IsLastBuildingModelShotByPlayer(PyObject* self, PyObject* args);
    static PyObject* IsLineOfSightClear(PyObject* self, PyObject* args);
    static PyObject* IsLocalVarBitSetConst(PyObject* self, PyObject* args);
    static PyObject* IsLocalVarBitSetLvar(PyObject* self, PyObject* args);
    static PyObject* IsLocalVarBitSetVar(PyObject* self, PyObject* args);
    static PyObject* IsLvarTextLabelEqualToTextLabel(PyObject* self, PyObject* args);
    static PyObject* IsMessageBeingDisplayed(PyObject* self, PyObject* args);
    static PyObject* IsMinigameInProgress(PyObject* self, PyObject* args);
    static PyObject* IsModelAvailable(PyObject* self, PyObject* args);
    static PyObject* IsModelInCdimage(PyObject* self, PyObject* args);
    static PyObject* IsMoneyPickupAtCoords(PyObject* self, PyObject* args);
    static PyObject* IsMouseUsingVerticalInversion(PyObject* self, PyObject* args);
    static PyObject* IsNextStationAllowed(PyObject* self, PyObject* args);
    static PyObject* IsNightVisionActive(PyObject* self, PyObject* args);
    static PyObject* IsObjectAttached(PyObject* self, PyObject* args);
    static PyObject* IsObjectInAngledArea2D(PyObject* self, PyObject* args);
    static PyObject* IsObjectInAngledArea3D(PyObject* self, PyObject* args);
    static PyObject* IsObjectInArea2D(PyObject* self, PyObject* args);
    static PyObject* IsObjectInArea3D(PyObject* self, PyObject* args);
    static PyObject* IsObjectInWater(PyObject* self, PyObject* args);
    static PyObject* IsObjectIntersectingWorld(PyObject* self, PyObject* args);
    static PyObject* IsObjectOnScreen(PyObject* self, PyObject* args);
    static PyObject* IsObjectPlayingAnim(PyObject* self, PyObject* args);
    static PyObject* IsObjectStatic(PyObject* self, PyObject* args);
    static PyObject* IsObjectWithinBrainActivationRange(PyObject* self, PyObject* args);
    static PyObject* IsPcUsingJoypad(PyObject* self, PyObject* args);
    static PyObject* IsPcVersion(PyObject* self, PyObject* args);
    static PyObject* IsPlaybackGoingOnForCar(PyObject* self, PyObject* args);
    static PyObject* IsPlayerClimbing(PyObject* self, PyObject* args);
    static PyObject* IsPlayerControlOn(PyObject* self, PyObject* args);
    static PyObject* IsPlayerDead(PyObject* self, PyObject* args);
    static PyObject* IsPlayerInInfoZone(PyObject* self, PyObject* args);
    static PyObject* IsPlayerInPositionForConversation(PyObject* self, PyObject* args);
    static PyObject* IsPlayerInRemoteMode(PyObject* self, PyObject* args);
    static PyObject* IsPlayerInShortcutTaxi(PyObject* self, PyObject* args);
    static PyObject* IsPlayerPerformingStoppie(PyObject* self, PyObject* args);
    static PyObject* IsPlayerPerformingWheelie(PyObject* self, PyObject* args);
    static PyObject* IsPlayerPlaying(PyObject* self, PyObject* args);
    static PyObject* IsPlayerPressingHorn(PyObject* self, PyObject* args);
    static PyObject* IsPlayerTargettingAnything(PyObject* self, PyObject* args);
    static PyObject* IsPlayerTargettingChar(PyObject* self, PyObject* args);
    static PyObject* IsPlayerTargettingObject(PyObject* self, PyObject* args);
    static PyObject* IsPlayerUsingJetpack(PyObject* self, PyObject* args);
    static PyObject* IsPlayerWearing(PyObject* self, PyObject* args);
    static PyObject* IsPointObscuredByAMissionEntity(PyObject* self, PyObject* args);
    static PyObject* IsPointOnScreen(PyObject* self, PyObject* args);
    static PyObject* IsProceduralInteriorActive(PyObject* self, PyObject* args);
    static PyObject* IsProjectileInArea(PyObject* self, PyObject* args);
    static PyObject* IsPs2KeyboardKeyJustPressed(PyObject* self, PyObject* args);
    static PyObject* IsPs2KeyboardKeyPressed(PyObject* self, PyObject* args);
    static PyObject* IsRecordingGoingOnForCar(PyObject* self, PyObject* args);
    static PyObject* IsRelationshipSet(PyObject* self, PyObject* args);
    static PyObject* IsScoreGreater(PyObject* self, PyObject* args);
    static PyObject* IsScriptFireExtinguished(PyObject* self, PyObject* args);
    static PyObject* IsSkipCutsceneButtonPressed(PyObject* self, PyObject* args);
    static PyObject* IsSkipWaitingForScriptToFadeIn(PyObject* self, PyObject* args);
    static PyObject* IsThisHelpMessageBeingDisplayed(PyObject* self, PyObject* args);
    static PyObject* IsThisModelABoat(PyObject* self, PyObject* args);
    static PyObject* IsThisModelACar(PyObject* self, PyObject* args);
    static PyObject* IsThisModelAHeli(PyObject* self, PyObject* args);
    static PyObject* IsThisModelAPlane(PyObject* self, PyObject* args);
    static PyObject* IsTrailerAttachedToCab(PyObject* self, PyObject* args);
    static PyObject* IsVarTextLabelEqualToTextLabel(PyObject* self, PyObject* args);
    static PyObject* IsVehicleAttached(PyObject* self, PyObject* args);
    static PyObject* IsVehicleInSearchlight(PyObject* self, PyObject* args);
    static PyObject* IsVehicleOnAllWheels(PyObject* self, PyObject* args);
    static PyObject* IsVehicleTouchingObject(PyObject* self, PyObject* args);
    static PyObject* IsWantedLevelGreater(PyObject* self, PyObject* args);
    static PyObject* IsWidescreenOnInOptions(PyObject* self, PyObject* args);
    static PyObject* KillFxSystem(PyObject* self, PyObject* args);
    static PyObject* KillFxSystemNow(PyObject* self, PyObject* args);
    static PyObject* LaunchMission(PyObject* self, PyObject* args);
    static PyObject* LimitAngle(PyObject* self, PyObject* args);
    static PyObject* LimitTwoPlayerDistance(PyObject* self, PyObject* args);
    static PyObject* Line(PyObject* self, PyObject* args);
    static PyObject* ListenToPlayerGroupCommands(PyObject* self, PyObject* args);
    static PyObject* LoadAllModelsNow(PyObject* self, PyObject* args);
    static PyObject* LoadAndLaunchMission(PyObject* self, PyObject* args);
    static PyObject* LoadAndLaunchMissionInternal(PyObject* self, PyObject* args);
    static PyObject* LoadCharDecisionMaker(PyObject* self, PyObject* args);
    static PyObject* LoadCutscene(PyObject* self, PyObject* args);
    static PyObject* LoadGroupDecisionMaker(PyObject* self, PyObject* args);
    static PyObject* LoadMissionAudio(PyObject* self, PyObject* args);
    static PyObject* LoadMissionText(PyObject* self, PyObject* args);
    static PyObject* LoadPathNodesInArea(PyObject* self, PyObject* args);
    static PyObject* LoadPrices(PyObject* self, PyObject* args);
    static PyObject* LoadScene(PyObject* self, PyObject* args);
    static PyObject* LoadSceneInDirection(PyObject* self, PyObject* args);
    static PyObject* LoadShop(PyObject* self, PyObject* args);
    static PyObject* LoadSpecialCharacter(PyObject* self, PyObject* args);
    static PyObject* LoadSprite(PyObject* self, PyObject* args);
    static PyObject* LoadTextureDictionary(PyObject* self, PyObject* args);
    static PyObject* LocateCar2D(PyObject* self, PyObject* args);
    static PyObject* LocateCar3D(PyObject* self, PyObject* args);
    static PyObject* LocateCharAnyMeans2D(PyObject* self, PyObject* args);
    static PyObject* LocateCharAnyMeans3D(PyObject* self, PyObject* args);
    static PyObject* LocateCharAnyMeansCar2D(PyObject* self, PyObject* args);
    static PyObject* LocateCharAnyMeansCar3D(PyObject* self, PyObject* args);
    static PyObject* LocateCharAnyMeansChar2D(PyObject* self, PyObject* args);
    static PyObject* LocateCharAnyMeansChar3D(PyObject* self, PyObject* args);
    static PyObject* LocateCharAnyMeansObject2D(PyObject* self, PyObject* args);
    static PyObject* LocateCharAnyMeansObject3D(PyObject* self, PyObject* args);
    static PyObject* LocateCharInCar2D(PyObject* self, PyObject* args);
    static PyObject* LocateCharInCar3D(PyObject* self, PyObject* args);
    static PyObject* LocateCharInCarCar2D(PyObject* self, PyObject* args);
    static PyObject* LocateCharInCarCar3D(PyObject* self, PyObject* args);
    static PyObject* LocateCharInCarChar2D(PyObject* self, PyObject* args);
    static PyObject* LocateCharInCarChar3D(PyObject* self, PyObject* args);
    static PyObject* LocateCharInCarObject2D(PyObject* self, PyObject* args);
    static PyObject* LocateCharInCarObject3D(PyObject* self, PyObject* args);
    static PyObject* LocateCharOnFoot2D(PyObject* self, PyObject* args);
    static PyObject* LocateCharOnFoot3D(PyObject* self, PyObject* args);
    static PyObject* LocateCharOnFootCar2D(PyObject* self, PyObject* args);
    static PyObject* LocateCharOnFootCar3D(PyObject* self, PyObject* args);
    static PyObject* LocateCharOnFootChar2D(PyObject* self, PyObject* args);
    static PyObject* LocateCharOnFootChar3D(PyObject* self, PyObject* args);
    static PyObject* LocateCharOnFootObject2D(PyObject* self, PyObject* args);
    static PyObject* LocateCharOnFootObject3D(PyObject* self, PyObject* args);
    static PyObject* LocateObject2D(PyObject* self, PyObject* args);
    static PyObject* LocateObject3D(PyObject* self, PyObject* args);
    static PyObject* LocateStoppedCar2D(PyObject* self, PyObject* args);
    static PyObject* LocateStoppedCar3D(PyObject* self, PyObject* args);
    static PyObject* LocateStoppedCharAnyMeans2D(PyObject* self, PyObject* args);
    static PyObject* LocateStoppedCharAnyMeans3D(PyObject* self, PyObject* args);
    static PyObject* LocateStoppedCharInCar2D(PyObject* self, PyObject* args);
    static PyObject* LocateStoppedCharInCar3D(PyObject* self, PyObject* args);
    static PyObject* LocateStoppedCharOnFoot2D(PyObject* self, PyObject* args);
    static PyObject* LocateStoppedCharOnFoot3D(PyObject* self, PyObject* args);
    static PyObject* LockCarDoors(PyObject* self, PyObject* args);
    static PyObject* LockDoor(PyObject* self, PyObject* args);
    static PyObject* MakeHeliComeCrashingDown(PyObject* self, PyObject* args);
    static PyObject* MakeObjectTargettable(PyObject* self, PyObject* args);
    static PyObject* MakePlayerFireProof(PyObject* self, PyObject* args);
    static PyObject* MakePlayerGangDisappear(PyObject* self, PyObject* args);
    static PyObject* MakePlayerGangReappear(PyObject* self, PyObject* args);
    static PyObject* MakePlayerSafeForCutscene(PyObject* self, PyObject* args);
    static PyObject* MakeRoomInPlayerGangForMissionPeds(PyObject* self, PyObject* args);
    static PyObject* ManageAllPopulation(PyObject* self, PyObject* args);
    static PyObject* MarkCarAsConvoyCar(PyObject* self, PyObject* args);
    static PyObject* MarkCarAsNoLongerNeeded(PyObject* self, PyObject* args);
    static PyObject* MarkCharAsNoLongerNeeded(PyObject* self, PyObject* args);
    static PyObject* MarkMissionTrainAsNoLongerNeeded(PyObject* self, PyObject* args);
    static PyObject* MarkMissionTrainsAsNoLongerNeeded(PyObject* self, PyObject* args);
    static PyObject* MarkModelAsNoLongerNeeded(PyObject* self, PyObject* args);
    static PyObject* MarkObjectAsNoLongerNeeded(PyObject* self, PyObject* args);
    static PyObject* MarkRoadNodeAsDontWander(PyObject* self, PyObject* args);
    static PyObject* MarkStreamedScriptAsNoLongerNeeded(PyObject* self, PyObject* args);
    static PyObject* MarkVehicleModAsNoLongerNeeded(PyObject* self, PyObject* args);
    static PyObject* MissionHasFinished(PyObject* self, PyObject* args);
    static PyObject* MoveSearchlightBetweenCoords(PyObject* self, PyObject* args);
    static PyObject* OpenCarDoor(PyObject* self, PyObject* args);
    static PyObject* OpenCarDoorABit(PyObject* self, PyObject* args);
    static PyObject* OpenGarage(PyObject* self, PyObject* args);
    static PyObject* OpenSequenceTask(PyObject* self, PyObject* args);
    static PyObject* OverrideNextRestart(PyObject* self, PyObject* args);
    static PyObject* PauseCurrentBeatTrack(PyObject* self, PyObject* args);
    static PyObject* PausePlaybackRecordedCar(PyObject* self, PyObject* args);
    static PyObject* PerformSequenceTask(PyObject* self, PyObject* args);
    static PyObject* PerformSequenceTaskFromProgress(PyObject* self, PyObject* args);
    static PyObject* PlaceObjectRelativeToCar(PyObject* self, PyObject* args);
    static PyObject* PlaneAttackPlayer(PyObject* self, PyObject* args);
    static PyObject* PlaneAttackPlayerUsingDogFight(PyObject* self, PyObject* args);
    static PyObject* PlaneFlyInDirection(PyObject* self, PyObject* args);
    static PyObject* PlaneFollowEntity(PyObject* self, PyObject* args);
    static PyObject* PlaneGotoCoords(PyObject* self, PyObject* args);
    static PyObject* PlaneStartsInAir(PyObject* self, PyObject* args);
    static PyObject* PlayAndKillFxSystem(PyObject* self, PyObject* args);
    static PyObject* PlayBeatTrack(PyObject* self, PyObject* args);
    static PyObject* PlayFxSystem(PyObject* self, PyObject* args);
    static PyObject* PlayMissionAudio(PyObject* self, PyObject* args);
    static PyObject* PlayMissionPassedTune(PyObject* self, PyObject* args);
    static PyObject* PlayObjectAnim(PyObject* self, PyObject* args);
    static PyObject* PlayerEnteredBuildingsiteCrane(PyObject* self, PyObject* args);
    static PyObject* PlayerEnteredDockCrane(PyObject* self, PyObject* args);
    static PyObject* PlayerEnteredLasVegasCrane(PyObject* self, PyObject* args);
    static PyObject* PlayerEnteredQuarryCrane(PyObject* self, PyObject* args);
    static PyObject* PlayerLeftCrane(PyObject* self, PyObject* args);
    static PyObject* PlayerMadeProgress(PyObject* self, PyObject* args);
    static PyObject* PlayerTakeOffGoggles(PyObject* self, PyObject* args);
    static PyObject* PointCameraAtCar(PyObject* self, PyObject* args);
    static PyObject* PointCameraAtChar(PyObject* self, PyObject* args);
    static PyObject* PointCameraAtPoint(PyObject* self, PyObject* args);
    static PyObject* PointSearchlightAtChar(PyObject* self, PyObject* args);
    static PyObject* PointSearchlightAtCoord(PyObject* self, PyObject* args);
    static PyObject* PointSearchlightAtVehicle(PyObject* self, PyObject* args);
    static PyObject* PoliceHeliChaseEntity(PyObject* self, PyObject* args);
    static PyObject* PoliceRadioMessage(PyObject* self, PyObject* args);
    static PyObject* PopCarBoot(PyObject* self, PyObject* args);
    static PyObject* PopCarDoor(PyObject* self, PyObject* args);
    static PyObject* PopCarPanel(PyObject* self, PyObject* args);
    static PyObject* PreloadBeatTrack(PyObject* self, PyObject* args);
    static PyObject* Print(PyObject* self, PyObject* args);
    static PyObject* PrintBig(PyObject* self, PyObject* args);
    static PyObject* PrintBigQ(PyObject* self, PyObject* args);
    static PyObject* PrintHelp(PyObject* self, PyObject* args);
    static PyObject* PrintHelpForever(PyObject* self, PyObject* args);
    static PyObject* PrintHelpForeverWithNumber(PyObject* self, PyObject* args);
    static PyObject* PrintNow(PyObject* self, PyObject* args);
    static PyObject* PrintStringInStringNow(PyObject* self, PyObject* args);
    static PyObject* PrintWith2NumbersBig(PyObject* self, PyObject* args);
    static PyObject* PrintWith2NumbersNow(PyObject* self, PyObject* args);
    static PyObject* PrintWith3Numbers(PyObject* self, PyObject* args);
    static PyObject* PrintWith4Numbers(PyObject* self, PyObject* args);
    static PyObject* PrintWith4NumbersNow(PyObject* self, PyObject* args);
    static PyObject* PrintWith6Numbers(PyObject* self, PyObject* args);
    static PyObject* PrintWithNumber(PyObject* self, PyObject* args);
    static PyObject* PrintWithNumberBig(PyObject* self, PyObject* args);
    static PyObject* PrintWithNumberNow(PyObject* self, PyObject* args);
    static PyObject* RandomPassengerSay(PyObject* self, PyObject* args);
    static PyObject* ReadKillFrenzyStatus(PyObject* self, PyObject* args);
    static PyObject* RegisterAttractorScriptBrainForCodeUse(PyObject* self, PyObject* args);
    static PyObject* RegisterBestPosition(PyObject* self, PyObject* args);
    static PyObject* RegisterFastestTime(PyObject* self, PyObject* args);
    static PyObject* RegisterFloatStat(PyObject* self, PyObject* args);
    static PyObject* RegisterIntStat(PyObject* self, PyObject* args);
    static PyObject* RegisterMissionGiven(PyObject* self, PyObject* args);
    static PyObject* RegisterMissionPassed(PyObject* self, PyObject* args);
    static PyObject* RegisterOddjobMissionPassed(PyObject* self, PyObject* args);
    static PyObject* RegisterScriptBrainForCodeUse(PyObject* self, PyObject* args);
    static PyObject* RegisterStreamedScript(PyObject* self, PyObject* args);
    static PyObject* RegisterStreamedScriptInternal(PyObject* self, PyObject* args);
    static PyObject* ReleaseEntityFromRopeForObject(PyObject* self, PyObject* args);
    static PyObject* ReleaseEntityFromWinch(PyObject* self, PyObject* args);
    static PyObject* ReleasePathNodes(PyObject* self, PyObject* args);
    static PyObject* ReleaseTwoPlayerDistance(PyObject* self, PyObject* args);
    static PyObject* ReleaseWeather(PyObject* self, PyObject* args);
    static PyObject* RemoveAllCharWeapons(PyObject* self, PyObject* args);
    static PyObject* RemoveAllScriptFires(PyObject* self, PyObject* args);
    static PyObject* RemoveAnimation(PyObject* self, PyObject* args);
    static PyObject* RemoveBlip(PyObject* self, PyObject* args);
    static PyObject* RemoveCarRecording(PyObject* self, PyObject* args);
    static PyObject* RemoveCharElegantly(PyObject* self, PyObject* args);
    static PyObject* RemoveCharFromCarMaintainPosition(PyObject* self, PyObject* args);
    static PyObject* RemoveCharFromGroup(PyObject* self, PyObject* args);
    static PyObject* RemoveDecisionMaker(PyObject* self, PyObject* args);
    static PyObject* RemoveGroup(PyObject* self, PyObject* args);
    static PyObject* RemoveIpl(PyObject* self, PyObject* args);
    static PyObject* RemoveIplDiscreetly(PyObject* self, PyObject* args);
    static PyObject* RemoveObjectElegantly(PyObject* self, PyObject* args);
    static PyObject* RemoveOilPuddlesInArea(PyObject* self, PyObject* args);
    static PyObject* RemovePickup(PyObject* self, PyObject* args);
    static PyObject* RemovePriceModifier(PyObject* self, PyObject* args);
    static PyObject* RemoveRcBuggy(PyObject* self, PyObject* args);
    static PyObject* RemoveScriptFire(PyObject* self, PyObject* args);
    static PyObject* RemoveSound(PyObject* self, PyObject* args);
    static PyObject* RemoveSphere(PyObject* self, PyObject* args);
    static PyObject* RemoveStreamedScript(PyObject* self, PyObject* args);
    static PyObject* RemoveStuckCarCheck(PyObject* self, PyObject* args);
    static PyObject* RemoveTextureDictionary(PyObject* self, PyObject* args);
    static PyObject* RemoveUpsidedownCarCheck(PyObject* self, PyObject* args);
    static PyObject* RemoveUser3DMarker(PyObject* self, PyObject* args);
    static PyObject* RemoveVehicleMod(PyObject* self, PyObject* args);
    static PyObject* RemoveWeaponFromChar(PyObject* self, PyObject* args);
    static PyObject* ReportMissionAudioEventAtCar(PyObject* self, PyObject* args);
    static PyObject* ReportMissionAudioEventAtChar(PyObject* self, PyObject* args);
    static PyObject* ReportMissionAudioEventAtObject(PyObject* self, PyObject* args);
    static PyObject* ReportMissionAudioEventAtPosition(PyObject* self, PyObject* args);
    static PyObject* RequestAnimation(PyObject* self, PyObject* args);
    static PyObject* RequestCarRecording(PyObject* self, PyObject* args);
    static PyObject* RequestCollision(PyObject* self, PyObject* args);
    static PyObject* RequestIpl(PyObject* self, PyObject* args);
    static PyObject* RequestModel(PyObject* self, PyObject* args);
    static PyObject* RequestVehicleMod(PyObject* self, PyObject* args);
    static PyObject* ResetLatestConsoleCommand(PyObject* self, PyObject* args);
    static PyObject* ResetNumOfModelsKilledByPlayer(PyObject* self, PyObject* args);
    static PyObject* ResetStuffUponResurrection(PyObject* self, PyObject* args);
    static PyObject* ResetVehicleCameraTweak(PyObject* self, PyObject* args);
    static PyObject* ResetVehicleHydraulics(PyObject* self, PyObject* args);
    static PyObject* RestoreCamera(PyObject* self, PyObject* args);
    static PyObject* RestoreCameraJumpcut(PyObject* self, PyObject* args);
    static PyObject* RestoreCarModState(PyObject* self, PyObject* args);
    static PyObject* RestoreClock(PyObject* self, PyObject* args);
    static PyObject* RestoreClothesState(PyObject* self, PyObject* args);
    static PyObject* RotateObject(PyObject* self, PyObject* args);
    static PyObject* SaveFloatToDebugFile(PyObject* self, PyObject* args);
    static PyObject* SaveIntToDebugFile(PyObject* self, PyObject* args);
    static PyObject* SaveNewlineToDebugFile(PyObject* self, PyObject* args);
    static PyObject* SaveTextLabelToDebugFile(PyObject* self, PyObject* args);
    static PyObject* ScriptName(PyObject* self, PyObject* args);
    static PyObject* SelectWeaponsForVehicle(PyObject* self, PyObject* args);
    static PyObject* SetActiveMenuItem(PyObject* self, PyObject* args);
    static PyObject* SetAircraftCarrierSamSite(PyObject* self, PyObject* args);
    static PyObject* SetAllCarsCanBeDamaged(PyObject* self, PyObject* args);
    static PyObject* SetAllTaxisHaveNitro(PyObject* self, PyObject* args);
    static PyObject* SetAlwaysDraw3DMarkers(PyObject* self, PyObject* args);
    static PyObject* SetAnimGroupForChar(PyObject* self, PyObject* args);
    static PyObject* SetArea51SamSite(PyObject* self, PyObject* args);
    static PyObject* SetAreaName(PyObject* self, PyObject* args);
    static PyObject* SetAreaVisible(PyObject* self, PyObject* args);
    static PyObject* SetBlipAlwaysDisplayOnZoomedRadar(PyObject* self, PyObject* args);
    static PyObject* SetBlipAsFriendly(PyObject* self, PyObject* args);
    static PyObject* SetBlipEntryExit(PyObject* self, PyObject* args);
    static PyObject* SetBoatCruiseSpeed(PyObject* self, PyObject* args);
    static PyObject* SetCameraBehindPlayer(PyObject* self, PyObject* args);
    static PyObject* SetCameraInFrontOfChar(PyObject* self, PyObject* args);
    static PyObject* SetCameraInFrontOfPlayer(PyObject* self, PyObject* args);
    static PyObject* SetCameraPositionUnfixed(PyObject* self, PyObject* args);
    static PyObject* SetCameraZoom(PyObject* self, PyObject* args);
    static PyObject* SetCanBurstCarTyres(PyObject* self, PyObject* args);
    static PyObject* SetCanResprayCar(PyObject* self, PyObject* args);
    static PyObject* SetCarAlwaysCreateSkids(PyObject* self, PyObject* args);
    static PyObject* SetCarAsMissionCar(PyObject* self, PyObject* args);
    static PyObject* SetCarAvoidLevelTransitions(PyObject* self, PyObject* args);
    static PyObject* SetCarCanBeDamaged(PyObject* self, PyObject* args);
    static PyObject* SetCarCanBeVisiblyDamaged(PyObject* self, PyObject* args);
    static PyObject* SetCarCanGoAgainstTraffic(PyObject* self, PyObject* args);
    static PyObject* SetCarCollision(PyObject* self, PyObject* args);
    static PyObject* SetCarCoordinates(PyObject* self, PyObject* args);
    static PyObject* SetCarCoordinatesNoOffset(PyObject* self, PyObject* args);
    static PyObject* SetCarCruiseSpeed(PyObject* self, PyObject* args);
    static PyObject* SetCarDensityMultiplier(PyObject* self, PyObject* args);
    static PyObject* SetCarDrivingStyle(PyObject* self, PyObject* args);
    static PyObject* SetCarEngineBroken(PyObject* self, PyObject* args);
    static PyObject* SetCarEngineOn(PyObject* self, PyObject* args);
    static PyObject* SetCarEscortCarFront(PyObject* self, PyObject* args);
    static PyObject* SetCarEscortCarLeft(PyObject* self, PyObject* args);
    static PyObject* SetCarEscortCarRear(PyObject* self, PyObject* args);
    static PyObject* SetCarEscortCarRight(PyObject* self, PyObject* args);
    static PyObject* SetCarFollowCar(PyObject* self, PyObject* args);
    static PyObject* SetCarForwardSpeed(PyObject* self, PyObject* args);
    static PyObject* SetCarHeading(PyObject* self, PyObject* args);
    static PyObject* SetCarHealth(PyObject* self, PyObject* args);
    static PyObject* SetCarHeavy(PyObject* self, PyObject* args);
    static PyObject* SetCarHydraulics(PyObject* self, PyObject* args);
    static PyObject* SetCarLightsOn(PyObject* self, PyObject* args);
    static PyObject* SetCarMission(PyObject* self, PyObject* args);
    static PyObject* SetCarModelComponents(PyObject* self, PyObject* args);
    static PyObject* SetCarOnlyDamagedByPlayer(PyObject* self, PyObject* args);
    static PyObject* SetCarProofs(PyObject* self, PyObject* args);
    static PyObject* SetCarRandomRouteSeed(PyObject* self, PyObject* args);
    static PyObject* SetCarRoll(PyObject* self, PyObject* args);
    static PyObject* SetCarRotationVelocity(PyObject* self, PyObject* args);
    static PyObject* SetCarStatus(PyObject* self, PyObject* args);
    static PyObject* SetCarStayInFastLane(PyObject* self, PyObject* args);
    static PyObject* SetCarStayInSlowLane(PyObject* self, PyObject* args);
    static PyObject* SetCarStraightLineDistance(PyObject* self, PyObject* args);
    static PyObject* SetCarStrong(PyObject* self, PyObject* args);
    static PyObject* SetCarTempAction(PyObject* self, PyObject* args);
    static PyObject* SetCarTraction(PyObject* self, PyObject* args);
    static PyObject* SetCarVisible(PyObject* self, PyObject* args);
    static PyObject* SetCarWatertight(PyObject* self, PyObject* args);
    static PyObject* SetCharAccuracy(PyObject* self, PyObject* args);
    static PyObject* SetCharAllowedToDuck(PyObject* self, PyObject* args);
    static PyObject* SetCharAmmo(PyObject* self, PyObject* args);
    static PyObject* SetCharAnimCurrentTime(PyObject* self, PyObject* args);
    static PyObject* SetCharAnimPlayingFlag(PyObject* self, PyObject* args);
    static PyObject* SetCharAnimSpeed(PyObject* self, PyObject* args);
    static PyObject* SetCharAreaVisible(PyObject* self, PyObject* args);
    static PyObject* SetCharBleeding(PyObject* self, PyObject* args);
    static PyObject* SetCharBulletproofVest(PyObject* self, PyObject* args);
    static PyObject* SetCharCanBeKnockedOffBike(PyObject* self, PyObject* args);
    static PyObject* SetCharCanBeShotInVehicle(PyObject* self, PyObject* args);
    static PyObject* SetCharCantBeDraggedOut(PyObject* self, PyObject* args);
    static PyObject* SetCharCollision(PyObject* self, PyObject* args);
    static PyObject* SetCharCoordinates(PyObject* self, PyObject* args);
    static PyObject* SetCharCoordinatesDontWarpGang(PyObject* self, PyObject* args);
    static PyObject* SetCharCoordinatesDontWarpGangNoOffset(PyObject* self, PyObject* args);
    static PyObject* SetCharCoordinatesNoOffset(PyObject* self, PyObject* args);
    static PyObject* SetCharDecisionMaker(PyObject* self, PyObject* args);
    static PyObject* SetCharDropsWeaponsWhenDead(PyObject* self, PyObject* args);
    static PyObject* SetCharDrownsInWater(PyObject* self, PyObject* args);
    static PyObject* SetCharDruggedUp(PyObject* self, PyObject* args);
    static PyObject* SetCharFireDamageMultiplier(PyObject* self, PyObject* args);
    static PyObject* SetCharForceDieInCar(PyObject* self, PyObject* args);
    static PyObject* SetCharGetOutUpsideDownCar(PyObject* self, PyObject* args);
    static PyObject* SetCharHasUsedEntryExit(PyObject* self, PyObject* args);
    static PyObject* SetCharHeading(PyObject* self, PyObject* args);
    static PyObject* SetCharHealth(PyObject* self, PyObject* args);
    static PyObject* SetCharIsChrisCriminal(PyObject* self, PyObject* args);
    static PyObject* SetCharIsTargetPriority(PyObject* self, PyObject* args);
    static PyObject* SetCharKeepTask(PyObject* self, PyObject* args);
    static PyObject* SetCharKindaStayInSamePlace(PyObject* self, PyObject* args);
    static PyObject* SetCharMaxHealth(PyObject* self, PyObject* args);
    static PyObject* SetCharMoney(PyObject* self, PyObject* args);
    static PyObject* SetCharNeverLeavesGroup(PyObject* self, PyObject* args);
    static PyObject* SetCharNeverTargetted(PyObject* self, PyObject* args);
    static PyObject* SetCharOnlyDamagedByPlayer(PyObject* self, PyObject* args);
    static PyObject* SetCharProofs(PyObject* self, PyObject* args);
    static PyObject* SetCharRelationship(PyObject* self, PyObject* args);
    static PyObject* SetCharRotation(PyObject* self, PyObject* args);
    static PyObject* SetCharSayContext(PyObject* self, PyObject* args);
    static PyObject* SetCharSayContextImportant(PyObject* self, PyObject* args);
    static PyObject* SetCharSayScript(PyObject* self, PyObject* args);
    static PyObject* SetCharShootRate(PyObject* self, PyObject* args);
    static PyObject* SetCharSignalAfterKill(PyObject* self, PyObject* args);
    static PyObject* SetCharStayInCarWhenJacked(PyObject* self, PyObject* args);
    static PyObject* SetCharStayInSamePlace(PyObject* self, PyObject* args);
    static PyObject* SetCharSuffersCriticalHits(PyObject* self, PyObject* args);
    static PyObject* SetCharUsesCollisionClosestObjectOfType(PyObject* self, PyObject* args);
    static PyObject* SetCharUsesUpperbodyDamageAnimsOnly(PyObject* self, PyObject* args);
    static PyObject* SetCharVelocity(PyObject* self, PyObject* args);
    static PyObject* SetCharVisible(PyObject* self, PyObject* args);
    static PyObject* SetCharWantedByPolice(PyObject* self, PyObject* args);
    static PyObject* SetCharWeaponSkill(PyObject* self, PyObject* args);
    static PyObject* SetCheckpointCoords(PyObject* self, PyObject* args);
    static PyObject* SetCheckpointHeading(PyObject* self, PyObject* args);
    static PyObject* SetCinemaCamera(PyObject* self, PyObject* args);
    static PyObject* SetClosestEntryExitFlag(PyObject* self, PyObject* args);
    static PyObject* SetCollectable1Total(PyObject* self, PyObject* args);
    static PyObject* SetCoordBlipAppearance(PyObject* self, PyObject* args);
    static PyObject* SetCreateRandomCops(PyObject* self, PyObject* args);
    static PyObject* SetCreateRandomGangMembers(PyObject* self, PyObject* args);
    static PyObject* SetCurrentCharWeapon(PyObject* self, PyObject* args);
    static PyObject* SetCutsceneOffset(PyObject* self, PyObject* args);
    static PyObject* SetDarknessEffect(PyObject* self, PyObject* args);
    static PyObject* SetDeathWeaponsPersist(PyObject* self, PyObject* args);
    static PyObject* SetDeatharrestState(PyObject* self, PyObject* args);
    static PyObject* SetDisableMilitaryZones(PyObject* self, PyObject* args);
    static PyObject* SetDrunkInputDelay(PyObject* self, PyObject* args);
    static PyObject* SetEnableRcDetonate(PyObject* self, PyObject* args);
    static PyObject* SetEnableRcDetonateOnContact(PyObject* self, PyObject* args);
    static PyObject* SetEveryoneIgnorePlayer(PyObject* self, PyObject* args);
    static PyObject* SetExtraCarColours(PyObject* self, PyObject* args);
    static PyObject* SetExtraColours(PyObject* self, PyObject* args);
    static PyObject* SetExtraHospitalRestartPoint(PyObject* self, PyObject* args);
    static PyObject* SetExtraPoliceStationRestartPoint(PyObject* self, PyObject* args);
    static PyObject* SetFadingColour(PyObject* self, PyObject* args);
    static PyObject* SetFirstPersonInCarCameraMode(PyObject* self, PyObject* args);
    static PyObject* SetFixedCameraPosition(PyObject* self, PyObject* args);
    static PyObject* SetFloatStat(PyObject* self, PyObject* args);
    static PyObject* SetFollowNodeThresholdDistance(PyObject* self, PyObject* args);
    static PyObject* SetForceRandomCarModel(PyObject* self, PyObject* args);
    static PyObject* SetFreeHealthCare(PyObject* self, PyObject* args);
    static PyObject* SetFreeResprays(PyObject* self, PyObject* args);
    static PyObject* SetFreebiesInVehicle(PyObject* self, PyObject* args);
    static PyObject* SetGangWarsActive(PyObject* self, PyObject* args);
    static PyObject* SetGangWarsTrainingMission(PyObject* self, PyObject* args);
    static PyObject* SetGangWeapons(PyObject* self, PyObject* args);
    static PyObject* SetGarageResprayFree(PyObject* self, PyObject* args);
    static PyObject* SetGlobalVarBitConst(PyObject* self, PyObject* args);
    static PyObject* SetGlobalVarBitLvar(PyObject* self, PyObject* args);
    static PyObject* SetGlobalVarBitVar(PyObject* self, PyObject* args);
    static PyObject* SetGroupDecisionMaker(PyObject* self, PyObject* args);
    static PyObject* SetGroupDefaultTaskAllocator(PyObject* self, PyObject* args);
    static PyObject* SetGroupFollowStatus(PyObject* self, PyObject* args);
    static PyObject* SetGroupLeader(PyObject* self, PyObject* args);
    static PyObject* SetGroupMember(PyObject* self, PyObject* args);
    static PyObject* SetGroupSeparationRange(PyObject* self, PyObject* args);
    static PyObject* SetGroupSequence(PyObject* self, PyObject* args);
    static PyObject* SetGunshotSenseRangeForRiot2(PyObject* self, PyObject* args);
    static PyObject* SetHasBeenOwnedForCarGenerator(PyObject* self, PyObject* args);
    static PyObject* SetHeadingForAttachedPlayer(PyObject* self, PyObject* args);
    static PyObject* SetHeadingLimitForAttachedChar(PyObject* self, PyObject* args);
    static PyObject* SetHeathazeEffect(PyObject* self, PyObject* args);
    static PyObject* SetHeliBladesFullSpeed(PyObject* self, PyObject* args);
    static PyObject* SetHeliOrientation(PyObject* self, PyObject* args);
    static PyObject* SetHeliReachedTargetDistance(PyObject* self, PyObject* args);
    static PyObject* SetHeliStabiliser(PyObject* self, PyObject* args);
    static PyObject* SetHelpMessageBoxSize(PyObject* self, PyObject* args);
    static PyObject* SetInformRespectedFriends(PyObject* self, PyObject* args);
    static PyObject* SetInfraredVision(PyObject* self, PyObject* args);
    static PyObject* SetIntStat(PyObject* self, PyObject* args);
    static PyObject* SetInterpolationParameters(PyObject* self, PyObject* args);
    static PyObject* SetLaRiots(PyObject* self, PyObject* args);
    static PyObject* SetLoadCollisionForCarFlag(PyObject* self, PyObject* args);
    static PyObject* SetLoadCollisionForCharFlag(PyObject* self, PyObject* args);
    static PyObject* SetLocalVarBitConst(PyObject* self, PyObject* args);
    static PyObject* SetLocalVarBitLvar(PyObject* self, PyObject* args);
    static PyObject* SetLocalVarBitVar(PyObject* self, PyObject* args);
    static PyObject* SetLvarTextLabel(PyObject* self, PyObject* args);
    static PyObject* SetMaxFireGenerations(PyObject* self, PyObject* args);
    static PyObject* SetMaxWantedLevel(PyObject* self, PyObject* args);
    static PyObject* SetMenuColumn(PyObject* self, PyObject* args);
    static PyObject* SetMenuColumnOrientation(PyObject* self, PyObject* args);
    static PyObject* SetMenuColumnWidth(PyObject* self, PyObject* args);
    static PyObject* SetMenuItemWith2Numbers(PyObject* self, PyObject* args);
    static PyObject* SetMenuItemWithNumber(PyObject* self, PyObject* args);
    static PyObject* SetMessageFormatting(PyObject* self, PyObject* args);
    static PyObject* SetMinigameInProgress(PyObject* self, PyObject* args);
    static PyObject* SetMissionAudioPosition(PyObject* self, PyObject* args);
    static PyObject* SetMissionRespectTotal(PyObject* self, PyObject* args);
    static PyObject* SetMissionTrainCoordinates(PyObject* self, PyObject* args);
    static PyObject* SetMusicDoesFade(PyObject* self, PyObject* args);
    static PyObject* SetNamedEntryExitFlag(PyObject* self, PyObject* args);
    static PyObject* SetNearClip(PyObject* self, PyObject* args);
    static PyObject* SetNextDesiredMoveState(PyObject* self, PyObject* args);
    static PyObject* SetNightVision(PyObject* self, PyObject* args);
    static PyObject* SetNoResprays(PyObject* self, PyObject* args);
    static PyObject* SetObjectAnimCurrentTime(PyObject* self, PyObject* args);
    static PyObject* SetObjectAnimSpeed(PyObject* self, PyObject* args);
    static PyObject* SetObjectAreaVisible(PyObject* self, PyObject* args);
    static PyObject* SetObjectAsStealable(PyObject* self, PyObject* args);
    static PyObject* SetObjectCollision(PyObject* self, PyObject* args);
    static PyObject* SetObjectCollisionDamageEffect(PyObject* self, PyObject* args);
    static PyObject* SetObjectCoordinates(PyObject* self, PyObject* args);
    static PyObject* SetObjectCoordinatesAndVelocity(PyObject* self, PyObject* args);
    static PyObject* SetObjectDrawLast(PyObject* self, PyObject* args);
    static PyObject* SetObjectDynamic(PyObject* self, PyObject* args);
    static PyObject* SetObjectHeading(PyObject* self, PyObject* args);
    static PyObject* SetObjectHealth(PyObject* self, PyObject* args);
    static PyObject* SetObjectMass(PyObject* self, PyObject* args);
    static PyObject* SetObjectOnlyDamagedByPlayer(PyObject* self, PyObject* args);
    static PyObject* SetObjectProofs(PyObject* self, PyObject* args);
    static PyObject* SetObjectQuaternion(PyObject* self, PyObject* args);
    static PyObject* SetObjectRecordsCollisions(PyObject* self, PyObject* args);
    static PyObject* SetObjectRenderScorched(PyObject* self, PyObject* args);
    static PyObject* SetObjectRotation(PyObject* self, PyObject* args);
    static PyObject* SetObjectRotationVelocity(PyObject* self, PyObject* args);
    static PyObject* SetObjectScale(PyObject* self, PyObject* args);
    static PyObject* SetObjectTurnMass(PyObject* self, PyObject* args);
    static PyObject* SetObjectVelocity(PyObject* self, PyObject* args);
    static PyObject* SetObjectVisible(PyObject* self, PyObject* args);
    static PyObject* SetOnlyCreateGangMembers(PyObject* self, PyObject* args);
    static PyObject* SetOnscreenCounterFlashWhenFirstDisplayed(PyObject* self, PyObject* args);
    static PyObject* SetPedDensityMultiplier(PyObject* self, PyObject* args);
    static PyObject* SetPetrolTankWeakpoint(PyObject* self, PyObject* args);
    static PyObject* SetPhotoCameraEffect(PyObject* self, PyObject* args);
    static PyObject* SetPlaneThrottle(PyObject* self, PyObject* args);
    static PyObject* SetPlaneUndercarriageUp(PyObject* self, PyObject* args);
    static PyObject* SetPlaybackSpeed(PyObject* self, PyObject* args);
    static PyObject* SetPlayerCanDoDriveBy(PyObject* self, PyObject* args);
    static PyObject* SetPlayerControl(PyObject* self, PyObject* args);
    static PyObject* SetPlayerCycleWeaponButton(PyObject* self, PyObject* args);
    static PyObject* SetPlayerDisplayVitalStatsButton(PyObject* self, PyObject* args);
    static PyObject* SetPlayerDrunkenness(PyObject* self, PyObject* args);
    static PyObject* SetPlayerDuckButton(PyObject* self, PyObject* args);
    static PyObject* SetPlayerEnterCarButton(PyObject* self, PyObject* args);
    static PyObject* SetPlayerFastReload(PyObject* self, PyObject* args);
    static PyObject* SetPlayerFireButton(PyObject* self, PyObject* args);
    static PyObject* SetPlayerGroupRecruitment(PyObject* self, PyObject* args);
    static PyObject* SetPlayerGroupToFollowAlways(PyObject* self, PyObject* args);
    static PyObject* SetPlayerGroupToFollowNever(PyObject* self, PyObject* args);
    static PyObject* SetPlayerInCarCameraMode(PyObject* self, PyObject* args);
    static PyObject* SetPlayerIsInStadium(PyObject* self, PyObject* args);
    static PyObject* SetPlayerJumpButton(PyObject* self, PyObject* args);
    static PyObject* SetPlayerModel(PyObject* self, PyObject* args);
    static PyObject* SetPlayerMood(PyObject* self, PyObject* args);
    static PyObject* SetPlayerNeverGetsTired(PyObject* self, PyObject* args);
    static PyObject* SetPlayerPlayerTargetting(PyObject* self, PyObject* args);
    static PyObject* SetPlayersCanBeInSeparateCars(PyObject* self, PyObject* args);
    static PyObject* SetPoliceIgnorePlayer(PyObject* self, PyObject* args);
    static PyObject* SetPoolTableCoords(PyObject* self, PyObject* args);
    static PyObject* SetProgressTotal(PyObject* self, PyObject* args);
    static PyObject* SetRadarZoom(PyObject* self, PyObject* args);
    static PyObject* SetRadioChannel(PyObject* self, PyObject* args);
    static PyObject* SetRadioToPlayersFavouriteStation(PyObject* self, PyObject* args);
    static PyObject* SetRailtrackResistanceMult(PyObject* self, PyObject* args);
    static PyObject* SetRelationship(PyObject* self, PyObject* args);
    static PyObject* SetRenderPlayerWeapon(PyObject* self, PyObject* args);
    static PyObject* SetRespawnPointForDurationOfMission(PyObject* self, PyObject* args);
    static PyObject* SetRopeHeightForObject(PyObject* self, PyObject* args);
    static PyObject* SetScriptCoopGame(PyObject* self, PyObject* args);
    static PyObject* SetScriptLimitToGangSize(PyObject* self, PyObject* args);
    static PyObject* SetSearchlightClipIfColliding(PyObject* self, PyObject* args);
    static PyObject* SetSenseRange(PyObject* self, PyObject* args);
    static PyObject* SetSequenceToRepeat(PyObject* self, PyObject* args);
    static PyObject* SetSpecificZoneToTriggerGangWar(PyObject* self, PyObject* args);
    static PyObject* SetSpritesDrawBeforeFade(PyObject* self, PyObject* args);
    static PyObject* SetSwimSpeed(PyObject* self, PyObject* args);
    static PyObject* SetTagStatusInArea(PyObject* self, PyObject* args);
    static PyObject* SetTargetCarForMissionGarage(PyObject* self, PyObject* args);
    static PyObject* SetTaxiLights(PyObject* self, PyObject* args);
    static PyObject* SetTextBackground(PyObject* self, PyObject* args);
    static PyObject* SetTextCentre(PyObject* self, PyObject* args);
    static PyObject* SetTextCentreSize(PyObject* self, PyObject* args);
    static PyObject* SetTextColour(PyObject* self, PyObject* args);
    static PyObject* SetTextDrawBeforeFade(PyObject* self, PyObject* args);
    static PyObject* SetTextDropshadow(PyObject* self, PyObject* args);
    static PyObject* SetTextEdge(PyObject* self, PyObject* args);
    static PyObject* SetTextFont(PyObject* self, PyObject* args);
    static PyObject* SetTextJustify(PyObject* self, PyObject* args);
    static PyObject* SetTextProportional(PyObject* self, PyObject* args);
    static PyObject* SetTextRightJustify(PyObject* self, PyObject* args);
    static PyObject* SetTextScale(PyObject* self, PyObject* args);
    static PyObject* SetTextWrapx(PyObject* self, PyObject* args);
    static PyObject* SetTimeOfDay(PyObject* self, PyObject* args);
    static PyObject* SetTimeOneDayForward(PyObject* self, PyObject* args);
    static PyObject* SetTimeScale(PyObject* self, PyObject* args);
    static PyObject* SetTimerBeepCountdownTime(PyObject* self, PyObject* args);
    static PyObject* SetTotalNumberOfMissions(PyObject* self, PyObject* args);
    static PyObject* SetTrainCruiseSpeed(PyObject* self, PyObject* args);
    static PyObject* SetTrainForcedToSlowDown(PyObject* self, PyObject* args);
    static PyObject* SetTrainSpeed(PyObject* self, PyObject* args);
    static PyObject* SetTwoPlayerCameraMode(PyObject* self, PyObject* args);
    static PyObject* SetUpConversationEndNodeWithScriptedSpeech(PyObject* self, PyObject* args);
    static PyObject* SetUpConversationEndNodeWithSpeech(PyObject* self, PyObject* args);
    static PyObject* SetUpConversationNodeWithScriptedSpeech(PyObject* self, PyObject* args);
    static PyObject* SetUpConversationNodeWithSpeech(PyObject* self, PyObject* args);
    static PyObject* SetUpSkip(PyObject* self, PyObject* args);
    static PyObject* SetUpSkipAfterMission(PyObject* self, PyObject* args);
    static PyObject* SetUpSkipForSpecificVehicle(PyObject* self, PyObject* args);
    static PyObject* SetUpSkipForVehicleFinishedByScript(PyObject* self, PyObject* args);
    static PyObject* SetUpSkipToBeFinishedByScript(PyObject* self, PyObject* args);
    static PyObject* SetUpsidedownCarNotDamaged(PyObject* self, PyObject* args);
    static PyObject* SetUsesCollisionOfClosestObjectOfType(PyObject* self, PyObject* args);
    static PyObject* SetVarTextLabel(PyObject* self, PyObject* args);
    static PyObject* SetVehicleAirResistanceMultiplier(PyObject* self, PyObject* args);
    static PyObject* SetVehicleAreaVisible(PyObject* self, PyObject* args);
    static PyObject* SetVehicleCameraTweak(PyObject* self, PyObject* args);
    static PyObject* SetVehicleCanBeTargetted(PyObject* self, PyObject* args);
    static PyObject* SetVehicleDirtLevel(PyObject* self, PyObject* args);
    static PyObject* SetVehicleIsConsideredByPlayer(PyObject* self, PyObject* args);
    static PyObject* SetVehicleQuaternion(PyObject* self, PyObject* args);
    static PyObject* SetVehicleToFadeIn(PyObject* self, PyObject* args);
    static PyObject* SetVisibilityOfClosestObjectOfType(PyObject* self, PyObject* args);
    static PyObject* SetWantedMultiplier(PyObject* self, PyObject* args);
    static PyObject* SetWeatherToAppropriateTypeNow(PyObject* self, PyObject* args);
    static PyObject* SetZoneDealerStrength(PyObject* self, PyObject* args);
    static PyObject* SetZoneForGangWarsTraining(PyObject* self, PyObject* args);
    static PyObject* SetZoneGangStrength(PyObject* self, PyObject* args);
    static PyObject* SetZoneNoCops(PyObject* self, PyObject* args);
    static PyObject* SetZonePopulationRace(PyObject* self, PyObject* args);
    static PyObject* SetZonePopulationType(PyObject* self, PyObject* args);
    static PyObject* ShakeCam(PyObject* self, PyObject* args);
    static PyObject* ShakePad(PyObject* self, PyObject* args);
    static PyObject* ShowBlipsOnAllLevels(PyObject* self, PyObject* args);
    static PyObject* ShowUpdateStats(PyObject* self, PyObject* args);
    static PyObject* ShuffleCardDecks(PyObject* self, PyObject* args);
    static PyObject* ShutAllCharsUp(PyObject* self, PyObject* args);
    static PyObject* ShutCharUp(PyObject* self, PyObject* args);
    static PyObject* ShutCharUpForScriptedSpeech(PyObject* self, PyObject* args);
    static PyObject* ShutPlayerUp(PyObject* self, PyObject* args);
    static PyObject* Sin(PyObject* self, PyObject* args);
    static PyObject* SkipCutsceneEnd(PyObject* self, PyObject* args);
    static PyObject* SkipCutsceneStart(PyObject* self, PyObject* args);
    static PyObject* SkipCutsceneStartInternal(PyObject* self, PyObject* args);
    static PyObject* SkipInPlaybackRecordedCar(PyObject* self, PyObject* args);
    static PyObject* SkipToEndAndStopPlaybackRecordedCar(PyObject* self, PyObject* args);
    static PyObject* SkipToNextAllowedStation(PyObject* self, PyObject* args);
    static PyObject* SlideObject(PyObject* self, PyObject* args);
    static PyObject* SortOutObjectCollisionWithCar(PyObject* self, PyObject* args);
    static PyObject* Sqrt(PyObject* self, PyObject* args);
    static PyObject* StartCarFire(PyObject* self, PyObject* args);
    static PyObject* StartCharFacialTalk(PyObject* self, PyObject* args);
    static PyObject* StartCharFire(PyObject* self, PyObject* args);
    static PyObject* StartCredits(PyObject* self, PyObject* args);
    static PyObject* StartCutscene(PyObject* self, PyObject* args);
    static PyObject* StartKillFrenzy(PyObject* self, PyObject* args);
    static PyObject* StartPlaybackRecordedCar(PyObject* self, PyObject* args);
    static PyObject* StartPlaybackRecordedCarLooped(PyObject* self, PyObject* args);
    static PyObject* StartPlaybackRecordedCarUsingAi(PyObject* self, PyObject* args);
    static PyObject* StartRecordingCar(PyObject* self, PyObject* args);
    static PyObject* StartScriptFire(PyObject* self, PyObject* args);
    static PyObject* StartSettingUpConversation(PyObject* self, PyObject* args);
    static PyObject* StopBeatTrack(PyObject* self, PyObject* args);
    static PyObject* StopCharFacialTalk(PyObject* self, PyObject* args);
    static PyObject* StopCredits(PyObject* self, PyObject* args);
    static PyObject* StopFxSystem(PyObject* self, PyObject* args);
    static PyObject* StopPlaybackRecordedCar(PyObject* self, PyObject* args);
    static PyObject* StopRecordingCar(PyObject* self, PyObject* args);
    static PyObject* StoreCarCharIsAttachedToNoSave(PyObject* self, PyObject* args);
    static PyObject* StoreCarCharIsIn(PyObject* self, PyObject* args);
    static PyObject* StoreCarCharIsInNoSave(PyObject* self, PyObject* args);
    static PyObject* StoreCarModState(PyObject* self, PyObject* args);
    static PyObject* StoreClock(PyObject* self, PyObject* args);
    static PyObject* StoreClothesState(PyObject* self, PyObject* args);
    static PyObject* StoreScore(PyObject* self, PyObject* args);
    static PyObject* StoreWantedLevel(PyObject* self, PyObject* args);
    static PyObject* StreamScript(PyObject* self, PyObject* args);
    static PyObject* SuppressCarModel(PyObject* self, PyObject* args);
    static PyObject* SwapNearestBuildingModel(PyObject* self, PyObject* args);
    static PyObject* SwitchAmbientPlanes(PyObject* self, PyObject* args);
    static PyObject* SwitchArrestPenalties(PyObject* self, PyObject* args);
    static PyObject* SwitchAudioZone(PyObject* self, PyObject* args);
    static PyObject* SwitchCarGenerator(PyObject* self, PyObject* args);
    static PyObject* SwitchCarSiren(PyObject* self, PyObject* args);
    static PyObject* SwitchContinued(PyObject* self, PyObject* args);
    static PyObject* SwitchCopsOnBikes(PyObject* self, PyObject* args);
    static PyObject* SwitchDeathPenalties(PyObject* self, PyObject* args);
    static PyObject* SwitchEmergencyServices(PyObject* self, PyObject* args);
    static PyObject* SwitchEntryExit(PyObject* self, PyObject* args);
    static PyObject* SwitchObjectBrains(PyObject* self, PyObject* args);
    static PyObject* SwitchOnGroundSearchlight(PyObject* self, PyObject* args);
    static PyObject* SwitchPedRoadsBackToOriginal(PyObject* self, PyObject* args);
    static PyObject* SwitchPedRoadsOff(PyObject* self, PyObject* args);
    static PyObject* SwitchPedRoadsOn(PyObject* self, PyObject* args);
    static PyObject* SwitchPoliceHelis(PyObject* self, PyObject* args);
    static PyObject* SwitchRandomTrains(PyObject* self, PyObject* args);
    static PyObject* SwitchRoadsBackToOriginal(PyObject* self, PyObject* args);
    static PyObject* SwitchRoadsOff(PyObject* self, PyObject* args);
    static PyObject* SwitchRoadsOn(PyObject* self, PyObject* args);
    static PyObject* SwitchRubbish(PyObject* self, PyObject* args);
    static PyObject* SwitchStart(PyObject* self, PyObject* args);
    static PyObject* SwitchStreaming(PyObject* self, PyObject* args);
    static PyObject* SwitchWidescreen(PyObject* self, PyObject* args);
    static PyObject* SwitchWorldProcessing(PyObject* self, PyObject* args);
    static PyObject* SyncWater(PyObject* self, PyObject* args);
    static PyObject* TakePhoto(PyObject* self, PyObject* args);
    static PyObject* TakeRemoteControlOfCar(PyObject* self, PyObject* args);
    static PyObject* TaskAchieveHeading(PyObject* self, PyObject* args);
    static PyObject* TaskAimGunAtChar(PyObject* self, PyObject* args);
    static PyObject* TaskAimGunAtCoord(PyObject* self, PyObject* args);
    static PyObject* TaskCarDriveToCoord(PyObject* self, PyObject* args);
    static PyObject* TaskCarDriveWander(PyObject* self, PyObject* args);
    static PyObject* TaskCarMission(PyObject* self, PyObject* args);
    static PyObject* TaskCarTempAction(PyObject* self, PyObject* args);
    static PyObject* TaskCharArrestChar(PyObject* self, PyObject* args);
    static PyObject* TaskCharSlideToCoord(PyObject* self, PyObject* args);
    static PyObject* TaskCharSlideToCoordAndPlayAnim(PyObject* self, PyObject* args);
    static PyObject* TaskChatWithChar(PyObject* self, PyObject* args);
    static PyObject* TaskClimb(PyObject* self, PyObject* args);
    static PyObject* TaskComplexPickupObject(PyObject* self, PyObject* args);
    static PyObject* TaskCower(PyObject* self, PyObject* args);
    static PyObject* TaskDead(PyObject* self, PyObject* args);
    static PyObject* TaskDestroyCar(PyObject* self, PyObject* args);
    static PyObject* TaskDie(PyObject* self, PyObject* args);
    static PyObject* TaskDieNamedAnim(PyObject* self, PyObject* args);
    static PyObject* TaskDiveAndGetUp(PyObject* self, PyObject* args);
    static PyObject* TaskDiveFromAttachmentAndGetUp(PyObject* self, PyObject* args);
    static PyObject* TaskDriveBy(PyObject* self, PyObject* args);
    static PyObject* TaskDrivePointRoute(PyObject* self, PyObject* args);
    static PyObject* TaskDrivePointRouteAdvanced(PyObject* self, PyObject* args);
    static PyObject* TaskDuck(PyObject* self, PyObject* args);
    static PyObject* TaskEnterCarAsDriver(PyObject* self, PyObject* args);
    static PyObject* TaskEnterCarAsPassenger(PyObject* self, PyObject* args);
    static PyObject* TaskEveryoneLeaveCar(PyObject* self, PyObject* args);
    static PyObject* TaskFallAndGetUp(PyObject* self, PyObject* args);
    static PyObject* TaskFleeChar(PyObject* self, PyObject* args);
    static PyObject* TaskFleeCharAnyMeans(PyObject* self, PyObject* args);
    static PyObject* TaskFleePoint(PyObject* self, PyObject* args);
    static PyObject* TaskFollowFootsteps(PyObject* self, PyObject* args);
    static PyObject* TaskFollowPathNodesToCoord(PyObject* self, PyObject* args);
    static PyObject* TaskFollowPathNodesToCoordWithRadius(PyObject* self, PyObject* args);
    static PyObject* TaskFollowPatrolRoute(PyObject* self, PyObject* args);
    static PyObject* TaskFollowPointRoute(PyObject* self, PyObject* args);
    static PyObject* TaskGoStraightToCoord(PyObject* self, PyObject* args);
    static PyObject* TaskGoToCoordAnyMeans(PyObject* self, PyObject* args);
    static PyObject* TaskGoToCoordWhileAiming(PyObject* self, PyObject* args);
    static PyObject* TaskGoToCoordWhileShooting(PyObject* self, PyObject* args);
    static PyObject* TaskGoToObject(PyObject* self, PyObject* args);
    static PyObject* TaskGotoCar(PyObject* self, PyObject* args);
    static PyObject* TaskGotoChar(PyObject* self, PyObject* args);
    static PyObject* TaskGotoCharAiming(PyObject* self, PyObject* args);
    static PyObject* TaskGotoCharOffset(PyObject* self, PyObject* args);
    static PyObject* TaskGreetPartner(PyObject* self, PyObject* args);
    static PyObject* TaskHandGesture(PyObject* self, PyObject* args);
    static PyObject* TaskHandsUp(PyObject* self, PyObject* args);
    static PyObject* TaskJetpack(PyObject* self, PyObject* args);
    static PyObject* TaskJump(PyObject* self, PyObject* args);
    static PyObject* TaskKillCharOnFoot(PyObject* self, PyObject* args);
    static PyObject* TaskKillCharOnFootTimed(PyObject* self, PyObject* args);
    static PyObject* TaskKillCharOnFootWhileDucking(PyObject* self, PyObject* args);
    static PyObject* TaskKindaStayInSamePlace(PyObject* self, PyObject* args);
    static PyObject* TaskLeaveAnyCar(PyObject* self, PyObject* args);
    static PyObject* TaskLeaveCar(PyObject* self, PyObject* args);
    static PyObject* TaskLeaveCarAndFlee(PyObject* self, PyObject* args);
    static PyObject* TaskLeaveCarImmediately(PyObject* self, PyObject* args);
    static PyObject* TaskLookAbout(PyObject* self, PyObject* args);
    static PyObject* TaskLookAtChar(PyObject* self, PyObject* args);
    static PyObject* TaskLookAtCoord(PyObject* self, PyObject* args);
    static PyObject* TaskLookAtObject(PyObject* self, PyObject* args);
    static PyObject* TaskLookAtVehicle(PyObject* self, PyObject* args);
    static PyObject* TaskPause(PyObject* self, PyObject* args);
    static PyObject* TaskPickUpObject(PyObject* self, PyObject* args);
    static PyObject* TaskPickUpSecondObject(PyObject* self, PyObject* args);
    static PyObject* TaskPlayAnim(PyObject* self, PyObject* args);
    static PyObject* TaskPlayAnimNonInterruptable(PyObject* self, PyObject* args);
    static PyObject* TaskPlayAnimSecondary(PyObject* self, PyObject* args);
    static PyObject* TaskPlayAnimWithFlags(PyObject* self, PyObject* args);
    static PyObject* TaskSay(PyObject* self, PyObject* args);
    static PyObject* TaskScratchHead(PyObject* self, PyObject* args);
    static PyObject* TaskSetCharDecisionMaker(PyObject* self, PyObject* args);
    static PyObject* TaskSetIgnoreWeaponRangeFlag(PyObject* self, PyObject* args);
    static PyObject* TaskShakeFist(PyObject* self, PyObject* args);
    static PyObject* TaskShootAtChar(PyObject* self, PyObject* args);
    static PyObject* TaskShootAtCoord(PyObject* self, PyObject* args);
    static PyObject* TaskShuffleToNextCarSeat(PyObject* self, PyObject* args);
    static PyObject* TaskSitDown(PyObject* self, PyObject* args);
    static PyObject* TaskSmartFleeChar(PyObject* self, PyObject* args);
    static PyObject* TaskSmartFleePoint(PyObject* self, PyObject* args);
    static PyObject* TaskStandStill(PyObject* self, PyObject* args);
    static PyObject* TaskStayInSamePlace(PyObject* self, PyObject* args);
    static PyObject* TaskSwimToCoord(PyObject* self, PyObject* args);
    static PyObject* TaskTired(PyObject* self, PyObject* args);
    static PyObject* TaskToggleDuck(PyObject* self, PyObject* args);
    static PyObject* TaskTogglePedThreatScanner(PyObject* self, PyObject* args);
    static PyObject* TaskTurnCharToFaceChar(PyObject* self, PyObject* args);
    static PyObject* TaskTurnCharToFaceCoord(PyObject* self, PyObject* args);
    static PyObject* TaskUseAtm(PyObject* self, PyObject* args);
    static PyObject* TaskUseAttractor(PyObject* self, PyObject* args);
    static PyObject* TaskUseClosestMapAttractor(PyObject* self, PyObject* args);
    static PyObject* TaskUseMobilePhone(PyObject* self, PyObject* args);
    static PyObject* TaskWalkAlongsideChar(PyObject* self, PyObject* args);
    static PyObject* TaskWanderStandard(PyObject* self, PyObject* args);
    static PyObject* TaskWarpCharIntoCarAsDriver(PyObject* self, PyObject* args);
    static PyObject* TaskWarpCharIntoCarAsPassenger(PyObject* self, PyObject* args);
    static PyObject* TaskWeaponRoll(PyObject* self, PyObject* args);
    static PyObject* TerminateAllScriptsWithThisName(PyObject* self, PyObject* args);
    static PyObject* TurnCarToFaceCoord(PyObject* self, PyObject* args);
    static PyObject* UnloadSpecialCharacter(PyObject* self, PyObject* args);
    static PyObject* UnmarkAllRoadNodesAsDontWander(PyObject* self, PyObject* args);
    static PyObject* UnpausePlaybackRecordedCar(PyObject* self, PyObject* args);
    static PyObject* UpdatePickupMoneyPerDay(PyObject* self, PyObject* args);
    static PyObject* UseDetonator(PyObject* self, PyObject* args);
    static PyObject* UseTextCommands(PyObject* self, PyObject* args);
    static PyObject* VehicleCanBeTargettedByHsMissile(PyObject* self, PyObject* args);
    static PyObject* VehicleDoesProvideCover(PyObject* self, PyObject* args);
    static PyObject* ViewFloatVariable(PyObject* self, PyObject* args);
    static PyObject* ViewIntegerVariable(PyObject* self, PyObject* args);
    static PyObject* WarpCharFromCarToCoord(PyObject* self, PyObject* args);
    static PyObject* WarpCharIntoCar(PyObject* self, PyObject* args);
    static PyObject* WarpCharIntoCarAsPassenger(PyObject* self, PyObject* args);
    static PyObject* WasCutsceneSkipped(PyObject* self, PyObject* args);
    static PyObject* WatchFloatVariable(PyObject* self, PyObject* args);
    static PyObject* WatchIntegerVariable(PyObject* self, PyObject* args);
    static PyObject* WinchCanPickObjectUp(PyObject* self, PyObject* args);
    static PyObject* WinchCanPickVehicleUp(PyObject* self, PyObject* args);
    static PyObject* WriteDebug(PyObject* self, PyObject* args);
    static PyObject* WriteDebugWithFloat(PyObject* self, PyObject* args);
    static PyObject* WriteDebugWithInt(PyObject* self, PyObject* args);

    static inline PyMethodDef Methods[] = 
    {
        // CLEO4 opcodes
        {"call_function", CallFunction, METH_VARARGS},
        {"call_method", CallMethod, METH_VARARGS},
        {"free_library", _FreeLibrary, METH_VARARGS},
        {"get_proc_address", _GetProcAddress, METH_VARARGS},
        {"get_car_handle", GetCarHandle, METH_VARARGS},
        {"get_car_pointer", GetCarPointer, METH_VARARGS},
        {"get_char_handle", GetCharHandle, METH_VARARGS},
        {"get_char_pointer", GetCharPointer, METH_VARARGS},
        {"get_closest_ped", GetClosestPed, METH_VARARGS},
        {"get_closest_vehicle", GetClosestVehicle, METH_VARARGS},
        {"get_object_handle", GetObjectHandle, METH_VARARGS},
        {"get_object_pointer", GetObjectPointer, METH_VARARGS},
        {"is_on_cutscene", IsOnCutscene, METH_VARARGS},
        {"is_on_mission", IsOnMission, METH_VARARGS},
        {"get_largest_gangid_in_zone", GetLargestGangIdInZone, METH_VARARGS},
        {"load_library", _LoadLibrary, METH_VARARGS},

        // Game opcodes
        {"activate_garage", ActivateGarage, METH_VARARGS},
        {"activate_heli_speed_cheat", ActivateHeliSpeedCheat, METH_VARARGS},
        {"activate_interior_peds", ActivateInteriorPeds, METH_VARARGS},
        {"activate_menu_item", ActivateMenuItem, METH_VARARGS},
        {"activate_pimp_cheat", ActivatePimpCheat, METH_VARARGS},
        {"activate_save_menu", ActivateSaveMenu, METH_VARARGS},
        {"add_ammo_to_char", AddAmmoToChar, METH_VARARGS},
        {"add_armour_to_char", AddArmourToChar, METH_VARARGS},
        {"add_attractor", AddAttractor, METH_VARARGS},
        {"add_big_gun_flash", AddBigGunFlash, METH_VARARGS},
        {"add_blip_for_car", AddBlipForCar, METH_VARARGS},
        {"add_blip_for_car_old", AddBlipForCarOld, METH_VARARGS},
        {"add_blip_for_char", AddBlipForChar, METH_VARARGS},
        {"add_blip_for_coord", AddBlipForCoord, METH_VARARGS},
        {"add_blip_for_coord_old", AddBlipForCoordOld, METH_VARARGS},
        {"add_blip_for_dead_char", AddBlipForDeadChar, METH_VARARGS},
        {"add_blip_for_object", AddBlipForObject, METH_VARARGS},
        {"add_blip_for_pickup", AddBlipForPickup, METH_VARARGS},
        {"add_blip_for_searchlight", AddBlipForSearchlight, METH_VARARGS},
        {"add_blood", AddBlood, METH_VARARGS},
        {"add_char_decision_maker_event_response", AddCharDecisionMakerEventResponse, METH_VARARGS},
        {"add_continuous_sound", AddContinuousSound, METH_VARARGS},
        {"add_explosion", AddExplosion, METH_VARARGS},
        {"add_explosion_no_sound", AddExplosionNoSound, METH_VARARGS},
        {"add_explosion_variable_shake", AddExplosionVariableShake, METH_VARARGS},
        {"add_group_decision_maker_event_response", AddGroupDecisionMakerEventResponse, METH_VARARGS},
        {"add_hospital_restart", AddHospitalRestart, METH_VARARGS},
        {"add_next_message_to_previous_briefs", AddNextMessageToPreviousBriefs, METH_VARARGS},
        {"add_one_off_sound", AddOneOffSound, METH_VARARGS},
        {"add_pedtype_as_attractor_user", AddPedtypeAsAttractorUser, METH_VARARGS},
        {"add_police_restart", AddPoliceRestart, METH_VARARGS},
        {"add_price_modifier", AddPriceModifier, METH_VARARGS},
        {"add_score", AddScore, METH_VARARGS},
        {"add_set_piece", AddSetPiece, METH_VARARGS},
        {"add_short_range_sprite_blip_for_contact_point", AddShortRangeSpriteBlipForContactPoint, METH_VARARGS},
        {"add_short_range_sprite_blip_for_coord", AddShortRangeSpriteBlipForCoord, METH_VARARGS},
        {"add_smoke_particle", AddSmokeParticle, METH_VARARGS},
        {"add_sparks", AddSparks, METH_VARARGS},
        {"add_sphere", AddSphere, METH_VARARGS},
        {"add_sprite_blip_for_contact_point", AddSpriteBlipForContactPoint, METH_VARARGS},
        {"add_sprite_blip_for_coord", AddSpriteBlipForCoord, METH_VARARGS},
        {"add_stuck_car_check", AddStuckCarCheck, METH_VARARGS},
        {"add_stuck_car_check_with_warp", AddStuckCarCheckWithWarp, METH_VARARGS},
        {"add_stunt_jump", AddStuntJump, METH_VARARGS},
        {"add_to_car_rotation_velocity", AddToCarRotationVelocity, METH_VARARGS},
        {"add_to_object_rotation_velocity", AddToObjectRotationVelocity, METH_VARARGS},
        {"add_to_object_velocity", AddToObjectVelocity, METH_VARARGS},
        {"add_upsidedown_car_check", AddUpsidedownCarCheck, METH_VARARGS},
        {"add_vehicle_mod", AddVehicleMod, METH_VARARGS},
        {"add_velocity_relative_to_object_velocity", AddVelocityRelativeToObjectVelocity, METH_VARARGS},
        {"allocate_streamed_script_to_object", AllocateStreamedScriptToObject, METH_VARARGS},
        {"allocate_streamed_script_to_random_ped", AllocateStreamedScriptToRandomPed, METH_VARARGS},
        {"allow_fixed_camera_collision", AllowFixedCameraCollision, METH_VARARGS},
        {"allow_pause_in_widescreen", AllowPauseInWidescreen, METH_VARARGS},
        {"alter_wanted_level", AlterWantedLevel, METH_VARARGS},
        {"alter_wanted_level_no_drop", AlterWantedLevelNoDrop, METH_VARARGS},
        {"anchor_boat", AnchorBoat, METH_VARARGS},
        {"append_to_next_cutscene", AppendToNextCutscene, METH_VARARGS},
        {"apply_brakes_to_players_car", ApplyBrakesToPlayersCar, METH_VARARGS},
        {"apply_force_to_car", ApplyForceToCar, METH_VARARGS},
        {"are_any_car_cheats_activated", AreAnyCarCheatsActivated, METH_VARARGS},
        {"are_any_chars_near_char", AreAnyCharsNearChar, METH_VARARGS},
        {"are_credits_finished", AreCreditsFinished, METH_VARARGS},
        {"are_measurements_in_metres", AreMeasurementsInMetres, METH_VARARGS},
        {"are_subtitles_switched_on", AreSubtitlesSwitchedOn, METH_VARARGS},
        {"attach_anims_to_model", AttachAnimsToModel, METH_VARARGS},
        {"attach_camera_to_char", AttachCameraToChar, METH_VARARGS},
        {"attach_camera_to_char_look_at_char", AttachCameraToCharLookAtChar, METH_VARARGS},
        {"attach_camera_to_vehicle", AttachCameraToVehicle, METH_VARARGS},
        {"attach_camera_to_vehicle_look_at_char", AttachCameraToVehicleLookAtChar, METH_VARARGS},
        {"attach_camera_to_vehicle_look_at_vehicle", AttachCameraToVehicleLookAtVehicle, METH_VARARGS},
        {"attach_car_to_car", AttachCarToCar, METH_VARARGS},
        {"attach_car_to_object", AttachCarToObject, METH_VARARGS},
        {"attach_char_to_bike", AttachCharToBike, METH_VARARGS},
        {"attach_char_to_car", AttachCharToCar, METH_VARARGS},
        {"attach_char_to_object", AttachCharToObject, METH_VARARGS},
        {"attach_fx_system_to_char_bone", AttachFxSystemToCharBone, METH_VARARGS},
        {"attach_mission_audio_to_car", AttachMissionAudioToCar, METH_VARARGS},
        {"attach_mission_audio_to_char", AttachMissionAudioToChar, METH_VARARGS},
        {"attach_mission_audio_to_object", AttachMissionAudioToObject, METH_VARARGS},
        {"attach_object_to_car", AttachObjectToCar, METH_VARARGS},
        {"attach_object_to_char", AttachObjectToChar, METH_VARARGS},
        {"attach_object_to_object", AttachObjectToObject, METH_VARARGS},
        {"attach_searchlight_to_searchlight_object", AttachSearchlightToSearchlightObject, METH_VARARGS},
        {"attach_trailer_to_cab", AttachTrailerToCab, METH_VARARGS},
        {"attach_winch_to_heli", AttachWinchToHeli, METH_VARARGS},
        {"award_player_mission_respect", AwardPlayerMissionRespect, METH_VARARGS},
        {"boat_goto_coords", BoatGotoCoords, METH_VARARGS},
        {"boat_stop", BoatStop, METH_VARARGS},
        {"break_object", BreakObject, METH_VARARGS},
        {"breakpoint", Breakpoint, METH_VARARGS},
        {"build_player_model", BuildPlayerModel, METH_VARARGS},
        {"burst_car_tyre", BurstCarTyre, METH_VARARGS},
        {"buy_item", BuyItem, METH_VARARGS},
        {"camera_is_vector_move_running", CameraIsVectorMoveRunning, METH_VARARGS},
        {"camera_is_vector_track_running", CameraIsVectorTrackRunning, METH_VARARGS},
        {"camera_persist_fov", CameraPersistFov, METH_VARARGS},
        {"camera_persist_pos", CameraPersistPos, METH_VARARGS},
        {"camera_persist_track", CameraPersistTrack, METH_VARARGS},
        {"camera_reset_new_scriptables", CameraResetNewScriptables, METH_VARARGS},
        {"camera_set_lerp_fov", CameraSetLerpFov, METH_VARARGS},
        {"camera_set_shake_simulation_simple", CameraSetShakeSimulationSimple, METH_VARARGS},
        {"camera_set_vector_move", CameraSetVectorMove, METH_VARARGS},
        {"camera_set_vector_track", CameraSetVectorTrack, METH_VARARGS},
        {"can_char_see_dead_char", CanCharSeeDeadChar, METH_VARARGS},
        {"can_player_start_mission", CanPlayerStartMission, METH_VARARGS},
        {"can_trigger_gang_war_when_on_a_mission", CanTriggerGangWarWhenOnAMission, METH_VARARGS},
        {"cancel_override_restart", CancelOverrideRestart, METH_VARARGS},
        {"car_goto_coordinates", CarGotoCoordinates, METH_VARARGS},
        {"car_goto_coordinates_accurate", CarGotoCoordinatesAccurate, METH_VARARGS},
        {"car_goto_coordinates_racing", CarGotoCoordinatesRacing, METH_VARARGS},
        {"car_set_idle", CarSetIdle, METH_VARARGS},
        {"car_wander_randomly", CarWanderRandomly, METH_VARARGS},
        {"change_blip_colour", ChangeBlipColour, METH_VARARGS},
        {"change_blip_display", ChangeBlipDisplay, METH_VARARGS},
        {"change_blip_scale", ChangeBlipScale, METH_VARARGS},
        {"change_car_colour", ChangeCarColour, METH_VARARGS},
        {"change_car_colour_from_menu", ChangeCarColourFromMenu, METH_VARARGS},
        {"change_garage_type", ChangeGarageType, METH_VARARGS},
        {"change_playback_to_use_ai", ChangePlaybackToUseAi, METH_VARARGS},
        {"clear_all_char_relationships", ClearAllCharRelationships, METH_VARARGS},
        {"clear_all_script_fire_flags", ClearAllScriptFireFlags, METH_VARARGS},
        {"clear_all_script_roadblocks", ClearAllScriptRoadblocks, METH_VARARGS},
        {"clear_all_view_variables", ClearAllViewVariables, METH_VARARGS},
        {"clear_area", ClearArea, METH_VARARGS},
        {"clear_area_of_cars", ClearAreaOfCars, METH_VARARGS},
        {"clear_area_of_chars", ClearAreaOfChars, METH_VARARGS},
        {"clear_attractor", ClearAttractor, METH_VARARGS},
        {"clear_car_last_damage_entity", ClearCarLastDamageEntity, METH_VARARGS},
        {"clear_car_last_weapon_damage", ClearCarLastWeaponDamage, METH_VARARGS},
        {"clear_char_decision_maker_event_response", ClearCharDecisionMakerEventResponse, METH_VARARGS},
        {"clear_char_last_damage_entity", ClearCharLastDamageEntity, METH_VARARGS},
        {"clear_char_last_weapon_damage", ClearCharLastWeaponDamage, METH_VARARGS},
        {"clear_char_relationship", ClearCharRelationship, METH_VARARGS},
        {"clear_char_tasks", ClearCharTasks, METH_VARARGS},
        {"clear_char_tasks_immediately", ClearCharTasksImmediately, METH_VARARGS},
        {"clear_conversation_for_char", ClearConversationForChar, METH_VARARGS},
        {"clear_cutscene", ClearCutscene, METH_VARARGS},
        {"clear_extra_colours", ClearExtraColours, METH_VARARGS},
        {"clear_global_var_bit_const", ClearGlobalVarBitConst, METH_VARARGS},
        {"clear_global_var_bit_lvar", ClearGlobalVarBitLvar, METH_VARARGS},
        {"clear_global_var_bit_var", ClearGlobalVarBitVar, METH_VARARGS},
        {"clear_group_decision_maker_event_response", ClearGroupDecisionMakerEventResponse, METH_VARARGS},
        {"clear_heli_orientation", ClearHeliOrientation, METH_VARARGS},
        {"clear_help", ClearHelp, METH_VARARGS},
        {"clear_last_building_model_shot_by_player", ClearLastBuildingModelShotByPlayer, METH_VARARGS},
        {"clear_loaded_shop", ClearLoadedShop, METH_VARARGS},
        {"clear_local_var_bit_const", ClearLocalVarBitConst, METH_VARARGS},
        {"clear_local_var_bit_lvar", ClearLocalVarBitLvar, METH_VARARGS},
        {"clear_local_var_bit_var", ClearLocalVarBitVar, METH_VARARGS},
        {"clear_look_at", ClearLookAt, METH_VARARGS},
        {"clear_mission_audio", ClearMissionAudio, METH_VARARGS},
        {"clear_object_last_weapon_damage", ClearObjectLastWeaponDamage, METH_VARARGS},
        {"clear_onscreen_counter", ClearOnscreenCounter, METH_VARARGS},
        {"clear_onscreen_timer", ClearOnscreenTimer, METH_VARARGS},
        {"clear_prints", ClearPrints, METH_VARARGS},
        {"clear_relationship", ClearRelationship, METH_VARARGS},
        {"clear_sequence_task", ClearSequenceTask, METH_VARARGS},
        {"clear_skip", ClearSkip, METH_VARARGS},
        {"clear_small_prints", ClearSmallPrints, METH_VARARGS},
        {"clear_specific_zones_to_trigger_gang_war", ClearSpecificZonesToTriggerGangWar, METH_VARARGS},
        {"clear_this_big_print", ClearThisBigPrint, METH_VARARGS},
        {"clear_this_float_watchpoint", ClearThisFloatWatchpoint, METH_VARARGS},
        {"clear_this_integer_watchpoint", ClearThisIntegerWatchpoint, METH_VARARGS},
        {"clear_this_print", ClearThisPrint, METH_VARARGS},
        {"clear_this_print_big_now", ClearThisPrintBigNow, METH_VARARGS},
        {"clear_this_view_float_variable", ClearThisViewFloatVariable, METH_VARARGS},
        {"clear_this_view_integer_variable", ClearThisViewIntegerVariable, METH_VARARGS},
        {"clear_wanted_level", ClearWantedLevel, METH_VARARGS},
        {"clear_wanted_level_in_garage", ClearWantedLevelInGarage, METH_VARARGS},
        {"close_all_car_doors", CloseAllCarDoors, METH_VARARGS},
        {"close_garage", CloseGarage, METH_VARARGS},
        {"close_sequence_task", CloseSequenceTask, METH_VARARGS},
        {"connect_lods", ConnectLods, METH_VARARGS},
        {"const_float", ConstFloat, METH_VARARGS},
        {"const_int", ConstInt, METH_VARARGS},
        {"control_car_door", ControlCarDoor, METH_VARARGS},
        {"control_car_hydraulics", ControlCarHydraulics, METH_VARARGS},
        {"control_movable_vehicle_part", ControlMovableVehiclePart, METH_VARARGS},
        {"convert_metres_to_feet", ConvertMetresToFeet, METH_VARARGS},
        {"convert_metres_to_feet_int", ConvertMetresToFeetInt, METH_VARARGS},
        {"copy_char_decision_maker", CopyCharDecisionMaker, METH_VARARGS},
        {"copy_group_decision_maker", CopyGroupDecisionMaker, METH_VARARGS},
        {"copy_shared_char_decision_maker", CopySharedCharDecisionMaker, METH_VARARGS},
        {"cos", Cos, METH_VARARGS},
        {"create_birds", CreateBirds, METH_VARARGS},
        {"create_car", CreateCar, METH_VARARGS},
        {"create_car_generator", CreateCarGenerator, METH_VARARGS},
        {"create_car_generator_with_plate", CreateCarGeneratorWithPlate, METH_VARARGS},
        {"create_char", CreateChar, METH_VARARGS},
        {"create_char_as_passenger", CreateCharAsPassenger, METH_VARARGS},
        {"create_char_at_attractor", CreateCharAtAttractor, METH_VARARGS},
        {"create_char_inside_car", CreateCharInsideCar, METH_VARARGS},
        {"create_checkpoint", CreateCheckpoint, METH_VARARGS},
        {"create_collectable1", CreateCollectable1, METH_VARARGS},
        {"create_emergency_services_car", CreateEmergencyServicesCar, METH_VARARGS},
        {"create_forsale_property_pickup", CreateForsalePropertyPickup, METH_VARARGS},
        {"create_fx_system", CreateFxSystem, METH_VARARGS},
        {"create_fx_system_on_car", CreateFxSystemOnCar, METH_VARARGS},
        {"create_fx_system_on_car_with_direction", CreateFxSystemOnCarWithDirection, METH_VARARGS},
        {"create_fx_system_on_char", CreateFxSystemOnChar, METH_VARARGS},
        {"create_fx_system_on_char_with_direction", CreateFxSystemOnCharWithDirection, METH_VARARGS},
        {"create_fx_system_on_object", CreateFxSystemOnObject, METH_VARARGS},
        {"create_fx_system_on_object_with_direction", CreateFxSystemOnObjectWithDirection, METH_VARARGS},
        {"create_group", CreateGroup, METH_VARARGS},
        {"create_horseshoe_pickup", CreateHorseshoePickup, METH_VARARGS},
        {"create_locked_property_pickup", CreateLockedPropertyPickup, METH_VARARGS},
        {"create_menu", CreateMenu, METH_VARARGS},
        {"create_menu_grid", CreateMenuGrid, METH_VARARGS},
        {"create_mission_train", CreateMissionTrain, METH_VARARGS},
        {"create_money_pickup", CreateMoneyPickup, METH_VARARGS},
        {"create_object", CreateObject, METH_VARARGS},
        {"create_object_no_offset", CreateObjectNoOffset, METH_VARARGS},
        {"create_oyster_pickup", CreateOysterPickup, METH_VARARGS},
        {"create_pickup", CreatePickup, METH_VARARGS},
        {"create_pickup_with_ammo", CreatePickupWithAmmo, METH_VARARGS},
        {"create_player", CreatePlayer, METH_VARARGS},
        {"create_protection_pickup", CreateProtectionPickup, METH_VARARGS},
        {"create_random_car_for_car_park", CreateRandomCarForCarPark, METH_VARARGS},
        {"create_random_char", CreateRandomChar, METH_VARARGS},
        {"create_random_char_as_driver", CreateRandomCharAsDriver, METH_VARARGS},
        {"create_random_char_as_passenger", CreateRandomCharAsPassenger, METH_VARARGS},
        {"create_script_roadblock", CreateScriptRoadblock, METH_VARARGS},
        {"create_searchlight", CreateSearchlight, METH_VARARGS},
        {"create_searchlight_on_vehicle", CreateSearchlightOnVehicle, METH_VARARGS},
        {"create_snapshot_pickup", CreateSnapshotPickup, METH_VARARGS},
        {"create_swat_rope", CreateSwatRope, METH_VARARGS},
        {"create_user_3d_marker", CreateUser3DMarker, METH_VARARGS},
        {"custom_plate_design_for_next_car", CustomPlateDesignForNextCar, METH_VARARGS},
        {"custom_plate_for_next_car", CustomPlateForNextCar, METH_VARARGS},
        {"damage_car_door", DamageCarDoor, METH_VARARGS},
        {"damage_car_panel", DamageCarPanel, METH_VARARGS},
        {"damage_char", DamageChar, METH_VARARGS},
        {"deactivate_garage", DeactivateGarage, METH_VARARGS},
        {"declare_mission_flag", DeclareMissionFlag, METH_VARARGS},
        {"decrement_float_stat", DecrementFloatStat, METH_VARARGS},
        {"decrement_int_stat", DecrementIntStat, METH_VARARGS},
        {"delete_all_trains", DeleteAllTrains, METH_VARARGS},
        {"delete_car", DeleteCar, METH_VARARGS},
        {"delete_char", DeleteChar, METH_VARARGS},
        {"delete_checkpoint", DeleteCheckpoint, METH_VARARGS},
        {"delete_menu", DeleteMenu, METH_VARARGS},
        {"delete_mission_train", DeleteMissionTrain, METH_VARARGS},
        {"delete_mission_trains", DeleteMissionTrains, METH_VARARGS},
        {"delete_object", DeleteObject, METH_VARARGS},
        {"delete_player", DeletePlayer, METH_VARARGS},
        {"delete_searchlight", DeleteSearchlight, METH_VARARGS},
        {"detach_car", DetachCar, METH_VARARGS},
        {"detach_char_from_car", DetachCharFromCar, METH_VARARGS},
        {"detach_object", DetachObject, METH_VARARGS},
        {"detach_trailer_from_cab", DetachTrailerFromCab, METH_VARARGS},
        {"disable_2nd_pad_for_debug", Disable2NdPadForDebug, METH_VARARGS},
        {"disable_all_entry_exits", DisableAllEntryExits, METH_VARARGS},
        {"disable_char_speech", DisableCharSpeech, METH_VARARGS},
        {"disable_heli_audio", DisableHeliAudio, METH_VARARGS},
        {"disable_player_sprint", DisablePlayerSprint, METH_VARARGS},
        {"display_car_names", DisplayCarNames, METH_VARARGS},
        {"display_hud", DisplayHud, METH_VARARGS},
        {"display_non_minigame_help_messages", DisplayNonMinigameHelpMessages, METH_VARARGS},
        {"display_nth_onscreen_counter_with_string", DisplayNthOnscreenCounterWithString, METH_VARARGS},
        {"display_onscreen_counter_with_string", DisplayOnscreenCounterWithString, METH_VARARGS},
        {"display_onscreen_timer", DisplayOnscreenTimer, METH_VARARGS},
        {"display_onscreen_timer_with_string", DisplayOnscreenTimerWithString, METH_VARARGS},
        {"display_radar", DisplayRadar, METH_VARARGS},
        {"display_text", DisplayText, METH_VARARGS},
        {"display_text_with_2_numbers", DisplayTextWith2Numbers, METH_VARARGS},
        {"display_text_with_float", DisplayTextWithFloat, METH_VARARGS},
        {"display_text_with_number", DisplayTextWithNumber, METH_VARARGS},
        {"display_timer_bars", DisplayTimerBars, METH_VARARGS},
        {"display_zone_names", DisplayZoneNames, METH_VARARGS},
        {"do_2d_rectangles_collide", Do2DRectanglesCollide, METH_VARARGS},
        {"do_camera_bump", DoCameraBump, METH_VARARGS},
        {"do_fade", DoFade, METH_VARARGS},
        {"do_weapon_stuff_at_start_of_2p_game", DoWeaponStuffAtStartOf2PGame, METH_VARARGS},
        {"does_blip_exist", DoesBlipExist, METH_VARARGS},
        {"does_car_have_hydraulics", DoesCarHaveHydraulics, METH_VARARGS},
        {"does_car_have_stuck_car_check", DoesCarHaveStuckCarCheck, METH_VARARGS},
        {"does_char_exist", DoesCharExist, METH_VARARGS},
        {"does_decision_maker_exist", DoesDecisionMakerExist, METH_VARARGS},
        {"does_group_exist", DoesGroupExist, METH_VARARGS},
        {"does_object_exist", DoesObjectExist, METH_VARARGS},
        {"does_object_have_this_model", DoesObjectHaveThisModel, METH_VARARGS},
        {"does_pickup_exist", DoesPickupExist, METH_VARARGS},
        {"does_script_fire_exist", DoesScriptFireExist, METH_VARARGS},
        {"does_searchlight_exist", DoesSearchlightExist, METH_VARARGS},
        {"does_vehicle_exist", DoesVehicleExist, METH_VARARGS},
        {"dont_remove_char", DontRemoveChar, METH_VARARGS},
        {"dont_remove_object", DontRemoveObject, METH_VARARGS},
        {"dont_suppress_any_car_models", DontSuppressAnyCarModels, METH_VARARGS},
        {"dont_suppress_car_model", DontSuppressCarModel, METH_VARARGS},
        {"draw_corona", DrawCorona, METH_VARARGS},
        {"draw_crosshair", DrawCrosshair, METH_VARARGS},
        {"draw_light_with_range", DrawLightWithRange, METH_VARARGS},
        {"draw_oddjob_title_before_fade", DrawOddjobTitleBeforeFade, METH_VARARGS},
        {"draw_rect", DrawRect, METH_VARARGS},
        {"draw_shadow", DrawShadow, METH_VARARGS},
        {"draw_sphere", DrawSphere, METH_VARARGS},
        {"draw_sprite", DrawSprite, METH_VARARGS},
        {"draw_sprite_with_rotation", DrawSpriteWithRotation, METH_VARARGS},
        {"draw_subtitles_before_fade", DrawSubtitlesBeforeFade, METH_VARARGS},
        {"draw_weaponshop_corona", DrawWeaponshopCorona, METH_VARARGS},
        {"draw_window", DrawWindow, METH_VARARGS},
        {"drop_object", DropObject, METH_VARARGS},
        {"drop_second_object", DropSecondObject, METH_VARARGS},
        {"enable_ambient_crime", EnableAmbientCrime, METH_VARARGS},
        {"enable_burglary_houses", EnableBurglaryHouses, METH_VARARGS},
        {"enable_char_speech", EnableCharSpeech, METH_VARARGS},
        {"enable_conversation", EnableConversation, METH_VARARGS},
        {"enable_crane_controls", EnableCraneControls, METH_VARARGS},
        {"enable_disabled_attractors_on_object", EnableDisabledAttractorsOnObject, METH_VARARGS},
        {"enable_entry_exit_player_group_warping", EnableEntryExitPlayerGroupWarping, METH_VARARGS},
        {"ensure_player_has_drive_by_weapon", EnsurePlayerHasDriveByWeapon, METH_VARARGS},
        {"explode_car", ExplodeCar, METH_VARARGS},
        {"explode_car_in_cutscene", ExplodeCarInCutscene, METH_VARARGS},
        {"explode_car_in_cutscene_shake_and_bits", ExplodeCarInCutsceneShakeAndBits, METH_VARARGS},
        {"explode_char_head", ExplodeCharHead, METH_VARARGS},
        {"extend_patrol_route", ExtendPatrolRoute, METH_VARARGS},
        {"extend_route", ExtendRoute, METH_VARARGS},
        {"extinguish_fire_at_point", ExtinguishFireAtPoint, METH_VARARGS},
        {"fail_current_mission", FailCurrentMission, METH_VARARGS},
        {"fail_kill_frenzy", FailKillFrenzy, METH_VARARGS},
        {"fetch_next_card", FetchNextCard, METH_VARARGS},
        {"find_max_number_of_group_members", FindMaxNumberOfGroupMembers, METH_VARARGS},
        {"find_number_tags_tagged", FindNumberTagsTagged, METH_VARARGS},
        {"find_train_direction", FindTrainDirection, METH_VARARGS},
        {"finish_setting_up_conversation", FinishSettingUpConversation, METH_VARARGS},
        {"finish_setting_up_conversation_no_subtitles", FinishSettingUpConversationNoSubtitles, METH_VARARGS},
        {"fire_hunter_gun", FireHunterGun, METH_VARARGS},
        {"fire_single_bullet", FireSingleBullet, METH_VARARGS},
        {"fix_car", FixCar, METH_VARARGS},
        {"fix_car_door", FixCarDoor, METH_VARARGS},
        {"fix_car_panel", FixCarPanel, METH_VARARGS},
        {"fix_car_tyre", FixCarTyre, METH_VARARGS},
        {"flash_hud_object", FlashHudObject, METH_VARARGS},
        {"flush_patrol_route", FlushPatrolRoute, METH_VARARGS},
        {"flush_route", FlushRoute, METH_VARARGS},
        {"force_all_vehicle_lights_off", ForceAllVehicleLightsOff, METH_VARARGS},
        {"force_big_message_and_counter", ForceBigMessageAndCounter, METH_VARARGS},
        {"force_car_lights", ForceCarLights, METH_VARARGS},
        {"force_death_restart", ForceDeathRestart, METH_VARARGS},
        {"force_interior_lighting_for_player", ForceInteriorLightingForPlayer, METH_VARARGS},
        {"force_weather", ForceWeather, METH_VARARGS},
        {"force_weather_now", ForceWeatherNow, METH_VARARGS},
        {"freeze_car_position", FreezeCarPosition, METH_VARARGS},
        {"freeze_car_position_and_dont_load_collision", FreezeCarPositionAndDontLoadCollision, METH_VARARGS},
        {"freeze_char_position", FreezeCharPosition, METH_VARARGS},
        {"freeze_char_position_and_dont_load_collision", FreezeCharPositionAndDontLoadCollision, METH_VARARGS},
        {"freeze_object_position", FreezeObjectPosition, METH_VARARGS},
        {"freeze_onscreen_timer", FreezeOnscreenTimer, METH_VARARGS},
        {"generate_random_float_in_range", GenerateRandomFloatInRange, METH_VARARGS},
        {"generate_random_int_in_range", GenerateRandomIntInRange, METH_VARARGS},
        {"get_2d_lines_intersect_point", Get2DLinesIntersectPoint, METH_VARARGS},
        {"get_active_camera_coordinates", GetActiveCameraCoordinates, METH_VARARGS},
        {"get_active_camera_point_at", GetActiveCameraPointAt, METH_VARARGS},
        {"get_ammo_in_char_weapon", GetAmmoInCharWeapon, METH_VARARGS},
        {"get_angle_between_2d_vectors", GetAngleBetween2DVectors, METH_VARARGS},
        {"get_area_visible", GetAreaVisible, METH_VARARGS},
        {"get_available_vehicle_mod", GetAvailableVehicleMod, METH_VARARGS},
        {"get_beat_proximity", GetBeatProximity, METH_VARARGS},
        {"get_beat_track_status", GetBeatTrackStatus, METH_VARARGS},
        {"get_camera_fov", GetCameraFov, METH_VARARGS},
        {"get_car_blocking_car", GetCarBlockingCar, METH_VARARGS},
        {"get_car_char_is_using", GetCarCharIsUsing, METH_VARARGS},
        {"get_car_colours", GetCarColours, METH_VARARGS},
        {"get_car_coordinates", GetCarCoordinates, METH_VARARGS},
        {"get_car_door_lock_status", GetCarDoorLockStatus, METH_VARARGS},
        {"get_car_forward_x", GetCarForwardX, METH_VARARGS},
        {"get_car_forward_y", GetCarForwardY, METH_VARARGS},
        {"get_car_heading", GetCarHeading, METH_VARARGS},
        {"get_car_health", GetCarHealth, METH_VARARGS},
        {"get_car_mass", GetCarMass, METH_VARARGS},
        {"get_car_model", GetCarModel, METH_VARARGS},
        {"get_car_model_value", GetCarModelValue, METH_VARARGS},
        {"get_car_moving_component_offset", GetCarMovingComponentOffset, METH_VARARGS},
        {"get_car_pitch", GetCarPitch, METH_VARARGS},
        {"get_car_roll", GetCarRoll, METH_VARARGS},
        {"get_car_speed", GetCarSpeed, METH_VARARGS},
        {"get_car_speed_vector", GetCarSpeedVector, METH_VARARGS},
        {"get_car_upright_value", GetCarUprightValue, METH_VARARGS},
        {"get_char_anim_current_time", GetCharAnimCurrentTime, METH_VARARGS},
        {"get_char_anim_total_time", GetCharAnimTotalTime, METH_VARARGS},
        {"get_char_area_visible", GetCharAreaVisible, METH_VARARGS},
        {"get_char_armour", GetCharArmour, METH_VARARGS},
        {"get_char_coordinates", GetCharCoordinates, METH_VARARGS},
        {"get_char_heading", GetCharHeading, METH_VARARGS},
        {"get_char_health", GetCharHealth, METH_VARARGS},
        {"get_char_height_above_ground", GetCharHeightAboveGround, METH_VARARGS},
        {"get_char_highest_priority_event", GetCharHighestPriorityEvent, METH_VARARGS},
        {"get_char_in_car_passenger_seat", GetCharInCarPassengerSeat, METH_VARARGS},
        {"get_char_model", GetCharModel, METH_VARARGS},
        {"get_char_speed", GetCharSpeed, METH_VARARGS},
        {"get_char_swim_state", GetCharSwimState, METH_VARARGS},
        {"get_char_velocity", GetCharVelocity, METH_VARARGS},
        {"get_char_weapon_in_slot", GetCharWeaponInSlot, METH_VARARGS},
        {"get_city_from_coords", GetCityFromCoords, METH_VARARGS},
        {"get_city_player_is_in", GetCityPlayerIsIn, METH_VARARGS},
        {"get_closest_car_node", GetClosestCarNode, METH_VARARGS},
        {"get_closest_car_node_with_heading", GetClosestCarNodeWithHeading, METH_VARARGS},
        {"get_closest_char_node", GetClosestCharNode, METH_VARARGS},
        {"get_closest_stealable_object", GetClosestStealableObject, METH_VARARGS},
        {"get_closest_straight_road", GetClosestStraightRoad, METH_VARARGS},
        {"get_clothes_item", GetClothesItem, METH_VARARGS},
        {"get_controller_mode", GetControllerMode, METH_VARARGS},
        {"get_current_car_mod", GetCurrentCarMod, METH_VARARGS},
        {"get_current_char_weapon", GetCurrentCharWeapon, METH_VARARGS},
        {"get_current_date", GetCurrentDate, METH_VARARGS},
        {"get_current_day_of_week", GetCurrentDayOfWeek, METH_VARARGS},
        {"get_current_language", GetCurrentLanguage, METH_VARARGS},
        {"get_current_population_zone_type", GetCurrentPopulationZoneType, METH_VARARGS},
        {"get_current_vehicle_paintjob", GetCurrentVehiclePaintjob, METH_VARARGS},
        {"get_cutscene_offset", GetCutsceneOffset, METH_VARARGS},
        {"get_cutscene_time", GetCutsceneTime, METH_VARARGS},
        {"get_dead_char_coordinates", GetDeadCharCoordinates, METH_VARARGS},
        {"get_dead_char_pickup_coords", GetDeadCharPickupCoords, METH_VARARGS},
        {"get_debug_camera_coordinates", GetDebugCameraCoordinates, METH_VARARGS},
        {"get_debug_camera_point_at", GetDebugCameraPointAt, METH_VARARGS},
        {"get_distance_between_coords_2d", GetDistanceBetweenCoords2D, METH_VARARGS},
        {"get_distance_between_coords_3d", GetDistanceBetweenCoords3D, METH_VARARGS},
        {"get_door_angle_ratio", GetDoorAngleRatio, METH_VARARGS},
        {"get_driver_of_car", GetDriverOfCar, METH_VARARGS},
        {"get_extra_car_colours", GetExtraCarColours, METH_VARARGS},
        {"get_fading_status", GetFadingStatus, METH_VARARGS},
        {"get_float_stat", GetFloatStat, METH_VARARGS},
        {"get_game_timer", GetGameTimer, METH_VARARGS},
        {"get_ground_z_for_3d_coord", GetGroundZFor3DCoord, METH_VARARGS},
        {"get_group_member", GetGroupMember, METH_VARARGS},
        {"get_group_size", GetGroupSize, METH_VARARGS},
        {"get_hash_key", GetHashKey, METH_VARARGS},
        {"get_heading_from_vector_2d", GetHeadingFromVector2D, METH_VARARGS},
        {"get_hud_colour", GetHudColour, METH_VARARGS},
        {"get_int_stat", GetIntStat, METH_VARARGS},
        {"get_item_in_shop", GetItemInShop, METH_VARARGS},
        {"get_latest_console_command", GetLatestConsoleCommand, METH_VARARGS},
        {"get_level_design_coords_for_object", GetLevelDesignCoordsForObject, METH_VARARGS},
        {"get_loaded_shop", GetLoadedShop, METH_VARARGS},
        {"get_max_wanted_level", GetMaxWantedLevel, METH_VARARGS},
        {"get_maximum_number_of_passengers", GetMaximumNumberOfPassengers, METH_VARARGS},
        {"get_menu_item_accepted", GetMenuItemAccepted, METH_VARARGS},
        {"get_menu_item_selected", GetMenuItemSelected, METH_VARARGS},
        {"get_minutes_to_time_of_day", GetMinutesToTimeOfDay, METH_VARARGS},
        {"get_model_dimensions", GetModelDimensions, METH_VARARGS},
        {"get_name_of_entry_exit_char_used", GetNameOfEntryExitCharUsed, METH_VARARGS},
        {"get_name_of_info_zone", GetNameOfInfoZone, METH_VARARGS},
        {"get_name_of_item", GetNameOfItem, METH_VARARGS},
        {"get_name_of_zone", GetNameOfZone, METH_VARARGS},
        {"get_nearest_tag_position", GetNearestTagPosition, METH_VARARGS},
        {"get_nth_closest_car_node", GetNthClosestCarNode, METH_VARARGS},
        {"get_nth_closest_car_node_with_heading", GetNthClosestCarNodeWithHeading, METH_VARARGS},
        {"get_num_available_paintjobs", GetNumAvailablePaintjobs, METH_VARARGS},
        {"get_num_car_colours", GetNumCarColours, METH_VARARGS},
        {"get_num_of_models_killed_by_player", GetNumOfModelsKilledByPlayer, METH_VARARGS},
        {"get_number_of_fires_in_area", GetNumberOfFiresInArea, METH_VARARGS},
        {"get_number_of_fires_in_range", GetNumberOfFiresInRange, METH_VARARGS},
        {"get_number_of_followers", GetNumberOfFollowers, METH_VARARGS},
        {"get_number_of_instances_of_streamed_script", GetNumberOfInstancesOfStreamedScript, METH_VARARGS},
        {"get_number_of_items_in_shop", GetNumberOfItemsInShop, METH_VARARGS},
        {"get_number_of_passengers", GetNumberOfPassengers, METH_VARARGS},
        {"get_object_anim_current_time", GetObjectAnimCurrentTime, METH_VARARGS},
        {"get_object_coordinates", GetObjectCoordinates, METH_VARARGS},
        {"get_object_heading", GetObjectHeading, METH_VARARGS},
        {"get_object_health", GetObjectHealth, METH_VARARGS},
        {"get_object_mass", GetObjectMass, METH_VARARGS},
        {"get_object_model", GetObjectModel, METH_VARARGS},
        {"get_object_quaternion", GetObjectQuaternion, METH_VARARGS},
        {"get_object_rotation_velocity", GetObjectRotationVelocity, METH_VARARGS},
        {"get_object_speed", GetObjectSpeed, METH_VARARGS},
        {"get_object_turn_mass", GetObjectTurnMass, METH_VARARGS},
        {"get_object_velocity", GetObjectVelocity, METH_VARARGS},
        {"get_offset_from_car_in_world_coords", GetOffsetFromCarInWorldCoords, METH_VARARGS},
        {"get_offset_from_char_in_world_coords", GetOffsetFromCharInWorldCoords, METH_VARARGS},
        {"get_offset_from_object_in_world_coords", GetOffsetFromObjectInWorldCoords, METH_VARARGS},
        {"get_pad_state", GetPadState, METH_VARARGS},
        {"get_parking_node_in_area", GetParkingNodeInArea, METH_VARARGS},
        {"get_pc_mouse_movement", GetPcMouseMovement, METH_VARARGS},
        {"get_ped_type", GetPedType, METH_VARARGS},
        {"get_percentage_tagged_in_area", GetPercentageTaggedInArea, METH_VARARGS},
        {"get_pickup_coordinates", GetPickupCoordinates, METH_VARARGS},
        {"get_plane_undercarriage_position", GetPlaneUndercarriagePosition, METH_VARARGS},
        {"get_player_char", GetPlayerChar, METH_VARARGS},
        {"get_player_group", GetPlayerGroup, METH_VARARGS},
        {"get_player_in_car_camera_mode", GetPlayerInCarCameraMode, METH_VARARGS},
        {"get_player_max_armour", GetPlayerMaxArmour, METH_VARARGS},
        {"get_position_of_analogue_sticks", GetPositionOfAnalogueSticks, METH_VARARGS},
        {"get_position_of_entry_exit_char_used", GetPositionOfEntryExitCharUsed, METH_VARARGS},
        {"get_price_of_item", GetPriceOfItem, METH_VARARGS},
        {"get_progress_percentage", GetProgressPercentage, METH_VARARGS},
        {"get_radio_channel", GetRadioChannel, METH_VARARGS},
        {"get_random_car_in_sphere_no_save", GetRandomCarInSphereNoSave, METH_VARARGS},
        {"get_random_car_model_in_memory", GetRandomCarModelInMemory, METH_VARARGS},
        {"get_random_car_of_type_in_angled_area_no_save", GetRandomCarOfTypeInAngledAreaNoSave, METH_VARARGS},
        {"get_random_car_of_type_in_area", GetRandomCarOfTypeInArea, METH_VARARGS},
        {"get_random_car_of_type_in_area_no_save", GetRandomCarOfTypeInAreaNoSave, METH_VARARGS},
        {"get_random_char_in_area_offset_no_save", GetRandomCharInAreaOffsetNoSave, METH_VARARGS},
        {"get_random_char_in_sphere", GetRandomCharInSphere, METH_VARARGS},
        {"get_random_char_in_sphere_no_brain", GetRandomCharInSphereNoBrain, METH_VARARGS},
        {"get_random_char_in_sphere_only_drugs_buyers", GetRandomCharInSphereOnlyDrugsBuyers, METH_VARARGS},
        {"get_random_char_in_zone", GetRandomCharInZone, METH_VARARGS},
        {"get_remote_controlled_car", GetRemoteControlledCar, METH_VARARGS},
        {"get_rid_of_player_prostitute", GetRidOfPlayerProstitute, METH_VARARGS},
        {"get_rope_height_for_object", GetRopeHeightForObject, METH_VARARGS},
        {"get_script_fire_coords", GetScriptFireCoords, METH_VARARGS},
        {"get_script_task_status", GetScriptTaskStatus, METH_VARARGS},
        {"get_sequence_progress", GetSequenceProgress, METH_VARARGS},
        {"get_sequence_progress_recursive", GetSequenceProgressRecursive, METH_VARARGS},
        {"get_shopping_extra_info", GetShoppingExtraInfo, METH_VARARGS},
        {"get_sound_level_at_coords", GetSoundLevelAtCoords, METH_VARARGS},
        {"get_string_width", GetStringWidth, METH_VARARGS},
        {"get_string_width_with_number", GetStringWidthWithNumber, METH_VARARGS},
        {"get_territory_under_control_percentage", GetTerritoryUnderControlPercentage, METH_VARARGS},
        {"get_time_of_day", GetTimeOfDay, METH_VARARGS},
        {"get_total_number_of_peds_killed_by_player", GetTotalNumberOfPedsKilledByPlayer, METH_VARARGS},
        {"get_train_caboose", GetTrainCaboose, METH_VARARGS},
        {"get_train_carriage", GetTrainCarriage, METH_VARARGS},
        {"get_user_of_closest_map_attractor", GetUserOfClosestMapAttractor, METH_VARARGS},
        {"get_vehicle_class", GetVehicleClass, METH_VARARGS},
        {"get_vehicle_mod_type", GetVehicleModType, METH_VARARGS},
        {"get_vehicle_quaternion", GetVehicleQuaternion, METH_VARARGS},
        {"get_water_height_at_coords", GetWaterHeightAtCoords, METH_VARARGS},
        {"get_weapontype_model", GetWeapontypeModel, METH_VARARGS},
        {"get_weapontype_slot", GetWeapontypeSlot, METH_VARARGS},
        {"get_wheelie_stats", GetWheelieStats, METH_VARARGS},
        {"get_zone_dealer_strength", GetZoneDealerStrength, METH_VARARGS},
        {"get_zone_gang_strength", GetZoneGangStrength, METH_VARARGS},
        {"give_melee_attack_to_char", GiveMeleeAttackToChar, METH_VARARGS},
        {"give_non_player_car_nitro", GiveNonPlayerCarNitro, METH_VARARGS},
        {"give_player_clothes", GivePlayerClothes, METH_VARARGS},
        {"give_player_clothes_outside_shop", GivePlayerClothesOutsideShop, METH_VARARGS},
        {"give_remote_controlled_model_to_player", GiveRemoteControlledModelToPlayer, METH_VARARGS},
        {"give_vehicle_paintjob", GiveVehiclePaintjob, METH_VARARGS},
        {"give_weapon_to_char", GiveWeaponToChar, METH_VARARGS},
        {"grab_entity_on_rope_for_object", GrabEntityOnRopeForObject, METH_VARARGS},
        {"grab_entity_on_winch", GrabEntityOnWinch, METH_VARARGS},
        {"has_animation_loaded", HasAnimationLoaded, METH_VARARGS},
        {"has_car_been_damaged_by_car", HasCarBeenDamagedByCar, METH_VARARGS},
        {"has_car_been_damaged_by_char", HasCarBeenDamagedByChar, METH_VARARGS},
        {"has_car_been_damaged_by_weapon", HasCarBeenDamagedByWeapon, METH_VARARGS},
        {"has_car_been_resprayed", HasCarBeenResprayed, METH_VARARGS},
        {"has_car_recording_been_loaded", HasCarRecordingBeenLoaded, METH_VARARGS},
        {"has_char_been_arrested", HasCharBeenArrested, METH_VARARGS},
        {"has_char_been_damaged_by_car", HasCharBeenDamagedByCar, METH_VARARGS},
        {"has_char_been_damaged_by_char", HasCharBeenDamagedByChar, METH_VARARGS},
        {"has_char_been_damaged_by_weapon", HasCharBeenDamagedByWeapon, METH_VARARGS},
        {"has_char_been_photographed", HasCharBeenPhotographed, METH_VARARGS},
        {"has_char_got_weapon", HasCharGotWeapon, METH_VARARGS},
        {"has_char_spotted_char", HasCharSpottedChar, METH_VARARGS},
        {"has_char_spotted_char_in_front", HasCharSpottedCharInFront, METH_VARARGS},
        {"has_cutscene_finished", HasCutsceneFinished, METH_VARARGS},
        {"has_cutscene_loaded", HasCutsceneLoaded, METH_VARARGS},
        {"has_deatharrest_been_executed", HasDeatharrestBeenExecuted, METH_VARARGS},
        {"has_game_just_returned_from_frontend", HasGameJustReturnedFromFrontend, METH_VARARGS},
        {"has_language_changed", HasLanguageChanged, METH_VARARGS},
        {"has_mission_audio_finished", HasMissionAudioFinished, METH_VARARGS},
        {"has_mission_audio_loaded", HasMissionAudioLoaded, METH_VARARGS},
        {"has_model_loaded", HasModelLoaded, METH_VARARGS},
        {"has_object_been_damaged", HasObjectBeenDamaged, METH_VARARGS},
        {"has_object_been_damaged_by_weapon", HasObjectBeenDamagedByWeapon, METH_VARARGS},
        {"has_object_been_photographed", HasObjectBeenPhotographed, METH_VARARGS},
        {"has_object_been_uprooted", HasObjectBeenUprooted, METH_VARARGS},
        {"has_object_collided_with_anything", HasObjectCollidedWithAnything, METH_VARARGS},
        {"has_object_of_type_been_smashed", HasObjectOfTypeBeenSmashed, METH_VARARGS},
        {"has_pickup_been_collected", HasPickupBeenCollected, METH_VARARGS},
        {"has_player_bought_item", HasPlayerBoughtItem, METH_VARARGS},
        {"has_save_game_finished", HasSaveGameFinished, METH_VARARGS},
        {"has_special_character_loaded", HasSpecialCharacterLoaded, METH_VARARGS},
        {"has_streamed_script_loaded", HasStreamedScriptLoaded, METH_VARARGS},
        {"has_train_derailed", HasTrainDerailed, METH_VARARGS},
        {"has_vehicle_mod_loaded", HasVehicleModLoaded, METH_VARARGS},
        {"heli_attack_player", HeliAttackPlayer, METH_VARARGS},
        {"heli_follow_entity", HeliFollowEntity, METH_VARARGS},
        {"heli_goto_coords", HeliGotoCoords, METH_VARARGS},
        {"heli_keep_entity_in_view", HeliKeepEntityInView, METH_VARARGS},
        {"heli_land_at_coords", HeliLandAtCoords, METH_VARARGS},
        {"hide_all_frontend_blips", HideAllFrontendBlips, METH_VARARGS},
        {"hide_char_weapon_for_scripted_cutscene", HideCharWeaponForScriptedCutscene, METH_VARARGS},
        {"highlight_menu_item", HighlightMenuItem, METH_VARARGS},
        {"ignore_height_difference_following_nodes", IgnoreHeightDifferenceFollowingNodes, METH_VARARGS},
        {"improve_car_by_cheating", ImproveCarByCheating, METH_VARARGS},
        {"increase_player_max_armour", IncreasePlayerMaxArmour, METH_VARARGS},
        {"increase_player_max_health", IncreasePlayerMaxHealth, METH_VARARGS},
        {"increment_float_stat", IncrementFloatStat, METH_VARARGS},
        {"increment_float_stat_no_message", IncrementFloatStatNoMessage, METH_VARARGS},
        {"increment_int_stat", IncrementIntStat, METH_VARARGS},
        {"increment_int_stat_no_message", IncrementIntStatNoMessage, METH_VARARGS},
        {"init_zone_population_settings", InitZonePopulationSettings, METH_VARARGS},
        {"is_2player_game_going_on", Is2PlayerGameGoingOn, METH_VARARGS},
        {"is_any_pickup_at_coords", IsAnyPickupAtCoords, METH_VARARGS},
        {"is_area_occupied", IsAreaOccupied, METH_VARARGS},
        {"is_attached_player_heading_achieved", IsAttachedPlayerHeadingAchieved, METH_VARARGS},
        {"is_australian_game", IsAustralianGame, METH_VARARGS},
        {"is_big_vehicle", IsBigVehicle, METH_VARARGS},
        {"is_button_pressed", IsButtonPressed, METH_VARARGS},
        {"is_car_dead", IsCarDead, METH_VARARGS},
        {"is_car_door_damaged", IsCarDoorDamaged, METH_VARARGS},
        {"is_car_door_fully_open", IsCarDoorFullyOpen, METH_VARARGS},
        {"is_car_health_greater", IsCarHealthGreater, METH_VARARGS},
        {"is_car_in_air_proper", IsCarInAirProper, METH_VARARGS},
        {"is_car_in_area_2d", IsCarInArea2D, METH_VARARGS},
        {"is_car_in_area_3d", IsCarInArea3D, METH_VARARGS},
        {"is_car_in_water", IsCarInWater, METH_VARARGS},
        {"is_car_low_rider", IsCarLowRider, METH_VARARGS},
        {"is_car_model", IsCarModel, METH_VARARGS},
        {"is_car_on_fire", IsCarOnFire, METH_VARARGS},
        {"is_car_on_screen", IsCarOnScreen, METH_VARARGS},
        {"is_car_passenger_seat_free", IsCarPassengerSeatFree, METH_VARARGS},
        {"is_car_stopped", IsCarStopped, METH_VARARGS},
        {"is_car_stopped_in_area_2d", IsCarStoppedInArea2D, METH_VARARGS},
        {"is_car_stopped_in_area_3d", IsCarStoppedInArea3D, METH_VARARGS},
        {"is_car_street_racer", IsCarStreetRacer, METH_VARARGS},
        {"is_car_stuck", IsCarStuck, METH_VARARGS},
        {"is_car_stuck_on_roof", IsCarStuckOnRoof, METH_VARARGS},
        {"is_car_touching_car", IsCarTouchingCar, METH_VARARGS},
        {"is_car_tyre_burst", IsCarTyreBurst, METH_VARARGS},
        {"is_car_upright", IsCarUpright, METH_VARARGS},
        {"is_car_upsidedown", IsCarUpsidedown, METH_VARARGS},
        {"is_car_visibly_damaged", IsCarVisiblyDamaged, METH_VARARGS},
        {"is_car_waiting_for_world_collision", IsCarWaitingForWorldCollision, METH_VARARGS},
        {"is_char_at_scripted_attractor", IsCharAtScriptedAttractor, METH_VARARGS},
        {"is_char_attached_to_any_car", IsCharAttachedToAnyCar, METH_VARARGS},
        {"is_char_dead", IsCharDead, METH_VARARGS},
        {"is_char_ducking", IsCharDucking, METH_VARARGS},
        {"is_char_getting_in_to_a_car", IsCharGettingInToACar, METH_VARARGS},
        {"is_char_head_missing", IsCharHeadMissing, METH_VARARGS},
        {"is_char_health_greater", IsCharHealthGreater, METH_VARARGS},
        {"is_char_holding_object", IsCharHoldingObject, METH_VARARGS},
        {"is_char_in_air", IsCharInAir, METH_VARARGS},
        {"is_char_in_angled_area_2d", IsCharInAngledArea2D, METH_VARARGS},
        {"is_char_in_angled_area_3d", IsCharInAngledArea3D, METH_VARARGS},
        {"is_char_in_angled_area_in_car_2d", IsCharInAngledAreaInCar2D, METH_VARARGS},
        {"is_char_in_angled_area_in_car_3d", IsCharInAngledAreaInCar3D, METH_VARARGS},
        {"is_char_in_angled_area_on_foot_2d", IsCharInAngledAreaOnFoot2D, METH_VARARGS},
        {"is_char_in_angled_area_on_foot_3d", IsCharInAngledAreaOnFoot3D, METH_VARARGS},
        {"is_char_in_any_boat", IsCharInAnyBoat, METH_VARARGS},
        {"is_char_in_any_car", IsCharInAnyCar, METH_VARARGS},
        {"is_char_in_any_heli", IsCharInAnyHeli, METH_VARARGS},
        {"is_char_in_any_plane", IsCharInAnyPlane, METH_VARARGS},
        {"is_char_in_any_police_vehicle", IsCharInAnyPoliceVehicle, METH_VARARGS},
        {"is_char_in_any_searchlight", IsCharInAnySearchlight, METH_VARARGS},
        {"is_char_in_any_train", IsCharInAnyTrain, METH_VARARGS},
        {"is_char_in_area_2d", IsCharInArea2D, METH_VARARGS},
        {"is_char_in_area_3d", IsCharInArea3D, METH_VARARGS},
        {"is_char_in_area_in_car_2d", IsCharInAreaInCar2D, METH_VARARGS},
        {"is_char_in_area_in_car_3d", IsCharInAreaInCar3D, METH_VARARGS},
        {"is_char_in_area_on_foot_2d", IsCharInAreaOnFoot2D, METH_VARARGS},
        {"is_char_in_area_on_foot_3d", IsCharInAreaOnFoot3D, METH_VARARGS},
        {"is_char_in_car", IsCharInCar, METH_VARARGS},
        {"is_char_in_flying_vehicle", IsCharInFlyingVehicle, METH_VARARGS},
        {"is_char_in_model", IsCharInModel, METH_VARARGS},
        {"is_char_in_searchlight", IsCharInSearchlight, METH_VARARGS},
        {"is_char_in_taxi", IsCharInTaxi, METH_VARARGS},
        {"is_char_in_water", IsCharInWater, METH_VARARGS},
        {"is_char_in_zone", IsCharInZone, METH_VARARGS},
        {"is_char_male", IsCharMale, METH_VARARGS},
        {"is_char_model", IsCharModel, METH_VARARGS},
        {"is_char_on_any_bike", IsCharOnAnyBike, METH_VARARGS},
        {"is_char_on_foot", IsCharOnFoot, METH_VARARGS},
        {"is_char_on_screen", IsCharOnScreen, METH_VARARGS},
        {"is_char_playing_anim", IsCharPlayingAnim, METH_VARARGS},
        {"is_char_responding_to_event", IsCharRespondingToEvent, METH_VARARGS},
        {"is_char_shooting", IsCharShooting, METH_VARARGS},
        {"is_char_shooting_in_area", IsCharShootingInArea, METH_VARARGS},
        {"is_char_sitting_in_any_car", IsCharSittingInAnyCar, METH_VARARGS},
        {"is_char_sitting_in_car", IsCharSittingInCar, METH_VARARGS},
        {"is_char_stopped", IsCharStopped, METH_VARARGS},
        {"is_char_stopped_in_angled_area_2d", IsCharStoppedInAngledArea2D, METH_VARARGS},
        {"is_char_stopped_in_angled_area_3d", IsCharStoppedInAngledArea3D, METH_VARARGS},
        {"is_char_stopped_in_angled_area_in_car_2d", IsCharStoppedInAngledAreaInCar2D, METH_VARARGS},
        {"is_char_stopped_in_angled_area_in_car_3d", IsCharStoppedInAngledAreaInCar3D, METH_VARARGS},
        {"is_char_stopped_in_angled_area_on_foot_2d", IsCharStoppedInAngledAreaOnFoot2D, METH_VARARGS},
        {"is_char_stopped_in_angled_area_on_foot_3d", IsCharStoppedInAngledAreaOnFoot3D, METH_VARARGS},
        {"is_char_stopped_in_area_2d", IsCharStoppedInArea2D, METH_VARARGS},
        {"is_char_stopped_in_area_3d", IsCharStoppedInArea3D, METH_VARARGS},
        {"is_char_stopped_in_area_in_car_2d", IsCharStoppedInAreaInCar2D, METH_VARARGS},
        {"is_char_stopped_in_area_in_car_3d", IsCharStoppedInAreaInCar3D, METH_VARARGS},
        {"is_char_stopped_in_area_on_foot_2d", IsCharStoppedInAreaOnFoot2D, METH_VARARGS},
        {"is_char_stopped_in_area_on_foot_3d", IsCharStoppedInAreaOnFoot3D, METH_VARARGS},
        {"is_char_stuck_under_car", IsCharStuckUnderCar, METH_VARARGS},
        {"is_char_swimming", IsCharSwimming, METH_VARARGS},
        {"is_char_talking", IsCharTalking, METH_VARARGS},
        {"is_char_touching_char", IsCharTouchingChar, METH_VARARGS},
        {"is_char_touching_object", IsCharTouchingObject, METH_VARARGS},
        {"is_char_touching_object_on_foot", IsCharTouchingObjectOnFoot, METH_VARARGS},
        {"is_char_touching_vehicle", IsCharTouchingVehicle, METH_VARARGS},
        {"is_char_using_map_attractor", IsCharUsingMapAttractor, METH_VARARGS},
        {"is_char_waiting_for_world_collision", IsCharWaitingForWorldCollision, METH_VARARGS},
        {"is_closest_object_of_type_smashed_or_damaged", IsClosestObjectOfTypeSmashedOrDamaged, METH_VARARGS},
        {"is_conversation_at_node", IsConversationAtNode, METH_VARARGS},
        {"is_cop_vehicle_in_area_3d_no_save", IsCopVehicleInArea3DNoSave, METH_VARARGS},
        {"is_current_char_weapon", IsCurrentCharWeapon, METH_VARARGS},
        {"is_debug_camera_on", IsDebugCameraOn, METH_VARARGS},
        {"is_emergency_services_vehicle", IsEmergencyServicesVehicle, METH_VARARGS},
        {"is_explosion_in_area", IsExplosionInArea, METH_VARARGS},
        {"is_flame_in_angled_area_2d", IsFlameInAngledArea2D, METH_VARARGS},
        {"is_flame_in_angled_area_3d", IsFlameInAngledArea3D, METH_VARARGS},
        {"is_float_lvar_equal_to_float_var", IsFloatLvarEqualToFloatVar, METH_VARARGS},
        {"is_gang_war_fighting_going_on", IsGangWarFightingGoingOn, METH_VARARGS},
        {"is_gang_war_going_on", IsGangWarGoingOn, METH_VARARGS},
        {"is_garage_closed", IsGarageClosed, METH_VARARGS},
        {"is_garage_open", IsGarageOpen, METH_VARARGS},
        {"is_german_game", IsGermanGame, METH_VARARGS},
        {"is_global_var_bit_set_const", IsGlobalVarBitSetConst, METH_VARARGS},
        {"is_global_var_bit_set_lvar", IsGlobalVarBitSetLvar, METH_VARARGS},
        {"is_global_var_bit_set_var", IsGlobalVarBitSetVar, METH_VARARGS},
        {"is_group_leader", IsGroupLeader, METH_VARARGS},
        {"is_group_member", IsGroupMember, METH_VARARGS},
        {"is_help_message_being_displayed", IsHelpMessageBeingDisplayed, METH_VARARGS},
        {"is_int_lvar_equal_to_int_var", IsIntLvarEqualToIntVar, METH_VARARGS},
        {"is_last_building_model_shot_by_player", IsLastBuildingModelShotByPlayer, METH_VARARGS},
        {"is_line_of_sight_clear", IsLineOfSightClear, METH_VARARGS},
        {"is_local_var_bit_set_const", IsLocalVarBitSetConst, METH_VARARGS},
        {"is_local_var_bit_set_lvar", IsLocalVarBitSetLvar, METH_VARARGS},
        {"is_local_var_bit_set_var", IsLocalVarBitSetVar, METH_VARARGS},
        {"is_lvar_text_label_equal_to_text_label", IsLvarTextLabelEqualToTextLabel, METH_VARARGS},
        {"is_message_being_displayed", IsMessageBeingDisplayed, METH_VARARGS},
        {"is_minigame_in_progress", IsMinigameInProgress, METH_VARARGS},
        {"is_model_available", IsModelAvailable, METH_VARARGS},
        {"is_model_in_cdimage", IsModelInCdimage, METH_VARARGS},
        {"is_money_pickup_at_coords", IsMoneyPickupAtCoords, METH_VARARGS},
        {"is_mouse_using_vertical_inversion", IsMouseUsingVerticalInversion, METH_VARARGS},
        {"is_next_station_allowed", IsNextStationAllowed, METH_VARARGS},
        {"is_night_vision_active", IsNightVisionActive, METH_VARARGS},
        {"is_object_attached", IsObjectAttached, METH_VARARGS},
        {"is_object_in_angled_area_2d", IsObjectInAngledArea2D, METH_VARARGS},
        {"is_object_in_angled_area_3d", IsObjectInAngledArea3D, METH_VARARGS},
        {"is_object_in_area_2d", IsObjectInArea2D, METH_VARARGS},
        {"is_object_in_area_3d", IsObjectInArea3D, METH_VARARGS},
        {"is_object_in_water", IsObjectInWater, METH_VARARGS},
        {"is_object_intersecting_world", IsObjectIntersectingWorld, METH_VARARGS},
        {"is_object_on_screen", IsObjectOnScreen, METH_VARARGS},
        {"is_object_playing_anim", IsObjectPlayingAnim, METH_VARARGS},
        {"is_object_static", IsObjectStatic, METH_VARARGS},
        {"is_object_within_brain_activation_range", IsObjectWithinBrainActivationRange, METH_VARARGS},
        {"is_pc_using_joypad", IsPcUsingJoypad, METH_VARARGS},
        {"is_pc_version", IsPcVersion, METH_VARARGS},
        {"is_playback_going_on_for_car", IsPlaybackGoingOnForCar, METH_VARARGS},
        {"is_player_climbing", IsPlayerClimbing, METH_VARARGS},
        {"is_player_control_on", IsPlayerControlOn, METH_VARARGS},
        {"is_player_dead", IsPlayerDead, METH_VARARGS},
        {"is_player_in_info_zone", IsPlayerInInfoZone, METH_VARARGS},
        {"is_player_in_position_for_conversation", IsPlayerInPositionForConversation, METH_VARARGS},
        {"is_player_in_remote_mode", IsPlayerInRemoteMode, METH_VARARGS},
        {"is_player_in_shortcut_taxi", IsPlayerInShortcutTaxi, METH_VARARGS},
        {"is_player_performing_stoppie", IsPlayerPerformingStoppie, METH_VARARGS},
        {"is_player_performing_wheelie", IsPlayerPerformingWheelie, METH_VARARGS},
        {"is_player_playing", IsPlayerPlaying, METH_VARARGS},
        {"is_player_pressing_horn", IsPlayerPressingHorn, METH_VARARGS},
        {"is_player_targetting_anything", IsPlayerTargettingAnything, METH_VARARGS},
        {"is_player_targetting_char", IsPlayerTargettingChar, METH_VARARGS},
        {"is_player_targetting_object", IsPlayerTargettingObject, METH_VARARGS},
        {"is_player_using_jetpack", IsPlayerUsingJetpack, METH_VARARGS},
        {"is_player_wearing", IsPlayerWearing, METH_VARARGS},
        {"is_point_obscured_by_a_mission_entity", IsPointObscuredByAMissionEntity, METH_VARARGS},
        {"is_point_on_screen", IsPointOnScreen, METH_VARARGS},
        {"is_procedural_interior_active", IsProceduralInteriorActive, METH_VARARGS},
        {"is_projectile_in_area", IsProjectileInArea, METH_VARARGS},
        {"is_ps2_keyboard_key_just_pressed", IsPs2KeyboardKeyJustPressed, METH_VARARGS},
        {"is_ps2_keyboard_key_pressed", IsPs2KeyboardKeyPressed, METH_VARARGS},
        {"is_recording_going_on_for_car", IsRecordingGoingOnForCar, METH_VARARGS},
        {"is_relationship_set", IsRelationshipSet, METH_VARARGS},
        {"is_score_greater", IsScoreGreater, METH_VARARGS},
        {"is_script_fire_extinguished", IsScriptFireExtinguished, METH_VARARGS},
        {"is_skip_cutscene_button_pressed", IsSkipCutsceneButtonPressed, METH_VARARGS},
        {"is_skip_waiting_for_script_to_fade_in", IsSkipWaitingForScriptToFadeIn, METH_VARARGS},
        {"is_this_help_message_being_displayed", IsThisHelpMessageBeingDisplayed, METH_VARARGS},
        {"is_this_model_a_boat", IsThisModelABoat, METH_VARARGS},
        {"is_this_model_a_car", IsThisModelACar, METH_VARARGS},
        {"is_this_model_a_heli", IsThisModelAHeli, METH_VARARGS},
        {"is_this_model_a_plane", IsThisModelAPlane, METH_VARARGS},
        {"is_trailer_attached_to_cab", IsTrailerAttachedToCab, METH_VARARGS},
        {"is_var_text_label_equal_to_text_label", IsVarTextLabelEqualToTextLabel, METH_VARARGS},
        {"is_vehicle_attached", IsVehicleAttached, METH_VARARGS},
        {"is_vehicle_in_searchlight", IsVehicleInSearchlight, METH_VARARGS},
        {"is_vehicle_on_all_wheels", IsVehicleOnAllWheels, METH_VARARGS},
        {"is_vehicle_touching_object", IsVehicleTouchingObject, METH_VARARGS},
        {"is_wanted_level_greater", IsWantedLevelGreater, METH_VARARGS},
        {"is_widescreen_on_in_options", IsWidescreenOnInOptions, METH_VARARGS},
        {"kill_fx_system", KillFxSystem, METH_VARARGS},
        {"kill_fx_system_now", KillFxSystemNow, METH_VARARGS},
        {"launch_mission", LaunchMission, METH_VARARGS},
        {"limit_angle", LimitAngle, METH_VARARGS},
        {"limit_two_player_distance", LimitTwoPlayerDistance, METH_VARARGS},
        {"line", Line, METH_VARARGS},
        {"listen_to_player_group_commands", ListenToPlayerGroupCommands, METH_VARARGS},
        {"load_all_models_now", LoadAllModelsNow, METH_VARARGS},
        {"load_and_launch_mission", LoadAndLaunchMission, METH_VARARGS},
        {"load_and_launch_mission_internal", LoadAndLaunchMissionInternal, METH_VARARGS},
        {"load_char_decision_maker", LoadCharDecisionMaker, METH_VARARGS},
        {"load_cutscene", LoadCutscene, METH_VARARGS},
        {"load_group_decision_maker", LoadGroupDecisionMaker, METH_VARARGS},
        {"load_mission_audio", LoadMissionAudio, METH_VARARGS},
        {"load_mission_text", LoadMissionText, METH_VARARGS},
        {"load_path_nodes_in_area", LoadPathNodesInArea, METH_VARARGS},
        {"load_prices", LoadPrices, METH_VARARGS},
        {"load_scene", LoadScene, METH_VARARGS},
        {"load_scene_in_direction", LoadSceneInDirection, METH_VARARGS},
        {"load_shop", LoadShop, METH_VARARGS},
        {"load_special_character", LoadSpecialCharacter, METH_VARARGS},
        {"load_sprite", LoadSprite, METH_VARARGS},
        {"load_texture_dictionary", LoadTextureDictionary, METH_VARARGS},
        {"locate_car_2d", LocateCar2D, METH_VARARGS},
        {"locate_car_3d", LocateCar3D, METH_VARARGS},
        {"locate_char_any_means_2d", LocateCharAnyMeans2D, METH_VARARGS},
        {"locate_char_any_means_3d", LocateCharAnyMeans3D, METH_VARARGS},
        {"locate_char_any_means_car_2d", LocateCharAnyMeansCar2D, METH_VARARGS},
        {"locate_char_any_means_car_3d", LocateCharAnyMeansCar3D, METH_VARARGS},
        {"locate_char_any_means_char_2d", LocateCharAnyMeansChar2D, METH_VARARGS},
        {"locate_char_any_means_char_3d", LocateCharAnyMeansChar3D, METH_VARARGS},
        {"locate_char_any_means_object_2d", LocateCharAnyMeansObject2D, METH_VARARGS},
        {"locate_char_any_means_object_3d", LocateCharAnyMeansObject3D, METH_VARARGS},
        {"locate_char_in_car_2d", LocateCharInCar2D, METH_VARARGS},
        {"locate_char_in_car_3d", LocateCharInCar3D, METH_VARARGS},
        {"locate_char_in_car_car_2d", LocateCharInCarCar2D, METH_VARARGS},
        {"locate_char_in_car_car_3d", LocateCharInCarCar3D, METH_VARARGS},
        {"locate_char_in_car_char_2d", LocateCharInCarChar2D, METH_VARARGS},
        {"locate_char_in_car_char_3d", LocateCharInCarChar3D, METH_VARARGS},
        {"locate_char_in_car_object_2d", LocateCharInCarObject2D, METH_VARARGS},
        {"locate_char_in_car_object_3d", LocateCharInCarObject3D, METH_VARARGS},
        {"locate_char_on_foot_2d", LocateCharOnFoot2D, METH_VARARGS},
        {"locate_char_on_foot_3d", LocateCharOnFoot3D, METH_VARARGS},
        {"locate_char_on_foot_car_2d", LocateCharOnFootCar2D, METH_VARARGS},
        {"locate_char_on_foot_car_3d", LocateCharOnFootCar3D, METH_VARARGS},
        {"locate_char_on_foot_char_2d", LocateCharOnFootChar2D, METH_VARARGS},
        {"locate_char_on_foot_char_3d", LocateCharOnFootChar3D, METH_VARARGS},
        {"locate_char_on_foot_object_2d", LocateCharOnFootObject2D, METH_VARARGS},
        {"locate_char_on_foot_object_3d", LocateCharOnFootObject3D, METH_VARARGS},
        {"locate_object_2d", LocateObject2D, METH_VARARGS},
        {"locate_object_3d", LocateObject3D, METH_VARARGS},
        {"locate_stopped_car_2d", LocateStoppedCar2D, METH_VARARGS},
        {"locate_stopped_car_3d", LocateStoppedCar3D, METH_VARARGS},
        {"locate_stopped_char_any_means_2d", LocateStoppedCharAnyMeans2D, METH_VARARGS},
        {"locate_stopped_char_any_means_3d", LocateStoppedCharAnyMeans3D, METH_VARARGS},
        {"locate_stopped_char_in_car_2d", LocateStoppedCharInCar2D, METH_VARARGS},
        {"locate_stopped_char_in_car_3d", LocateStoppedCharInCar3D, METH_VARARGS},
        {"locate_stopped_char_on_foot_2d", LocateStoppedCharOnFoot2D, METH_VARARGS},
        {"locate_stopped_char_on_foot_3d", LocateStoppedCharOnFoot3D, METH_VARARGS},
        {"lock_car_doors", LockCarDoors, METH_VARARGS},
        {"lock_door", LockDoor, METH_VARARGS},
        {"make_heli_come_crashing_down", MakeHeliComeCrashingDown, METH_VARARGS},
        {"make_object_targettable", MakeObjectTargettable, METH_VARARGS},
        {"make_player_fire_proof", MakePlayerFireProof, METH_VARARGS},
        {"make_player_gang_disappear", MakePlayerGangDisappear, METH_VARARGS},
        {"make_player_gang_reappear", MakePlayerGangReappear, METH_VARARGS},
        {"make_player_safe_for_cutscene", MakePlayerSafeForCutscene, METH_VARARGS},
        {"make_room_in_player_gang_for_mission_peds", MakeRoomInPlayerGangForMissionPeds, METH_VARARGS},
        {"manage_all_population", ManageAllPopulation, METH_VARARGS},
        {"mark_car_as_convoy_car", MarkCarAsConvoyCar, METH_VARARGS},
        {"mark_car_as_no_longer_needed", MarkCarAsNoLongerNeeded, METH_VARARGS},
        {"mark_char_as_no_longer_needed", MarkCharAsNoLongerNeeded, METH_VARARGS},
        {"mark_mission_train_as_no_longer_needed", MarkMissionTrainAsNoLongerNeeded, METH_VARARGS},
        {"mark_mission_trains_as_no_longer_needed", MarkMissionTrainsAsNoLongerNeeded, METH_VARARGS},
        {"mark_model_as_no_longer_needed", MarkModelAsNoLongerNeeded, METH_VARARGS},
        {"mark_object_as_no_longer_needed", MarkObjectAsNoLongerNeeded, METH_VARARGS},
        {"mark_road_node_as_dont_wander", MarkRoadNodeAsDontWander, METH_VARARGS},
        {"mark_streamed_script_as_no_longer_needed", MarkStreamedScriptAsNoLongerNeeded, METH_VARARGS},
        {"mark_vehicle_mod_as_no_longer_needed", MarkVehicleModAsNoLongerNeeded, METH_VARARGS},
        {"mission_has_finished", MissionHasFinished, METH_VARARGS},
        {"move_searchlight_between_coords", MoveSearchlightBetweenCoords, METH_VARARGS},
        {"open_car_door", OpenCarDoor, METH_VARARGS},
        {"open_car_door_a_bit", OpenCarDoorABit, METH_VARARGS},
        {"open_garage", OpenGarage, METH_VARARGS},
        {"open_sequence_task", OpenSequenceTask, METH_VARARGS},
        {"override_next_restart", OverrideNextRestart, METH_VARARGS},
        {"pause_current_beat_track", PauseCurrentBeatTrack, METH_VARARGS},
        {"pause_playback_recorded_car", PausePlaybackRecordedCar, METH_VARARGS},
        {"perform_sequence_task", PerformSequenceTask, METH_VARARGS},
        {"perform_sequence_task_from_progress", PerformSequenceTaskFromProgress, METH_VARARGS},
        {"place_object_relative_to_car", PlaceObjectRelativeToCar, METH_VARARGS},
        {"plane_attack_player", PlaneAttackPlayer, METH_VARARGS},
        {"plane_attack_player_using_dog_fight", PlaneAttackPlayerUsingDogFight, METH_VARARGS},
        {"plane_fly_in_direction", PlaneFlyInDirection, METH_VARARGS},
        {"plane_follow_entity", PlaneFollowEntity, METH_VARARGS},
        {"plane_goto_coords", PlaneGotoCoords, METH_VARARGS},
        {"plane_starts_in_air", PlaneStartsInAir, METH_VARARGS},
        {"play_and_kill_fx_system", PlayAndKillFxSystem, METH_VARARGS},
        {"play_beat_track", PlayBeatTrack, METH_VARARGS},
        {"play_fx_system", PlayFxSystem, METH_VARARGS},
        {"play_mission_audio", PlayMissionAudio, METH_VARARGS},
        {"play_mission_passed_tune", PlayMissionPassedTune, METH_VARARGS},
        {"play_object_anim", PlayObjectAnim, METH_VARARGS},
        {"player_entered_buildingsite_crane", PlayerEnteredBuildingsiteCrane, METH_VARARGS},
        {"player_entered_dock_crane", PlayerEnteredDockCrane, METH_VARARGS},
        {"player_entered_las_vegas_crane", PlayerEnteredLasVegasCrane, METH_VARARGS},
        {"player_entered_quarry_crane", PlayerEnteredQuarryCrane, METH_VARARGS},
        {"player_left_crane", PlayerLeftCrane, METH_VARARGS},
        {"player_made_progress", PlayerMadeProgress, METH_VARARGS},
        {"player_take_off_goggles", PlayerTakeOffGoggles, METH_VARARGS},
        {"point_camera_at_car", PointCameraAtCar, METH_VARARGS},
        {"point_camera_at_char", PointCameraAtChar, METH_VARARGS},
        {"point_camera_at_point", PointCameraAtPoint, METH_VARARGS},
        {"point_searchlight_at_char", PointSearchlightAtChar, METH_VARARGS},
        {"point_searchlight_at_coord", PointSearchlightAtCoord, METH_VARARGS},
        {"point_searchlight_at_vehicle", PointSearchlightAtVehicle, METH_VARARGS},
        {"police_heli_chase_entity", PoliceHeliChaseEntity, METH_VARARGS},
        {"police_radio_message", PoliceRadioMessage, METH_VARARGS},
        {"pop_car_boot", PopCarBoot, METH_VARARGS},
        {"pop_car_door", PopCarDoor, METH_VARARGS},
        {"pop_car_panel", PopCarPanel, METH_VARARGS},
        {"preload_beat_track", PreloadBeatTrack, METH_VARARGS},
        {"print", Print, METH_VARARGS},
        {"print_big", PrintBig, METH_VARARGS},
        {"print_big_q", PrintBigQ, METH_VARARGS},
        {"print_help", PrintHelp, METH_VARARGS},
        {"print_help_forever", PrintHelpForever, METH_VARARGS},
        {"print_help_forever_with_number", PrintHelpForeverWithNumber, METH_VARARGS},
        {"print_now", PrintNow, METH_VARARGS},
        {"print_string_in_string_now", PrintStringInStringNow, METH_VARARGS},
        {"print_with_2_numbers_big", PrintWith2NumbersBig, METH_VARARGS},
        {"print_with_2_numbers_now", PrintWith2NumbersNow, METH_VARARGS},
        {"print_with_3_numbers", PrintWith3Numbers, METH_VARARGS},
        {"print_with_4_numbers", PrintWith4Numbers, METH_VARARGS},
        {"print_with_4_numbers_now", PrintWith4NumbersNow, METH_VARARGS},
        {"print_with_6_numbers", PrintWith6Numbers, METH_VARARGS},
        {"print_with_number", PrintWithNumber, METH_VARARGS},
        {"print_with_number_big", PrintWithNumberBig, METH_VARARGS},
        {"print_with_number_now", PrintWithNumberNow, METH_VARARGS},
        {"random_passenger_say", RandomPassengerSay, METH_VARARGS},
        {"read_kill_frenzy_status", ReadKillFrenzyStatus, METH_VARARGS},
        {"register_attractor_script_brain_for_code_use", RegisterAttractorScriptBrainForCodeUse, METH_VARARGS},
        {"register_best_position", RegisterBestPosition, METH_VARARGS},
        {"register_fastest_time", RegisterFastestTime, METH_VARARGS},
        {"register_float_stat", RegisterFloatStat, METH_VARARGS},
        {"register_int_stat", RegisterIntStat, METH_VARARGS},
        {"register_mission_given", RegisterMissionGiven, METH_VARARGS},
        {"register_mission_passed", RegisterMissionPassed, METH_VARARGS},
        {"register_oddjob_mission_passed", RegisterOddjobMissionPassed, METH_VARARGS},
        {"register_script_brain_for_code_use", RegisterScriptBrainForCodeUse, METH_VARARGS},
        {"register_streamed_script", RegisterStreamedScript, METH_VARARGS},
        {"register_streamed_script_internal", RegisterStreamedScriptInternal, METH_VARARGS},
        {"release_entity_from_rope_for_object", ReleaseEntityFromRopeForObject, METH_VARARGS},
        {"release_entity_from_winch", ReleaseEntityFromWinch, METH_VARARGS},
        {"release_path_nodes", ReleasePathNodes, METH_VARARGS},
        {"release_two_player_distance", ReleaseTwoPlayerDistance, METH_VARARGS},
        {"release_weather", ReleaseWeather, METH_VARARGS},
        {"remove_all_char_weapons", RemoveAllCharWeapons, METH_VARARGS},
        {"remove_all_script_fires", RemoveAllScriptFires, METH_VARARGS},
        {"remove_animation", RemoveAnimation, METH_VARARGS},
        {"remove_blip", RemoveBlip, METH_VARARGS},
        {"remove_car_recording", RemoveCarRecording, METH_VARARGS},
        {"remove_char_elegantly", RemoveCharElegantly, METH_VARARGS},
        {"remove_char_from_car_maintain_position", RemoveCharFromCarMaintainPosition, METH_VARARGS},
        {"remove_char_from_group", RemoveCharFromGroup, METH_VARARGS},
        {"remove_decision_maker", RemoveDecisionMaker, METH_VARARGS},
        {"remove_group", RemoveGroup, METH_VARARGS},
        {"remove_ipl", RemoveIpl, METH_VARARGS},
        {"remove_ipl_discreetly", RemoveIplDiscreetly, METH_VARARGS},
        {"remove_object_elegantly", RemoveObjectElegantly, METH_VARARGS},
        {"remove_oil_puddles_in_area", RemoveOilPuddlesInArea, METH_VARARGS},
        {"remove_pickup", RemovePickup, METH_VARARGS},
        {"remove_price_modifier", RemovePriceModifier, METH_VARARGS},
        {"remove_rc_buggy", RemoveRcBuggy, METH_VARARGS},
        {"remove_script_fire", RemoveScriptFire, METH_VARARGS},
        {"remove_sound", RemoveSound, METH_VARARGS},
        {"remove_sphere", RemoveSphere, METH_VARARGS},
        {"remove_streamed_script", RemoveStreamedScript, METH_VARARGS},
        {"remove_stuck_car_check", RemoveStuckCarCheck, METH_VARARGS},
        {"remove_texture_dictionary", RemoveTextureDictionary, METH_VARARGS},
        {"remove_upsidedown_car_check", RemoveUpsidedownCarCheck, METH_VARARGS},
        {"remove_user_3d_marker", RemoveUser3DMarker, METH_VARARGS},
        {"remove_vehicle_mod", RemoveVehicleMod, METH_VARARGS},
        {"remove_weapon_from_char", RemoveWeaponFromChar, METH_VARARGS},
        {"report_mission_audio_event_at_car", ReportMissionAudioEventAtCar, METH_VARARGS},
        {"report_mission_audio_event_at_char", ReportMissionAudioEventAtChar, METH_VARARGS},
        {"report_mission_audio_event_at_object", ReportMissionAudioEventAtObject, METH_VARARGS},
        {"report_mission_audio_event_at_position", ReportMissionAudioEventAtPosition, METH_VARARGS},
        {"request_animation", RequestAnimation, METH_VARARGS},
        {"request_car_recording", RequestCarRecording, METH_VARARGS},
        {"request_collision", RequestCollision, METH_VARARGS},
        {"request_ipl", RequestIpl, METH_VARARGS},
        {"request_model", RequestModel, METH_VARARGS},
        {"request_vehicle_mod", RequestVehicleMod, METH_VARARGS},
        {"reset_latest_console_command", ResetLatestConsoleCommand, METH_VARARGS},
        {"reset_num_of_models_killed_by_player", ResetNumOfModelsKilledByPlayer, METH_VARARGS},
        {"reset_stuff_upon_resurrection", ResetStuffUponResurrection, METH_VARARGS},
        {"reset_vehicle_camera_tweak", ResetVehicleCameraTweak, METH_VARARGS},
        {"reset_vehicle_hydraulics", ResetVehicleHydraulics, METH_VARARGS},
        {"restore_camera", RestoreCamera, METH_VARARGS},
        {"restore_camera_jumpcut", RestoreCameraJumpcut, METH_VARARGS},
        {"restore_car_mod_state", RestoreCarModState, METH_VARARGS},
        {"restore_clock", RestoreClock, METH_VARARGS},
        {"restore_clothes_state", RestoreClothesState, METH_VARARGS},
        {"rotate_object", RotateObject, METH_VARARGS},
        {"save_float_to_debug_file", SaveFloatToDebugFile, METH_VARARGS},
        {"save_int_to_debug_file", SaveIntToDebugFile, METH_VARARGS},
        {"save_newline_to_debug_file", SaveNewlineToDebugFile, METH_VARARGS},
        {"save_text_label_to_debug_file", SaveTextLabelToDebugFile, METH_VARARGS},
        {"script_name", ScriptName, METH_VARARGS},
        {"select_weapons_for_vehicle", SelectWeaponsForVehicle, METH_VARARGS},
        {"set_active_menu_item", SetActiveMenuItem, METH_VARARGS},
        {"set_aircraft_carrier_sam_site", SetAircraftCarrierSamSite, METH_VARARGS},
        {"set_all_cars_can_be_damaged", SetAllCarsCanBeDamaged, METH_VARARGS},
        {"set_all_taxis_have_nitro", SetAllTaxisHaveNitro, METH_VARARGS},
        {"set_always_draw_3d_markers", SetAlwaysDraw3DMarkers, METH_VARARGS},
        {"set_anim_group_for_char", SetAnimGroupForChar, METH_VARARGS},
        {"set_area51_sam_site", SetArea51SamSite, METH_VARARGS},
        {"set_area_name", SetAreaName, METH_VARARGS},
        {"set_area_visible", SetAreaVisible, METH_VARARGS},
        {"set_blip_always_display_on_zoomed_radar", SetBlipAlwaysDisplayOnZoomedRadar, METH_VARARGS},
        {"set_blip_as_friendly", SetBlipAsFriendly, METH_VARARGS},
        {"set_blip_entry_exit", SetBlipEntryExit, METH_VARARGS},
        {"set_boat_cruise_speed", SetBoatCruiseSpeed, METH_VARARGS},
        {"set_camera_behind_player", SetCameraBehindPlayer, METH_VARARGS},
        {"set_camera_in_front_of_char", SetCameraInFrontOfChar, METH_VARARGS},
        {"set_camera_in_front_of_player", SetCameraInFrontOfPlayer, METH_VARARGS},
        {"set_camera_position_unfixed", SetCameraPositionUnfixed, METH_VARARGS},
        {"set_camera_zoom", SetCameraZoom, METH_VARARGS},
        {"set_can_burst_car_tyres", SetCanBurstCarTyres, METH_VARARGS},
        {"set_can_respray_car", SetCanResprayCar, METH_VARARGS},
        {"set_car_always_create_skids", SetCarAlwaysCreateSkids, METH_VARARGS},
        {"set_car_as_mission_car", SetCarAsMissionCar, METH_VARARGS},
        {"set_car_avoid_level_transitions", SetCarAvoidLevelTransitions, METH_VARARGS},
        {"set_car_can_be_damaged", SetCarCanBeDamaged, METH_VARARGS},
        {"set_car_can_be_visibly_damaged", SetCarCanBeVisiblyDamaged, METH_VARARGS},
        {"set_car_can_go_against_traffic", SetCarCanGoAgainstTraffic, METH_VARARGS},
        {"set_car_collision", SetCarCollision, METH_VARARGS},
        {"set_car_coordinates", SetCarCoordinates, METH_VARARGS},
        {"set_car_coordinates_no_offset", SetCarCoordinatesNoOffset, METH_VARARGS},
        {"set_car_cruise_speed", SetCarCruiseSpeed, METH_VARARGS},
        {"set_car_density_multiplier", SetCarDensityMultiplier, METH_VARARGS},
        {"set_car_driving_style", SetCarDrivingStyle, METH_VARARGS},
        {"set_car_engine_broken", SetCarEngineBroken, METH_VARARGS},
        {"set_car_engine_on", SetCarEngineOn, METH_VARARGS},
        {"set_car_escort_car_front", SetCarEscortCarFront, METH_VARARGS},
        {"set_car_escort_car_left", SetCarEscortCarLeft, METH_VARARGS},
        {"set_car_escort_car_rear", SetCarEscortCarRear, METH_VARARGS},
        {"set_car_escort_car_right", SetCarEscortCarRight, METH_VARARGS},
        {"set_car_follow_car", SetCarFollowCar, METH_VARARGS},
        {"set_car_forward_speed", SetCarForwardSpeed, METH_VARARGS},
        {"set_car_heading", SetCarHeading, METH_VARARGS},
        {"set_car_health", SetCarHealth, METH_VARARGS},
        {"set_car_heavy", SetCarHeavy, METH_VARARGS},
        {"set_car_hydraulics", SetCarHydraulics, METH_VARARGS},
        {"set_car_lights_on", SetCarLightsOn, METH_VARARGS},
        {"set_car_mission", SetCarMission, METH_VARARGS},
        {"set_car_model_components", SetCarModelComponents, METH_VARARGS},
        {"set_car_only_damaged_by_player", SetCarOnlyDamagedByPlayer, METH_VARARGS},
        {"set_car_proofs", SetCarProofs, METH_VARARGS},
        {"set_car_random_route_seed", SetCarRandomRouteSeed, METH_VARARGS},
        {"set_car_roll", SetCarRoll, METH_VARARGS},
        {"set_car_rotation_velocity", SetCarRotationVelocity, METH_VARARGS},
        {"set_car_status", SetCarStatus, METH_VARARGS},
        {"set_car_stay_in_fast_lane", SetCarStayInFastLane, METH_VARARGS},
        {"set_car_stay_in_slow_lane", SetCarStayInSlowLane, METH_VARARGS},
        {"set_car_straight_line_distance", SetCarStraightLineDistance, METH_VARARGS},
        {"set_car_strong", SetCarStrong, METH_VARARGS},
        {"set_car_temp_action", SetCarTempAction, METH_VARARGS},
        {"set_car_traction", SetCarTraction, METH_VARARGS},
        {"set_car_visible", SetCarVisible, METH_VARARGS},
        {"set_car_watertight", SetCarWatertight, METH_VARARGS},
        {"set_char_accuracy", SetCharAccuracy, METH_VARARGS},
        {"set_char_allowed_to_duck", SetCharAllowedToDuck, METH_VARARGS},
        {"set_char_ammo", SetCharAmmo, METH_VARARGS},
        {"set_char_anim_current_time", SetCharAnimCurrentTime, METH_VARARGS},
        {"set_char_anim_playing_flag", SetCharAnimPlayingFlag, METH_VARARGS},
        {"set_char_anim_speed", SetCharAnimSpeed, METH_VARARGS},
        {"set_char_area_visible", SetCharAreaVisible, METH_VARARGS},
        {"set_char_bleeding", SetCharBleeding, METH_VARARGS},
        {"set_char_bulletproof_vest", SetCharBulletproofVest, METH_VARARGS},
        {"set_char_can_be_knocked_off_bike", SetCharCanBeKnockedOffBike, METH_VARARGS},
        {"set_char_can_be_shot_in_vehicle", SetCharCanBeShotInVehicle, METH_VARARGS},
        {"set_char_cant_be_dragged_out", SetCharCantBeDraggedOut, METH_VARARGS},
        {"set_char_collision", SetCharCollision, METH_VARARGS},
        {"set_char_coordinates", SetCharCoordinates, METH_VARARGS},
        {"set_char_coordinates_dont_warp_gang", SetCharCoordinatesDontWarpGang, METH_VARARGS},
        {"set_char_coordinates_dont_warp_gang_no_offset", SetCharCoordinatesDontWarpGangNoOffset, METH_VARARGS},
        {"set_char_coordinates_no_offset", SetCharCoordinatesNoOffset, METH_VARARGS},
        {"set_char_decision_maker", SetCharDecisionMaker, METH_VARARGS},
        {"set_char_drops_weapons_when_dead", SetCharDropsWeaponsWhenDead, METH_VARARGS},
        {"set_char_drowns_in_water", SetCharDrownsInWater, METH_VARARGS},
        {"set_char_drugged_up", SetCharDruggedUp, METH_VARARGS},
        {"set_char_fire_damage_multiplier", SetCharFireDamageMultiplier, METH_VARARGS},
        {"set_char_force_die_in_car", SetCharForceDieInCar, METH_VARARGS},
        {"set_char_get_out_upside_down_car", SetCharGetOutUpsideDownCar, METH_VARARGS},
        {"set_char_has_used_entry_exit", SetCharHasUsedEntryExit, METH_VARARGS},
        {"set_char_heading", SetCharHeading, METH_VARARGS},
        {"set_char_health", SetCharHealth, METH_VARARGS},
        {"set_char_is_chris_criminal", SetCharIsChrisCriminal, METH_VARARGS},
        {"set_char_is_target_priority", SetCharIsTargetPriority, METH_VARARGS},
        {"set_char_keep_task", SetCharKeepTask, METH_VARARGS},
        {"set_char_kinda_stay_in_same_place", SetCharKindaStayInSamePlace, METH_VARARGS},
        {"set_char_max_health", SetCharMaxHealth, METH_VARARGS},
        {"set_char_money", SetCharMoney, METH_VARARGS},
        {"set_char_never_leaves_group", SetCharNeverLeavesGroup, METH_VARARGS},
        {"set_char_never_targetted", SetCharNeverTargetted, METH_VARARGS},
        {"set_char_only_damaged_by_player", SetCharOnlyDamagedByPlayer, METH_VARARGS},
        {"set_char_proofs", SetCharProofs, METH_VARARGS},
        {"set_char_relationship", SetCharRelationship, METH_VARARGS},
        {"set_char_rotation", SetCharRotation, METH_VARARGS},
        {"set_char_say_context", SetCharSayContext, METH_VARARGS},
        {"set_char_say_context_important", SetCharSayContextImportant, METH_VARARGS},
        {"set_char_say_script", SetCharSayScript, METH_VARARGS},
        {"set_char_shoot_rate", SetCharShootRate, METH_VARARGS},
        {"set_char_signal_after_kill", SetCharSignalAfterKill, METH_VARARGS},
        {"set_char_stay_in_car_when_jacked", SetCharStayInCarWhenJacked, METH_VARARGS},
        {"set_char_stay_in_same_place", SetCharStayInSamePlace, METH_VARARGS},
        {"set_char_suffers_critical_hits", SetCharSuffersCriticalHits, METH_VARARGS},
        {"set_char_uses_collision_closest_object_of_type", SetCharUsesCollisionClosestObjectOfType, METH_VARARGS},
        {"set_char_uses_upperbody_damage_anims_only", SetCharUsesUpperbodyDamageAnimsOnly, METH_VARARGS},
        {"set_char_velocity", SetCharVelocity, METH_VARARGS},
        {"set_char_visible", SetCharVisible, METH_VARARGS},
        {"set_char_wanted_by_police", SetCharWantedByPolice, METH_VARARGS},
        {"set_char_weapon_skill", SetCharWeaponSkill, METH_VARARGS},
        {"set_checkpoint_coords", SetCheckpointCoords, METH_VARARGS},
        {"set_checkpoint_heading", SetCheckpointHeading, METH_VARARGS},
        {"set_cinema_camera", SetCinemaCamera, METH_VARARGS},
        {"set_closest_entry_exit_flag", SetClosestEntryExitFlag, METH_VARARGS},
        {"set_collectable1_total", SetCollectable1Total, METH_VARARGS},
        {"set_coord_blip_appearance", SetCoordBlipAppearance, METH_VARARGS},
        {"set_create_random_cops", SetCreateRandomCops, METH_VARARGS},
        {"set_create_random_gang_members", SetCreateRandomGangMembers, METH_VARARGS},
        {"set_current_char_weapon", SetCurrentCharWeapon, METH_VARARGS},
        {"set_cutscene_offset", SetCutsceneOffset, METH_VARARGS},
        {"set_darkness_effect", SetDarknessEffect, METH_VARARGS},
        {"set_death_weapons_persist", SetDeathWeaponsPersist, METH_VARARGS},
        {"set_deatharrest_state", SetDeatharrestState, METH_VARARGS},
        {"set_disable_military_zones", SetDisableMilitaryZones, METH_VARARGS},
        {"set_drunk_input_delay", SetDrunkInputDelay, METH_VARARGS},
        {"set_enable_rc_detonate", SetEnableRcDetonate, METH_VARARGS},
        {"set_enable_rc_detonate_on_contact", SetEnableRcDetonateOnContact, METH_VARARGS},
        {"set_everyone_ignore_player", SetEveryoneIgnorePlayer, METH_VARARGS},
        {"set_extra_car_colours", SetExtraCarColours, METH_VARARGS},
        {"set_extra_colours", SetExtraColours, METH_VARARGS},
        {"set_extra_hospital_restart_point", SetExtraHospitalRestartPoint, METH_VARARGS},
        {"set_extra_police_station_restart_point", SetExtraPoliceStationRestartPoint, METH_VARARGS},
        {"set_fading_colour", SetFadingColour, METH_VARARGS},
        {"set_first_person_in_car_camera_mode", SetFirstPersonInCarCameraMode, METH_VARARGS},
        {"set_fixed_camera_position", SetFixedCameraPosition, METH_VARARGS},
        {"set_float_stat", SetFloatStat, METH_VARARGS},
        {"set_follow_node_threshold_distance", SetFollowNodeThresholdDistance, METH_VARARGS},
        {"set_force_random_car_model", SetForceRandomCarModel, METH_VARARGS},
        {"set_free_health_care", SetFreeHealthCare, METH_VARARGS},
        {"set_free_resprays", SetFreeResprays, METH_VARARGS},
        {"set_freebies_in_vehicle", SetFreebiesInVehicle, METH_VARARGS},
        {"set_gang_wars_active", SetGangWarsActive, METH_VARARGS},
        {"set_gang_wars_training_mission", SetGangWarsTrainingMission, METH_VARARGS},
        {"set_gang_weapons", SetGangWeapons, METH_VARARGS},
        {"set_garage_respray_free", SetGarageResprayFree, METH_VARARGS},
        {"set_global_var_bit_const", SetGlobalVarBitConst, METH_VARARGS},
        {"set_global_var_bit_lvar", SetGlobalVarBitLvar, METH_VARARGS},
        {"set_global_var_bit_var", SetGlobalVarBitVar, METH_VARARGS},
        {"set_group_decision_maker", SetGroupDecisionMaker, METH_VARARGS},
        {"set_group_default_task_allocator", SetGroupDefaultTaskAllocator, METH_VARARGS},
        {"set_group_follow_status", SetGroupFollowStatus, METH_VARARGS},
        {"set_group_leader", SetGroupLeader, METH_VARARGS},
        {"set_group_member", SetGroupMember, METH_VARARGS},
        {"set_group_separation_range", SetGroupSeparationRange, METH_VARARGS},
        {"set_group_sequence", SetGroupSequence, METH_VARARGS},
        {"set_gunshot_sense_range_for_riot2", SetGunshotSenseRangeForRiot2, METH_VARARGS},
        {"set_has_been_owned_for_car_generator", SetHasBeenOwnedForCarGenerator, METH_VARARGS},
        {"set_heading_for_attached_player", SetHeadingForAttachedPlayer, METH_VARARGS},
        {"set_heading_limit_for_attached_char", SetHeadingLimitForAttachedChar, METH_VARARGS},
        {"set_heathaze_effect", SetHeathazeEffect, METH_VARARGS},
        {"set_heli_blades_full_speed", SetHeliBladesFullSpeed, METH_VARARGS},
        {"set_heli_orientation", SetHeliOrientation, METH_VARARGS},
        {"set_heli_reached_target_distance", SetHeliReachedTargetDistance, METH_VARARGS},
        {"set_heli_stabiliser", SetHeliStabiliser, METH_VARARGS},
        {"set_help_message_box_size", SetHelpMessageBoxSize, METH_VARARGS},
        {"set_inform_respected_friends", SetInformRespectedFriends, METH_VARARGS},
        {"set_infrared_vision", SetInfraredVision, METH_VARARGS},
        {"set_int_stat", SetIntStat, METH_VARARGS},
        {"set_interpolation_parameters", SetInterpolationParameters, METH_VARARGS},
        {"set_la_riots", SetLaRiots, METH_VARARGS},
        {"set_load_collision_for_car_flag", SetLoadCollisionForCarFlag, METH_VARARGS},
        {"set_load_collision_for_char_flag", SetLoadCollisionForCharFlag, METH_VARARGS},
        {"set_local_var_bit_const", SetLocalVarBitConst, METH_VARARGS},
        {"set_local_var_bit_lvar", SetLocalVarBitLvar, METH_VARARGS},
        {"set_local_var_bit_var", SetLocalVarBitVar, METH_VARARGS},
        {"set_lvar_text_label", SetLvarTextLabel, METH_VARARGS},
        {"set_max_fire_generations", SetMaxFireGenerations, METH_VARARGS},
        {"set_max_wanted_level", SetMaxWantedLevel, METH_VARARGS},
        {"set_menu_column", SetMenuColumn, METH_VARARGS},
        {"set_menu_column_orientation", SetMenuColumnOrientation, METH_VARARGS},
        {"set_menu_column_width", SetMenuColumnWidth, METH_VARARGS},
        {"set_menu_item_with_2_numbers", SetMenuItemWith2Numbers, METH_VARARGS},
        {"set_menu_item_with_number", SetMenuItemWithNumber, METH_VARARGS},
        {"set_message_formatting", SetMessageFormatting, METH_VARARGS},
        {"set_minigame_in_progress", SetMinigameInProgress, METH_VARARGS},
        {"set_mission_audio_position", SetMissionAudioPosition, METH_VARARGS},
        {"set_mission_respect_total", SetMissionRespectTotal, METH_VARARGS},
        {"set_mission_train_coordinates", SetMissionTrainCoordinates, METH_VARARGS},
        {"set_music_does_fade", SetMusicDoesFade, METH_VARARGS},
        {"set_named_entry_exit_flag", SetNamedEntryExitFlag, METH_VARARGS},
        {"set_near_clip", SetNearClip, METH_VARARGS},
        {"set_next_desired_move_state", SetNextDesiredMoveState, METH_VARARGS},
        {"set_night_vision", SetNightVision, METH_VARARGS},
        {"set_no_resprays", SetNoResprays, METH_VARARGS},
        {"set_object_anim_current_time", SetObjectAnimCurrentTime, METH_VARARGS},
        {"set_object_anim_speed", SetObjectAnimSpeed, METH_VARARGS},
        {"set_object_area_visible", SetObjectAreaVisible, METH_VARARGS},
        {"set_object_as_stealable", SetObjectAsStealable, METH_VARARGS},
        {"set_object_collision", SetObjectCollision, METH_VARARGS},
        {"set_object_collision_damage_effect", SetObjectCollisionDamageEffect, METH_VARARGS},
        {"set_object_coordinates", SetObjectCoordinates, METH_VARARGS},
        {"set_object_coordinates_and_velocity", SetObjectCoordinatesAndVelocity, METH_VARARGS},
        {"set_object_draw_last", SetObjectDrawLast, METH_VARARGS},
        {"set_object_dynamic", SetObjectDynamic, METH_VARARGS},
        {"set_object_heading", SetObjectHeading, METH_VARARGS},
        {"set_object_health", SetObjectHealth, METH_VARARGS},
        {"set_object_mass", SetObjectMass, METH_VARARGS},
        {"set_object_only_damaged_by_player", SetObjectOnlyDamagedByPlayer, METH_VARARGS},
        {"set_object_proofs", SetObjectProofs, METH_VARARGS},
        {"set_object_quaternion", SetObjectQuaternion, METH_VARARGS},
        {"set_object_records_collisions", SetObjectRecordsCollisions, METH_VARARGS},
        {"set_object_render_scorched", SetObjectRenderScorched, METH_VARARGS},
        {"set_object_rotation", SetObjectRotation, METH_VARARGS},
        {"set_object_rotation_velocity", SetObjectRotationVelocity, METH_VARARGS},
        {"set_object_scale", SetObjectScale, METH_VARARGS},
        {"set_object_turn_mass", SetObjectTurnMass, METH_VARARGS},
        {"set_object_velocity", SetObjectVelocity, METH_VARARGS},
        {"set_object_visible", SetObjectVisible, METH_VARARGS},
        {"set_only_create_gang_members", SetOnlyCreateGangMembers, METH_VARARGS},
        {"set_onscreen_counter_flash_when_first_displayed", SetOnscreenCounterFlashWhenFirstDisplayed, METH_VARARGS},
        {"set_ped_density_multiplier", SetPedDensityMultiplier, METH_VARARGS},
        {"set_petrol_tank_weakpoint", SetPetrolTankWeakpoint, METH_VARARGS},
        {"set_photo_camera_effect", SetPhotoCameraEffect, METH_VARARGS},
        {"set_plane_throttle", SetPlaneThrottle, METH_VARARGS},
        {"set_plane_undercarriage_up", SetPlaneUndercarriageUp, METH_VARARGS},
        {"set_playback_speed", SetPlaybackSpeed, METH_VARARGS},
        {"set_player_can_do_drive_by", SetPlayerCanDoDriveBy, METH_VARARGS},
        {"set_player_control", SetPlayerControl, METH_VARARGS},
        {"set_player_cycle_weapon_button", SetPlayerCycleWeaponButton, METH_VARARGS},
        {"set_player_display_vital_stats_button", SetPlayerDisplayVitalStatsButton, METH_VARARGS},
        {"set_player_drunkenness", SetPlayerDrunkenness, METH_VARARGS},
        {"set_player_duck_button", SetPlayerDuckButton, METH_VARARGS},
        {"set_player_enter_car_button", SetPlayerEnterCarButton, METH_VARARGS},
        {"set_player_fast_reload", SetPlayerFastReload, METH_VARARGS},
        {"set_player_fire_button", SetPlayerFireButton, METH_VARARGS},
        {"set_player_group_recruitment", SetPlayerGroupRecruitment, METH_VARARGS},
        {"set_player_group_to_follow_always", SetPlayerGroupToFollowAlways, METH_VARARGS},
        {"set_player_group_to_follow_never", SetPlayerGroupToFollowNever, METH_VARARGS},
        {"set_player_in_car_camera_mode", SetPlayerInCarCameraMode, METH_VARARGS},
        {"set_player_is_in_stadium", SetPlayerIsInStadium, METH_VARARGS},
        {"set_player_jump_button", SetPlayerJumpButton, METH_VARARGS},
        {"set_player_model", SetPlayerModel, METH_VARARGS},
        {"set_player_mood", SetPlayerMood, METH_VARARGS},
        {"set_player_never_gets_tired", SetPlayerNeverGetsTired, METH_VARARGS},
        {"set_player_player_targetting", SetPlayerPlayerTargetting, METH_VARARGS},
        {"set_players_can_be_in_separate_cars", SetPlayersCanBeInSeparateCars, METH_VARARGS},
        {"set_police_ignore_player", SetPoliceIgnorePlayer, METH_VARARGS},
        {"set_pool_table_coords", SetPoolTableCoords, METH_VARARGS},
        {"set_progress_total", SetProgressTotal, METH_VARARGS},
        {"set_radar_zoom", SetRadarZoom, METH_VARARGS},
        {"set_radio_channel", SetRadioChannel, METH_VARARGS},
        {"set_radio_to_players_favourite_station", SetRadioToPlayersFavouriteStation, METH_VARARGS},
        {"set_railtrack_resistance_mult", SetRailtrackResistanceMult, METH_VARARGS},
        {"set_relationship", SetRelationship, METH_VARARGS},
        {"set_render_player_weapon", SetRenderPlayerWeapon, METH_VARARGS},
        {"set_respawn_point_for_duration_of_mission", SetRespawnPointForDurationOfMission, METH_VARARGS},
        {"set_rope_height_for_object", SetRopeHeightForObject, METH_VARARGS},
        {"set_script_coop_game", SetScriptCoopGame, METH_VARARGS},
        {"set_script_limit_to_gang_size", SetScriptLimitToGangSize, METH_VARARGS},
        {"set_searchlight_clip_if_colliding", SetSearchlightClipIfColliding, METH_VARARGS},
        {"set_sense_range", SetSenseRange, METH_VARARGS},
        {"set_sequence_to_repeat", SetSequenceToRepeat, METH_VARARGS},
        {"set_specific_zone_to_trigger_gang_war", SetSpecificZoneToTriggerGangWar, METH_VARARGS},
        {"set_sprites_draw_before_fade", SetSpritesDrawBeforeFade, METH_VARARGS},
        {"set_swim_speed", SetSwimSpeed, METH_VARARGS},
        {"set_tag_status_in_area", SetTagStatusInArea, METH_VARARGS},
        {"set_target_car_for_mission_garage", SetTargetCarForMissionGarage, METH_VARARGS},
        {"set_taxi_lights", SetTaxiLights, METH_VARARGS},
        {"set_text_background", SetTextBackground, METH_VARARGS},
        {"set_text_centre", SetTextCentre, METH_VARARGS},
        {"set_text_centre_size", SetTextCentreSize, METH_VARARGS},
        {"set_text_colour", SetTextColour, METH_VARARGS},
        {"set_text_draw_before_fade", SetTextDrawBeforeFade, METH_VARARGS},
        {"set_text_dropshadow", SetTextDropshadow, METH_VARARGS},
        {"set_text_edge", SetTextEdge, METH_VARARGS},
        {"set_text_font", SetTextFont, METH_VARARGS},
        {"set_text_justify", SetTextJustify, METH_VARARGS},
        {"set_text_proportional", SetTextProportional, METH_VARARGS},
        {"set_text_right_justify", SetTextRightJustify, METH_VARARGS},
        {"set_text_scale", SetTextScale, METH_VARARGS},
        {"set_text_wrapx", SetTextWrapx, METH_VARARGS},
        {"set_time_of_day", SetTimeOfDay, METH_VARARGS},
        {"set_time_one_day_forward", SetTimeOneDayForward, METH_VARARGS},
        {"set_time_scale", SetTimeScale, METH_VARARGS},
        {"set_timer_beep_countdown_time", SetTimerBeepCountdownTime, METH_VARARGS},
        {"set_total_number_of_missions", SetTotalNumberOfMissions, METH_VARARGS},
        {"set_train_cruise_speed", SetTrainCruiseSpeed, METH_VARARGS},
        {"set_train_forced_to_slow_down", SetTrainForcedToSlowDown, METH_VARARGS},
        {"set_train_speed", SetTrainSpeed, METH_VARARGS},
        {"set_two_player_camera_mode", SetTwoPlayerCameraMode, METH_VARARGS},
        {"set_up_conversation_end_node_with_scripted_speech", SetUpConversationEndNodeWithScriptedSpeech, METH_VARARGS},
        {"set_up_conversation_end_node_with_speech", SetUpConversationEndNodeWithSpeech, METH_VARARGS},
        {"set_up_conversation_node_with_scripted_speech", SetUpConversationNodeWithScriptedSpeech, METH_VARARGS},
        {"set_up_conversation_node_with_speech", SetUpConversationNodeWithSpeech, METH_VARARGS},
        {"set_up_skip", SetUpSkip, METH_VARARGS},
        {"set_up_skip_after_mission", SetUpSkipAfterMission, METH_VARARGS},
        {"set_up_skip_for_specific_vehicle", SetUpSkipForSpecificVehicle, METH_VARARGS},
        {"set_up_skip_for_vehicle_finished_by_script", SetUpSkipForVehicleFinishedByScript, METH_VARARGS},
        {"set_up_skip_to_be_finished_by_script", SetUpSkipToBeFinishedByScript, METH_VARARGS},
        {"set_upsidedown_car_not_damaged", SetUpsidedownCarNotDamaged, METH_VARARGS},
        {"set_uses_collision_of_closest_object_of_type", SetUsesCollisionOfClosestObjectOfType, METH_VARARGS},
        {"set_var_text_label", SetVarTextLabel, METH_VARARGS},
        {"set_vehicle_air_resistance_multiplier", SetVehicleAirResistanceMultiplier, METH_VARARGS},
        {"set_vehicle_area_visible", SetVehicleAreaVisible, METH_VARARGS},
        {"set_vehicle_camera_tweak", SetVehicleCameraTweak, METH_VARARGS},
        {"set_vehicle_can_be_targetted", SetVehicleCanBeTargetted, METH_VARARGS},
        {"set_vehicle_dirt_level", SetVehicleDirtLevel, METH_VARARGS},
        {"set_vehicle_is_considered_by_player", SetVehicleIsConsideredByPlayer, METH_VARARGS},
        {"set_vehicle_quaternion", SetVehicleQuaternion, METH_VARARGS},
        {"set_vehicle_to_fade_in", SetVehicleToFadeIn, METH_VARARGS},
        {"set_visibility_of_closest_object_of_type", SetVisibilityOfClosestObjectOfType, METH_VARARGS},
        {"set_wanted_multiplier", SetWantedMultiplier, METH_VARARGS},
        {"set_weather_to_appropriate_type_now", SetWeatherToAppropriateTypeNow, METH_VARARGS},
        {"set_zone_dealer_strength", SetZoneDealerStrength, METH_VARARGS},
        {"set_zone_for_gang_wars_training", SetZoneForGangWarsTraining, METH_VARARGS},
        {"set_zone_gang_strength", SetZoneGangStrength, METH_VARARGS},
        {"set_zone_no_cops", SetZoneNoCops, METH_VARARGS},
        {"set_zone_population_race", SetZonePopulationRace, METH_VARARGS},
        {"set_zone_population_type", SetZonePopulationType, METH_VARARGS},
        {"shake_cam", ShakeCam, METH_VARARGS},
        {"shake_pad", ShakePad, METH_VARARGS},
        {"show_blips_on_all_levels", ShowBlipsOnAllLevels, METH_VARARGS},
        {"show_update_stats", ShowUpdateStats, METH_VARARGS},
        {"shuffle_card_decks", ShuffleCardDecks, METH_VARARGS},
        {"shut_all_chars_up", ShutAllCharsUp, METH_VARARGS},
        {"shut_char_up", ShutCharUp, METH_VARARGS},
        {"shut_char_up_for_scripted_speech", ShutCharUpForScriptedSpeech, METH_VARARGS},
        {"shut_player_up", ShutPlayerUp, METH_VARARGS},
        {"sin", Sin, METH_VARARGS},
        {"skip_cutscene_end", SkipCutsceneEnd, METH_VARARGS},
        {"skip_cutscene_start", SkipCutsceneStart, METH_VARARGS},
        {"skip_cutscene_start_internal", SkipCutsceneStartInternal, METH_VARARGS},
        {"skip_in_playback_recorded_car", SkipInPlaybackRecordedCar, METH_VARARGS},
        {"skip_to_end_and_stop_playback_recorded_car", SkipToEndAndStopPlaybackRecordedCar, METH_VARARGS},
        {"skip_to_next_allowed_station", SkipToNextAllowedStation, METH_VARARGS},
        {"slide_object", SlideObject, METH_VARARGS},
        {"sort_out_object_collision_with_car", SortOutObjectCollisionWithCar, METH_VARARGS},
        {"sqrt", Sqrt, METH_VARARGS},
        {"start_car_fire", StartCarFire, METH_VARARGS},
        {"start_char_facial_talk", StartCharFacialTalk, METH_VARARGS},
        {"start_char_fire", StartCharFire, METH_VARARGS},
        {"start_credits", StartCredits, METH_VARARGS},
        {"start_cutscene", StartCutscene, METH_VARARGS},
        {"start_kill_frenzy", StartKillFrenzy, METH_VARARGS},
        {"start_playback_recorded_car", StartPlaybackRecordedCar, METH_VARARGS},
        {"start_playback_recorded_car_looped", StartPlaybackRecordedCarLooped, METH_VARARGS},
        {"start_playback_recorded_car_using_ai", StartPlaybackRecordedCarUsingAi, METH_VARARGS},
        {"start_recording_car", StartRecordingCar, METH_VARARGS},
        {"start_script_fire", StartScriptFire, METH_VARARGS},
        {"start_setting_up_conversation", StartSettingUpConversation, METH_VARARGS},
        {"stop_beat_track", StopBeatTrack, METH_VARARGS},
        {"stop_char_facial_talk", StopCharFacialTalk, METH_VARARGS},
        {"stop_credits", StopCredits, METH_VARARGS},
        {"stop_fx_system", StopFxSystem, METH_VARARGS},
        {"stop_playback_recorded_car", StopPlaybackRecordedCar, METH_VARARGS},
        {"stop_recording_car", StopRecordingCar, METH_VARARGS},
        {"store_car_char_is_attached_to_no_save", StoreCarCharIsAttachedToNoSave, METH_VARARGS},
        {"store_car_char_is_in", StoreCarCharIsIn, METH_VARARGS},
        {"store_car_char_is_in_no_save", StoreCarCharIsInNoSave, METH_VARARGS},
        {"store_car_mod_state", StoreCarModState, METH_VARARGS},
        {"store_clock", StoreClock, METH_VARARGS},
        {"store_clothes_state", StoreClothesState, METH_VARARGS},
        {"store_score", StoreScore, METH_VARARGS},
        {"store_wanted_level", StoreWantedLevel, METH_VARARGS},
        {"stream_script", StreamScript, METH_VARARGS},
        {"suppress_car_model", SuppressCarModel, METH_VARARGS},
        {"swap_nearest_building_model", SwapNearestBuildingModel, METH_VARARGS},
        {"switch_ambient_planes", SwitchAmbientPlanes, METH_VARARGS},
        {"switch_arrest_penalties", SwitchArrestPenalties, METH_VARARGS},
        {"switch_audio_zone", SwitchAudioZone, METH_VARARGS},
        {"switch_car_generator", SwitchCarGenerator, METH_VARARGS},
        {"switch_car_siren", SwitchCarSiren, METH_VARARGS},
        {"switch_continued", SwitchContinued, METH_VARARGS},
        {"switch_cops_on_bikes", SwitchCopsOnBikes, METH_VARARGS},
        {"switch_death_penalties", SwitchDeathPenalties, METH_VARARGS},
        {"switch_emergency_services", SwitchEmergencyServices, METH_VARARGS},
        {"switch_entry_exit", SwitchEntryExit, METH_VARARGS},
        {"switch_object_brains", SwitchObjectBrains, METH_VARARGS},
        {"switch_on_ground_searchlight", SwitchOnGroundSearchlight, METH_VARARGS},
        {"switch_ped_roads_back_to_original", SwitchPedRoadsBackToOriginal, METH_VARARGS},
        {"switch_ped_roads_off", SwitchPedRoadsOff, METH_VARARGS},
        {"switch_ped_roads_on", SwitchPedRoadsOn, METH_VARARGS},
        {"switch_police_helis", SwitchPoliceHelis, METH_VARARGS},
        {"switch_random_trains", SwitchRandomTrains, METH_VARARGS},
        {"switch_roads_back_to_original", SwitchRoadsBackToOriginal, METH_VARARGS},
        {"switch_roads_off", SwitchRoadsOff, METH_VARARGS},
        {"switch_roads_on", SwitchRoadsOn, METH_VARARGS},
        {"switch_rubbish", SwitchRubbish, METH_VARARGS},
        {"switch_start", SwitchStart, METH_VARARGS},
        {"switch_streaming", SwitchStreaming, METH_VARARGS},
        {"switch_widescreen", SwitchWidescreen, METH_VARARGS},
        {"switch_world_processing", SwitchWorldProcessing, METH_VARARGS},
        {"sync_water", SyncWater, METH_VARARGS},
        {"take_photo", TakePhoto, METH_VARARGS},
        {"take_remote_control_of_car", TakeRemoteControlOfCar, METH_VARARGS},
        {"task_achieve_heading", TaskAchieveHeading, METH_VARARGS},
        {"task_aim_gun_at_char", TaskAimGunAtChar, METH_VARARGS},
        {"task_aim_gun_at_coord", TaskAimGunAtCoord, METH_VARARGS},
        {"task_car_drive_to_coord", TaskCarDriveToCoord, METH_VARARGS},
        {"task_car_drive_wander", TaskCarDriveWander, METH_VARARGS},
        {"task_car_mission", TaskCarMission, METH_VARARGS},
        {"task_car_temp_action", TaskCarTempAction, METH_VARARGS},
        {"task_char_arrest_char", TaskCharArrestChar, METH_VARARGS},
        {"task_char_slide_to_coord", TaskCharSlideToCoord, METH_VARARGS},
        {"task_char_slide_to_coord_and_play_anim", TaskCharSlideToCoordAndPlayAnim, METH_VARARGS},
        {"task_chat_with_char", TaskChatWithChar, METH_VARARGS},
        {"task_climb", TaskClimb, METH_VARARGS},
        {"task_complex_pickup_object", TaskComplexPickupObject, METH_VARARGS},
        {"task_cower", TaskCower, METH_VARARGS},
        {"task_dead", TaskDead, METH_VARARGS},
        {"task_destroy_car", TaskDestroyCar, METH_VARARGS},
        {"task_die", TaskDie, METH_VARARGS},
        {"task_die_named_anim", TaskDieNamedAnim, METH_VARARGS},
        {"task_dive_and_get_up", TaskDiveAndGetUp, METH_VARARGS},
        {"task_dive_from_attachment_and_get_up", TaskDiveFromAttachmentAndGetUp, METH_VARARGS},
        {"task_drive_by", TaskDriveBy, METH_VARARGS},
        {"task_drive_point_route", TaskDrivePointRoute, METH_VARARGS},
        {"task_drive_point_route_advanced", TaskDrivePointRouteAdvanced, METH_VARARGS},
        {"task_duck", TaskDuck, METH_VARARGS},
        {"task_enter_car_as_driver", TaskEnterCarAsDriver, METH_VARARGS},
        {"task_enter_car_as_passenger", TaskEnterCarAsPassenger, METH_VARARGS},
        {"task_everyone_leave_car", TaskEveryoneLeaveCar, METH_VARARGS},
        {"task_fall_and_get_up", TaskFallAndGetUp, METH_VARARGS},
        {"task_flee_char", TaskFleeChar, METH_VARARGS},
        {"task_flee_char_any_means", TaskFleeCharAnyMeans, METH_VARARGS},
        {"task_flee_point", TaskFleePoint, METH_VARARGS},
        {"task_follow_footsteps", TaskFollowFootsteps, METH_VARARGS},
        {"task_follow_path_nodes_to_coord", TaskFollowPathNodesToCoord, METH_VARARGS},
        {"task_follow_path_nodes_to_coord_with_radius", TaskFollowPathNodesToCoordWithRadius, METH_VARARGS},
        {"task_follow_patrol_route", TaskFollowPatrolRoute, METH_VARARGS},
        {"task_follow_point_route", TaskFollowPointRoute, METH_VARARGS},
        {"task_go_straight_to_coord", TaskGoStraightToCoord, METH_VARARGS},
        {"task_go_to_coord_any_means", TaskGoToCoordAnyMeans, METH_VARARGS},
        {"task_go_to_coord_while_aiming", TaskGoToCoordWhileAiming, METH_VARARGS},
        {"task_go_to_coord_while_shooting", TaskGoToCoordWhileShooting, METH_VARARGS},
        {"task_go_to_object", TaskGoToObject, METH_VARARGS},
        {"task_goto_car", TaskGotoCar, METH_VARARGS},
        {"task_goto_char", TaskGotoChar, METH_VARARGS},
        {"task_goto_char_aiming", TaskGotoCharAiming, METH_VARARGS},
        {"task_goto_char_offset", TaskGotoCharOffset, METH_VARARGS},
        {"task_greet_partner", TaskGreetPartner, METH_VARARGS},
        {"task_hand_gesture", TaskHandGesture, METH_VARARGS},
        {"task_hands_up", TaskHandsUp, METH_VARARGS},
        {"task_jetpack", TaskJetpack, METH_VARARGS},
        {"task_jump", TaskJump, METH_VARARGS},
        {"task_kill_char_on_foot", TaskKillCharOnFoot, METH_VARARGS},
        {"task_kill_char_on_foot_timed", TaskKillCharOnFootTimed, METH_VARARGS},
        {"task_kill_char_on_foot_while_ducking", TaskKillCharOnFootWhileDucking, METH_VARARGS},
        {"task_kinda_stay_in_same_place", TaskKindaStayInSamePlace, METH_VARARGS},
        {"task_leave_any_car", TaskLeaveAnyCar, METH_VARARGS},
        {"task_leave_car", TaskLeaveCar, METH_VARARGS},
        {"task_leave_car_and_flee", TaskLeaveCarAndFlee, METH_VARARGS},
        {"task_leave_car_immediately", TaskLeaveCarImmediately, METH_VARARGS},
        {"task_look_about", TaskLookAbout, METH_VARARGS},
        {"task_look_at_char", TaskLookAtChar, METH_VARARGS},
        {"task_look_at_coord", TaskLookAtCoord, METH_VARARGS},
        {"task_look_at_object", TaskLookAtObject, METH_VARARGS},
        {"task_look_at_vehicle", TaskLookAtVehicle, METH_VARARGS},
        {"task_pause", TaskPause, METH_VARARGS},
        {"task_pick_up_object", TaskPickUpObject, METH_VARARGS},
        {"task_pick_up_second_object", TaskPickUpSecondObject, METH_VARARGS},
        {"task_play_anim", TaskPlayAnim, METH_VARARGS},
        {"task_play_anim_non_interruptable", TaskPlayAnimNonInterruptable, METH_VARARGS},
        {"task_play_anim_secondary", TaskPlayAnimSecondary, METH_VARARGS},
        {"task_play_anim_with_flags", TaskPlayAnimWithFlags, METH_VARARGS},
        {"task_say", TaskSay, METH_VARARGS},
        {"task_scratch_head", TaskScratchHead, METH_VARARGS},
        {"task_set_char_decision_maker", TaskSetCharDecisionMaker, METH_VARARGS},
        {"task_set_ignore_weapon_range_flag", TaskSetIgnoreWeaponRangeFlag, METH_VARARGS},
        {"task_shake_fist", TaskShakeFist, METH_VARARGS},
        {"task_shoot_at_char", TaskShootAtChar, METH_VARARGS},
        {"task_shoot_at_coord", TaskShootAtCoord, METH_VARARGS},
        {"task_shuffle_to_next_car_seat", TaskShuffleToNextCarSeat, METH_VARARGS},
        {"task_sit_down", TaskSitDown, METH_VARARGS},
        {"task_smart_flee_char", TaskSmartFleeChar, METH_VARARGS},
        {"task_smart_flee_point", TaskSmartFleePoint, METH_VARARGS},
        {"task_stand_still", TaskStandStill, METH_VARARGS},
        {"task_stay_in_same_place", TaskStayInSamePlace, METH_VARARGS},
        {"task_swim_to_coord", TaskSwimToCoord, METH_VARARGS},
        {"task_tired", TaskTired, METH_VARARGS},
        {"task_toggle_duck", TaskToggleDuck, METH_VARARGS},
        {"task_toggle_ped_threat_scanner", TaskTogglePedThreatScanner, METH_VARARGS},
        {"task_turn_char_to_face_char", TaskTurnCharToFaceChar, METH_VARARGS},
        {"task_turn_char_to_face_coord", TaskTurnCharToFaceCoord, METH_VARARGS},
        {"task_use_atm", TaskUseAtm, METH_VARARGS},
        {"task_use_attractor", TaskUseAttractor, METH_VARARGS},
        {"task_use_closest_map_attractor", TaskUseClosestMapAttractor, METH_VARARGS},
        {"task_use_mobile_phone", TaskUseMobilePhone, METH_VARARGS},
        {"task_walk_alongside_char", TaskWalkAlongsideChar, METH_VARARGS},
        {"task_wander_standard", TaskWanderStandard, METH_VARARGS},
        {"task_warp_char_into_car_as_driver", TaskWarpCharIntoCarAsDriver, METH_VARARGS},
        {"task_warp_char_into_car_as_passenger", TaskWarpCharIntoCarAsPassenger, METH_VARARGS},
        {"task_weapon_roll", TaskWeaponRoll, METH_VARARGS},
        {"terminate_all_scripts_with_this_name", TerminateAllScriptsWithThisName, METH_VARARGS},
        {"turn_car_to_face_coord", TurnCarToFaceCoord, METH_VARARGS},
        {"unload_special_character", UnloadSpecialCharacter, METH_VARARGS},
        {"unmark_all_road_nodes_as_dont_wander", UnmarkAllRoadNodesAsDontWander, METH_VARARGS},
        {"unpause_playback_recorded_car", UnpausePlaybackRecordedCar, METH_VARARGS},
        {"update_pickup_money_per_day", UpdatePickupMoneyPerDay, METH_VARARGS},
        {"use_detonator", UseDetonator, METH_VARARGS},
        {"use_text_commands", UseTextCommands, METH_VARARGS},
        {"vehicle_can_be_targetted_by_hs_missile", VehicleCanBeTargettedByHsMissile, METH_VARARGS},
        {"vehicle_does_provide_cover", VehicleDoesProvideCover, METH_VARARGS},
        {"view_float_variable", ViewFloatVariable, METH_VARARGS},
        {"view_integer_variable", ViewIntegerVariable, METH_VARARGS},
        {"warp_char_from_car_to_coord", WarpCharFromCarToCoord, METH_VARARGS},
        {"warp_char_into_car", WarpCharIntoCar, METH_VARARGS},
        {"warp_char_into_car_as_passenger", WarpCharIntoCarAsPassenger, METH_VARARGS},
        {"was_cutscene_skipped", WasCutsceneSkipped, METH_VARARGS},
        {"watch_float_variable", WatchFloatVariable, METH_VARARGS},
        {"watch_integer_variable", WatchIntegerVariable, METH_VARARGS},
        {"winch_can_pick_object_up", WinchCanPickObjectUp, METH_VARARGS},
        {"winch_can_pick_vehicle_up", WinchCanPickVehicleUp, METH_VARARGS},
        {"write_debug", WriteDebug, METH_VARARGS},
        {"write_debug_with_float", WriteDebugWithFloat, METH_VARARGS},
        {"write_debug_with_int", WriteDebugWithInt, METH_VARARGS},
        {} // sentinel
    };
    static inline PyModuleDef Module = {PyModuleDef_HEAD_INIT, "opcode", NULL, -1, Methods, NULL, NULL, NULL, NULL};

public:
    static PyObject* Init(void)
    {
        return PyModule_Create(&Module);
    }

    PyOpcodes() = delete;
    PyOpcodes(PyOpcodes&) = delete;
};

