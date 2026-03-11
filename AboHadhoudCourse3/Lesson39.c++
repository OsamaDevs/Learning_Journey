# include <iostream> 
# include <string>
using namespace std;
void fillArray(int array[], int length )
{
    int gradeHolderForLoop;
 for(int i =0; i< length; i++ ){
        cout<< "Enter student " << i+1 << "'s grade: ";
        cin>> gradeHolderForLoop ;
        array[i] = gradeHolderForLoop;
    }
}

void printArray(int array[], int length){
    for(int i =0; i< length; i++ )
        cout<< "Student " << i+1 << "'s grade: " << array[i]<< '\n';
    
}
float avgOfArray(int array[], int length){

    float sum = 0;
    for(int i =0; i< length; i++ ){
        sum += float(array[i]);
    }

    return sum / float(length) ;
}
int main(){
    int numOfStudents;
    
    cout<< "Enter number of students: ";
    cin>> numOfStudents;

    int array[numOfStudents];

    fillArray(array , numOfStudents);

    printArray(array, numOfStudents);
    
    float avg = avgOfArray(array, numOfStudents);
    cout<< "Average of the " << numOfStudents << " students is: "<< avg << endl;
   
    
    return 0;
}