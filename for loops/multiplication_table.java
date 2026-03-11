
import java.util.Scanner;

public class multiplication_table {
    public static void main(String[] args) {

        // Welcome message
        System.out.println("Welcome!\nEnter a number to show it's multiplication table.");

        // User input
        Scanner scanner = new Scanner(System.in);
        System.out.print("Number: ");
        int number = scanner.nextInt();
        
        for (int i = 1; i <= 12; i++)
            System.out.println(number + " x " + i +" = "+ number*i );






}
    
}
