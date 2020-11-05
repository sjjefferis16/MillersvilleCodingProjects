using System;
using System.Collections.Generic;

class DaylightSavingsTime
{
  static void Main() 
  {
    var input = "";
    
    int count = Convert.ToInt32(Console.ReadLine()), fb = 0;
        for(int i = 0; i < count; i++)
        {
            input = Console.ReadLine();
            string[] tokens = input.Split(' ');
            if(tokens[0] == "F"){
                fb = 1;
            } else {
                fb = -1;
            }
            int shiftInt = fb * Convert.ToInt32(tokens[1]);
            int time = ( Convert.ToInt32(tokens[2]) * 60 ) + Convert.ToInt32(tokens[3]);
            time += shiftInt;
            if(time >= 1440){
                time -= 1440;
            } 
            if (time < 0){
                time += 1440;
            }
            int minutes = time % 60;
            time -= minutes;
            int hours = time / 60;

            Console.WriteLine(hours.ToString() + " " + minutes.ToString());
        }
    }
}

/*
Daylight Saving Time (DST) is the practice of advancing clocks forward during the summer time, usually by one hour, to gain an extra hour of sunlight in the evenings, 
at the cost of darker mornings. Countries and regions have changed their DST practices over the years, sometimes changing the dates they switch the clocks, and other times 
changing the amount of minutes the clock changes by.

This creates a real hassle. Sleep cycles are disrupted, operating systems and other computer software needs to follow special rules, 
and sometimes people end up late to work because of it.

To help make this easier on people, you’ve decided to make a computer program which calculates the new time after an adjustment.
Input

Input consists of a single integer 𝑁
(1≤𝑁≤500

) indicating the number of test cases that follow. Each test case consists of a single line with the following information:

    a single character to indicate whether the clock will roll forwards (F) or backwards (B),

    an integer 𝐷

(0≤𝐷≤120

) indicating the number of minutes to change by,

an integer 𝐻
(0≤𝐻<24

) indicating the hour the clock currently reads (without leading zeros), and

an integer 𝑀
(0≤𝑀<60

    ) indicating the minutes the clock currently reads.

Output

For each test case, give the time (hours in 24
-hour format, followed by a space, followed by minutes) after the adjustment has occurred, one test case per line. You may report the numbers without leading zeros.

Sample Input 1  
1
F 60 13 20

Sample Output 1
14 20

Sample Input 2  
7
B 45 9 0
F 20 23 50
B 30 0 5
B 60 2 0
F 0 12 0
F 15 17 45
B 0 0 0

Sample Output 2
8 15
0 10
23 35
1 0
12 0
18 0
0 0

*/