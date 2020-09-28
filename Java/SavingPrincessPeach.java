
import java.io.*;
import java.util.Arrays;
import java.util.Scanner;

public class SavingPrincessPeach
{
	public static void main(String[] args) 
	{
	    int obsticles = 0, observed_obsticles = 0, seen = 0;
	    Scanner scan = new Scanner(System.in);
	    obsticles = scan.nextInt();
	    observed_obsticles = scan.nextInt();
	    int[] obsticles_locations = new int[observed_obsticles];

	    for(int i = 0; i < observed_obsticles; i++)
	    {
	    	obsticles_locations[i] = scan.nextInt();
	    }

	    scan.close();
        
        if(obsticles_locations.length != 0)
        { 
           for(int ob_pos = 0; ob_pos < obsticles; ob_pos++)
           {
               boolean not_observed = true;
               for(int observe_index = 0; observe_index < obsticles_locations.length; observe_index++)
               {
                   if(ob_pos == obsticles_locations[observe_index]){
                   not_observed = false;
                   }
               }
               if(not_observed){
    	    		System.out.println(Integer.toString(ob_pos));
               }
               else{
                   seen++;
               }
           } 
        }
        else
        {
            for(int ob_pos = 0; ob_pos < obsticles; ob_pos++)
            {
    	    System.out.println(Integer.toString(ob_pos));
            }
        }
	    System.out.println("Mario got " + Integer.toString(seen) +" of the dangerous obstacles.");
	}
}

/*

Saving Princess Peach

Mario is trying to save his beloved Princess Peach! However, in order to do that, Mario must jump over many obstacles in order to save Princess Peach. Thus, he makes a grand plan to infiltrate Bowser’s castle.

But first, he needs to practice. His brother Luigi makes a practice course for Mario to train on. On this course, Mario practices looking for all the possible obstacles that could take away his life. But Mario is sloppy and misses some obstacles, counts some obstacles more than once, and generally screws up the order of the obstacles he does find when he lists them!

Write a program so that Luigi can tell his brother which obstacles he’s missed!
Input

The first line contains 2
values. The first value 𝑁 (0<𝑁≤100) is the total number of obstacles. Obstacles are numbered 0…𝑁−1. The second value 𝑌 (0≤𝑌≤200) represents how many obstacles Mario said he’s found on his practice run. The next 𝑌 lines each list a single integer 𝑘 (0≤𝑘<𝑁

) which is the number of an obstacle Mario says he’s found.

20 4
5
10
12
16

Output

First, output the obstacles that Mario missed in increasing order, each on a separate line. On the last line, print Mario got X of the dangerous obstacles. where 𝑋
is the number of distinct obstacles Mario found

0
1
2
3
4
6
7
8
9
11
13
14
15
17
18
19
Mario got 4 of the dangerous obstacles.

*/