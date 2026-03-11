
import java.util.Scanner;
/*
 * === Student Management Menu ===
1. Add Student
2. Show All Students
3. Show Average Grade
4. Exit
Choose an option: 1

Enter student name: Ahmed
Enter grade (0-100): 90
Add another student? (y/n): y

Enter student name: Sara
Enter grade (0-100): 75
Add another student? (y/n): n


=== Student Management Menu ===
1. Add Student
2. Show All Students
3. Show Average Grade
4. Exit
Choose an option: 2

1. Ahmed - 90
2. Sara - 75


=== Student Management Menu ===
1. Add Student
2. Show All Students
3. Show Average Grade
4. Exit
Choose an option: 3

Average Grade: 82.5
Good job.


=== Student Management Menu ===
1. Add Student
2. Show All Students
3. Show Average Grade
4. Exit
Choose an option: 4

Goodbye!

 * 
 */
public class SetCount {
static int choice;

 // Integer input function
public static int intUserInput(int i)
{
Scanner scanner = new Scanner(System.in);
int input = scanner.nextInt(); 

return input;
}

// String input function
public static String strUserInput(int i)
{
Scanner scanner = new Scanner(System.in);
String input = scanner.nextLine(); 

return input;
}

// showing the menu function
public static void menu(){
    do 
    {
    System.out.println("=== Student Management Menu ===");

    System.out.println("1. Add a student");
    System.out.println("2. Show all students"); 
    System.out.println("3. Show average grade");
    System.out.println("0. Exit");

    } while (choice !=0);



}


    public static void main(String[] args){
    
        
   
    
    

        

    

    }
    
}
