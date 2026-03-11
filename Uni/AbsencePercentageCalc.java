import java.util.Scanner;


public class AbsencePercentageCalc{
public static void main(String[] args) {
    // Number of weeks vary from semester to another, it has to be changed each semester
    final double numberOfWeeks471 = 15.9744408945;

    Scanner input = new Scanner(System.in);

    System.out.print("Enter the number of weekly hours of this course (including lectures, and practical lectures): ");
    int weeklyHours = input.nextInt();

    System.out.print("How many 2 Hour lectures have you missed?: ");
    int twoHourAbsentTimes = (input.nextInt())*2;

    System.out.print("How many 1 Hour lectures have you missed?: ");
    int oneHourAbsentTimes = input.nextInt();

    double totalSemesterHours = numberOfWeeks471 * weeklyHours;
    //double percentageOfEachHour = (1 / totalSemesterHours);
    double totalAbsentPercentage = ((oneHourAbsentTimes + twoHourAbsentTimes) / totalSemesterHours) *100 ;
    int remainingAbsenceTimes = 25 / (int)totalAbsentPercentage;
    System.out.printf("Your total absence percentage Is: %.2f%% ",totalAbsentPercentage);
    
  //
  // System.out.println(Math.nextUp(totalAbsentPercentage));
    

}
}