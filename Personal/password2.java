import java.util.Scanner;

public class password2 {
    public static void main(String[] args){
        System.out.println();
        String knownUsername = "admin";
        int knownPassowrd = (int)(Math.random()*100);
        System.out.println(knownPassowrd);
        Scanner input = new Scanner(System.in);

       
        int inputPassword;
        String inputUsername;
       

        int trials =2;
        boolean trialStatus = true;

    while (trialStatus==true)
    {

            System.out.print("Enter username: ");
            inputUsername = input.next();

            System.out.print("Enter password: ");
            inputPassword = input.nextInt();

            if ((inputUsername.equals(knownUsername)) && (inputPassword == knownPassowrd)) 
            {
                 System.out.println("correct username and password");
                    trialStatus = false;
            }

        else 
        {
            System.out.printf("Wrong username or password! you have %d trials left.\n", trials);
            --trials;
                if (trials <0) 
                {
                    trialStatus = false;
                    System.out.println("oh no you finished your 3 trials! ");
                }
        }

    }
            }
        
        }








