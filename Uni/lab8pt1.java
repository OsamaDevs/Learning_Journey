import java.util.Scanner;
public class lab8pt1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the current month's number: ");
        int monthNumber = input.nextInt();

        System.out.println("Current month's name is: "+ monthName(monthNumber));
        printDate(25, 11, 2025);
    }

    public static String monthName(int m){
        switch (m) {
            case (1): return "January";
            case (2): return "February";
            case (3): return "March";
            case (4): return "April";
            case (5): return "May";
            case (6): return "June";
            case (7): return "July";
            case (8): return "August";
            case (9): return "September";
            case (10): return "October";
            case (11): return "November";
            case (12): return "December";
            default: return "invalid input try again";
        }
    }

    public static void printDate(int day, int month, int year ){
        System.out.printf("Date is %d/%d/%d \n", day, month, year);

    }
    
    
}
