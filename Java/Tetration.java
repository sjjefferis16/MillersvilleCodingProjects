import java.io.*;
import java.util.Scanner;
import java.lang.Math;

public class Tetration
{
    public static void main(String[] args) 
	{
	    Scanner scan = new Scanner(System.in);
	    double input = 0, ans = 0;
	    input = scan.nextFloat();
	    ans = Math.pow(input, 1/input);
	    System.out.println(ans);

    }
}
