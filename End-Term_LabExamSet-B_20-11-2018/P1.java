import java.util.Scanner;

class P1
{
    public static int inputISBN()
    {
        int original = 0;
        Scanner in = new Scanner(System.in);   
        System.out.print("Enter ISBN: ");
        try
        {
            original = in.nextInt();
        }
        catch(java.util.InputMismatchException k)
        {
            System.out.println("Please enter pure integer.");
            return 0;
        }
        in.close();
        return original;
    }

    public static String checkISBN(int isbn)
    {
        int temp=isbn, count=0;
        while(temp!=0)
        {
            temp /= 10;
            count += 1;
        }
        if(count!=10)
            return "ISBN code is not of 10 digit.";
        int ans=0;
        for(int i=1; i<=10; ++i)
        {
            ans += (11-i)*(isbn%10);
            isbn /= 10;
        }
        if(ans%11==0)
            return "Legal ISBN";
        else
            return "Illegal ISBN";
    }

    public static void main(String[] args)
    {
        System.out.println("Hello World!");
        int original = inputISBN();
        String S = checkISBN(original);
        System.out.println(S);
    }
}