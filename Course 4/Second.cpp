#include <iostream>

using namespace std;

void printRepeatMassage(int age , int from, int to) {
	if (age >= from && age <= to)
		cout << "Age in range, Thank you\n";
	else
		cout << "Age out of range, Please try again. \n";

}
int readAge() {

	int age;
	cout << "Enter your age: ";
	cin >> age;
	return age;
}

bool validateAge(int age , int from , int to) {
	return (age >= from && age <= to);
}

int readAgeUntillBetween(int from, int to) {
	int age;

	do {

		age = readAge();
		
		printRepeatMassage(age, from, to);

	} while (!validateAge(age , from , to));
	
	return age;
}

void printResult(int age) {
	cout << "Your Age is: " << age;
}


int main() {
	int age;
	age = readAgeUntillBetween(18 , 45);
	printResult(age);
	return 0;
}