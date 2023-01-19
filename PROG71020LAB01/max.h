#define ARRAY_LENGTH 5 // The max length of an array
/*Function max()
* Defintion:
*	A function that takes two integers and returns the one of greater value
*
* Params:
*	int number1: an integer
*	int number2: an integer
*
* return:
*	int result: the maximum of the two parameters
*
*/
int max(int number1, int number2);

/*Function max()
* Defintion:
*	A function that takes 3 integers and returns the one of greater value
*
* Params:
*	int number1: an integer
*	int number2: an integer
*	int number3: an integer
* return:
*	int result: the maximum of the three parameters
*
*/
int max(int number1, int number2, int number3);

/*Function max()
* Defintion:
*	A function that takes an array of 5 integers, and returns the element of the greatest value;
*
* Params:
*	int numberarray[]: an array of integers
*
* return:
*	int result: the element of the greatest value in the given array
*
*/
int max(int numberarray[ARRAY_LENGTH]);

/*Function max()
* Defintion:
*	A function that takes two arrays of 5 integers, iterates through both arrays and returns the element of the greatest value;
*
* Params:
*	int array1[]: an array of integers
*	int array2[]: an array of integers
*
* return:
*	int result: the element of the greatest value in the given arrays
*
*/
int max(int array1[ARRAY_LENGTH], int array2[ARRAY_LENGTH]);