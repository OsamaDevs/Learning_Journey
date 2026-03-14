#include<iostream>
using namespace std;

int readN() {
	int N;

	cout << "Enter N: ";
	cin >> N;

	return N;
}

bool isOdd(int num){
	return (!(num % 2 == 0));
}

int returnOddIgnoreEven(int num) {

	if (isOdd(num))
		return num;
	else
		return 0;
}


int addOddUsingFor(int N) {
	int sum = 0;

	for (int i = 0; i <= N; i++)
		sum += returnOddIgnoreEven(i);
	

	return sum;
}

int addOddUsingWhile(int N) {
	int sum = 0;
	int i = 0;

		while(i <= N) 
		{
			sum += returnOddIgnoreEven(i);
			i++;
		}

		return sum;
}

int addOddUsingDoWhile(int N) {
	int sum = 0;
	int i = 0;

	do
	{
		sum += returnOddIgnoreEven(i);
		i++;
	}while (i <= N);

	return sum;
}

void printResults(int sumFor, int sumWhile, int sumDoWhile) {
	cout << "Sum using For: " << sumFor << "\n";
	cout << "Sum using While: " << sumWhile << "\n";
	cout << "Sum using Do While: " << sumDoWhile << "\n";
}

int main() {
	cout << "Printing odds from 1 to N"<< endl;
	int N = readN();
	int sumFor = addOddUsingFor(N);
	int sumWhile = addOddUsingWhile(N);
	int sumDoWhile= addOddUsingDoWhile(N);

	printResults(sumFor, sumWhile, sumDoWhile);

}