import java.util.Scanner;

public class atm {
    
    public static void main(String[] args){
    
    // User 1  crdintials 
    int user1 = 111;
    int password1 = 222;

    // User 2 credintials 
    int user2 = 333;
    int password2 = 444;
    //
    int currentBalance;
    // account sign in
    Scanner input = new Scanner(System.in);

    System.out.print("Enter your Username: ");
    int inputUser = input.nextInt();

    System.out.print("Enter your Password: ");
    int inputPassword = input.nextInt();
    int id;
    
   
    if ((inputUser == (user1)) && (inputPassword == (password1)))
    {
    id = 1;
    currentBalance = 50000;
    System.out.printf("Welcome User 1! your balance is: %d $ \n",currentBalance);
    }

    else if ((inputUser == (user2)) && (inputPassword == (password2)))
    {
    id = 2;
    currentBalance = 33000;
    System.out.printf("Welcome User 2! your balance is: %d $ \n",currentBalance);
    }
    else 
    {
    id = 0;
    currentBalance = 0;
    System.out.println("Invalid user please try again!");
    }
    

    switch (id) {
    
    case 1 , 2 :
    int choice = 0;
        do
        {
        System.out.println("Actions:");
        System.out.println("1. Withdraw");
        System.out.println("2. deposit");
        System.out.println("3. Check balance");
        System.out.println("0. Exit");
    
        System.out.print("Enter choice: ");
        choice = input.nextInt();

            if (choice == 1)
            {
            System.out.print("Enter withdrawal ammount: ");
            int change = input.nextInt();
                if ( change <= currentBalance){
                    currentBalance -= change;
                    System.out.printf("Successfuly added %d$ \n", change);
                    System.out.printf("Your balance became: %d$ \n", currentBalance);
                }
                else
                System.out.printf("Hey! why are you trying to take more than you own! you can only withdraw %d $ or less! \n", currentBalance);
            
                
            }

            else if (choice == 2)
            {
            System.out.print("Enter deposit ammount: ");
            int change = input.nextInt();
            currentBalance += change;
            System.out.printf("Your current balance is: %d$ \n", currentBalance);
            }
            else if (choice == 3)
            System.out.printf("Your balance is: %d $ \n", currentBalance);

            else if (choice == 0)
            System.out.println("See you soon!");

            else 
            System.out.println("Please enter a valid input");



        }
        while (choice != 0);

    break;

    default:
    System.out.println("Thank you for visiting our ATM try to create an account and come back.");

}
    
}

}
