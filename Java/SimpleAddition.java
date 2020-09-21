import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

public class SimpleAddition
{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        BigInteger BIONE = new BigInteger(scan.next());
        BigInteger BITWO = new BigInteger(scan.next());
        
        System.out.println(BIONE.add(BITWO));
        scan.close();
    }
}
/*

Simple Addition

Yup, yet another trivial problem. You just have to add two integers! Oh, not easy enough? Sure, let’s say that they’re positive as well. Now it should be trivial, right?
Input

The input consists of two lines, each containing a positive integer less than 10^10000

. Oh right…I forgot to mention that the integers can be quite large.

1337
42

Output

One line containing the sum of the two integers.

1379

*/
