
import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
import java.util.StringTokenizer; 
import java.text.*;
import java.lang.Math;

public class JackOLanternJuxtaposition
{
    public static void main(String[] args) throws IOException  {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 

    String input = br.readLine();
        
    StringTokenizer str = new StringTokenizer(input); 

        int a = Integer.parseInt(str.nextToken());
        int b = Integer.parseInt(str.nextToken());
        int c = Integer.parseInt(str.nextToken());
        int d = a * b * c;
        
        System.out.println(d);

    }

    
}

/*
Every year, Pumpkin Pete comes up with a couple of different Jack-O’-Lantern ideas for his annual Halloween special. He stacks them up on haystacks for everyone to enjoy and take pictures with. To make sure that there’s a wide variety of displays, he wants to make sure many possible Jack-O’-Lanterns designs are available. He has come up with many eye, nose, and mouth designs and would like to know how many unique designs are possible. He needs your help to set up the displays before the special kicks off!
Input

The input consists of one line which contains three integers. The first, 𝑁
, indicates the number of eye designs. The second, 𝑇, indicates the number of nose designs. The third, 𝑀

, indicates the number of mouth designs.
Output

Output a single line containing the number of different possible Jack-O’-Lantern designs.

Sample Input 1  
3 4 5

Sample Output 1
60

*/