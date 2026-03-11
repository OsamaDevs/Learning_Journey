import java.util.Scanner;
public class lab6pt1 {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter an even number: ");
        int num= input.nextInt();
        int n = 2;

        for (int i=0; i<num ; i+=2)
        {
        System.out.print(n + " ");
        n+=2;

        }
        

    }
}
