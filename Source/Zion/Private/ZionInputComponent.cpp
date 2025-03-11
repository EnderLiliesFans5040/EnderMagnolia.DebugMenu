#include "ZionInputComponent.h"

UZionInputComponent::UZionInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputAction_Movement = NULL;
    this->InputAction_SpecialModifier = NULL;
    this->OwnerPawn = NULL;
    this->CachedEnhancedInput = NULL;
    this->SPComponent = NULL;
}

void UZionInputComponent::RemoveInputMappingContext(const UInputMappingContext* InputMappingContext) {
}

void UZionInputComponent::AddInputMappingContext(const UInputMappingContext* InputMappingContext, EInputMappingPriority Priority) {
}


