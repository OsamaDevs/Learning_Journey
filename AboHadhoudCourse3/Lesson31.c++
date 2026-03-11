# include <iostream>
# include <string>

using namespace std;

int main(){
    string str1, str2, str3;
    cout<< "plaese enter string1: ";
    getline(cin, str1);

    cout<< "plaese enter string2: ";
    getline(cin, str2);

    cout<< "plaese enter string3: ";
    getline(cin, str3);

    string concat = str2 + str3;
    int product = stoi(str2) * stoi(str3);

    cout<< "***********************************\n";

    cout<< "The Length Of String1 is: " << str1.length() << "\n";
    cout<< "Charachters at 0, 2, 4 ,7 are: " << str1[0] <<str1[2] << str1[4] << str1[7]<< "\n";
    cout<< "Concatinating string2 and string3: "<< concat << endl;
    cout<< str2 << " * " << str3 << " = " << product;
    
    return 0;
}