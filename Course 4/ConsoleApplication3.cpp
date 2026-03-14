#include <cmath>
# include <iostream>
using namespace std;

int main() {
    float A , B;
    cin >> A >> B;
    float result = A / B;

    cout << "floor " << A << " / " << B << " = " << floor(result) << "\n";
    cout << "ceil " << A << " / " << B << " = " << ceil(result) << "\n";
    cout << "round " << A << " / " << B << " = " << round(result);

    return 0;
}
