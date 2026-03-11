
import java.util.Scanner;

public class dayOfTheWeek {

    public static void main(String[] args) {
        System.out.println("What Habits Do I have today?");
        Scanner input = new Scanner(System.in);

        System.out.print("What day is today?\n: ");
        String day = input.nextLine().toLowerCase();

        switch (day) {
            case "sunday":
            System.out.printf("It's %s! ", day.toUpperCase());
            System.out.println("Let's start our wonderful week with the following warmup:\n1) Daily prayer\n2) Studying for an hour.");
            break;

            case "monday":
            System.out.printf("It's %s! ", day.toUpperCase());
            System.out.println("Monday is a great day! There is your habit list:\n1) Daily prayer\n2) Studying for 2 hours\n3) Runnig for half an hour.");
            break;

            case "tuesday":
            System.out.printf("It's %s! ", day.toUpperCase());
            System.out.println("It's time to level up!:\n1) Daily prayer\n2) Studying for an hour\n3) Self-study for 2 hours.");
            break;

            case "wednesday":
            System.out.printf("It's %s! ", day.toUpperCase());
            System.out.println("Your schedule is busy today let's keep it easy today: \n1) Daily prayer\n2) Studying for an hour\n3) Self-study for 2 hour.");
            break;

            case "thursday":
            System.out.printf("It's %s! ", day.toUpperCase());
            System.out.println("It's a weekend, HAVE FUN!");
            break;

            case "friday":
            System.out.printf("It's %s! ", day.toUpperCase());
            System.out.println("It's a weekend, HAVE FUN!");
            break;

            default:
            System.out.printf("%s? I think you forgot weekdays HAHA!", day.toUpperCase());
            





        }








    }
    
}
