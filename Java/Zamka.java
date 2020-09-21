/******************************************************************************

Zamka

The impossible has happened. Bear G. has fallen into his own trap. Lured by a delicious box of Domaćica, without even thinking, he rushed and fell into his trap. In order to get out of the trap, he must solve the following task with your help. You are given three integers 𝐿
, 𝐷 and 𝑋

    determine the minimal integer 𝑁

such that 𝐿≤𝑁≤𝐷 and the sum of its digits is 𝑋

determine the maximal integer 𝑀
such that 𝐿≤𝑀≤𝐷 and the sum of its digits is 𝑋

Bear will be able to escape from the trap if he correctly determines numbers 𝑁
and 𝑀. The numbers 𝑁 and 𝑀

will always exist.
Input

The first line of input contains the integer 𝐿
(1≤𝐿≤10000), the number from the task. The second line of input contains the integer 𝐷 (1≤𝐷≤10000, 𝐿≤𝐷), the number from the task. The third line of input contains the integer 𝑋 (1≤𝑋≤36

), the number from the task.

1
100
4

Output

The first line of output must contain the integer 𝑁
from the task. The second line of output must contain the integer 𝑀 from the task.

4
40

*******************************************************************************/
import java.io.*;
public class Zamka
{
	public static void main(String[] args) throws IOException
	{
	    BufferedReader consoleInput = new BufferedReader(new InputStreamReader(System.in));
	    int low = Integer.parseInt(consoleInput.readLine());
	    int high = Integer.parseInt(consoleInput.readLine());
	    int sum = Integer.parseInt(consoleInput.readLine());
		int finals = 0;
		
		low = minFunction(low,sum);
		high = maxFunction(high, sum);
		System.out.println(low);
		System.out.println(high);
	}
	
	public static int minFunction(int lo, int su)
	{
	    int sums = 0;
	    if(sumcalc(lo) != su)
	    {
    	    while(sums != su)
    	    {
    	        lo++;
    	        sums = sumcalc(lo);
    	    }
	    }
	    else
	    {
	    	return lo;
	    }
	    return lo;
	}
	public static int maxFunction(int hi, int su)
	{
	    int sums = 0;
	    if(sumcalc(hi) != su)
	    {
    	    while(sums != su)
    	    {
    	        hi--;
    	        sums = sumcalc(hi);
    	        
    	    }
	    }
	    else 
	    {
	    	return hi;
	    }
	    return hi;
	}
	
	public static int sumcalc (int inputs)
	{
	    int finals = 0;
	    while(inputs != 0)
	    	{
    		    finals += (inputs % 10);
    		    inputs = (inputs - (inputs % 10))/10;
    		}
    		return finals;
	}
}

