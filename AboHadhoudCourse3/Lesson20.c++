#include <iostream>
using namespace std;

/*
int main(){
    int num1 , num2;

    cout<< "Enter The First Number: ";
    cin>> num1;

    cout<< "Enter The Second Number: ";
    cin>> num2;

    cout<< endl;

    cout<< num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout<< num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout<< num1 << " X " << num2 << " = " << num1 * num2 << endl;
    cout<< num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout<< num1 << " % " << num2 << " = " << num1 % num2 << endl;


    return 0;
} */

// #7
/*
int main(){
    float number;
    cout<< "Enter a number: ";
    cin >> number;
    float halfNumber = number / 2;

    cout<<  "Half of " << number << " is " << halfNumber << endl;
    return 0;
}
*/

// prob 9
/*
int main(){
   int num1;
   int num2;
   int num3;

    cout<< "Enter The First Number: ";
    cin>> num1;

    cout<< "Enter The Second Number: ";
    cin>> num2;

    cout<< "Enter The Third Number: ";
    cin>> num3;
    int addition = num1 + num2 + num3;

    cout << num1 << " + " << num2 << " + " << num3 << " = " << addition << endl;
     
    return 0;
}
*/

// prob 10
/*
int main(){
   int mark1;
   int mark2;
   int mark3;

    cout<< "Enter The First Mark: ";
    cin>> mark1;

    cout<< "Enter The Second Mark: ";
    cin>> mark2;

    cout<< "Enter The Third Mark: ";
    cin>> mark3;
    float avg = (mark1 + mark2 + mark3)/3 ;

    cout <<"Average = " << avg << endl;
     
    return 0;
}
*/

// prob 14: 

/*
int main(){
    int num1, num2, temp;

    cout<< "Swapping two numbers\n\n";

    cout<< "Enter The First Number: ";
    cin>> num1;

    cout<< "Enter The Second Number: ";
    cin>> num2;

    cout<< "Before Swapping: " << "Num1= " << num1 << " Num2= " << num2 << endl << endl;
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<< "After Swapping: " << "Num1= " << num1 << " Num2= " << num2 << endl;


    
    return 0;
}
    */

    /*
int main(){

    int hieght, width, area;

    cout<< "Area of a rectangle\n\n";

    cout<< "Enter the hieght of the rectangle: ";
    cin>> hieght;

    cout<< "Enter the width of the rectangle: ";
    cin>> width;

    area = hieght * width;


    cout<< "Area of the rectangle = " << area << endl;


    
    return 0;
}
    */

/*
int main(){
    int num1, num2, temp;

    cout<< "Using relational operators\n\n";

    cout<< "Enter The First Number: ";
    cin>> num1;

    cout<< "Enter The Second Number: ";
    cin>> num2;
    cout << "\n";
    



    cout<< num1 << " == " << num2 << " ? = " << (num1 == num2)<< endl;
    cout<< num1 << " != " << num2 << " ? = " << (num1 != num2)<< endl;
    
    cout<< num1 << " < " << num2 << " ? = " << (num1 < num2)<< endl;
    cout<< num1 << " > " << num2 << " ? = " << (num1 > num2)<< endl;

    cout<< num1 << " >= " << num2 << " ? = " << (num1 >= num2)<< endl;
    cout<< num1 << " <= " << num2 << " ? = " << (num1 <= num2)<< endl;




return 0; 
} */

# include <cmath>

int main(){
    cout<< round(sqrt(50));
    return 0;
}