# include <iostream>
# include <cmath>
#include <string>

using namespace std;

int main(){
    enum Color {Red = 100, Blue = 200, Green = 300};
    enum Sex {Male , Female};

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
        int sex;
        float monthlySalary , yearlySalary = monthlySalary *12;
        Address address;
        Color favorateColor;
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
    cin>> human1.address.country;
    cout<< "City: ";
    cin>> human1.address.city;
    cout<< "Nieghberhood Name: ";
    cin>> human1.address.nieghberhoodName;
    cout<< "Street Number: ";
    cin>> human1.address.streetNumber;
    cout<< "House Number: ";
    cin>> human1.address.houseNumber;

    human1.favorateColor = Red;


    cout<< "Name: " << human1.name << "\nAge: " << human1.age <<"\nSex: "<< human1.sex <<endl;
    cout << "Address: " << human1.address.country << ", "<< human1.address.city << ", " << human1.address.nieghberhoodName;
    cout<< ", " << human1.address.streetNumber << ", " << human1.address.houseNumber<< endl;
    cout<< "Favorate Color: "<<human1.favorateColor<< endl;
    
    

    return 0;
}