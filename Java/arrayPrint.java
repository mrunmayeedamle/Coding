import java.util.*;
public class arrayPrint {

    void printArray(int arr[][], int r, int c)
    {
        System.out.println("Array : ");
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                System.out.print(arr[i][j]+"\t");
            }
            System.out.print("\n");
        }

    }
    public static void main(String[] args) {
        try(Scanner sc = new Scanner(System.in))
        {
            int row, column, i, j;
            arrayPrint obj = new arrayPrint();

            System.out.println("Enter the number of rows and column for the array");
            row = sc.nextInt();
            column = sc.nextInt();
            
            int array[][] = new int[row][column];        

            for(i = 0; i < row; i++)
            {
                for(j = 0; j < column; j++)
                {
                    System.out.println("Enter element:");
                    array[i][j] = sc.nextInt();
                }
            }
        
        obj.printArray(array, row, column);
        
    }
}
}
