using System;

public class QALY 
{
    static void Main(){
    	int years = Console.ReadLine();
    	int counter = 0;
    	long qlvalue = 0;
    	//float[] quality = new float[years];
    	//float[] length = new float[years];


    	while( years != counter ){
    		var input Console.ReadLine();
	    	var tokens = input.Replace(Enviroment.NewLine, " ").Split(" ");
	    	int i = 1;

	    	foreach (var t in tokens){
	    		i *= t;
	    	}
	    	qlvalue += i;
	    	counter++;
    	}
    	return qlvalue;
    }
}
