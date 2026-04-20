// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-20 23:20:34.022157100 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: client.dll
        // Class count: 503
        // Enum count: 8
        namespace client_dll {
            // Alignment: 4
            // Member count: 15
            enum class CompositeMaterialInputLooseVariableType_t : uint32_t {
                LOOSE_VARIABLE_TYPE_BOOLEAN = 0x0,
                LOOSE_VARIABLE_TYPE_INTEGER1 = 0x1,
                LOOSE_VARIABLE_TYPE_INTEGER2 = 0x2,
                LOOSE_VARIABLE_TYPE_INTEGER3 = 0x3,
                LOOSE_VARIABLE_TYPE_INTEGER4 = 0x4,
                LOOSE_VARIABLE_TYPE_FLOAT1 = 0x5,
                LOOSE_VARIABLE_TYPE_FLOAT2 = 0x6,
                LOOSE_VARIABLE_TYPE_FLOAT3 = 0x7,
                LOOSE_VARIABLE_TYPE_FLOAT4 = 0x8,
                LOOSE_VARIABLE_TYPE_COLOR4 = 0x9,
                LOOSE_VARIABLE_TYPE_STRING = 0xA,
                LOOSE_VARIABLE_TYPE_SYSTEMVAR = 0xB,
                LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 0xC,
                LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 0xD,
                LOOSE_VARIABLE_TYPE_PANORAMA_RENDER = 0xE
            };
            // Alignment: 4
            // Member count: 8
            enum class CompositeMaterialInputTextureType_t : uint32_t {
                INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
                INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
                INPUT_TEXTURE_TYPE_COLOR = 0x2,
                INPUT_TEXTURE_TYPE_MASKS = 0x3,
                INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
                INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
                INPUT_TEXTURE_TYPE_AO = 0x6,
                INPUT_TEXTURE_TYPE_POSITION = 0x7
            };
            // Alignment: 4
            // Member count: 9
            enum class InventoryNodeType_t : uint32_t {
                NODE_TYPE_INVALID = 0x0,
                VIRTUAL_NODE_SCHEMA_PREFAB = 0x1,
                VIRTUAL_NODE_SCHEMA_ITEMDEF = 0x2,
                VIRTUAL_NODE_SCHEMA_STICKER = 0x3,
                VIRTUAL_NODE_SCHEMA_KEYCHAIN = 0x4,
                CONCRETE_NODE_SCHEMA_PREFAB = 0x5,
                CONCRETE_NODE_SCHEMA_ITEMDEF = 0x6,
                CONCRETE_NODE_SCHEMA_STICKER = 0x7,
                CONCRETE_NODE_SCHEMA_KEYCHAIN = 0x8
            };
            // Alignment: 4
            // Member count: 6
            enum class CompositeMaterialInputContainerSourceType_t : uint32_t {
                CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
                CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
                CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
                CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
                CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
                CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
            };
            // Alignment: 4
            // Member count: 10
            enum class CompMatPropertyMutatorType_t : uint32_t {
                COMP_MAT_PROPERTY_MUTATOR_INIT = 0x0,
                COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 0x1,
                COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 0x2,
                COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 0x3,
                COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 0x4,
                COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 0x5,
                COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 0x6,
                COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 0x7,
                COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 0x8,
                COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 0x9
            };
            // Alignment: 4
            // Member count: 2
            enum class CompositeMaterialVarSystemVar_t : uint32_t {
                COMPMATSYSVAR_COMPOSITETIME = 0x0,
                COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class CompositeMaterialMatchFilterType_t : uint32_t {
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
                MATCH_FILTER_MATERIAL_SHADER = 0x1,
                MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
                MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
                MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
            };
            // Alignment: 4
            // Member count: 3
            enum class CompMatPropertyMutatorConditionType_t : uint32_t {
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
            };
            // Parent: 
            // Field count: 0
            namespace C_CSGO_TeamIntroCharacterPosition {
            }
            // Parent: 
            // Field count: 0
            namespace C_FireCrackerBlast {
            }
            // Parent: 
            // Field count: 0
            namespace CCSGO_WingmanIntroCounterTerroristPosition {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_WaitForCursorsWithTag {
            }
            // Parent: None
            // Field count: 0
            namespace C_SceneEntity__QueuedEvents_t {
            }
            // Parent: xLV___
            // Field count: 0
            namespace CCSPlayer_PingServices {
            }
            // Parent: None
            // Field count: 0
            namespace CEconItemAttribute {
            }
            // Parent: None
            // Field count: 0
            namespace CBaseTriggerAPI {
            }
            // Parent: xLV___
            // Field count: 0
            namespace CFuncRetakeBarrier {
            }
            // Parent: None
            // Field count: 0
            namespace C_EnvWindShared {
            }
            // Parent: _
            // Field count: 0
            namespace C_SkyCamera {
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: _
            // Field count: 0
            namespace C_FuncRotating {
            }
            // Parent: xLV___
            // Field count: 0
            namespace C_SoundOpvarSetPointBase {
            }
            // Parent: 
            // Field count: 0
            namespace C_EnvCubemapFog {
            }
            // Parent: client
            // Field count: 0
            namespace C_CSGO_TeamSelectTerroristPosition {
            }
            // Parent: 
            // Field count: 0
            namespace C_EnvParticleGlow {
            }
            // Parent: 
            // Field count: 0
            namespace CCS_PortraitWorldCallbackHandler {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayerController_InventoryServices {
            }
            // Parent: None
            // Field count: 0
            namespace CCSPlayerModernJump {
            }
            // Parent: None
            // Field count: 0
            namespace C_EconEntity__AttachedModelData_t {
            }
            // Parent: 
            // Field count: 0
            namespace CPulse_ResumePoint {
            }
            // Parent: 
            // Field count: 0
            namespace CTriggerFan {
            }
            // Parent: 
            // Field count: 0
            namespace C_HostageCarriableProp {
            }
            // Parent: 
            // Field count: 0
            namespace C_BulletHitModel {
            }
            // Parent: 
            // Field count: 0
            namespace C_FuncElectrifiedVolume {
            }
            // Parent: 
            // Field count: 0
            namespace C_MapVetoPickController {
            }
            // Parent: 
            // Field count: 0
            namespace C_EnvVolumetricFogVolume {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_EndOfMatchCharacterPosition {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_PlaySequence {
            }
            // Parent: None
            // Field count: 0
            namespace C_BaseEntityAPI {
            }
            // Parent: 
            // Field count: 0
            namespace C_BarnLight {
            }
            // Parent: client
            // Field count: 0
            namespace CPulseCell_LerpCameraSettings {
            }
            // Parent: 
            // Field count: 0
            namespace CPointOffScreenIndicatorUi {
            }
            // Parent: 
            // Field count: 0
            namespace CCSObserver_UseServices {
            }
            // Parent: 
            // Field count: 0
            namespace C_PostProcessingVolume {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayer_UseServices {
            }
            // Parent: None
            // Field count: 0
            namespace C_BaseModelEntity__Emphasized_Phoneme {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_CounterTerroristWingmanIntroCamera {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_PickBestOutflowSelector {
            }
            // Parent: 
            // Field count: 0
            namespace CInfoFan {
            }
            // Parent: client
            // Field count: 0
            namespace C_VoteController {
            }
            // Parent: xLV___
            // Field count: 0
            namespace C_C4 {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSPlayerPawnBase {
            }
            // Parent: 
            // Field count: 0
            namespace C_BreakableProp {
            }
            // Parent: 
            // Field count: 0
            namespace CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: MNotSaved
            // Field count: 0
            namespace CPrecipitationVData {
            }
            // Parent: None
            // Field count: 0
            namespace C_RetakeGameRules {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_WaitForObservable {
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundAreaEntitySphere {
            }
            // Parent: client
            // Field count: 0
            namespace CPulseCell_Step_EntFire {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponAWP {
            }
            // Parent: ___Z__
            // Field count: 0
            namespace C_BaseButton {
            }
            // Parent: 
            // Field count: 0
            namespace CCSObserver_ObserverServices {
            }
            // Parent: client
            // Field count: 0
            namespace CHitboxComponent {
            }
            // Parent: None
            // Field count: 0
            namespace ServerAuthoritativeWeaponSlot_t {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSMinimapBoundary {
            }
            // Parent: server
            // Field count: 0
            namespace CPathQueryComponent {
            }
            // Parent: client
            // Field count: 0
            namespace C_Precipitation {
            }
            // Parent: 
            // Field count: 0
            namespace CLogicRelay {
            }
            // Parent: None
            // Field count: 0
            namespace SequenceHistory_t {
            }
            // Parent: 
            // Field count: 0
            namespace CPlayer_ItemServices {
            }
            // Parent: None
            // Field count: 0
            namespace CPulse_OutflowConnection {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponUMP45 {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponG3SG1 {
            }
            // Parent: 
            // Field count: 0
            namespace C_SpotlightEnd {
            }
            // Parent: 
            // Field count: 0
            namespace C_Fish {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponFamas {
            }
            // Parent: 
            // Field count: 0
            namespace C_EnvVolumetricFogController {
            }
            // Parent: None
            // Field count: 1
            namespace CPulseGraphDef {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: 
            // Field count: 0
            namespace C_EnvDetailController {
            }
            // Parent: 
            // Field count: 0
            namespace C_EnvWindVolume {
            }
            // Parent: None
            // Field count: 0
            namespace CBasePlayerControllerAPI {
            }
            // Parent: 
            // Field count: 0
            namespace CHostageRescueZoneShim {
            }
            // Parent: client
            // Field count: 0
            namespace CEnvSoundscapeAlias_snd_soundscape {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayer_HostageServices {
            }
            // Parent: 
            // Field count: 0
            namespace C_GameRulesProxy {
            }
            // Parent: 
            // Field count: 0
            namespace CRenderComponent {
            }
            // Parent: 
            // Field count: 0
            namespace C_Team {
            }
            // Parent: 
            // Field count: 0
            namespace C_PathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: 
            // Field count: 0
            namespace CPointChildModifier {
            }
            // Parent: None
            // Field count: 0
            namespace CCSPlayerLegacyJump {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponNOVA {
            }
            // Parent: 
            // Field count: 0
            namespace C_DEagle {
            }
            // Parent: 
            // Field count: 0
            namespace C_CS2HudModelAddon {
            }
            // Parent: 
            // Field count: 0
            namespace C_TriggerMultiple {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_TeamPreviewCamera {
            }
            // Parent: 
            // Field count: 0
            namespace C_ColorCorrectionVolume {
            }
            // Parent: 
            // Field count: 0
            namespace CPlayer_MovementServices {
            }
            // Parent: 
            // Field count: 0
            namespace CInfoDynamicShadowHintBox {
            }
            // Parent: 
            // Field count: 0
            namespace CBaseAnimGraphController {
            }
            // Parent: 
            // Field count: 0
            namespace C_ColorCorrection {
            }
            // Parent: None
            // Field count: 0
            namespace AnimGraph2SerializedPoseRecipeSlot_t {
            }
            // Parent: None
            // Field count: 0
            namespace CBuoyancyHelper {
            }
            // Parent: MGetKV3ClassDefaults
            // Field count: 0
            namespace C_PhysBox {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayer_CameraServices {
            }
            // Parent: 
            // Field count: 0
            namespace CFilterMultiple {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_FireCursors {
            }
            // Parent: 
            // Field count: 0
            namespace CEnvSoundscape {
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundEventEntityAlias_snd_event_point {
            }
            // Parent: MGetKV3ClassDefaults
            // Field count: 0
            namespace C_FogController {
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundOpvarSetOBBWindEntity {
            }
            // Parent: 
            // Field count: 0
            namespace C_MolotovGrenade {
            }
            // Parent: client
            // Field count: 0
            namespace C_NetTestBaseCombatCharacter {
            }
            // Parent: 
            // Field count: 0
            namespace CBodyComponentPoint {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponM4A1Silencer {
            }
            // Parent: _
            // Field count: 0
            namespace C_EconItemView {
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_Timeline__TimelineEvent_t {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_IntervalTimer__CursorState_t {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_BaseRequirement {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_BaseState {
            }
            // Parent: None
            // Field count: 1
            namespace OutflowWithRequirements_t {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_IsRequirementValid {
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundEventPathCornerEntity {
            }
            // Parent: 
            // Field count: 0
            namespace C_InfoVisibilityBox {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayer_ItemServices {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Value_Gradient {
            }
            // Parent: None
            // Field count: 0
            namespace IntervalTimer {
            }
            // Parent: None
            // Field count: 0
            namespace audioparams_t {
            }
            // Parent: 
            // Field count: 0
            namespace C_PathParticleRope {
            }
            // Parent: 
            // Field count: 0
            namespace C_DecoyProjectile {
            }
            // Parent: 
            // Field count: 0
            namespace C_AttributeContainer {
            }
            // Parent: client
            // Field count: 0
            namespace C_CSWeaponBase {
            }
            // Parent: ___Z__
            // Field count: 0
            namespace CTimeline {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCursorFuncs {
            }
            // Parent: 
            // Field count: 0
            namespace C_TonemapController2 {
            }
            // Parent: None
            // Field count: 1
            namespace CountdownTimer {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: None
            // Field count: 1
            namespace PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponMag7 {
            }
            // Parent: None
            // Field count: 0
            namespace WeaponPurchaseCount_t {
            }
            // Parent: None
            // Field count: 0
            namespace CBasePulseGraphInstance {
            }
            // Parent: 
            // Field count: 0
            namespace FilterHealth {
            }
            // Parent: 
            // Field count: 0
            namespace C_PointClientUIHUD {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Inflow_GraphHook {
            }
            // Parent: 
            // Field count: 0
            namespace SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            namespace CPathSimpleAPI {
            }
            // Parent: 
            // Field count: 0
            namespace C_InfoLadderDismount {
            }
            // Parent: 
            // Field count: 0
            namespace C_PointCommentaryNode {
            }
            // Parent: 
            // Field count: 0
            namespace CSpriteOriented {
            }
            // Parent: None
            // Field count: 0
            namespace shard_model_desc_t {
            }
            // Parent: 
            // Field count: 0
            namespace C_KeychainModule {
            }
            // Parent: 
            // Field count: 0
            namespace CFuncWater {
            }
            // Parent: client
            // Field count: 0
            namespace CCSPlayer_GlowServices {
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: WPN_ANIMSTATE_UNINITIALIZED
            // Field count: 0
            namespace C_Flashbang {
            }
            // Parent: 
            // Field count: 0
            namespace C_PointClientUIWorldTextPanel {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayer_WaterServices {
            }
            // Parent: client
            // Field count: 0
            namespace C_CSObserverPawn {
            }
            // Parent: None
            // Field count: 0
            namespace ViewAngleServerChange_t {
            }
            // Parent: 
            // Field count: 0
            namespace C_FuncLadder {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponMP5SD {
            }
            // Parent: 
            // Field count: 0
            namespace C_World {
            }
            // Parent: server
            // Field count: 0
            namespace C_CSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponGalilAR {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayerBase_CameraServices {
            }
            // Parent: 
            // Field count: 0
            namespace C_TeamplayRules {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_Inflow_BaseEntrypoint {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponSG556 {
            }
            // Parent: _
            // Field count: 0
            namespace C_CSPlayerPawn {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_TeamIntroTerroristPosition {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_WaitForCursorsWithTagBase {
            }
            // Parent: 
            // Field count: 0
            namespace C_Hostage {
            }
            // Parent: None
            // Field count: 0
            namespace C_fogplayerparams_t {
            }
            // Parent: None
            // Field count: 0
            namespace CGameSceneNode {
            }
            // Parent: 
            // Field count: 0
            namespace CPlayer_ObserverServices {
            }
            // Parent: 
            // Field count: 0
            namespace CCashStack {
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundAreaEntityBase {
            }
            // Parent: 
            // Field count: 0
            namespace C_PlayerVisibility {
            }
            // Parent: None
            // Field count: 0
            namespace CAttributeManager__cached_attribute_float_t {
            }
            // Parent: 
            // Field count: 0
            namespace C_BasePlayerWeapon {
            }
            // Parent: 
            // Field count: 0
            namespace CRagdollManager {
            }
            // Parent: client
            // Field count: 0
            namespace C_HEGrenade {
            }
            // Parent: 
            // Field count: 0
            namespace C_EnvSky {
            }
            // Parent: None
            // Field count: 1
            namespace CPulse_InvokeBinding {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: 
            // Field count: 0
            namespace C_EnvWindController {
            }
            // Parent: None
            // Field count: 0
            namespace C_GameRules {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponMAC10 {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_MapPreviewCameraPath {
            }
            // Parent: 
            // Field count: 0
            namespace C_PointWorldText {
            }
            // Parent: client
            // Field count: 0
            namespace C_RopeKeyframe {
            }
            // Parent: xLV___
            // Field count: 0
            namespace C_BaseToggle {
            }
            // Parent: 
            // Field count: 0
            namespace C_EnvCubemapBox {
            }
            // Parent: 
            // Field count: 0
            namespace C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
            }
            // Parent: None
            // Field count: 0
            namespace C_RopeKeyframe__CPhysicsDelegate {
            }
            // Parent: 
            // Field count: 0
            namespace CInfoDynamicShadowHint {
            }
            // Parent: xLV___
            // Field count: 0
            namespace CPathNode {
            }
            // Parent: 
            // Field count: 0
            namespace C_FuncMoveLinear {
            }
            // Parent: 
            // Field count: 0
            namespace CServerOnlyModelEntity {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_TeamSelectCamera {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_IntervalTimer {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponXM1014 {
            }
            // Parent: client
            // Field count: 0
            namespace C_WorldModelGloves {
            }
            // Parent: 
            // Field count: 0
            namespace C_PhysicsPropMultiplayer {
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundEventOBBEntity {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseTestScriptLib {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_BaseLerp {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponAug {
            }
            // Parent: client
            // Field count: 0
            namespace C_BasePropDoor {
            }
            // Parent: 
            // Field count: 0
            namespace CChoreoInfoTarget {
            }
            // Parent: None
            // Field count: 0
            namespace CTakeDamageResultAPI {
            }
            // Parent: None
            // Field count: 0
            namespace CNetworkedSequenceOperation {
            }
            // Parent: 
            // Field count: 0
            namespace C_Item_Healthshot {
            }
            // Parent: None
            // Field count: 0
            namespace CEntityInstance {
            }
            // Parent: xLV___
            // Field count: 0
            namespace C_BaseModelEntity {
            }
            // Parent: xLV___
            // Field count: 0
            namespace CCSPlayer_BulletServices {
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundOpvarSetAutoRoomEntity {
            }
            // Parent: 
            // Field count: 0
            namespace C_EnvCombinedLightProbeVolume {
            }
            // Parent: 
            // Field count: 0
            namespace CCSGO_EndOfMatchLineupEnd {
            }
            // Parent: 
            // Field count: 0
            namespace C_MultiplayRules {
            }
            // Parent: 
            // Field count: 0
            namespace CPlayer_AutoaimServices {
            }
            // Parent: 
            // Field count: 0
            namespace C_LightDirectionalEntity {
            }
            // Parent: xLV___
            // Field count: 0
            namespace C_BaseEntity {
            }
            // Parent: None
            // Field count: 0
            namespace ActiveModelConfig_t {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponSSG08 {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_Value_Curve {
            }
            // Parent: server
            // Field count: 0
            namespace C_Chicken {
            }
            // Parent: xLV___
            // Field count: 0
            namespace C_BasePlayerPawn {
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundOpvarSetAABBEntity {
            }
            // Parent: xLV___
            // Field count: 0
            namespace C_WeaponBizon {
            }
            // Parent: 
            // Field count: 0
            namespace C_StattrakModule {
            }
            // Parent: 
            // Field count: 0
            namespace CCSObserver_CameraServices {
            }
            // Parent: 
            // Field count: 0
            namespace CEnvSoundscapeProxy {
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundEventEntity {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Inflow_EventHandler {
            }
            // Parent: 
            // Field count: 0
            namespace C_LightOrthoEntity {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_BaseFlow {
            }
            // Parent: 
            // Field count: 0
            namespace CBombTarget {
            }
            // Parent: _SH___H__H______H___Z__H__H_____________________SH___H__H__P___H___hZ__H__H________H__X_
            // Field count: 0
            namespace C_Knife {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_TerroristWingmanIntroCamera {
            }
            // Parent: 
            // Field count: 0
            namespace CSkeletonInstance {
            }
            // Parent: None
            // Field count: 0
            namespace CEntityComponent {
            }
            // Parent: 
            // Field count: 0
            namespace C_ItemDogtags {
            }
            // Parent: 
            // Field count: 0
            namespace C_LateUpdatedAnimating {
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_BaseLerp__CursorState_t {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: None
            // Field count: 0
            namespace CPulseAnimFuncs {
            }
            // Parent: 
            // Field count: 0
            namespace C_BaseClientUIEntity {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseArraylib {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponUSPSilencer {
            }
            // Parent: 
            // Field count: 0
            namespace C_MolotovProjectile {
            }
            // Parent: 
            // Field count: 0
            namespace C_TriggerLerpObject {
            }
            // Parent: None
            // Field count: 0
            namespace CPointTemplateAPI {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponRevolver {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponElite {
            }
            // Parent: 
            // Field count: 0
            namespace C_DynamicPropAlias_cable_dynamic {
            }
            // Parent: 
            // Field count: 0
            namespace CBaseProp {
            }
            // Parent: 
            // Field count: 0
            namespace CInfoOffscreenPanoramaTexture {
            }
            // Parent: 
            // Field count: 0
            namespace CCSWeaponBaseVData {
            }
            // Parent: None
            // Field count: 0
            namespace CAttributeManager {
            }
            // Parent: 
            // Field count: 0
            namespace SignatureOutflow_Continue {
            }
            // Parent: 
            // Field count: 0
            namespace CInfoTarget {
            }
            // Parent: 
            // Field count: 0
            namespace CPlayer_CameraServices {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_Timeline {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_Inflow_EntOutputHandler {
            }
            // Parent: 
            // Field count: 0
            namespace C_BaseCSGrenade {
            }
            // Parent: None
            // Field count: 1
            namespace CScenePayloadVData {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: 
            // Field count: 0
            namespace CFilterAttributeInt {
            }
            // Parent: client
            // Field count: 0
            namespace CPointTemplate {
            }
            // Parent: 
            // Field count: 0
            namespace CPlayer_FlashlightServices {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayerController {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_PreviewModel {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_TeamSelectCharacterPosition {
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundEventAABBEntity {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayer_MovementServices {
            }
            // Parent: None
            // Field count: 0
            namespace SellbackPurchaseEntry_t {
            }
            // Parent: 
            // Field count: 0
            namespace C_TintController {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponBaseItem {
            }
            // Parent: 
            // Field count: 0
            namespace CWaterSplasher {
            }
            // Parent: client
            // Field count: 0
            namespace C_FuncBrush {
            }
            // Parent: None
            // Field count: 1
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: 
            // Field count: 0
            namespace CPropDataComponent {
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_LimitCount__InstanceState_t {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponCZ75a {
            }
            // Parent: 
            // Field count: 0
            namespace C_DynamicLight {
            }
            // Parent: 
            // Field count: 0
            namespace CCS2PawnGraphController {
            }
            // Parent: None
            // Field count: 0
            namespace EngineCountdownTimer {
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundEventSphereEntity {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayerController_DamageServices {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_TeamPreviewModel {
            }
            // Parent: 
            // Field count: 0
            namespace C_TonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: 
            // Field count: 0
            namespace C_Inferno {
            }
            // Parent: 
            // Field count: 0
            namespace CFilterLOS {
            }
            // Parent: 
            // Field count: 0
            namespace CPointOrient {
            }
            // Parent: client
            // Field count: 0
            namespace C_GlobalLight {
            }
            // Parent: 
            // Field count: 0
            namespace C_EnvWindClientside {
            }
            // Parent: None
            // Field count: 0
            namespace sky3dparams_t {
            }
            // Parent: 
            // Field count: 0
            namespace C_FlashbangProjectile {
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundEventConeEntity {
            }
            // Parent: None
            // Field count: 1
            namespace CDestructiblePartsComponent {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponP90 {
            }
            // Parent: MNotSaved
            // Field count: 0
            namespace C_EnvWind {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_TerroristTeamIntroCamera {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Step_DebugLog {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayerController_ActionTrackingServices {
            }
            // Parent: xLV___
            // Field count: 0
            namespace CBodyComponentBaseAnimGraph {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
            }
            // Parent: 
            // Field count: 0
            namespace C_InfoInstructorHintHostageRescueZone {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_BaseYieldingInflow {
            }
            // Parent: None
            // Field count: 1
            namespace PulseNodeDynamicOutflows_t {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: 
            // Field count: 0
            namespace C_TriggerBuoyancy {
            }
            // Parent: 
            // Field count: 0
            namespace CPlayer_MovementServices_Humanoid {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_IsRequirementValid__Criteria_t {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponTec9 {
            }
            // Parent: xLV___
            // Field count: 0
            namespace C_PhysPropClientside {
            }
            // Parent: 
            // Field count: 0
            namespace C_BaseDoor {
            }
            // Parent: 
            // Field count: 0
            namespace CSMatchStats_t {
            }
            // Parent: None
            // Field count: 0
            namespace EntityRenderAttribute_t {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_Inflow_ObservableVariableListener {
            }
            // Parent: None
            // Field count: 0
            namespace CFilterMultipleAPI {
            }
            // Parent: 
            // Field count: 0
            namespace CHostageRescueZone {
            }
            // Parent: None
            // Field count: 0
            namespace CModelState {
            }
            // Parent: client
            // Field count: 0
            namespace CPulseCell_LerpCameraSettings__CursorState_t {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Outflow_CycleOrdered {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSWeaponBaseGun {
            }
            // Parent: client
            // Field count: 0
            namespace C_CSGameRulesProxy {
            }
            // Parent: None
            // Field count: 0
            namespace CCollisionProperty {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponP250 {
            }
            // Parent: 
            // Field count: 0
            namespace C_ShatterGlassShardPhysics {
            }
            // Parent: 
            // Field count: 0
            namespace CFilterMassGreater {
            }
            // Parent: 
            // Field count: 0
            namespace C_EntityDissolve {
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundOpvarSetOBBEntity {
            }
            // Parent: 
            // Field count: 0
            namespace CCSGameModeRules_ArmsRace {
            }
            // Parent: _
            // Field count: 0
            namespace C_FuncMonitor {
            }
            // Parent: 
            // Field count: 0
            namespace C_ClientRagdoll {
            }
            // Parent: None
            // Field count: 1
            namespace PulseSelectorOutflowList_t {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_PlaySequence__CursorState_t {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: 
            // Field count: 0
            namespace CBodyComponentSkeletonInstance {
            }
            // Parent: client
            // Field count: 0
            namespace C_CS2WeaponModuleBase {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_TeamPreviewCharacterPosition {
            }
            // Parent: xLV___
            // Field count: 0
            namespace C_SmokeGrenadeProjectile {
            }
            // Parent: 
            // Field count: 0
            namespace CScriptComponent {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayer_BuyServices {
            }
            // Parent: 
            // Field count: 0
            namespace C_PortraitWorldCallbackHandler {
            }
            // Parent: 
            // Field count: 0
            namespace C_DynamicProp {
            }
            // Parent: xLV___
            // Field count: 0
            namespace C_CSTeam {
            }
            // Parent: 
            // Field count: 0
            namespace C_CS2HudModelWeapon {
            }
            // Parent: 
            // Field count: 0
            namespace C_TextureBasedAnimatable {
            }
            // Parent: 
            // Field count: 0
            namespace C_LightEnvironmentEntity {
            }
            // Parent: None
            // Field count: 0
            namespace DestructiblePartDamageRequestAPI {
            }
            // Parent: None
            // Field count: 0
            namespace CLogicRelayAPI {
            }
            // Parent: 
            // Field count: 0
            namespace C_TriggerPhysics {
            }
            // Parent: 
            // Field count: 0
            namespace C_PropDoorRotating {
            }
            // Parent: 
            // Field count: 0
            namespace C_HandleTest {
            }
            // Parent: 
            // Field count: 0
            namespace CInfoWorldLayer {
            }
            // Parent: 
            // Field count: 0
            namespace CBodyComponentBaseModelEntity {
            }
            // Parent: 
            // Field count: 0
            namespace C_Multimeter {
            }
            // Parent: 
            // Field count: 0
            namespace C_BaseTrigger {
            }
            // Parent: 
            // Field count: 0
            namespace FilterDamageType {
            }
            // Parent: None
            // Field count: 0
            namespace CAttributeList {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Inflow_Wait {
            }
            // Parent: 
            // Field count: 0
            namespace CFilterProximity {
            }
            // Parent: 
            // Field count: 0
            namespace CCS2WeaponGraphController {
            }
            // Parent: None
            // Field count: 0
            namespace CEffectData {
            }
            // Parent: 
            // Field count: 0
            namespace C_ParticleSystem {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Outflow_CycleShuffled {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponSCAR20 {
            }
            // Parent: 
            // Field count: 0
            namespace C_FuncMover {
            }
            // Parent: None
            // Field count: 0
            namespace CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
            }
            // Parent: 
            // Field count: 0
            namespace CLightComponent {
            }
            // Parent: client
            // Field count: 0
            namespace C_DecoyGrenade {
            }
            // Parent: 
            // Field count: 0
            namespace C_WaterBullet {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayer_ActionTrackingServices {
            }
            // Parent: 
            // Field count: 0
            namespace C_EnvCubemap {
            }
            // Parent: 
            // Field count: 0
            namespace CCSObserver_MovementServices {
            }
            // Parent: 
            // Field count: 0
            namespace CBodyComponent {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_Inflow_Method {
            }
            // Parent: 
            // Field count: 0
            namespace C_BaseCombatCharacter {
            }
            // Parent: None
            // Field count: 0
            namespace CGlowProperty {
            }
            // Parent: 
            // Field count: 0
            namespace C_PointClientUIDialog {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_BaseValue {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponHKP2000 {
            }
            // Parent: 
            // Field count: 0
            namespace C_FootstepControl {
            }
            // Parent: 
            // Field count: 0
            namespace CCitadelSoundOpvarSetOBB {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_EndOfMatchLineupStart {
            }
            // Parent: 
            // Field count: 0
            namespace CPlayer_WaterServices {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_BooleanSwitchState {
            }
            // Parent: None
            // Field count: 0
            namespace CDamageRecord {
            }
            // Parent: None
            // Field count: 0
            namespace VPhysicsCollisionAttribute_t {
            }
            // Parent: 
            // Field count: 0
            namespace C_DynamicPropAlias_dynamic_prop {
            }
            // Parent: 
            // Field count: 0
            namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            }
            // Parent: 
            // Field count: 0
            namespace C_OmniLight {
            }
            // Parent: 
            // Field count: 0
            namespace C_SceneEntity {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Inflow_Yield {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseMathlib {
            }
            // Parent: 
            // Field count: 0
            namespace C_NametagModule {
            }
            // Parent: server
            // Field count: 0
            namespace C_EconEntity {
            }
            // Parent: 
            // Field count: 0
            namespace CPlayer_UseServices {
            }
            // Parent: 
            // Field count: 0
            namespace C_PointValueRemapper {
            }
            // Parent: None
            // Field count: 0
            namespace CGameSceneNodeHandle {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_Unknown {
            }
            // Parent: __QZ__
            // Field count: 0
            namespace C_WeaponMP7 {
            }
            // Parent: None
            // Field count: 0
            namespace CSPerRoundStats_t {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Outflow_CycleRandom {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Step_PublicOutput {
            }
            // Parent: 
            // Field count: 0
            namespace C_CS2HudModelBase {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGameRules {
            }
            // Parent: 
            // Field count: 0
            namespace CGrenadeTracer {
            }
            // Parent: 
            // Field count: 0
            namespace CCSGameModeRules_Noop {
            }
            // Parent: None
            // Field count: 1
            namespace CPulse_BlackboardReference {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: 
            // Field count: 0
            namespace C_BaseCSGrenadeProjectile {
            }
            // Parent: 
            // Field count: 0
            namespace C_GradientFog {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayerController_InGameMoneyServices {
            }
            // Parent: 
            // Field count: 0
            namespace C_HEGrenadeProjectile {
            }
            // Parent: 
            // Field count: 0
            namespace CFilterModel {
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundAreaEntityOrientedBox {
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundOpvarSetPointEntity {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseGameBlackboard {
            }
            // Parent: None
            // Field count: 1
            namespace CChoreoComponent {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_Value_RandomInt {
            }
            // Parent: client
            // Field count: 0
            namespace C_CSWeaponBaseShotgun {
            }
            // Parent: 
            // Field count: 0
            namespace C_RagdollPropAttached {
            }
            // Parent: 
            // Field count: 0
            namespace C_ModelPointEntity {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_PreviewPlayer {
            }
            // Parent: 
            // Field count: 0
            namespace C_RectLight {
            }
            // Parent: 
            // Field count: 0
            namespace CPathSimple {
            }
            // Parent: 
            // Field count: 0
            namespace C_FuncTrackTrain {
            }
            // Parent: 
            // Field count: 0
            namespace C_EconWearable {
            }
            // Parent: MEntityAllowsPortraitWorldSpawn
            // Field count: 0
            namespace C_EnvDecal {
            }
            // Parent: None
            // Field count: 0
            namespace EntitySpottedState_t {
            }
            // Parent: None
            // Field count: 0
            namespace fogparams_t {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponM4A1 {
            }
            // Parent: 
            // Field count: 0
            namespace C_Item {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSPetPlacement {
            }
            // Parent: xLV___
            // Field count: 0
            namespace C_Beam {
            }
            // Parent: 
            // Field count: 0
            namespace C_EnvLightProbeVolume {
            }
            // Parent: None
            // Field count: 1
            namespace CExplosionTypeData {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: 
            // Field count: 0
            namespace C_FuncConveyor {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayer_WeaponServices {
            }
            // Parent: 
            // Field count: 0
            namespace C_PhysMagnet {
            }
            // Parent: 
            // Field count: 0
            namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            }
            // Parent: client
            // Field count: 0
            namespace C_Breakable {
            }
            // Parent: server
            // Field count: 0
            namespace C_PlantedC4 {
            }
            // Parent: 
            // Field count: 0
            namespace CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: _
            // Field count: 0
            namespace CFilterName {
            }
            // Parent: 
            // Field count: 0
            namespace C_RagdollProp {
            }
            // Parent: None
            // Field count: 1
            namespace CPulse_CallInfo {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: client
            // Field count: 0
            namespace C_MapPreviewParticleSystem {
            }
            // Parent: MNotSaved
            // Field count: 0
            namespace CBaseAnimGraph {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_InlineNodeSkipSelector {
            }
            // Parent: MNotSaved
            // Field count: 0
            namespace C_LightEntity {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponM249 {
            }
            // Parent: xLV___
            // Field count: 0
            namespace C_LocalTempEntity {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponTaser {
            }
            // Parent: 
            // Field count: 0
            namespace C_PointEntity {
            }
            // Parent: client
            // Field count: 0
            namespace C_SingleplayRules {
            }
            // Parent: client
            // Field count: 0
            namespace CLogicalEntity {
            }
            // Parent: 
            // Field count: 0
            namespace C_PrecipitationBlocker {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_CounterTerroristTeamIntroCamera {
            }
            // Parent: 
            // Field count: 0
            namespace C_SoundOpvarSetPathCornerEntity {
            }
            // Parent: 
            // Field count: 0
            namespace CPlayer_WeaponServices {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponNegev {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponFiveSeven {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponSawedoff {
            }
            // Parent: 
            // Field count: 0
            namespace C_TriggerVolume {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_LimitCount {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_Step_CallExternalMethod {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponMP9 {
            }
            // Parent: 
            // Field count: 0
            namespace C_DynamicPropAlias_prop_dynamic_override {
            }
            // Parent: 
            // Field count: 0
            namespace CEnvSoundscapeTriggerable {
            }
            // Parent: 
            // Field count: 0
            namespace C_PlayerPing {
            }
            // Parent: 
            // Field count: 0
            namespace C_AK47 {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_MapPreviewCameraPathNode {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSPlayerResource {
            }
            // Parent: 
            // Field count: 0
            namespace CSkyboxReference {
            }
            // Parent: 
            // Field count: 0
            namespace C_IncendiaryGrenade {
            }
            // Parent: 
            // Field count: 0
            namespace CFilterClass {
            }
            // Parent: 
            // Field count: 0
            namespace C_PointCameraVFOV {
            }
            // Parent: MEntityAllowsPortraitWorldSpawn
            // Field count: 0
            namespace C_PointCamera {
            }
            // Parent: client
            // Field count: 0
            namespace CPathWithDynamicNodes {
            }
            // Parent: 
            // Field count: 0
            namespace CBaseFilter {
            }
            // Parent: None
            // Field count: 0
            namespace WeaponPurchaseTracker_t {
            }
            // Parent: None
            // Field count: 1
            namespace PulseObservableBoolExpression_t {
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: 
            // Field count: 0
            namespace CMapInfo {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_EndOfMatchCamera {
            }
            // Parent: 
            // Field count: 0
            namespace C_BaseGrenade {
            }
            // Parent: 
            // Field count: 0
            namespace C_PlayerSprayDecal {
            }
            // Parent: None
            // Field count: 0
            namespace CEntityIdentity {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_LimitCount__Criteria_t {
            }
            // Parent: 
            // Field count: 0
            namespace C_CS2HudModelArms {
            }
            // Parent: 
            // Field count: 0
            namespace CBasePlayerVData {
            }
            // Parent: 
            // Field count: 0
            namespace C_LightSpotEntity {
            }
            // Parent: 
            // Field count: 0
            namespace CCSGameModeRules_Deathmatch {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_CursorQueue {
            }
            // Parent: 
            // Field count: 0
            namespace CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseExecCursor {
            }
            // Parent: xLV___
            // Field count: 0
            namespace C_Sprite {
            }
            // Parent: 
            // Field count: 0
            namespace C_CsmFovOverride {
            }
            // Parent: 
            // Field count: 0
            namespace C_WeaponGlock {
            }
            // Parent: 
            // Field count: 0
            namespace C_PhysicsProp {
            }
            // Parent: 
            // Field count: 0
            namespace CFilterTeam {
            }
            // Parent: 
            // Field count: 0
            namespace CBasePlayerWeaponVData {
            }
            // Parent: 
            // Field count: 0
            namespace CInfoInteraction {
            }
            // Parent: 
            // Field count: 0
            namespace C_SmokeGrenade {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
            }
            // Parent: 
            // Field count: 0
            namespace CInfoParticleTarget {
            }
            // Parent: 
            // Field count: 0
            namespace CCSPlayer_DamageReactServices {
            }
            // Parent: 
            // Field count: 0
            namespace C_PointClientUIWorldPanel {
            }
            // Parent: 
            // Field count: 0
            namespace C_EntityFlame {
            }
            // Parent: 
            // Field count: 0
            namespace CBasePlayerController {
            }
            // Parent: 
            // Field count: 0
            namespace C_CSGO_EndOfMatchLineupEndpoint {
            }
        }
    }
}
