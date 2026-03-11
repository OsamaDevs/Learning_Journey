
import java.util.Scanner;

public class lab3Cstof {
    public static void main(String[] args) {
        
    
    Scanner input = new Scanner(System.in);
    System.out.print("Enter tempreture in Celsius: "); 
    int user_tempreture = input.nextInt();
    double Fahrnheit = ((user_tempreture* 9/5) +32 );
    System.out.println("Tempreture in Fahrenheit is: " + Fahrnheit);
    
}   
}
