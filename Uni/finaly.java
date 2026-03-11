import java.util.Scanner;

public class finaly {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the desired number of elements: ");
        int num_of_Elements = scanner.nextInt();

        char[] array1 = new char[num_of_Elements];
        String charachter;

        for (int i= 0; i< array1.length; i++)
            array1[i]= '*';
        

        for (int i = 0; i< array1.length; i++){
            charachter = scanner.next();
            array1[i] = charachter.charAt(i);
        }
        
        for (int i= 0; i< array1.length; i++)
            System.out.println(array1[i]);







    }
}
