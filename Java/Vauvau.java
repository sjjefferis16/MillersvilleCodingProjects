
import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
import java.util.StringTokenizer; 
import java.text.*;

public class Main
{
    public static void main(String[] args) throws IOException  {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
    StringTokenizer dogCycles = new StringTokenizer(br.readLine()); 
    StringTokenizer menTimes = new StringTokenizer(br.readLine()); 
    
    String input = null;
    int dog_A_Angry = Integer.parseInt(dogCycles.nextToken()); 
    int dog_A_Calm = Integer.parseInt(dogCycles.nextToken());
    int dog_B_Angry = Integer.parseInt(dogCycles.nextToken());
    int dog_B_Calm = Integer.parseInt(dogCycles.nextToken());

        for(int i = 0; i < 3; i++){
            int Man = Integer.parseInt(menTimes.nextToken()); 
            cycles(Man, dog_A_Angry, dog_A_Calm, dog_B_Angry, dog_B_Calm);
        }

    }

    public static void cycles(int Man, int dog_A_Angry, int dog_A_Calm, int dog_B_Angry, int dog_B_Calm){
        int dogA = dog_A_Angry + dog_A_Calm;
        int dogB = dog_B_Angry + dog_B_Calm;
        dogA = Man % dogA;
        dogB = Man % dogB;

        if(dogA <= dog_A_Angry && dogB <= dog_B_Angry){
            System.out.println("both");
            return;
        } 
        if( (dogA <= dog_A_Angry || dogB <= dog_B_Angry) && (dogA != 0 && dogB != 0) ){
            System.out.println("one");
            return;
        } else {
            System.out.println("none");
            return;
        }
    }
}

/*
In a nearby village, the postman, milkman and garbage man face the same problem morning after morning: house 18. House 18 is guarded by 
two dogs that often cause problems. What they don’t know is that the dogs’ behaviour is completely predictable.

When the day starts, one dog is aggressive for 𝐴
minutes and is then calm for 𝐵 minutes. Similarly, the other dog is aggressive for 𝐶 minutes, then calm for 𝐷

minutes. Both dogs repeat their behaviours indefinitely, starting a new aggressive period after the calm period, then another calm period etc.

Given the arrival times of the postman, milkman and garbage man, determine how many dogs (none, one or both) attack each of them.
Input

The first line of input contains the integers 𝐴
, 𝐵, 𝐶 and 𝐷

.

The second line contains the integer 𝑃
, 𝑀 and 𝐺, the minute in the day during which the postman, milkman and garbage man arrive at house 18. For example, if 𝑃

is 3, it should be interpreted as "the postman arrived sometime during the third minute in the day".

All numbers in the input will be between 1 and 999.
Output

Output should consist of three lines; each containing ’both’, ’one’ or ’none’, depending on how many dogs attack each of our heroes.

Sample Input 1  
2 2 3 3
1 3 4

Sample Output 1
both
one
none

Sample Input 2  
2 3 4 5
4 9 5

Sample Output 2
one
none
none

*/