import java.util.Scanner;

 public class lab4Part2 {
    public static void main(String[] args) {
    
    Scanner input = new Scanner(System.in);

    System.out.print("Enter Var1: ");
    float var1 = input.nextFloat();

    System.out.print("Enter Var2: ");
    float var2 = input.nextFloat();

    if (var1 > var2)
    System.out.println("var1 is bigger");

    else if (var1 < var2)
    System.out.println("var2 > var1");
    
    else 
    System.out.println("var1 is equal to var2");

    }
    
}
