using System;

public class QALY 
{
    static void Main(){
    	int years = Convert.ToInt32(Console.ReadLine());
    	int counter = 0;
    	double qlvalue = 0;


    	while( years != counter ){
    		var input = Console.ReadLine();
    		string[] tokens = input.Split(' ');
	    	double i = Convert.ToDouble(tokens[0]) * Convert.ToDouble(tokens[1]);
	    	qlvalue += i;
	    	counter++;
    	}
    	Console.WriteLine(qlvalue);
    }
}
