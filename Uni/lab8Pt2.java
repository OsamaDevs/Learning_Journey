
import java.util.Scanner;

public class lab8Pt2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("How many hours did you park your car?: ");
        int hours = input.nextInt();

        System.out.println("Parking fee is: "+parkingFee(hours)+" SR");

        
    }
    public static double parkingFee(int hours){
        if (hours>0){
            if (hours<=2)
            return 10;
            
            else if (hours<=5)
            return 25;
            
            else if (hours<=10)
            return 40;
            
            else
            return 70;
        }
        else
        return 0;
    }
}
