import java.io.*;
import java.util.Arrays;
import java.util.Scanner;

public class AboveAverage
{
	public static void main(String[] args) 
	{
	    int clusters = 0;
	    Scanner scan = new Scanner(System.in);
	    clusters = scan.nextInt();
	    int[] array_Of_Clusters = new int[clusters];
	    
       
	    for(int i = 0; i < clusters; i++ )
	    {
         int numOfStudents = scan.nextInt();
         float percentile = 0, average = 0, averageRatio = 0, score = 0, aboveAve = 0;
	     float[] array_Of_Students = new float[numOfStudents];
	     
         	for(int j = 0; j < numOfStudents; j++){
         		score = scan.nextFloat();
         		array_Of_Students[j] = score;
         		average += score;
         	}
         	average /= numOfStudents;
         	for(int j = 0; j < numOfStudents; j++){
         		if(array_Of_Students[j] > average){
         			aboveAve++;
         		}
         	}
         	averageRatio = aboveAve / numOfStudents;
         	percentile = (averageRatio)*100;

         	System.out.println(String.format("%.3f",percentile) + "%");
	    }

	    
	    scan.close();
	}
}

/*
It is said that 90% of frosh expect to be above average in their class. You are to provide a reality check.
Input

The first line of standard input contains an integer 1≤𝐶≤50
, the number of test cases. 𝐶 data sets follow. Each data set begins with an integer, 𝑁, the number of people in the class (1≤𝑁≤1000). 𝑁 integers follow, separated by spaces or newlines, each giving the final grade (an integer between 0 and 100

) of a student in the class.
Output

For each case you are to output a line giving the percentage of students whose grade is above average, rounded to exactly 3

decimal places.
Sample Input 1 	
5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91

Sample Output 1
40.000%
57.143%
33.333%
66.667%
55.556%

*/
	