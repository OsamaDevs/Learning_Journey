#include <iostream>
#include <vector>

using namespace std;
void readHeightBase(float &height , float &base)
{
	cout << "Enter Height of the Triangle: ";
	cin >> height;

	cout << "Enter Base Length: ";
	cin >> base;
}

float calcArea( const float &height , const float &base) {
	return (0.5 * base) * height;
}

void print(float area) {
	cout << "Area of triangle is: " << area << endl;

}
 
int main() {
	float height, baseLength;

	readHeightBase(height, baseLength);

	print(calcArea(height, baseLength));


	return 0;
}