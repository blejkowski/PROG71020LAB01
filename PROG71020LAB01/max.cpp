/* PROG71020 LAB1 W23 - GROUP 4 - max.cpp
*
* This file contains the definitions of the functions related to the max module.
*
*/

#define ARRAY_LENGTH 5

int max(int number1, int number2) {
	int result = number1 > number2 ? number1 : number2;
	return result;
}

int max(int number1, int number2, int number3) {
	int result = number1;
	if (result < number2)
		result = number2;
	if (result < number3)
		result = number3;
	return result;
}

int max(int numberarray[ARRAY_LENGTH]) {
	int result = numberarray[0];
	for (int i = 1; i < ARRAY_LENGTH; i++) {
		if (numberarray[i] > result)
			result = numberarray[i];
	}
	return result;
}

int max(int array1[ARRAY_LENGTH], int array2[ARRAY_LENGTH]) {
	int result = array1[0];
	for (int i = 1; i < ARRAY_LENGTH; i++) {
		if (array1[i] > result)
			result = array1[i];
	}

	for (int i = 0; i < ARRAY_LENGTH; i++) {
		if (array2[i] > result)
			result = array2[i];
	}

	return result;
}