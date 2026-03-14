# include <iostream>
using namespace std;

void readN(long long& N) {
	do
	{
		cout << "Enter N: ";
		cin >> N;
		if (N < 0)
			cout << "Negative, Please Re-";

	} while (N < 0);

}

long long multiplyFromNto1(long long N) {
	long long product = 1;

	for (long long i = N; i >= 1; i--) {
		product *= i;
	}
	return product;
}
void printResult(long long N,long long product) {
	cout << "Product from " << N << " to 1 is: " << product << '\n';
}
int main() {
	long long N, product;
	readN(N);
	product = multiplyFromNto1(N);
	printResult(N, product);

	return 0;
}