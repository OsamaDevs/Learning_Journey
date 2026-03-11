import java.util.Scanner;

public class summ {

public static int sum =0, avg=0, noOfIntegers, input, integer, diffrence=0;

    public static void main(String[] args){
    
    System.out.println("== Sum and average of int ==");
    System.out.print("Enter the number of integers to get their summation and average: ");
    noOfIntegers = reciveUserInput();
    loop();
    avg = sum / (noOfIntegers- diffrence);
    System.out.printf("You entered %d numbers.\nTheir Summation is: %d \nand their average is: %d ", noOfIntegers, sum, avg);
    }


public static void loop()
{
    for (int i=1; i <= noOfIntegers; i++){
    System.out.printf("Enter the value of integer number "+ (i)+": ");
    integer = reciveUserInput();
        if (integer >=0)
        {
        sum += integer;
        
        }
        else{
        sum +=0;
        diffrence ++;
        
        }
     
    }
    
}
 public static int reciveUserInput()
{
    Scanner scan = new Scanner(System.in);
    int input = scan.nextInt();
    return input;
}

}

