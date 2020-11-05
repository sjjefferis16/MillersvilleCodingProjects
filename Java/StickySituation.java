import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
import java.util.StringTokenizer; 
import java.text.*;

public class StickySituation
{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer str = new StringTokenizer (br.readLine());
        
        int stickCount = 0;
        stickCount = Integer.parseInt(str.nextToken());
        StringTokenizer str1 = new StringTokenizer (br.readLine());
        long[] sticks = new long[stickCount];

        sticks[0] = Long.parseLong(str1.nextToken());
        sticks[1] = Long.parseLong(str1.nextToken());
        for(int i = 2; i < stickCount; i++){
            sticks[i] = Long.parseLong(str1.nextToken());
            for(int a = i-1; a > 0; a--){
                for(int b = a - 1; b > -1; b--){
                    stickCalc(sticks[a],sticks[b],sticks[i]);
                }
            }
        }
        
        System.out.println("impossible");
    }
    public static void stickCalc(long a, long b, long c){
        if(a + b > c && b + c > a && a + c > b){
                    System.out.println("possible");
                    System.exit(0); 
        }
    }
}

/*
While on summer camp, you are playing a game of hide-and-seek in the forest. You need to designate a “safe zone”, where, if the players manage to sneak there without being detected, they beat the seeker. It is therefore of utmost importance that this zone is well-chosen.

You point towards a tree as a suggestion, but your fellow hide-and-seekers are not satisfied. After all, the tree has branches stretching far and wide, and it will be difficult to determine whether a player has reached the safe zone. They want a very specific demarcation for the safe zone. So, you tell them to go and find some sticks, of which you will use three to mark a non-degenerate triangle (i.e. with strictly positive area) next to the tree which will count as the safe zone. After a while they return with a variety of sticks, but you are unsure whether you can actually form a triangle with the available sticks.

Can you write a program that determines whether you can make a triangle with exactly three of the collected sticks?
Input

The first line contains a single integer 𝑁
, with 3≤𝑁≤20000, the number of sticks collected. Then follows one line with 𝑁 positive integers, each less than 260

, the lengths of the sticks which your fellow campers have collected.
Output

Output a single line containing a single word: possible if you can make a non-degenerate triangle with three sticks of the provided lengths, and impossible if you can not.
Sample Input 1 	
3
1 1 1

Sample Output 1
possible

Sample Input 2 	
5
3 1 10 5 15

Sample Output 2
impossible

*/