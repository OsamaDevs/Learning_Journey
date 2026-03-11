import java.util.Scanner;

public class lab3 {
  public static void main(String[] args) {
     Scanner scan = new Scanner(System.in);
     double price;
     System.out.print("Enter the original price: ");
     price = scan.nextDouble();
     final double DISCOUNT_RATE = 0.15;
     double discount_amount = DISCOUNT_RATE * price ;
     double final_price = price - discount_amount;
     System.out.println("The discount amount is: "+ discount_amount +" SR");
     System.out.printf("The final price is: %.1f SR", final_price);
    }
}
    /*
    Continue the above to calculate the discounted price of an item:
a. Use a fixed discount rate of 15%.
b. Print both the discount amount and the final price.
c. Example output:
Enter the original price: 200
The discount is 30.0 Riyals
The final price is 170.0 Riyals */