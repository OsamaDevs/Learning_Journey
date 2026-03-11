# include <iostream>
# include <string>
using namespace std;

struct personalInfo{
    string firstName;
    string lastName;
    int phoneNumber;
};

void fillPersonalInfo(personalInfo array[] , int lengthOfArray){
    
    for(int i = 0; i < lengthOfArray; i++){
    
        cout<<"Enter person "<< i+1 << "'s first name: ";
        cin>> array[i].firstName;
        cout<<"Enter person "<< i+1 << "'s last name: ";
        cin>> array[i].lastName;
        cout<<"Enter person "<< i+1 << "'s Phone Number: ";
        cin >> array[i].phoneNumber;

        cout<< "*****************************" << endl;

    }
}

void printPersonalInfo(personalInfo array[] , int lengthOfArray){

    for(int i = 0 ; i < lengthOfArray; i++){
    
        cout<<"person "<< i+1 << "'s first name: "<< array[i].firstName << '\n';
        cout<<"person "<< i+1 << "'s last name: " << array[i].lastName << '\n';
        cout<<"person "<< i+1 << "'s Phone Number: "<< array[i].phoneNumber<< '\n';

        cout<< "*****************************" << endl;
    }
}

int main(){
    int numOfPeople;

    cout<< "Enter number of people: ";
    cin>> numOfPeople;

    personalInfo people[numOfPeople];

    fillPersonalInfo(people , numOfPeople);

    printPersonalInfo(people , numOfPeople);

    

    return 0;   
}