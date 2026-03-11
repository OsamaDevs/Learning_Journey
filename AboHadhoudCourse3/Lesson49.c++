# include <iostream>

using namespace std;

// Printing AA, AB, .... ,ZZ.
/*
int main(){

    for(int i = 65; i<= 90 ; i++ ){
        for(int j = 65; j<= 90 ; j++ ){
            cout<< char(i) << char(j)<< '\n';
        }
        cout<< "*********************"<< endl;
    }

return 0;
}
    */


    
    /* 
Printing: 
**********
*********
********
*******
******
*****
****
***
**
*
        
int main(){

    for(int i = 10; i> 0; i--){
        for(int j = 0; j < i ; j++){
            cout<< '*';
        }
        cout<< endl;
    }
    return 0;
}

*/

/*
int main(){

    for(int i = 11; i> 0; i--){
        for(int j = 1; j < i ; j++){
            cout<< j << ' ';
        }
        cout<< endl;
    }
    return 0;
}
    */

    /*
    int main(){

    for(int i = 0; i<= 10; i++){
        for(int j = 1; j <= i ; j++){
            cout<< j << ' ';
        }
        cout<< endl;
    }
    return 0;
}*/

/*
printing
A 
A B
A B C
A B C D
A B C D E
A B C D E F
A B C D E F G
...........................
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z


    int main(){

    for(int i= 65; i<= 90; i++){
        for(int j= 65; j<= i ; j++){
            cout<< char(j) << ' ';
        }
        cout<< endl;
    }
    return 0;
}
    */

    int main(){

    for(int i = 1; i<= 10; i++){
        for(int j = i ; j <= 10 ; j++){
            cout<< j << ' ';
        }
        cout<< endl;
    }
    return 0;
}