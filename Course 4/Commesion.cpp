# include <iostream>
using namespace std;

void readSales(double &sales) {
	cout << "Enter total sales: ";
	cin >> sales;
}

double commetionPercintage(double &sales) {
	if (sales >= 1000000)
		return 0.01;
	else if (sales >= 500000)
		return 0.02;
	else if (sales >= 100000)
		return 0.03;
	else if (sales >= 50000)
		return 0.05;
	else
		return 0;
	
}

double calculateCommetion(double sales, double percintage) {
	return (sales * percintage);
}

void display(double sales, double percentage, double commession) {
	cout << "Total sales: " << sales << " Percentage: " << percentage * 100 << "% " << "Commession: " << commession << " $\n";
}

int main() {
	double sales, commesionPercintage, commesion;
	readSales(sales);
	commesionPercintage = commetionPercintage(sales);
	commesion = calculateCommetion(sales, commesionPercintage);
	display(sales , commesionPercintage , commesion);

}