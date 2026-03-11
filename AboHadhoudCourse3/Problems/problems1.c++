# include <iostream>
# include <string>
using namespace std;
/*
int main(){



    int age;
    string isLicensedAnswer;
    bool isLicensed;
    cout<< "Enter your age: ";
    cin>> age;

    cout<< "Are you Licensed? ";
    cin>> isLicensedAnswer;

   if ( isLicensedAnswer == "Yes" || isLicensedAnswer == "yes" || isLicensedAnswer == "YES")
     isLicensed = true;

    else isLicensed = false;

    if(isLicensed && age>= 21)
        cout<< "Hiered";
    else 
        cout<< "Rejected";

    return 0;
}*/
/*
int main(){
    int mark;

    cout<< "Enter your mark: ";
    cin>> mark;

    

    if (mark >= 50)
        cout<< "Passed\n";
    else 
        cout << "Failed\n";

 return 0;
}*/
/*
int main(){
    float mark;
    float sum= 0;
    float avgMark;
    int counter = 0;

    while (mark >= 0)
    {

    cout<< "Enter your mark or -1 to exit: ";
        cin>> mark;
    
    if (mark >= 0)
    {
        sum += mark;
        counter ++;
    }


    cout<< sum<< '\n';
    
    }

    avgMark = sum / counter;
    cout<< "Average is: " << avgMark << endl;

    if (avgMark >= 50)
        cout<< "Passed\n";
    else 
        cout << "Failed\n";


    return 0;
}*/

/*

int main(){
    int age;
    
    cout<< "Enter your age: ";
    cin>> age;
    if (age >= 18 && age <= 45)
        cout<< "Valid Age \n";
    else 
        cout<< "Invalid Age\n";

    return 0;
}*/

enum enUserId {Non , User1 , User2};

struct ATMUser{
    enUserId userId;
    string username;
    int password;
    float balance;
};

void userDataBase(ATMUser &user1, ATMUser &user2){
    user1.username = "a";
    user1.password = 111;
    user1.balance = 7000.0;

    user2.username = "b";
    user2.password = 222;
    user2.balance = 82000.0;
}

void getUserData(enUserId &userId , ATMUser user1 , ATMUser user2){

    if(userId == User1)
    {
        cout<< "User1's Balance is: " << user1.balance << "\n";
    }

    else if(userId == User2){
        cout<< "User2's Balance is: " << user2.balance << "\n";
    }
    else 
    {
        cout<< "User's Balance is: " << 0 << "\n";
    }




}

enUserId checkCredentials(ATMUser user1, ATMUser user2, string enteredUsername){
    int enteredPassword;
    
    cout<< "Enter your password: ";
    cin>> enteredPassword;

    // if(typeid(enteredPassword).name() != "i")
        


    if (enteredUsername == user1.username && enteredPassword == user1.password)
    {   
        return User1;
    }

    else if (enteredUsername == user2.username && enteredPassword == user2.password)
    {
        return User2;
    }
    // if one of the credintials is correct and the other is wrong
    else if (enteredUsername == user1.username || enteredPassword == user1.password){
        cout<< "Username or Password is incorrect\n";
        return Non;
    }
    // if one of the credintials is correct and the other is wrong
    else if (enteredUsername == user2.username || enteredPassword == user2.password){
        cout<< "Username or Password is incorrect\n";
        return Non;
    }

    else
    {
        cout << "User is not registered" << endl;
        return Non;
    }
    


}

int main(){
    ATMUser user1;
    ATMUser user2;
    enUserId userId;
    string enteredUsername;

    userDataBase(user1, user2);

    cout<< "Enter your username or x to exit: ";
    cin>> enteredUsername;

    // to use as  
    while (enteredUsername != "X" && enteredUsername != "x" )
    {

    userId = checkCredentials(user1, user2 , enteredUsername );
    getUserData(userId , user1 , user2);

    cout<< "Enter your username or x to exit: ";
    cin>> enteredUsername;

    };
    
    return 0;
}