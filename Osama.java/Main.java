
import java.util.Scanner;

public class Main {
public static void main(String[] args) {

    Scanner scanner = new Scanner(System.in);
        System.out.print("Principal:");
        int principal = scanner.nextInt();
        System.out.print("Annual Intrest Rate:");
        double AnnualRatePercintage = scanner.nextDouble();
        double monthlyRate = (AnnualRatePercintage/12) / 100;
        System.out.print("Period in years: ");
        int periodInYears = scanner.nextInt();
        int periodInMonths = periodInYears*12;
        double Mortagage =  principal*(((Math.pow((1+monthlyRate), periodInMonths))*monthlyRate)/((Math.pow((1+monthlyRate), periodInMonths))-1));
        

        System.out.println("Your Monthly Payment is: "+ Mortagage);
    



        //  principal*(((Math.pow((1+annualRate), periodInMonths))*annualRate)/((Math.pow((1+annualRate), periodInMonths))-1));

        // principal*((Math.pow((1+annualRate), periodInMonths))*annualRate)/((Math.pow((1+annualRate), periodInMonths))-1);
    



    



}
}