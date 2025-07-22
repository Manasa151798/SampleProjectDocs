/*
 * cruise_control_r13_v0.h
 *
 * Real-Time Workshop code generation for Simulink model "cruise_control_r13_v0.mdl".
 *
 * Model Version                        : 1.90
 * Real-Time Workshop file version      : 5.1 $Date: 2003/08/08 18:37:24 $
 * Real-Time Workshop file generated on : Tue Jul 26 15:25:15 2005
 * TLC version                          : 5.1 (Aug  8 2003)
 * C source code generated on           : Tue Jul 26 15:25:15 2005
 */

#ifndef _RTW_HEADER_cruise_control_r13_v0_h_
# define _RTW_HEADER_cruise_control_r13_v0_h_

#include <limits.h>
#include "tmwtypes.h"
#ifndef _cruise_control_r13_v0_COMMON_INCLUDES_
# define _cruise_control_r13_v0_COMMON_INCLUDES_
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "simstruc_types.h"
#include "rt_logging.h"

#endif                                  /* _cruise_control_r13_v0_COMMON_INCLUDES_ */

#include "cruise_control_r13_v0_types.h"

#define MODEL_NAME                      cruise_control_r13_v0
#define NSAMPLE_TIMES                   (1)                      /* Number of sample times */
#define NINPUTS                         (12)                     /* Number of model inputs */
#define NOUTPUTS                        (4)                      /* Number of model outputs */
#define NBLOCKIO                        (6)                      /* Number of data output port signals */
#define NUM_ZC_EVENTS                   (0)                      /* Number of zero-crossing events */

#ifndef NCSTATES
# define NCSTATES (0)                   /* Number of continuous states */
#elif NCSTATES != 0
# error Invalid specification of NCSTATES defined in compiler command
#endif

/* Intrinsic types */
#ifndef POINTER_T
# define POINTER_T
typedef void * pointer_T;
#endif

/* Block signals (auto storage) */
typedef struct _BlockIO {
  real_T cc_engine;                     /* '<S3>/cc_engine_state' */
  real_T valid_speed;                   /* '<S3>/control_speed_limit' */
  real_T cc_state;                      /* '<S3>/define_cc_state' */
  real_T acc;                           /* '<S1>/cc_accelerate' */
  real_T Switch1_a;                     /* '<S2>/Switch1' */
  real_T Sum_a;                         /* '<S1>/Sum' */
} BlockIO;

/* Block states (auto storage) for system: '<Root>' */
typedef struct D_Work_tag {
  real_T Unit_Delay_DSTATE;             /* <S3>/Unit Delay */
  CSm0_c1_cruise_control_r13_v0_C SFunction_d_ChartInstance; /* <S4>/ SFunction  */
  CSm0_c2_cruise_control_r13_v0_C SFunction_a_ChartInstance; /* <S6>/ SFunction  */
  CSm0_c3_cruise_control_r13_v0_C SFunction_b_ChartInstance; /* <S7>/ SFunction  */
  CSm0_c4_cruise_control_r13_v0_C SFunction_c_ChartInstance; /* <S8>/ SFunction  */
} D_Work;

/* Parameters (auto storage) */
struct _Parameters {
  real_T Unit_Delay_X0;                 /* Expression: false
                                         * '<S3>/Unit Delay'
                                         */
  real_T Constant_a_Value;              /* Expression: 0
                                         * '<S2>/Constant'
                                         */
  real_T Switch_a_Threshold;            /* Expression: 1
                                         * '<S2>/Switch'
                                         */
  real_T Saturation_UpperSat;           /* Expression: 90.0
                                         * '<S2>/Saturation'
                                         */
  real_T Saturation_LowerSat;           /* Expression: 30.0
                                         * '<S2>/Saturation'
                                         */
  real_T Constant_b_Value;              /* Expression: 2
                                         * '<S1>/Constant'
                                         */
  real_T Switch_b_Threshold;            /* Expression: 0
                                         * '<S1>/Switch'
                                         */
  real_T Constant1_a_Value;             /* Expression: 0.0
                                         * '<S1>/Constant1'
                                         */
  real_T Constant_c_Value;              /* Expression: 0.0
                                         * '<S5>/Constant'
                                         */
  real_T Constant2_Value;               /* Expression: -1.0
                                         * '<S5>/Constant2'
                                         */
  real_T Switch_c_Threshold;            /* Expression: 1
                                         * '<S5>/Switch'
                                         */
  real_T Constant1_b_Value;             /* Expression: 1.0
                                         * '<S5>/Constant1'
                                         */
  real_T Switch1_b_Threshold;           /* Expression: 1
                                         * '<S5>/Switch1'
                                         */
  real_T Switch1_a_Threshold;           /* Expression: 1
                                         * '<S2>/Switch1'
                                         */
};

/* External inputs (root inport signals with auto storage) */
typedef struct _ExternalInputs_tag {
  real_T cc_set;                        /* '<Root>/cc_set' */
  real_T cc_actions[2];                 /* '<Root>/cc_actions' */
  real_T cc_speeds[2];                  /* '<Root>/cc_speeds' */
  real_T cc_on_off[2];                  /* '<Root>/cc_on_off' */
  real_T cc_resume;                     /* '<Root>/cc_resume' */
  real_T car_engine;                    /* '<Root>/car_engine' */
  real_T car_orders[2];                 /* '<Root>/car_orders' */
  real_T car_speed;                     /* '<Root>/car_speed' */
} ExternalInputs;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct _ExternalOutputs_tag {
  real_T cc_state;                      /* '<Root>/cc_state' */
  real_T valid_speed;                   /* '<Root>/valid_speed' */
  real_T accelerate_order;              /* '<Root>/accelerate_order' */
  real_T cc_speed;                      /* '<Root>/cc_speed' */
} ExternalOutputs;

