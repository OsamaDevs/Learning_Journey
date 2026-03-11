    import java.util.Scanner;

public class lap6pt4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num= input.nextInt();
        int counter =0;
        int divisbleBy5=0;
        
        for (int i=1; i<num; i++)
        {
        if (i <= 100)
        {
        if (i %5 ==0)
        divisbleBy5++;
        }
        else{
        System.out.println("Reached the limit of 100. Stopping at 100.");
        break;
        }

        }
       
        System.out.println("Numbers devisible by 5 = "+ divisbleBy5 );

    }
}
    

