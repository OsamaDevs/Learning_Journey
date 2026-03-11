
import java.util.Scanner;

public class Two {
    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your score: ");
        int score = scanner.nextInt();
        String scoreValidity = (score>= 0 && score <=100)? "Valid score": "Score is out of expected range.";
        String passedOrFailed = (score> 60 && score <=100) ? "Student Passed!" : "Student Failed";
        String grade = " ";

        if (score > 60 && score <= 65)
            grade = "D";
        else if (score > 65 && score <= 70)
            grade = "D+";
        else if (score > 70 && score <= 75)
            grade = "C";
        else if (score > 75 && score <= 80)
            grade = "C+";
        else if (score > 80 && score <= 85)
            grade = "B";
        else if (score > 85 && score <= 90)
            grade = "B+";
        else if (score > 90 && score <= 95)
            grade = "A";
        else if (score > 95 && score <= 100)
            grade = "A+";
        else if (score >= 0 && score < 60)
            grade = "F";
        else
            grade = "Invalid grade";
       
        System.out.println(scoreValidity + "\n" +passedOrFailed + "\n" +"Grade: "+ grade);
        
        








}
    
}
