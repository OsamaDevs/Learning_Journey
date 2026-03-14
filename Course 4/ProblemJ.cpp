#include <iostream>
using namespace std;
void readInputs(long& A, long& B) {
    cin >> A >> B;
}

bool checkMultiples(long A, long B) {
    if (A % B == 0 || B % A == 0)
        return true;
    else
        return false;
}

void printResult(bool checkMultiples) {
    if (checkMultiples)
        cout << "Multiples";
    else
        cout << "No Multiples";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    long A, B;

    readInputs(A, B);
    printResult(checkMultiples(A, B));

    return 0;
}
