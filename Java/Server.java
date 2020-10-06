import java.io.*;
import java.util.Arrays;
import java.util.Scanner;

public class Server
{
	public static void main(String[] args) 
	{
	    int taskCount = 0, timeBudget = 0, addedTime=0, taskComp = 0;
	    Scanner scan = new Scanner(System.in);
	    taskCount = scan.nextInt();
	    timeBudget = scan.nextInt();
	    int[] array_taskCount = new int[taskCount];

		while(timeBudget > addedTime && taskCount != taskComp)
	    {
         addedTime += scan.nextInt();
         taskComp++;
	    }
        if(addedTime > timeBudget)
        {
	    taskComp--;
        }

	    System.out.println(taskComp);

    }
}
