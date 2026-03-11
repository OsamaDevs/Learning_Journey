# include <iostream>
# include <string>
using namespace std;

int main(){
    string st1 = "43.22";
    int N1 = stoi(st1);
    float N2 = stof(st1);
    double N3 = stod(st1);

    int M1 = 20;
    string st2 = to_string(M1);

    double M2 = 33.5;
    string s3 = to_string(M2);

    float M3 = 55.23;
    int M4 = int(M3);

    string s4 = to_string(M3);

    cout<< st1  << N1 << N2<< N3<< 
    return 0;
}