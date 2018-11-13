//Author: Kartikei Mittal
//Date: 13-NOV-2018
//Program to implement jagged array

import java.util.Scanner;

class P1 {
    public static void main(String[] args)
    {
        Scanner reader = new Scanner(System.in);
        System.out.println("Hello World!");
        
        int array[][] = new int[3][];
        array[0] = new int [3];//Row 1
        array[1] = new int [4];//Row 2
        array[2] = new int [6];//Row 3

        for(int i=0; i<array.length; ++i)
            for(int j=0; j<array[i].length; ++j)
            {
                System.out.print("Enter a number: ");
                array[i][j] = reader.nextInt();
                array[i][j] = array[i][j] * array[i][j];
            }

        for(int i=0; i<array.length; ++i)
        {
            for(int j=0; j<array[i].length; ++j)
                System.out.print(array[i][j] + " ");
            System.out.println();    
        }

        reader.close();
    }
}
