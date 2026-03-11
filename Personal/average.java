import java.util.Scanner;

public class average { 

    public static void main(String[] args){

    System.out.println("Calculate your classes' grade average!");

    Scanner input = new Scanner(System.in);
    System.out.print("Enter the number of students in your class: ");
    int numOfStudents = input.nextInt();

    float sumOfMarks= 0;
    float mark;
    int i = numOfStudents;
    int studentID = 0;
    

    while (i>0) 
    {
        studentID++;
        System.out.printf("Enter the student %d's mark: ",studentID);
        mark = input.nextFloat();
        sumOfMarks += mark;
        --i;

    }
    float average = sumOfMarks / numOfStudents;

    System.out.printf("Your classes' average is %.2f%%", average);
    





    }
    
}
