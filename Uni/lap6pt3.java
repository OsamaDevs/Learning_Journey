/* 
import java.util.Scanner;
public class lap6pt3 {

    

    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num= input.nextInt();
        int factorial =1;

        System.out.print(num+ "!"+ " = ");
        for (int i=num ; i>0 ; i--)
        {
        
        factorial *= i ;
        if (i !=1 )
        System.out.print( " "+ i + " "+ "x");
        else
        System.out.print( " "+ i + " ");


        }
        System.out.println("= "+factorial);

    }
}
*/

import java.util.Scanner;
public class lap6pt3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num= input.nextInt();
        int factorial =1;

        System.out.print(num+ "!"+ " = ");
        int i=num;
        while ( i>0 )
        {
        
        factorial *= i ;
        if (i !=1 )
        System.out.print( " "+ i + " "+ "x");
        else
        System.out.print( " "+ i + " ");

        i--;

        }
        System.out.println("= "+factorial);

    }
}



    



    

