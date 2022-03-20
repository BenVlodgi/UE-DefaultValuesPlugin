// Copyright Dream Seed LLC, 2022

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "DefaultValuesLibrary.generated.h"

UCLASS()
class UDefaultValuesLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	public:
	/////////////////////////// Common Types ///////////////////////////

	/** Default value: False */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = "boolean"))
	static bool DefaultBool() { return false; };

	/** Default value: 0 */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = "enum"))
	static uint8 DefaultByte() { return 0; };

	/** Default value: 0 */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = "integer, 32"))
	static int DefaultInt() { return 0; };

	/** Default value: 0 */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = "integer"))
	static int64 DefaultInt64() { return 0; };

	/** Default value: 0 */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = "floating, single"))
	static float DefaultFloat() { return 0; };

	/** Default value: None */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = "None"))
	static FName DefaultName() { return FName(); };

	/** Default value: "" */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = ""))
	static FString DefaultString() { return FString(); };

	/** Default value: "" */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = ""))
	static FText DefaultText() { return FText(); };

	/** Default value: (0, 0, 0) */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = "location"))
	static FVector DefaultVector() { return FVector(); };

	/** Default value: (1, 1, 1) */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default:Scale", Keywords = ""))
	static FVector DefaultScaleVector() { return FVector(); };

	/** Default value: (0, 0, 0) */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = ""))
	static FRotator DefaultRotator() { return FRotator(); };

	/** Default value: (0, 0, 0), (0, 0, 0), (0, 0, 0) */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = ""))
	static FTransform DefaultTransform() { return FTransform(); };

	/////////////////////////// Uncommon Types ///////////////////////////

	/** Default value: (0, 0, 0, 0) */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = "Quaternion"))
	static FQuat DefaultQuat() { return FQuat(); };

	/** Default value: (0, 0, 0) */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = ""))
	static FIntVector DefaultIntVector() { return FIntVector(); };

	/** Default value: (0, 0) */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = ""))
	static FIntPoint DefaultIntPoint() { return FIntPoint(); };

	/** Default value: (0, 0) */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = ""))
	static FVector2D DefaultVector2D() { return FVector2D(); };

	/** Default value: (0, 0, 0, 0) */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = ""))
	static FVector4 DefaultVector4() { return FVector4(); };

	/** Default value: Empty Matrix */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = ""))
	static FMatrix DefaultMatrix() { return FMatrix(); };

	/** Default value: (0, 0, 0, 0) */
	UFUNCTION(BlueprintPure, Category = "Defaults", meta = (CompactNodeTitle = "Default", Keywords = ""))
	static FPlane DefaultPlane() { return FPlane(); };

};
