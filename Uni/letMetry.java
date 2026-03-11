import java.util.Scanner;

public class letMetry {
    public static void main(String[] args) {
        var input = new Scanner(System.in);
        System.out.println("Check if a number is prime or not: ");
        System.out.println();
        System.out.print("Enter a number: ");
        int number = input.nextInt();
        int counter = 2;
        int numOfDivisiablility = 0;

        // to make sure no negatives get in
        while(number >= 0)
        {
            // if it's 1 or 2 it's always prime
            if(number<=2)
                System.out.println("Prime");
            
            // checking for numbers >2 
            else if (number >2)
            {
                // checking if the number isn't divisble by 2......,(number/2)
                for(int i = 2; i<= number/2; i++)
                {
                    // if it's divisible by any of the numbers the counter adds 1 to count how many times it was divisable
                    if(number %i == 0)
                        numOfDivisiablility ++;
                    
                }
                // checking if it was divisable at least once
                if (numOfDivisiablility >=1)
                    System.out.println("Not Prime");
                else
                    System.out.println("Prime");

                // reseting the counter to use in the next number
                numOfDivisiablility =0;
            }
            // asking the user to enter the next number.
            System.out.print("Enter a number: ");
            number = input.nextInt();
        }


    }
    
}
