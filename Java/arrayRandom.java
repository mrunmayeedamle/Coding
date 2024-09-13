import java.util.Random;
import java.util.Scanner;

public class arrayRandom {
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

    void printDiagonal(int arr[][], int r, int c)
    {
        System.out.println("Array : ");
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(i == j)
                {
                    System.out.print(arr[i][j]);
                }
                else
                {
                    System.out.print("\t");
                }
                
            }
            System.out.print("\n");
        }
    }

    void printTriangle(int arr[][], int r, int c)
    {
        System.out.println("Array : ");
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(i >= j)
                {
                    System.out.print(arr[i][j]+ " ");
                }
                else
                {
                    System.out.print("\t");
                }
                
            }
            System.out.print("\n");
        }
    }
    public static void main(String[] args) {
        try(Scanner sc = new Scanner(System.in))
        {
            int row, column, i, j;
            arrayRandom obj = new arrayRandom();
            Random random = new Random();

            System.out.println("Enter the number of rows and column for the array");
            row = sc.nextInt();
            column = sc.nextInt();
            
            int array[][] = new int[row][column];        

            for(i = 0; i < row; i++)
            {
                for(j = 0; j < column; j++)
                {
                    array[i][j] = random.nextInt(100);
                }
            }
        
        //obj.printArray(array, row, column);
        //obj.printDiagonal(array, row, column);
        obj.printTriangle(array, row, column);
        
    }
}
    
}
