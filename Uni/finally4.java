
public class finally4 {
    public static void main(String[] args) {
        int [] s = {10, 13 , 17, 2 , 82 , -8, 1};
        int temp = 0;
        for (int i = 0; i< s.length ; i++)
        {
            for (int j = 1; j< (s.length); j++)
            {
                if (s[j-1] > s[j]){
                    temp = s[j-1];
                    s[j-1] = s[j];
                    s[j] = temp;
                }
            
            }
        }

        for (int i= 0 ; i< s.length; i++)
            System.out.print(s[i] + " ");
        System.out.println();
        System.out.println("Found at index: "+ searchArray(s, 17));
        
        
         for (int i= 0 ; i< s.length; i++)
            System.out.print(s[i] + " ");
    }
    public static int searchArray(int[] array, int target){
        boolean found = false;
        int index = 0;
        for(int i = 0; i< array.length; i++)
        {
            
           if (target == array[i])
            {
             found = true;
             return i;
            }

        }

        return -1;
    }

    }
