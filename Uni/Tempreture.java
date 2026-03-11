
import java.util.Scanner;

public class Tempreture {

    public static void main(String[] args) {
    
    Scanner scanner = new Scanner(System.in);
    System.out.print("What is the cerrunt tempreture? ");
    int tempreture = scanner.nextInt();
    
    if (tempreture > 35) {
        System.out.println("It's too hot today!");
        System.out.println("Drink as much water as you can.");
    }
    else if (tempreture >20 && tempreture <= 35)
        System.out.println("Tempreture is good don't worry.");
    else {
        System.out.println("It's cold!");
        System.out.println("Wear a jacket!");

    }

   




}
    
}
