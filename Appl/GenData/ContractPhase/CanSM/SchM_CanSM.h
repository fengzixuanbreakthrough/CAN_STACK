/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  SchM_CanSM.h
 *        Config:  E:\\x{8D44}\x{6599}\\x{6C7D}\x{8F66}\AutoSAR\01.AUTOSAR\x{5B66}\x{4E60}\x{8D44}\x{6599}\S32K144 AUTOSAR\x{5DE5}\x{5177}\x{5305}\share_20230823\AUTOSAR_TOOLs\S32K144_SIP\MICROSAR\CBD1800257_D01_S32K1xx\Applications\S32K144_Start_new_IAR/"E:/\x{8D44}\x{6599}/\x{6C7D}\x{8F66}/AutoSAR/01.AUTOSAR\x{5B66}\x{4E60}\x{8D44}\x{6599}/S32K144 AUTOSAR\x{5DE5}\x{5177}\x{5305}/share_20230823/AUTOSAR_TOOLs/S32K144_SIP/MICROSAR/CBD1800257_D01_S32K1xx/Applications/S32K144_Start_new_IAR/S32K144_Start.dpa"
 *    BSW Module:  CanSM
 *  Generated at:  Thu Apr 18 23:12:16 2024
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Header of BSW Scheduler for BSW Module <CanSM> (Contract Phase)
 *********************************************************************************************************************/
#ifndef SCHM_CANSM_H
# define SCHM_CANSM_H

# ifdef __cplusplus
extern "C" {
# endif  /* __cplusplus */

# include "SchM_CanSM_Type.h"

# define CANSM_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, CANSM_CODE) CanSM_MainFunction(void); /* PRQA S 3451 */ /* MD_Rte_3451 */

# define CANSM_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) SchM_Enter_CanSM_CANSM_EXCLUSIVE_AREA_1(void);
FUNC(void, RTE_CODE) SchM_Exit_CanSM_CANSM_EXCLUSIVE_AREA_1(void);
FUNC(void, RTE_CODE) SchM_Enter_CanSM_CANSM_EXCLUSIVE_AREA_2(void);
FUNC(void, RTE_CODE) SchM_Exit_CanSM_CANSM_EXCLUSIVE_AREA_2(void);
FUNC(void, RTE_CODE) SchM_Enter_CanSM_CANSM_EXCLUSIVE_AREA_3(void);
FUNC(void, RTE_CODE) SchM_Exit_CanSM_CANSM_EXCLUSIVE_AREA_3(void);
FUNC(void, RTE_CODE) SchM_Enter_CanSM_CANSM_EXCLUSIVE_AREA_4(void);
FUNC(void, RTE_CODE) SchM_Exit_CanSM_CANSM_EXCLUSIVE_AREA_4(void);
FUNC(void, RTE_CODE) SchM_Enter_CanSM_CANSM_EXCLUSIVE_AREA_5(void);
FUNC(void, RTE_CODE) SchM_Exit_CanSM_CANSM_EXCLUSIVE_AREA_5(void);
FUNC(void, RTE_CODE) SchM_Enter_CanSM_CANSM_EXCLUSIVE_AREA_6(void);
FUNC(void, RTE_CODE) SchM_Exit_CanSM_CANSM_EXCLUSIVE_AREA_6(void);

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif  /* __cplusplus */

#endif /* SCHM_CANSM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
