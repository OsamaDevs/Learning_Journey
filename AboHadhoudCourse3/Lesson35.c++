#include <iostream>
#include <cmath>
using namespace std;
/*
float calcCircleArea(float A)
{
    const float PI = 3.14;

    return (PI * (A*A)) / 4;
}
int main(){
    float A;

    cout<< "Enter A: ";
    cin>> A;

    float Area = calcCircleArea(A);
    cout<< "Area of the circle inscribed in a square is: " << Area << endl;
    return 0;
}*/

void secondsToDaysHoursMinsSecs(int seconds){

    int rem;
    float days = floor(seconds /(60.0*60.0*24.0));
    rem = seconds %(60*60*24);

    float hours = floor(rem / (60.0*60.0));

    rem %= (60*60);

    int mins = floor(rem / (60)); 
    rem %= 60;

    int Secs = rem;

    cout<< days <<":" <<hours <<":"  <<mins << ":" << Secs << endl;


}

int main(){
    int seconds;
    cout<<"Enter The number of seconds: ";
    cin>> seconds;

    secondsToDaysHoursMinsSecs(seconds);


    return 0;
}
