import java.io.*;
import java.util.Arrays;
import java.lang.*;
import java.util.*;
import java.util.ArrayList;
import java.util.Scanner;

public class AToweringProblem
{
	public static void main(String[] args) 
	{
	    int tower1 = 0, tower2 = 0;
	    String result = "";
		ArrayList<Integer> boxes = new ArrayList<Integer>();
		ArrayList<Integer> tower1AL = new ArrayList<Integer>();

	    Scanner scan = new Scanner(System.in);

		for(int i = 0; i < 6; i++){
			  boxes.add(scan.nextInt());
		}

		tower1 = scan.nextInt();
		tower2 = scan.nextInt();

		Collections.sort(boxes);

		int i = 0;
	    
		for(int x = 0; x != 6; x++){
		 for(int y = 0; y != 6; y++){
		  for(int z = 0; z != 6; z++){
		    if(x != y && x != z && y != z && tower1AL.size() == 0){
		      if(tower1 == boxes.get(x) + boxes.get(y) + boxes.get(z)){
				tower1AL.add(boxes.get(x));
				tower1AL.add(boxes.get(y));
				tower1AL.add(boxes.get(z));
			  } 
		    }
		  }
		 }   
		}
		
		for(int x = 0; x != 3; x++){
		    for(int y = 0; y != boxes.size(); y++){
		        if(tower1AL.get(x) == boxes.get(y)){
		            boxes.set(y, 0);
		            break;
		        }
		    }
		}
		
		Collections.sort(boxes);
		Collections.sort(tower1AL);

		for(int j = 2; -1 != j; j--){
			String s = String.valueOf(tower1AL.get(j));
			result += s + " ";
		}

		for(int j = 5; 2 != j; j--){
			String s = String.valueOf(boxes.get(j));
			result += s + " ";
		}		
        
        System.out.println(result);
	}

}

/*
You’ve been put in charge of an art exhibit from the famous minimalist sculptor J (even his name is minimalist!). 
J’s work involves the careful layout of vertically dispositioned orthogonal parallelpipeds in a set of tapering obelisks — 
in other words, he puts smaller boxes on top of larger boxes. His most recent triumph is called “2 by 3’s Decreasing,” in which he 
has various sets of six boxes arranged in two stacks of three boxes each. One such set is shown below:

J has sent you the art exhibit and it is your job to set up each of the six-box sets at various locations throughout the museum. 
But when the sculptures arrived at the museum, uncultured barbarians (i.e., delivery men) simply dropped each set of six boxes on the floor, 
not realizing the aesthetic appeal of their original layout. You need to reconstruct each set of two towers, but you have no idea which box goes on top of the other! 
All you know is the following: for each set of six, you have the heights of the two towers, and you know that in any tower the largest height box is always on the bottom 
and the smallest height box is on the top. Armed with this information, you hope to be able to figure out which boxes go together before tomorrow night’s grand opening gala.
Input

The input consists of eight positive integers. The first six represent the heights of the six boxes. These values will be given in no particular order and no two will be equal.

The last two values (which will never be the same) are the heights of the two towers.

All box heights will be ≤100

and the sum of the box heights will equal the sum of the tower heights.
Output

Output the heights of the three boxes in the first tower (i.e., the tower specified by the first tower height in the input), then the heights of the three boxes in the second tower. 
Each set of boxes should be output in order of decreasing height. Each test case will have a unique answer.


Sample Input 1 	
12 8 2 4 10 3 25 14

Sample Output 1
12 10 3 8 4 2

Sample Input 2	
12 17 36 37 51 63 92 124

Sample Output 2
63 17 12 51 37 36

*/