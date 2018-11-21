//Author: Kartikei Mittal
//Date: 18-NOV-2018
//Program to check ig two strings are anagram

class P2
{
    public static void main(String[] args)
    {
        System.out.println("Hello World!");
        
        System.out.print("Enter first string: ");
        String S1 = System.console().readLine();
        System.out.print("Enter second string: ");
        String S2 = System.console().readLine();

        S1 = S1.toLowerCase();
        S2 = S2.toLowerCase();
        S1 = S1.replaceAll(" ","");
        S2 = S2.replaceAll(" ","");

        if(S1.length() != S2.length())
        {
            System.out.println("Strings and not anagram of each other.");
            return;
        }

        char[] array = S1.toCharArray();
        for(char c:array)
            S2 = S2.replaceFirst(""+c, "");
        
        if(S2.length()==0)
            System.out.println("Given strings are ANAGRAM of each other.");
        else
            System.out.println("Given strings are NOT ANAGRAM of each other.");
    }
}