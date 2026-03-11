public class spped {
    public static void main(String[] args) {
        int speed = 75;
        float fee=0;
        if (speed >35)
         fee = 20;
        else if (speed >50)
        fee = 40;
        System.out.printf("Fee = %.6f.1", fee);
    }
    
}
