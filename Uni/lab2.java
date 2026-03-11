import java.util.Scanner;

public class lab2 {
public static void main(String[] args) {

    Scanner input = new Scanner(System.in);

    System.out.println("Please enter your first name:");
    String First_Name = input.nextLine();

    System.out.println("Please enter your last name:");
    String Last_Name = input.nextLine();

    System.out.print("Enter the distance you traveled in KM: ");
    float distance = input.nextFloat();

    System.out.printf("Welcome %s %s to CS1301 %n", First_Name, Last_Name);

    final float Conversion_Factor = 0.62137f;

    float KM_to_Miles = distance * Conversion_Factor;

    System.out.printf("You traveled: %.3f Miles",KM_to_Miles);

}     
}
