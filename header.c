/*
 * header.c
 *
 *  Created on: Apr 10, 2023
 *      Author: hingstonw
 */

#include "main.h"

#define DELAY 1000000

#define ROW_PORT GPIOE
#define ROW0 GPIO_PIN_7
#define ROW1 GPIO_PIN_8
#define ROW2 GPIO_PIN_9
#define ROW3 GPIO_PIN_10

#define COL_PORT GPIOE
#define COL0 GPIO_PIN_11
#define COL1 GPIO_PIN_12
#define COL2 GPIO_PIN_13

void seven_seg(unsigned char value){
	if(value == 10){  // 10 input turns all segments off
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);  // A
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, 1); // B
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, 1); // C
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, 1); // D
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_11, 1);  // E
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, 1);  // F
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, 1);    // G
	}
	if(value == 0){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);  // A
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, 0); // B
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, 0); // C
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, 0); // D
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_11, 0);  // E
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, 0);  // F
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, 1);    // G
	}
	if(value == 1){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);  // A
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, 0); // B
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, 0); // C
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, 1); // D
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_11, 1);  // E
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, 1);  // F
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, 1);    // G

	}
	if(value == 2){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);  // A
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, 0); // B
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, 1); // C
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, 0); // D
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_11, 0);  // E
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, 1);  // F
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, 0);    // G

	}
	if(value == 3){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);  // A
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, 0); // B
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, 0); // C
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, 0); // D
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_11, 1);  // E
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, 1);  // F
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, 0);    // G
	}
	if(value == 4){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);  // A
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, 0); // B
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, 0); // C
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, 1); // D
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_11, 1);  // E
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, 0);  // F
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, 0);    // G
	}
	if(value == 5){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);  // A
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, 1); // B
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, 0); // C
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, 0); // D
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_11, 1);  // E
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, 0);  // F
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, 0);    // G
	}
	if(value == 6){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);  // A
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, 1); // B
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, 0); // C
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, 0); // D
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_11, 0);  // E
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, 0);  // F
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, 0);
	}
	if(value == 7){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);  // A
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, 0); // B
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, 0); // C
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, 1); // D
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_11, 1);  // E
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, 1);  // F
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, 1);
	}
	if(value == 8){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);  // A
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, 0); // B
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, 0); // C
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, 0); // D
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_11, 0);  // E
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, 0);  // F
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, 0);
	}
	if(value == 9){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);  // A
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, 0); // B
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, 0); // C
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, 1); // D
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_11, 1);  // E
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, 0);  // F
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, 0);
	}
}
// --------------------------------------------------------------------------------------- //
// --------------------------------------------------------------------------------------- //
// --------------------------------------------------------------------------------------- //
// --------------------------------------------------------------------------------------- //
int result(int rand, int guess){
	if(rand > guess){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);  // red
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_SET);  // green
	}else if(rand < guess){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET);  // red
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_RESET);  // green
	}else{
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET);  // red
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_SET);  // green

	}
}
// --------------------------------------------------------------------------------------- //
// --------------------------------------------------------------------------------------- //
// --------------------------------------------------------------------------------------- //
// --------------------------------------------------------------------------------------- //

int keypad(int light){
while(1){

	if(light == 1){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
	}
	if(light == 2){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);
	}
	if(light == 3){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET);
	}
	if(light == 4){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);
	}
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$//

