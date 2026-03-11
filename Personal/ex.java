import java.util.Scanner;


public class ex {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of days: ");
        int numOfDays = input.nextInt();
        int numOfHours = 0;

        for(int i = 0; i< numOfDays; i++){
            System.out.printf("Enter The number of hours you worked in day %d: ", i+1);
            numOfHours += input.nextInt();
        }
        char payType = checkHours(numOfHours);
        System.out.println();
        System.out.printf("The total hours is %d and the status is %s\n", numOfHours, payType);

    }

    public static char checkHours(int totalHours){
        if (totalHours>=40)
            return 'O';
        else if(totalHours>=20)
            return 'R';
        else if (totalHours>=0)
            return 'P';
        else return 'x';

    }
    
}
