package Personal;
import static java.lang.Math.*;
import java.util.Scanner;

public class Java {
    public static void main(String[] args) {
        float nuk = 9.38f;
        System.out.printf("%-10f", nuk);
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number of students: ");
        int numOfStundents = input.nextInt();
        float grade =0;
        float totalGrade = 0;
        float result = 0;
        String passOrFail = "";
        int totalExams = 0;
        float max = 0;
        int numOfAGrades = 0;
        for(int i=0; i< numOfStundents; i++){
            System.out.printf("--- Student %d --- \n", i+1);
            int numOfGrades = 0;
            
            totalGrade = 0;

            for (int j = 0; j < 3; j++) {
               max = getMax(max , grade);

                System.out.printf("Enter Exam %d Score: ", j+1);
                grade = input.nextFloat();

                if (j == 0 && grade == 100){
                    System.out.println("...Genius detected! Perfect score assigned.");
                    totalGrade = 100;
                    numOfGrades =1;

                    break;
                }
                else if (grade == -1 )
                {
                System.out.println("...Score ignored.");
                continue;  
                }

                
                totalExams ++;
                totalGrade += grade;
                
            }
            result = calcAvg(totalGrade, numOfGrades);
            if (result >= 90)
                numOfAGrades ++;
            
            
            if (result>= 60)
                passOrFail = "[PASS]";
            else
                passOrFail = "[FAIL]";
            System.out.printf("Student %d Result: %.2f %s \n", i+1 , result , passOrFail);
        }
        System.out.println("--- Class Report ---");
        System.out.printf("Total exams processed: %d\n", totalExams);
        System.out.println("Highest Score: "+ max);
        
    }

// calc max score using a method that contains if and assign it in each for j loop
    public static float calcAvg(float  sum , int num){
        return sum / num;
    }

      public static float getMax(float num1 , float num2){
        return max(num1, num2);
    }
    
}
