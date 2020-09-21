import java.io.*;
import java.util.Arrays;
import java.util.Scanner;

public class Splat
{
	public static void main(String[] args) 
	{
	    int painting_inputs = 0;
	    Scanner scan = new Scanner(System.in);
	    painting_inputs = scan.nextInt();
	    
	    
	    for(int i = 0; i < painting_inputs; i++ )
	    {
	    int circle_inputs = Integer.parseInt(scan.next());
	    circles[] array_Of_Circles = new circles[circle_inputs];
	        for(int j = 0; j < circle_inputs; j++)
	        {
	            array_Of_Circles[j] = new circles();
	            array_Of_Circles[j].setData(scan.nextDouble(),scan.nextDouble(),
	            scan.nextDouble(), scan.next());
	        }
	    
	    
	    int query_nums = Integer.parseInt(scan.next());
		    for(int z = 0; z < query_nums; z++ )
		    {
		       String curColor = "white";
		       double x = scan.nextDouble();
		       double y = scan.nextDouble();
		       for(int j = 0; j < array_Of_Circles.length ; j++){
		           double dx =array_Of_Circles[j].returnX();
		           double dy =array_Of_Circles[j].returnY();
		           double d = Math.hypot(dx - x, dy - y);
		           double r = Math.sqrt(array_Of_Circles[j].returnV() / Math.PI);
		           if(d <= r){
		               curColor = array_Of_Circles[j].returnColor();
		           }
		       }
		       System.out.println(curColor);
		    }
	    }

	    scan.close();
	}
	
	
    static class circles {
    double x = 0, y=0, v= 0;
    String color = "";
        public void setData(double a, double b, double c, String d){
            x = a;
            y = b;
            v = c;
            color = d;
        }
        public double returnX(){
        	return x;
        }
        public double returnY(){
        	return y;
        }
        public double returnV(){
        	return v;
        }
        public String returnColor(){
        	return color;
        }
    }
}

/*

Splat

The artist Jackson Pollock used to create works of art by, among other things, dripping paint onto the canvas. He died in 1956, but, if he were alive today, he would probably appreciate some computational help in planning out his masterpieces.

We start with a large, white canvas. We let drops of paint fall onto the canvas one after another, letting each one dry before the next. Thus, successive drops paint over the color left by previous drops. When a drop of paint hits the canvas at point 𝑝
, it spreads out to form a circle of uniform thickness centered at 𝑝. A drop of volume 𝑣 will spread out to a circle of radius 𝑟 where 𝑣=𝜋𝑟2. Since underlying paint is already dry, all points a distance of 𝑟 or less from 𝑝

will be colored with the new drop’s color. Your job is to determine the final color of various points on the painting.

Input
*************
Input begins with an integer 1≤𝑐≤100
indicating the number of painting descriptions which follow. Each painting description starts with an integer 1≤𝑛≤100 
giving the number of paint drops that will be applied to the painting. This is followed by 𝑛 lines, each starting with 
three real numbers 𝑋, 𝑌, and 𝑉 and a color. The location (𝑋,𝑌) is the location of the drop, and 𝑉 is its paint volume.
the color is given as a string with 1 to 20 characters (a–z, either case). Each painting description is followed by a 
series of queries. The query list starts with an integer 1≤𝑚≤100, giving the number of queries. This is followed by 𝑚 lines, 
each containing a the 𝑋 and 𝑌 coordinates of the query. All real values are in the range [0,1000] with at most 3

digits after the decimal point. All queries fall somewhere on the canvas.

1
3
0 0 4 blue
2 3 8 red
4 3 10 green
3
1 0
2 2
6 6

Output
***************
For each query, output the color of the paint at that point on the canvas.
blue
red
white


*/
