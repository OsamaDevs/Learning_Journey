import java.util.Scanner;

public class lab4 {
    public static void main(String[] args){

    // total = basic + allowance + transportation
    final int transportation = 600;

    Scanner input = new Scanner(System.in);

    System.out.print("Enter The basic sallary: ");
    float basic_salary = input.nextFloat();
    float allowance;
    float total_sallary;

    if (basic_salary >=0)
    {
        if (basic_salary >= 15000)
        allowance = 0.05f;

        else if (basic_salary >= 10000)
        allowance = 0.1f;

        else if (basic_salary >= 5000)
        allowance =0.15f;
        else
        allowance =0.2f;

        total_sallary = basic_salary + (basic_salary*allowance) + transportation;
        System.out.printf("Your total sallary is %.2f SAR",total_sallary);
    }
    else {
        System.out.println("How do you take a negative Sallary?");
        System.out.println("Enter a valid option");
    }



    }
}

