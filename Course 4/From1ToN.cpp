# include <iostream>

using namespace std;
void readN(int& N) {
	cout << "Enter N: ";
	cin >> N;
}
void printFromNto1UsingFor(int N) {
	for (int i = N; i >= 1; i--)
		cout << i << " ";
	cout << "\n";
}

void printFromNTo1UsingWhile(int N) {
	int i = N;
	while (i >= 1) {
		cout << i << " ";
		i--;
		
	}
	cout << "\n";
}
void printFromNto1UsingDoWhile(int N) {
	int i = N;
	 do
	 {
		cout << i << " ";
		i--;
	 } while (i >= 1);
	 cout << "\n";
}
int main() {
	int N;
	readN(N);
	printFromNto1UsingFor(N);
	printFromNTo1UsingWhile(N);
	printFromNto1UsingDoWhile(N);

}