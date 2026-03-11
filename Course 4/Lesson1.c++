# include <iostream>
# include <string>
using namespace std;

/*
string readName(string name){
    
    cout<< "Please enter your name: ";
    getline(cin, name);

    return name;
    
}
void printName(string name){
    cout<< "Your name is: " << name << endl;
}

int main(){
    string name;
    printName(readName(name));

    return 0;

}
*/

//prob 3"

/*
enum enEvenOrOdd {Even , Odd};

int readNumber(){

    int num;
    cout<< "Please Enter a number: ";
    cin>> num;
    return num;

}

enEvenOrOdd checkNumberType(int number){
    if(number % 2 == 0)
        return Even;
    else 
        return Odd;
    
}

void printEvenOrOdd(enEvenOrOdd number){
    if (number == Even)
        cout<< "Number is Even\n";
    else if(number == Odd)
        cout<< "Number is odd\n";
    else 
        cout<< "Nither Even Nor Odd";

}

int main(){

    printEvenOrOdd(checkNumberType(readNumber()));


    return 0;
}
*/

struct Driver{
    int age;
    bool hasDriverLicense;
    bool hasRecommendation;
};

Driver readDriverInfo(){
    Driver driver1;

    cout<< "Please Enter Your Age: ";
    cin>> driver1.age;

    cout<< "Do you have a driver License?";
    cin>> driver1.hasDriverLicense;

    cout<< "Do you have a recommendation?";
    cin>> driver1.hasRecommendation;

    return driver1;
}

bool isAccepted(Driver driver){
    if(driver.hasRecommendation)
        return true;
    else
        return (driver.age>=22 && driver.hasDriverLicense);
}

void printAcceptanceStatus(bool isAccepted){
    if(isAccepted)
        cout<< "Hired";
    else 
        cout<< "Rejected";
}

int main(){

    
    printAcceptanceStatus(isAccepted(readDriverInfo()));
    return 0;
}
