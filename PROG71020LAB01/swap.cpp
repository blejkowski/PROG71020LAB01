/* PROG71020 LAB1 W23 - GROUP 4 - swap.cpp
*
* This file contains the definitions of the functions related to the swap module.
*
*/
typedef struct Location {
	double longitude;
	double latitude;
}Location;

void swap(int* number1, int* number2) {
	int number3 = *number1;
	*number1 = *number2;
	*number2 = number3;
}
void swap(int& number1, int& number2) {
	int number3 = number1;
	number1 = number2;
	number2 = number3;
}

void swap(Location* loc1, Location* loc2) {
	Location temp = *loc1;
	loc1->latitude = loc2->latitude;
	loc1->longitude = loc2->longitude;
	loc2->latitude = temp.latitude;
	loc2->longitude = temp.longitude;
}

void swap(Location& loc1, Location& loc2) {
	Location temp = loc1;
	loc1.latitude = loc2.latitude;
	loc1.longitude = loc2.longitude;
	loc2.latitude = temp.latitude;
	loc2.longitude = temp.longitude;
}
