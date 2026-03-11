import java.util.Scanner;

public class ll{
public static void main(String[] args) {

/*Welcome to the BMI Calculator!
Enter your weight (kg): 70
Enter your height (m): 1.75

Your BMI is: 22.857142857142858

 */
    System.out.println("Welcome to the BMI Calculator!");

    Scanner input = new Scanner(System.in);

    System.out.print("Enter your weight in kg: ");
    float weight = input.nextFloat();

    System.out.print("Enter your height in meters: ");
    float height = input.nextFloat();

    float bmi;
    bmi = weight / (height*height);

    System.out.printf("Your BMI is: %f", bmi);



    
}
}