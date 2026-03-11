
import java.util.Scanner;

public class FizzBuzz {
    public static void main(String[] args) {

        // Start messege
        System.out.println("Number divisablillity identifier!");
        System.out.println("Fizz = div by 5\nBuzz = div by 3\nFizzBuzz = div by 5 & 3\nLet's go!");

        // User input
        Scanner scanner = new Scanner(System.in);
        System.out.print("Number: ");
        int number = scanner.nextInt();

        int check5 = number % 5;
        int check3 = number % 3;

        
        if (check5 == 0  && 0 == check3) {
            System.out.println("FizzBuzz");
        }
        else if (0 == check3) {
            System.out.println("Buzz");
        }
        else if (check5 == 0 ) {
            System.out.println("Fizz");
        }
        else {
            System.out.println(number);
        }
        
            









}
    
}
