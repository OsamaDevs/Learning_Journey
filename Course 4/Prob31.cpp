# include <iostream>
# include <cmath>
using namespace std;

void readN(int& N) {
	cout << "Enter N: ";
	cin >> N;

}
void calcPowers(int N , int &pow2 ,int &pow3 , int &pow4) {
	pow2 = pow(N, 2);
	pow3 = pow(N, 3);
	pow4 = pow(N, 4);
}
void printResults(int N, int pow2, int pow3, int pow4) {
	cout << N << '^' << 2 << " = " << pow2 << '\n';
	cout << N << '^' << 3 << " = " << pow3 << '\n';
	cout << N << '^' << 4 << " = " << pow4 << '\n';
}
int main() {
	int N, pow2, pow3, pow4;
	readN(N);

	calcPowers(N, pow2, pow3, pow4);

	printResults(N, pow2, pow3, pow4);

	return 0;
}