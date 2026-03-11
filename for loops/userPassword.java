
import java.util.Scanner;

public class userPassword {
    public static void main(String[] args) {

        System.out.println("Welcome!");


        Scanner scanner = new Scanner(System.in);
        

        String username1 = "admin";
        String password1 = "admin";
        String inputUsername = "";
        String inputPassword = "";

        while ((!inputUsername.equals(username1)) || (!inputPassword.equals(password1))) {

            System.out.println("Wrong username or password!\nTry again!");

            System.out.print("Enter Username: ");
            inputUsername = scanner.nextLine().toLowerCase();

            System.out.print("Enter Password: ");
            inputPassword = scanner.next().toLowerCase();

        }
        System.out.println("You successfully signed in!");










}   
}
