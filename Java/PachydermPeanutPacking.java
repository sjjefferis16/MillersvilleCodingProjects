import java.io.*;
import java.util.Arrays;
import java.util.Scanner;

public class PachydermPeanutPacking
{
	public static void main(String[] args) 
	{
	    int box_inputs = 0;
	    Scanner scan = new Scanner(System.in);
	    box_inputs = scan.nextInt();

	    while(box_inputs != 0)
	    {
	    	box[] array_Of_Box = new box[box_inputs];
	    	for(int i = 0; i < box_inputs; i++)
	    	{
	    		array_Of_Box[i] = new box();
	    		array_Of_Box[i].setData(scan.nextDouble(),scan.nextDouble(),scan.nextDouble(),scan.nextDouble(),scan.next());
	    	}

	    	int peanut_nums = scan.nextInt();

	    	for(int i = 0; i < peanut_nums; i++)
	    	{
	    		String locations = "floor";
	    		double x = scan.nextDouble();
	    		double y = scan.nextDouble();
	    		String size = scan.next();
	    		for(int j = 0; j < array_Of_Box.length; j++)
	    		{
	    			if(
	    				array_Of_Box[j].x1 <= x &&
	    				array_Of_Box[j].y1 <= y &&
	    				array_Of_Box[j].x2 >= x &&
	    				array_Of_Box[j].y2 >= y 
	    				)
	    			{
	    				if(size.equals(array_Of_Box[j].size))
	    				{
	    					locations = "correct";
	    				}
	    				else
	    				{
	    					locations = array_Of_Box[j].size;
	    				}
	    			}
	    		}
	    		System.out.println(size +" " +locations);
	    	}
	    	System.out.println("\n ");
	    	box_inputs = scan.nextInt();
	    }

	    scan.close();
	}
	
	
    static class box {
    double x1 = 0, y1=0, x2= 0, y2 = 0;
    String size = "";
        public void setData(double x1, double y1, double x2, double y2, String size){
            this.x1 = x1;
            this.y1 = y1;
            this.x2 = x2;
            this.y2 = y2;
            this.size = size;
        }
    }
}