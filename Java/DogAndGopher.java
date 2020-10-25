
import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
import java.util.StringTokenizer; 
import java.text.*;
import java.lang.Math;

public class DogAndGopher
{
	public static void main(String[] args) throws IOException  {
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
    StringTokenizer str = new StringTokenizer(br.readLine()); 
    
    String input = null;
    double Gopher_x = Double.parseDouble(str.nextToken()); 
    double Gopher_y = Double.parseDouble(str.nextToken());
    double Dog_x = Double.parseDouble(str.nextToken()); 
    double Dog_y = Double.parseDouble(str.nextToken());
    double x = 0, y = 0, safeHoleX = 100001, safeHoleY = 0, gopher_distance = 0 ,dog_distance = 0, d = 0;
    

        while ((input = br.readLine()) != null ) 
        {
            str = new StringTokenizer(input); 
            x = Double.parseDouble(str.nextToken()); 
            y = Double.parseDouble(str.nextToken());
            gopher_distance = Math.pow(Math.pow( (x - Gopher_x) , 2) + Math.pow( (y - Gopher_y) , 2), 0.5);
            dog_distance = (Math.pow(Math.pow( (x - Dog_x) , 2) + Math.pow( (y - Dog_y) , 2), 0.5)) / 2;
            
            if(gopher_distance < dog_distance){
                safeHoleX = x;
                safeHoleY = y;
            }
        }
        if(safeHoleX == 100001){
        System.out.println("The gopher cannot escape.");
        } else {
        DecimalFormat three = new DecimalFormat("0.000");
        String x_val = three.format(safeHoleX);
        String y_val = three.format(safeHoleY);
        System.out.println("          The gopher can escape through the hole at (" + x_val + ","+ y_val +").");
        }
	}
}

/*
A large field has a dog and a gopher. The dog wants to eat the gopher, while the gopher wants to run to safety through one 
of several gopher holes dug in the surface of the field.

Neither the dog nor the gopher is a math major; however, neither is entirely stupid. The gopher decides on a particular gopher hole and 
heads for that hole in a straight line at a fixed speed. The dog, which is very good at reading body language, anticipates which hole the gopher has chosen, 
and heads at double the speed of the gopher to the hole, where it intends to gobble up the gopher. If the dog reaches the hole first, the gopher gets gobbled; otherwise, the gopher escapes.

You have been retained by the gopher to select a hole through which it can escape, if such a hole exists.
Input

The first line of input contains four real numbers: the (𝑥,𝑦)
coordinates of the gopher followed by the (𝑥,𝑦) coordinates of the dog. Subsequent lines of input each contain two real numbers: the (𝑥,𝑦)

coordinates of a gopher hole. All coordinates are in metres, with exactly three digits after the decimal point.

There are not more than 1000
gopher holes and all coordinates are between −10000 and +10000

.
Output

Your output should consist of a single line. If the gopher can escape the line should read “The gopher can escape through the hole at (𝑥
,𝑦

).” identifying the appropriate hole.

Otherwise the output line should read “The gopher cannot escape.” If the gopher may escape through more than one hole, any one will do. 
If the gopher and dog reach the hole at the same time, the gopher escapes successfully.

Sample Input 1  
1.000 1.000 2.000 2.000
1.500 1.500

Sample Output 1
The gopher cannot escape.

Sample Input 2  
2.000 2.000 1.000 1.000
1.500 1.500
2.500 2.500

Sample Output 2
          The gopher can escape through the hole at (2.500,2.500).

*/