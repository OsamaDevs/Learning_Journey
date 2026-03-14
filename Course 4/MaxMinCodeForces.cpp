# include <iostream>

using namespace std;

int main() {
	int A, B, C , min , max;
	cin >> A >> B >> C;

	if (A > B) 
	{
		if (A > C)
			max = A;
		else
			max = C;
	}
	else {
		if (B > C)
			max = B;
		else
			max = C;
	}

	if (A < B)
	{
		if (A < C)
			min = A;
		else
			min = C;
	}
	else {
		if (B < C)
			min = B;
		else
			min = C;
	}

	cout << min << " " << max;

}