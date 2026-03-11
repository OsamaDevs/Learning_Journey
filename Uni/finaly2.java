import java.util.Scanner;

public class finaly2 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the desired number of elements: ");
        int num_of_Elements = scanner.nextInt();
        int[] array1 = new int[num_of_Elements];
        
        for (int i= 0; i< array1.length; i++){
            System.out.printf("Enter element number %d: ", i+1);
            array1[i]= scanner.nextInt();
        }
        for (int i= array1.length-1; i>= 0; i--)
            System.out.print(array1[i] + " ");


    }
}