/* Real-time Model Data Structure */
struct _rtModel_cruise_control_r13_v0_Tag {
  const char *path;
  const char *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo *solverInfo;
  void *sfcnInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    real_T *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    real_T *discStates;
    real_T *derivs;
    real_T *nonsampledZCs;
    void *inputs;
    void *outputs;
    boolean_T contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T *t;
    time_T tStart;
    time_T tFinal;
    time_T stepSize;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
  } Timing;

  /*
   * Work:
   * The following substructure contains information regarding
   * the work vectors in the model.
   */
  struct {
    struct _ssDWorkRecord *dwork;
  } Work;
};

/* Simulation structure */
extern rtModel_cruise_control_r13_v0 *const rtM_cruise_control_r13_v0;

/* Macros for accessing real-time model data structure  */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm) ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val) ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetCTaskTicks
# define rtmGetCTaskTicks(rtm) ((rtm)->Timing.cTaskTicks)
#endif

#ifndef rtmSetCTaskTicks
# define rtmSetCTaskTicks(rtm, val) ((rtm)->Timing.cTaskTicks = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm) ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val) ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetClockTick
# define rtmGetClockTick(rtm) ((rtm)->Timing.clockTick)
#endif

#ifndef rtmSetClockTick
# define rtmSetClockTick(rtm, val) ((rtm)->Timing.clockTick = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm) ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val) ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm) ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm) ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val) ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm) ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val) ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm) ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetDiscStates
# define rtmGetDiscStates(rtm) ((rtm)->ModelData.discStates)
#endif

#ifndef rtmSetDiscStates
# define rtmSetDiscStates(rtm, val) ((rtm)->ModelData.discStates = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm) ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm) ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm) ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm) ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val) ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNTaskTicks
# define rtmGetNTaskTicks(rtm) ((rtm)->Timing.nTaskTicks)
#endif

#ifndef rtmSetNTaskTicks
# define rtmSetNTaskTicks(rtm, val) ((rtm)->Timing.nTaskTicks = (val))
#endif

#ifndef rtmGetNonsampledZCs
# define rtmGetNonsampledZCs(rtm) ((rtm)->ModelData.nonsampledZCs)
#endif

#ifndef rtmSetNonsampledZCs
# define rtmSetNonsampledZCs(rtm, val) ((rtm)->ModelData.nonsampledZCs = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm) ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val) ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm) ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm) ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val) ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm) ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm) ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val) ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm) ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm) ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm) ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm) ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm) ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm) ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm) ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val) ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm) ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val) ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm) ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm) ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val) ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm) ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val) ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm) ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm) ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm) ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm) ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val) ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ((rtm)->modelMethodsInfo)
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ((rtm)->modelMethodsInfo = (val))
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm) ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val) ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm) ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm) ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm) ((rtm)->Work.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val) ((rtm)->Work.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm) ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val) ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm) ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val) ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm) ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm) ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val) ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm) ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val) ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm) ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val) ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm) ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val) ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm) ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm) ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val) ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTaskTimes
# define rtmGetTaskTimes(rtm) ((rtm)->Timing.taskTimes)
#endif

#ifndef rtmSetTaskTimes
# define rtmSetTaskTimes(rtm, val) ((rtm)->Timing.taskTimes = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm) ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSetTimeOfLastOutput
# define rtmSetTimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm) ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val) ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm) ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val) ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm) ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val) ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm) ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val) ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm) ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm) ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val) ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx) ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx) ((rtm)->Work.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val) ((rtm)->Work.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx) ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx) ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx) ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTime
# define rtmGetVarNextHitTime(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTime
# define rtmSetVarNextHitTime(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) (tid) == 0
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm) (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val) (rtm)->errorStatus = ((val))
#endif

#ifndef rtmIsFirstInitCond
# define rtmIsFirstInitCond(rtm) rtmGetT((rtm)) == (rtmGetTStart((rtm)))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm) ((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm) ((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) (rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmIsSpecialSampleHit
# define rtmIsSpecialSampleHit(rtm, sti, prom_sti, tid) (rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm) (rtm)->Timing.stopRequestedFlag
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) (rtm)->Timing.stopRequestedFlag = ((val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm) rtmGetTPtr((rtm))[0]
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val) rtmGetTPtr((rtm))[0] = ((val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm) (rtm)->Timing.t
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val) (rtm)->Timing.t = ((val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm) (rtm)->Timing.tStart
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val) (rtm)->Timing.tStart = ((val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti) rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) rtmGetTPtr((rtm))[sti] = ((val))
#endif

/* Definition for use in the target main file */
#define cruise_control_r13_v0_rtModel   rtModel_cruise_control_r13_v0

extern Parameters rtP;                  /* parameters */

/* 
 * The generated code includes comments that allow you to trace directly 
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : cruise_control_r13_v0
 * '<S1>'   : cruise_control_r13_v0/calculate_throttle
 * '<S2>'   : cruise_control_r13_v0/cruise_control_speed_setting
 * '<S3>'   : cruise_control_r13_v0/cruise_control_state
 * '<S4>'   : cruise_control_r13_v0/calculate_throttle/cc_accelerate
 * '<S5>'   : cruise_control_r13_v0/cruise_control_speed_setting/speed_action
 * '<S6>'   : cruise_control_r13_v0/cruise_control_state/cc_engine_state
 * '<S7>'   : cruise_control_r13_v0/cruise_control_state/control_speed_limit
 * '<S8>'   : cruise_control_r13_v0/cruise_control_state/define_cc_state
 */

#endif                                  /* _RTW_HEADER_cruise_control_r13_v0_h_ */
