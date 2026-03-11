import java.util.Scanner;
public class editedMatrix {

static Scanner reader = new Scanner(System.in);  



public static int rowCounter = 0,  columnCounter = 0, numOfRows=0 , numOfColumns=0;  

public static int [][] matrix0 = new int [0][0], matrix1 = new int[0][0];
public static int [][] matrix2 = new int[0][0], addition = new int [0][0];

public static void rowColumnReset(){

rowCounter = 0;
columnCounter = 0;
numOfRows=0;
numOfColumns=0;  


}



    public static int[][] matrixInfo(int i, int j) {  
    

    matrix0 = new int[i][j];  

    
    for (int counter = 0; counter < i; counter++) {  

        for (int counter2 = 0; counter2 < j; counter2++) 
        {  
            System.out.printf("Enter element number %d%d: ", (rowCounter+1), (columnCounter+1));  
            int input = reader.nextInt();  
            matrix0[rowCounter][columnCounter] = input;  
            columnCounter++;  
        } 
        
        rowCounter++;  
        columnCounter = 0; // reset column index for next row  
    }  
    rowCounter = 0;
    System.out.println(" ");


    return matrix0;  
}

public static void printMatrix(int [][] mat1){
    
   
    
    for (int counter = 0; counter < numOfRows; counter++) { 
        System.out.print("{");
         for (int counter2 = 0; counter2 < numOfColumns; counter2++) {
            
            System.out.print(" "+ mat1 [rowCounter][columnCounter] +" ");  
              
            columnCounter++;  
        } 
        System.out.println("}");
        
        
        rowCounter++;  
        columnCounter = 0; // reset column index for next row
    }  
rowCounter =0;
}

public static int[][] addMatrix(int[][] mat1, int [][] mat2){

    
    rowCounter =0;
    columnCounter =0;
 
    int [][] addition = new int[numOfRows][numOfColumns];
    for (int counter = 0; counter < numOfRows; counter++) { 
        
         for (int counter2 = 0; counter2 < numOfColumns; counter2++) {
      
            
            addition[rowCounter][columnCounter] = matrix1 [rowCounter][columnCounter] + matrix2 [rowCounter][columnCounter];  
              
            columnCounter++;  
        } 
        
        
        
        rowCounter++;  
        columnCounter = 0; // reset column index for next row
    }
    rowCounter =0;
    return addition;
}

public static int[][] subtractMatrix(int[][] mat1, int [][] mat2){

    
    rowCounter =0;
    columnCounter =0;
 
    int [][] subtraction = new int[numOfRows][numOfColumns];

    for (int counter = 0; counter < numOfRows; counter++) { 
        
         for (int counter2 = 0; counter2 < numOfColumns; counter2++) {
      
            
            subtraction [rowCounter][columnCounter] = matrix1 [rowCounter][columnCounter] - matrix2 [rowCounter][columnCounter];  
              
            columnCounter++;  
        } 
        
        
        
        rowCounter++;  
        columnCounter = 0; // reset column index for next row
    }
    rowCounter =0;

    return subtraction;
}

public static int[][] multiplyMatrix(int[][] mat1, int [][] mat2){

    
    rowCounter =0;
    columnCounter =0;
 
    int[][] multiplication = new int[numOfRows][numOfColumns];

    for (int counter = 0; counter < numOfRows; counter++) { 
        
         for (int counter2 = 0; counter2 < numOfColumns; counter2++) {
            
            multiplication[rowCounter][columnCounter] = (matrix1[counter2][columnCounter] * matrix2 [rowCounter][columnCounter]);
            columnCounter++;  
        } 
        
        
        
        rowCounter++;  
        columnCounter = 0;
    }
    rowCounter =0;
    return multiplication;
}


    public static void main(String[] args){
        
    int choice;
    do {
    
    System.out.println("1. Display a matrix");
    System.out.println("2. Add two matrices");
    System.out.println("3. subtract two matrices");
    System.out.println("0. Exit");
    System.out.print("Choose an operation from menu by entering it's number:");
    choice = reader.nextInt();

    switch (choice){
        case (1) :
            System.out.println("Enter number of rows: ");
            numOfRows = reader.nextInt();
            
            System.out.println("Enter the number of columns: ");
            numOfColumns = reader.nextInt();
            
            matrix1 = matrixInfo(numOfRows, numOfColumns);
            
            printMatrix(matrix1);
            break;

        case (2) :

            System.out.println("Enter number of rows: ");
            numOfRows = reader.nextInt();
            
            System.out.println("Enter the number of columns: ");
            numOfColumns = reader.nextInt();

            matrix1 = matrixInfo(numOfRows, numOfColumns);
            
            System.out.println("Matrix 2: ");
            matrix2 = matrixInfo(numOfRows, numOfColumns);
            
            int[][] additionanswer = addMatrix(matrix1, matrix2);
            
            System.out.println("The new matrix is: ");
            printMatrix(additionanswer);
            break;

        case(3):
         System.out.println("Enter number of rows: ");
            numOfRows = reader.nextInt();
            
            System.out.println("Enter the number of columns: ");
            numOfColumns = reader.nextInt();

            matrix1 = matrixInfo(numOfRows, numOfColumns);
            
            System.out.println("Matrix 2: ");
            matrix2 = matrixInfo(numOfRows, numOfColumns);
            
            int[][] subtractionAnswer = subtractMatrix(matrix1, matrix2);
            
            System.out.println("The new matrix is: ");
            printMatrix(subtractionAnswer);
        break;


        case 0:
        System.out.println("Program ended");
        break;

        default:
        System.out.println("Enter a valid choice!");

    }
    

    } while(choice !=0);

   /*  System.out.println("Enter number of rows: ");
    numOfRows = reader.nextInt();

    System.out.println("Enter the number of columns: ");
    numOfColumns = reader.nextInt();
    
    matrix1 = matrixInfo(numOfRows, numOfColumns);
    System.out.println("Matrix 2: ");
    matrix2 = matrixInfo(numOfRows, numOfColumns);
    
    int[][] additionanswer = addMatrix(matrix1, matrix2);
    
    printMatrix(additionanswer);
    
    */
}  
}


