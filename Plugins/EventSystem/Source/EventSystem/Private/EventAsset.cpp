#include "EventAsset.h"
#include "EventCamera.h"

UEventAsset::UEventAsset() {
    this->Version = 0;
    this->EventUIClass = NULL;
    this->ValidMovementMode = MOVE_Walking;
    this->bHidePlayerUI = true;
    this->bLockFastTravel = true;
    this->bAutoDismissSpirits = true;
    this->bAutoReSummonAutoSpirits = true;
    this->bAllowAutoSkip = false;
    this->bDefaultAllowSkip = true;
    this->SkipActionClass = NULL;
    this->bUsePreSkipFadeOut = true;
    this->bUsePostSkipFadeIn = true;
    this->EventCameraClass = AEventCamera::StaticClass();
}

int32 UEventAsset::GetDialogueVersion() const {
    return 0;
}


