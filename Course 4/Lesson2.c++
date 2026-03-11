# include <iostream>
# include <string>
using namespace std;

// problem 6
/*
struct stInfo {
    string firstName;
    string lastName;
};

stInfo readName(){
    stInfo person;
    cout<< "Please Enter your first name: ";
    cin>> person.firstName;

    cout<< "Please Enter your last name: ";
    cin>> person.lastName;

    return person;
}

string fullName(stInfo person , bool isReveresed){

    if(isReveresed)
        return person.lastName +" " + person.firstName;
    else
        return person.firstName +" " + person.lastName;
}

void printName(string Name){

    cout<< "Name is: " + Name << endl;
    
}
int main(){
    printName(fullName(readName(), true));
} */

// prob 7
/*
int readNumber(){
    int number;
    cout<< "Enter a number: ";
    cin>> number;

    return number;
    
}

float getHalfNumber(int number){
    return (float) number/2; 
}

void printHalfNumber(int number){
    string result = "Half of " + to_string(number) + " is: " + to_string(getHalfNumber(number));
    cout<< result << endl;
}

int main(){
    printHalfNumber(readNumber());
    return 0;
}
    */


// prob 8

    /*
enum enPassFail {Fail , Pass};

float readMark(){

    float mark;
    cout<< "Enter your mark: ";

    cin>> mark;

    return mark;

}

enPassFail checkPassedOrFailed(float mark){

    if (mark >= 50)
        return enPassFail:: Pass;
    else 
        return enPassFail :: Fail;

}

void PrintResults(enPassFail result){

    if (result == Pass)
        cout<< "You passed\n";
    else if (result == Fail)
        cout<< "you failed\n";


}


int main(){

    PrintResults(checkPassedOrFailed(readMark()));
return 0;
}
*/


// prob 9:

/*
read 3 nums
sum them
print them
*/

/*
void readNums(int &num1, int &num2, int &num3){

    cout<< "Enter The First Number: ";
    cin>> num1;

    cout<< "Enter The Second Number: ";
    cin>> num2;

    cout<< "Enter Third Number: ";
    cin>> num3;

}

int addNumbers(const int &num1, const int &num2, const int &num3){

    return num1 + num2 + num3; 

}

void printSum(int num){
    cout<< "Sum is: " << num;
}

int main(){
    int num1, num2,num3;
    readNums(num1 , num2 , num3);
    printSum(addNumbers(num1 , num2 , num3));
    
    return 0;
}
    */


// alt of 9: 
/*
int readNum(int i){
    int num;
    cout<< "Enter number " << i << ": ";
    cin>> num;
    return num;
}

int getSum(){
    int sum= 0;
    for(int i = 0; i<3; i++){
        sum += readNum(i+1);
    }

    return sum;

}

void printSum(int sum){
    cout<< "Sum is: " << sum;
}

int main(){
    printSum(getSum());
}
*/

// prob 10:
/*
int readNum(){
    int num;
    cout<< "Enter Number: ";
    cin >> num;
    
    return num;

}

float calcSum(){

    float sum = 0;
    for(int i =0; i<3 ; i++)
    {
        cout<< i+1 <<":\n";
        sum += readNum();
    }
    return sum;
}

float calcAvg(float sum){
    float avg = sum /3;
    return avg;
}

void printAvg(float avg){
    cout<< "Average is: " << avg;
}

int main(){
    printAvg(calcAvg(calcSum()));
    return 0;
}
*/


// my prob 12 : 

// # include <cmath>

// int readInt(int number){

    
//     cout<< "Enter a number: ";
//     cin>> number;
//     return number;
// }

// int getMax(int number1 , int number2){
//     return max(number1, number2);
// }
// void printMax(int number){
//     cout<< "Max is: " + to_string(number) << endl;
// }
// int main(){
//     int number1, number2, max;

//     do
//     {
//     number1 = readInt(number1);
//     number2 = readInt(number2);
//     max = getMax(number1 , number2);
//     printMax(max);
//     } while(number1 != -1 && number2 != -1);

//     return 0;
// }




// // prob 12 standard: 
// void readNumbers(int &num1 , int &num2){
//     cout<< "Enter Number 1: ";
//     cin >> num1;

//     cout<< "Enter Number 2: ";
//     cin >> num2;
// }

// int getMax(int num1, int num2){
    
//     if (num1 > num2)
//         return num1;
    
//     else 
//         return num2;

    
// }

// void printNum(int num){
//     cout<< "Max Number is: " << num << endl;
// }
// int main(){
//     int num1 , num2;
//     readNumbers(num1 , num2);

//     printNum(getMax(num1 , num2));
// }


// prob 13: 

// void readNumbers(int &num1 , int &num2, int &num3){
//     cout<< "Enter Number A: ";
//     cin >> num1;

//     cout<< "Enter Number B: ";
//     cin >> num2;

//     cout<< "Enter Number C: ";
//     cin >> num3;
// }

// int getMax(int num1, int num2, int num3){
//     int max;

//     if (num1 > num2)
//     {
//         if (num1 > num3)
//             max = num1;
    
//             else max = num3;
//     }
//     else
//     {
//         if (num2 > num3)
//         max = num2;
//         else max = num3;
//     }

//     return max;
// }

// void printNum(int num){
//     cout<< "Max Number is: " << num << endl;
// }

// int main(){
//     int num1 , num2, num3;
//     readNumbers(num1 , num2, num3);

//     printNum(getMax(num1 , num2, num3));
// }

// void readNums(int &num1 , int &num2){
    
//     cout<< "Enter Number A: ";
//     cin >> num1;

//     cout<< "Enter Number B: ";
//     cin >> num2;

    
// }

// void swapNums(int &num1 , int &num2){
//     int temp;

//     temp = num1;
//     num1 = num2;
//     num2 = temp;

// }

// void printTwoNums(int num1, int num2){
//     cout<< "Num 1 = " << num1 << "\n";
//     cout<<  "Num 2 = " << num2 << "\n";
// }

// int main(){

//     int num1, num2;
//     readNums(num1, num2);

//     cout<< "Before Swap: \n";
//     printTwoNums(num1 , num2);

//     swap(num1, num2);

//     cout<< "After Swap: \n";
//     printTwoNums(num1 , num2);

//     return 0;
// }



void readDimentions(int &length , int &width)
{
    cout<< "Enter Length of the rectangle: ";
    cin>> length;

    cout<< "Enter Width of the rectangle: ";
    cin>> width;
}

int calcArea(int length, int width)
{
    return length * width;
}

void printArea(int area)
{
    cout<< "Area of rectangle is: " << area << endl;
}

int main()
{
    int length , width;

    readDimentions(length, width);
    printArea(calcArea(length, width));

    return 0;
}