/*
 * myLib.h
 *
 *  Created on: Oct 7, 2023
 *      Author: PCPV
 */

#ifndef INC_MYLIB_H_
#define INC_MYLIB_H_
#define GPIO_PIN_(i) ((uint16_t)(1 << (i)))

  void display7SEG1(uint8_t num) {
  	  switch(num) {
  	  	  case 0:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, SET);
  	  		break;
  		  case 1:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, SET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, SET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, SET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, SET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, SET);
  	  		break;
  		  case 2:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, SET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, SET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  		break;
  		  case 3:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, SET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, SET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  		break;
  		  case 4:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, SET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, SET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, SET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  		break;
  		  case 5:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, SET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, SET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  		break;
  		  case 6:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, SET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  		break;
  		  case 7:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, SET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, SET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, SET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, SET);
  	  		break;
  		  case 8:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  		break;
  		  case 9:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, SET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  		break;
  		  default:
  			HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, SET);
  		    HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  		    HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  		  	HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, SET);
  		  	HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, RESET);
  		  	HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, RESET);
  		  	HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  }
    }


#endif /* INC_MYLIB_H_ */
