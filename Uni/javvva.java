public class javvva {

    public static void main(String[] args) {
         int [] s = {10, 13 , 17, 2 , 82 , -8, 1};
        int temp = 0;

        bubbleSort(s);

        for (int i= 0 ; i< s.length; i++)
            System.out.print(s[i] + " ");
    }
    
    public static void bubbleSort(int[] arr) {  
        int n = arr.length;  
        int temp = 0;  
         for(int i=0; i < n; i++){  
                 for(int j=1; j < (n-i); j++){  
                          if(arr[j-1] > arr[j]){  
                                 //swap elements  
                                 temp = arr[j-1];  
                                 arr[j-1] = arr[j];  
                                 arr[j] = temp;  
                          }}}
                        }
}