//Row 1
	  HAL_GPIO_WritePin(ROW_PORT, ROW0, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(ROW_PORT, ROW1, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(ROW_PORT, ROW2, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(ROW_PORT, ROW3, GPIO_PIN_RESET);

	  //1
	  if(HAL_GPIO_ReadPin(COL_PORT, COL0) == GPIO_PIN_SET){
		while(HAL_GPIO_ReadPin(COL_PORT, COL0) == GPIO_PIN_SET);
		  return 1;
		  break;
	  }

	  //2
	  if(HAL_GPIO_ReadPin(COL_PORT, COL1) == GPIO_PIN_SET){
	  while(HAL_GPIO_ReadPin(COL_PORT, COL1) == GPIO_PIN_SET);
		 return 2;
		 break;
	  }

	  //3
	  if(HAL_GPIO_ReadPin(COL_PORT, COL2) == GPIO_PIN_SET){
	  while(HAL_GPIO_ReadPin(COL_PORT, COL2) == GPIO_PIN_SET);
		  return 3;
		  break;
	  }

	  //Row 2
	  HAL_GPIO_WritePin(ROW_PORT, ROW0, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(ROW_PORT, ROW1, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(ROW_PORT, ROW2, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(ROW_PORT, ROW3, GPIO_PIN_RESET);

	  //4
	  if(HAL_GPIO_ReadPin(COL_PORT, COL0) == GPIO_PIN_SET){
	  while(HAL_GPIO_ReadPin(COL_PORT, COL0) == GPIO_PIN_SET);
		  return 4;
		  break;
	  }

	  //5
	  if(HAL_GPIO_ReadPin(COL_PORT, COL1) == GPIO_PIN_SET){
	  while(HAL_GPIO_ReadPin(COL_PORT, COL1) == GPIO_PIN_SET);
		  return 5;
		  break;
	  }

	  //6
	  if(HAL_GPIO_ReadPin(COL_PORT, COL2) == GPIO_PIN_SET){
	  while(HAL_GPIO_ReadPin(COL_PORT, COL2) == GPIO_PIN_SET);
		  return 6;
		  break;
	  }

	  //Row 3
	  HAL_GPIO_WritePin(ROW_PORT, ROW0, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(ROW_PORT, ROW1, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(ROW_PORT, ROW2, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(ROW_PORT, ROW3, GPIO_PIN_RESET);

	  //7
	  if(HAL_GPIO_ReadPin(COL_PORT, COL0) == GPIO_PIN_SET){
		  while(HAL_GPIO_ReadPin(COL_PORT, COL0) == GPIO_PIN_SET);
			  return 7;
			  break;
		  }

	  //8
	  if(HAL_GPIO_ReadPin(COL_PORT, COL1) == GPIO_PIN_SET){
	  while(HAL_GPIO_ReadPin(COL_PORT, COL1) == GPIO_PIN_SET);
			  return 8;
			  break;
		  }

	  //9
	  if(HAL_GPIO_ReadPin(COL_PORT, COL2) == GPIO_PIN_SET){
	  while(HAL_GPIO_ReadPin(COL_PORT, COL2) == GPIO_PIN_SET);
			 return 9;
			 break;
		  }

	  //ROW 4
		HAL_GPIO_WritePin(ROW_PORT, ROW0, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW_PORT, ROW1, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW_PORT, ROW2, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW_PORT, ROW3, GPIO_PIN_SET);
		if(HAL_GPIO_ReadPin(COL_PORT, COL0) == GPIO_PIN_SET){
		  while(HAL_GPIO_ReadPin(COL_PORT, COL0) == GPIO_PIN_SET);
		  return 88;
		  break;
		}
		if(HAL_GPIO_ReadPin(COL_PORT, COL1) == GPIO_PIN_SET){
		while(HAL_GPIO_ReadPin(COL_PORT, COL1) == GPIO_PIN_SET);
			return 0;
			break;
		}
		if(HAL_GPIO_ReadPin(COL_PORT, COL2) == GPIO_PIN_SET){
		  while(HAL_GPIO_ReadPin(COL_PORT, COL2) == GPIO_PIN_SET);
		  }
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$//
		if(light == 1){
			HAL_Delay(50);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);
			HAL_Delay(50);

		}
		if(light == 2){
			HAL_Delay(50);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);
			HAL_Delay(50);

		}
		if(light == 3){
			HAL_Delay(50);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);
			HAL_Delay(50);

		}
		if(light == 4){
			HAL_Delay(50);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET);
			HAL_Delay(50);

		}
	}
}

// --------------------------------------------------------------------------------------- //
// --------------------------------------------------------------------------------------- //
// --------------------------------------------------------------------------------------- //
// --------------------------------------------------------------------------------------- //

void start(int win_lose){
	if(win_lose == 2){
		HAL_Delay(3000);
	}
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);  // green
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET); // orange
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET); // red
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET); // blue
	if((win_lose == 1)||(win_lose == 2)){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);  // red
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_SET);  // green
	}
	HAL_Delay(300);
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);  // green
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET); // orange
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET); // red
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET); // blue
	if((win_lose == 1)||(win_lose == 2)){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET);  // red
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_RESET);  // green
	}
	HAL_Delay(300);
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);  // green
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET); // orange
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET); // red
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET); // blue
	if((win_lose == 1)||(win_lose == 2)){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);  // red
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_SET);  // green
	}
	HAL_Delay(300);
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);  // green
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET); // orange
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET); // red
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET); // blue
	if((win_lose == 1)||(win_lose == 2)){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET);  // red
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_RESET);  // green
	}
	HAL_Delay(300);
	if(win_lose == 1){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);  // red
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_SET);  // green

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);  // green
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET); // orange
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET); // red
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET); // blue
		HAL_Delay(300);
	}
	if(win_lose == 1){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET);  // red
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_RESET);  // green

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);  // green
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET); // orange
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET); // red
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET); // blue
		HAL_Delay(300);
	}
	if(win_lose == 1){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);  // red
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_SET);  // green

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);  // green
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET); // orange
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET); // red
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET); // blue
		HAL_Delay(300);
	}
	if(win_lose == 1){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET);  // red
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_RESET);  // green

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);  // green
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET); // orange
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET); // red
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET); // blue
		HAL_Delay(300);
	}
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);  // red
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_RESET);  // green

	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);  // green
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET); // orange
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET); // red
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET); // blue


}

// --------------------------------------------------------------------------------------- //
// --------------------------------------------------------------------------------------- //
// --------------------------------------------------------------------------------------- //


int lights(int status[]){
	if(status[0] == 1){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);  // green
    }
	if(status[1] == 1){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);  // orange
	}
	if(status[2] == 1){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET);  // red
	}
	if(status[3] == 1){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);  // blue
	}



	if(status[0] == 0){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);  // green
	}
	if(status[1] == 0){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);  // orange
	}
	if(status[2] == 0){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);  // red
	}
	if(status[3] == 0){
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET);  // blue
	}
}




