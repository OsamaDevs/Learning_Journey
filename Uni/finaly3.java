import static java.lang.Math.*;
import java.util.Scanner;

public class finaly3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the desired number of elements: ");
        int num_of_Elements = scanner.nextInt();
        int[] array1 = new int[num_of_Elements];

        for (int i= 0; i< array1.length; i++){
            System.out.printf("Enter element number %d: ", i+1);
            array1[i]= scanner.nextInt();
        }
        System.out.println(findMax(array1));
    }

    public static int findMax(int[] array){
        int max= 0, temp=0, seires_of_negatives=0;

        for (int i = 0; i < array.length; i++) {
            if (array[i] >0 && array[i+1]> 0 && (i+1)<array.length)
            {
            max = max(array[i], array[i+1]);
            seires_of_negatives = 0;
            }

            else if(array[i]<0 && array[i+1]>0 &&(i+1)<array.length && (i-1)>0){
                max = max(array[i-1], array[i+1]);
                seires_of_negatives  = 0;
            }

            else if(array[i]>0 && array[i+1]<0 && (i+2)<array.length){
                seires_of_negatives ++;
                max = max(array[i], array[i+2]);
            }
            else if(array[i]<0 && array[i+1]<0 &&(i+2)<array.length && (i-1)>0){
                seires_of_negatives ++;
                max = max(array[i-1], array[i+2]);

            }
            else
                return 0;


        }
        return max;
    }
    
}
