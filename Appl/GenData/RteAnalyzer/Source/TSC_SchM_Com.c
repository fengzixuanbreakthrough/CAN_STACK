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
 *          File:  TSC_SchM_Com.c
 *        Config:  S32K144_Start.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "SchM_Com.h"
#include "TSC_SchM_Com.h"
void TSC_Com_SchM_Enter_Com_COM_EXCLUSIVE_AREA_BOTH(void)
{
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_BOTH();
}
void TSC_Com_SchM_Exit_Com_COM_EXCLUSIVE_AREA_BOTH(void)
{
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_BOTH();
}
void TSC_Com_SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX(void)
{
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
}
void TSC_Com_SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX(void)
{
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
}
void TSC_Com_SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX(void)
{
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();
}
void TSC_Com_SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX(void)
{
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
}
