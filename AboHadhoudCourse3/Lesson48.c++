#include <iostream>
# include <string>

using namespace std;

enum enGender {Male , Female};
enum enMartialStatus {Married , Single};

struct personalInfo{
    string name;
    int age;
    int gender;
    string country;
    string city;
    int isMarried;
    float salary , yearlySalary;
};

void readInfo( personalInfo &info){

    cout<< "Enter Your Name: ";
    cin.ignore(1,'\n');
    getline(cin, info.name);

    cout<< "Enter Your age: ";
    cin>> info.age;

    cout<< "Enter your gender: ";
    cin >> info.gender;
    info.gender = enGender(info.gender);
    
    
    cout<< "Enter your Country: ";
    cin.ignore(1,'\n');
    getline(cin, info.country);

    cout<< "Enter your City: ";
    getline(cin, info.city);

    cout<< "Enter Your Martial Status: ";
    cin >> info.isMarried;
    info.isMarried = enMartialStatus(info.isMarried);

    cout<< "Enter Your Monthly Salary: ";
    cin>> info.salary;

    info.yearlySalary = info.salary * 12;


}

void printInfo (personalInfo info){
    cout<< "*********************\n";

    cout<< "Name: " << info.name << "\n";
    cout<< "Age: " << info.age << "\n";
    cout << "Gender: " << info.gender << "\n";
    cout<< "Country: " << info.country << "\n";
    cout<< "City: " << info.city << "\n";
    cout<< "Martial Status: " << info.isMarried << "\n";
    cout<< "Salary: " << info.salary << "\n";
    cout<< "Yearly Salary: " << info.yearlySalary << "\n";

    cout<< "*********************" << endl;

}


int main(){
    int numberOfPeople;
    cout<< "Enter Number of People: ";
    cin>> numberOfPeople;

    personalInfo people[numberOfPeople];

    for(int i = 0; i< numberOfPeople ;i++)
    {
    cout<< "Enter Person " << i+1 << "'s Info:\n";
    readInfo(people[i]);
    
    }

    for(int i = 0; i< numberOfPeople ;i++)
    {
    cout<< "Person " << i+1 << "'s Info:\n";
    printInfo(people[i]);
    }
    
    


    return 0;

}