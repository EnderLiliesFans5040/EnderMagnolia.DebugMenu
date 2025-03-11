#include "EventContext.h"

UEventContext::UEventContext() {
}

void UEventContext::SetValueRowHandle(const FName& Key, const FDataTableRowHandle& Value) {
}

void UEventContext::SetValueObject(const FName& Key, UObject* Value) {
}

void UEventContext::SetValueName(const FName& Key, const FName& Value) {
}

void UEventContext::SetValueInteger(const FName& Key, const int32& Value) {
}

void UEventContext::SetValueBoolean(const FName& Key, const bool& Value) {
}

bool UEventContext::IsValueRowHandleSet(const FName& Key) const {
    return false;
}

bool UEventContext::IsValueObjectSet(const FName& Key) const {
    return false;
}

bool UEventContext::IsValueIntegerSet(const FName& Key) const {
    return false;
}

bool UEventContext::IsValueBooleanSet(const FName& Key) const {
    return false;
}

FDataTableRowHandle UEventContext::GetValueRowHandle(const FName& Key, FDataTableRowHandle DefaultValue) const {
    return FDataTableRowHandle{};
}

UObject* UEventContext::GetValueObject(const FName& Key, UObject* DefaultValue) const {
    return NULL;
}

FName UEventContext::GetValueName(const FName& Key, FName DefaultValue) const {
    return NAME_None;
}

int32 UEventContext::GetValueInteger(const FName& Key, int32 DefaultValue) const {
    return 0;
}

bool UEventContext::GetValueBoolean(const FName& Key, bool DefaultValue) const {
    return false;
}

APawn* UEventContext::GetPlayerPawn() const {
    return NULL;
}

APlayerController* UEventContext::GetPlayerController() const {
    return NULL;
}

AActor* UEventContext::GetGameViewTarget() const {
    return NULL;
}

UUserWidget* UEventContext::GetEventUI() const {
    return NULL;
}

AEventCamera* UEventContext::GetEventCamera() const {
    return NULL;
}

UEventAsset* UEventContext::GetEventAsset() const {
    return NULL;
}

AActor* UEventContext::GetActorForBinding(FName ActorBinding) const {
    return NULL;
}


