#include "SpineBPFLibrary.h"

USpineBPFLibrary::USpineBPFLibrary() {
}

UNiagaraComponent* USpineBPFLibrary::SpawnFXData(const FSpineFXData& FXData, const AActor* Actor, USpineBoneComponent* BoneComponent) {
    return NULL;
}

TArray<FString> USpineBPFLibrary::GenerateSkinList(USpineSkeletonDataAsset* SkeletonDataAsset, USpineAtlasAsset* AtlasAsset) {
    return TArray<FString>();
}

TArray<FString> USpineBPFLibrary::GenerateAnimationList(USpineSkeletonDataAsset* SkeletonDataAsset, USpineAtlasAsset* AtlasAsset) {
    return TArray<FString>();
}


