using System;

public class POT 
{
    static void Main(){
    	int noi = Convert.ToInt32(Console.ReadLine());
    	int counter = 0;
    	int finalvalue = 0;


    	while( noi != counter ){
    		int val = Convert.ToDouble(Console.ReadLine());
    		for(int i=0; i != counter; i++){
	    		int sum = val * val;
	    	}
	    	finalvalue += sum;
	    	counter++;
    	}
    	Console.WriteLine(finalvalue);
    }
}
