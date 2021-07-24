// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JOURNEYOFFROGFIGHTER_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define JOURNEYOFFROGFIGHTER_Projectile_generated_h

#define JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_SPARSE_DATA
#define JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnVertical); \
	DECLARE_FUNCTION(execOnHorizontal);


#define JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnVertical); \
	DECLARE_FUNCTION(execOnHorizontal);


#define JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, APaperFlipbookActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JourneyOfFrogFighter"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, APaperFlipbookActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JourneyOfFrogFighter"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile)


#define JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_movementComponent() { return STRUCT_OFFSET(AProjectile, m_movementComponent); } \
	FORCEINLINE static uint32 __PPO__m_bubbleVisual() { return STRUCT_OFFSET(AProjectile, m_bubbleVisual); }


#define JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_14_PROLOG
#define JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_PRIVATE_PROPERTY_OFFSET \
	JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_SPARSE_DATA \
	JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_RPC_WRAPPERS \
	JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_INCLASS \
	JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_PRIVATE_PROPERTY_OFFSET \
	JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_SPARSE_DATA \
	JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_INCLASS_NO_PURE_DECLS \
	JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JOURNEYOFFROGFIGHTER_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JourneyOfFrogFighter_Source_JourneyOfFrogFighter_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
