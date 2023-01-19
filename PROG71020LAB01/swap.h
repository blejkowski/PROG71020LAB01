typedef struct Location {
	double longitude;
	double latitude;
}Location;

void swap(int* number1, int* number2);
void swap(int& number1, int& number2);
/*Function swap()
*
* Defintion:
*	A function that takes two pointers to structs of type location, and swaps the values between them.
*
* Params:
*	loc1: a struct of location
*	loc2: a struct of location
*
* return: void
*
*/
void swap(Location* loc1, Location* loc2);
/*Function swap()
*
* Defintion:
*	A function that takes two references to structs of type location, and swaps the values between them.
*
* Params:
*	Location loc1: a struct of location
*	Location loc2: a struct of location
*
* return: void
*
*/

void swap(Location& loc1, Location& loc2);