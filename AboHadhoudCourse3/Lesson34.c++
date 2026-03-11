# include <iostream>
using namespace std;
/*
void addingTwoNumbers(){

    int num1 , num2;
    cout<< "Enter The First Number: ";
    cin>> num1;

    cout<< "Enter The Second Number: ";
    cin>> num2;

    int sum = num1 + num2;

    cout<< "*****************\n";

    cout<< "Sum is: " << sum << endl;

}

int main(){
    addingTwoNumbers();

    return 0;

}*/

int addingTwoNumbers(){
    int num1 , num2;
    cout<< "Enter The First Number: ";
    cin>> num1;

    cout<< "Enter The Second Number: ";
    cin>> num2;

    int sum = num1 + num2;

    return sum;
}

int main(){
    
   int sum = addingTwoNumbers();
   cout<< "Sum is: " << sum << endl;
    
    return 0;
}