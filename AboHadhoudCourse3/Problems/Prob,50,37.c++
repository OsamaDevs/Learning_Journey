
#include <iostream>
using namespace std;


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
    int i = 2;
    
    // for 3 tries
    while(i>0 && userId == Non)
    {   
        cout<< "******************\n\n";

        cout<< "You have " << i << " tries left.\n";

        cout<< "Enter your username or x to exit: ";
        cin>> enteredUsername;
        userId = checkCredentials(user1, user2 , enteredUsername );
        i--;
    }
    
    getUserData(userId , user1 , user2);

    // for multiple users: 

    /* cout<< "******************"<< endl;
    cout<< "Enter your username or x to exit: ";
    cin>> enteredUsername; */

    }


    return 0;
    }
    
    
