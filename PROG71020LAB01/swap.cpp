
typedef struct Location {
	double longitude;
	double latitude;
}Location;

void swap(int* number1, int* number2) {

}
void swap(int& number1, int& number2) {

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
