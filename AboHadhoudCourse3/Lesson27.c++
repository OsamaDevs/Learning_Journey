# include <iostream>
# include <cmath>
#include <string>

using namespace std;

int main(){

    struct Address{
        int houseNumber;
        int streetNumber;
        string nieghberhoodName;
        string country;
        string city;

    };

    struct Human
    {
        string name;
        int age;
        char sex;
        float monthlySalary , yearlySalary = monthlySalary *12;
        Address address;
    };

    Human human1;
    cout<< "Enter your name: ";
    getline(cin,human1.name);

    cout<< "Enter your age: ";
    cin>> human1.age;

    cout<< "Enter your monthly salary: ";
    cin>> human1.monthlySalary;

    cout<< "Enter your sex: ";
    cin>> human1.sex;

    cout<< "Enter your Coutry: ";
    getline(cin, human1.address.country);
    cout<< "City: ";
    getline(cin, human1.address.city);
    cout<< "Nieghberhood Name: ";
    getline(cin, human1.address.nieghberhoodName);
    cout<< "Street Number: ";
    cin>> human1.address.streetNumber;
    cout<< "House Number: ";
    cin>> human1.address.houseNumber;


    cout<< "Name: " << human1.name << "\nAge: " << human1.age <<"\nSex: "<< human1.sex <<endl;
    cout << "Address: " << human1.address.country << ", "<< human1.address.city << ", " << human1.address.nieghberhoodName;
    cout<< ", " << human1.address.streetNumber << ", " << human1.address.houseNumber<< endl;
    
    
    

    return 0;
}