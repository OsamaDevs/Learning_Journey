
import java.util.Scanner;


public class PositiveEven {
public static void main(String[] args) {
    System.out.println("Welcome to the Positive or nigative game!");

    Scanner input = new Scanner(System.in);
    System.out.print("Enter a number to check it's status: ");
    int number = input.nextInt();

    if ((number % 2) == 0){
        if (number >= 0)
            System.out.printf("Number %d is an Even positive number.", number);
        else
            System.out.printf("Number %d is an Even negative number.", number);
    }
    else if ((number % 2)!= 0) {
        if (number >= 0)
            System.out.printf("Number %d is Odd and Positive.", number);
        else
            System.out.printf("Number %d is Odd and Negative.", number);
    
    }


    }



    
}

