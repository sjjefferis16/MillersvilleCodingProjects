using System;
using System.Collections.Generic;

class darts
{
    public static int distance(int x, int y){
        double dis = Math.Pow( ( (Math.Pow(x,2)) + (Math.Pow(y,2)) ) ,0.5);
        dis /= 20;
        dis = Math.Ceiling(dis) - 1;

        switch((int)dis)
        {
            case -1:
                return 10;
                break;
            case 0:
                return 10;
                break;
            case 1:
                return 9;
                break;
            case 2:
                return 8;
                break;
            case 3:
                return 7;
                break;
            case 4:
                return 6;
                break;
            case 5:
                return 5;
                break;
            case 6:
                return 4;
                break;
            case 7:
                return 3;
                break;
            case 8:
                return 2;
                break;
            case 9:
                return 1;
                break;
            default:
                return 0;
                break;
        }
    }

  static void Main() 
  {
    var input = "";

    int T = Convert.ToInt32(Console.ReadLine());

    for(int i = 0; i < T; i++){
        int n = Convert.ToInt32(Console.ReadLine());
        int score = 0;
        for(int j = 0; j < n; j++){
            input = Console.ReadLine();
            string[] tokens = input.Split(' ');
            int X = Convert.ToInt32(tokens[0]);
            int Y = Convert.ToInt32(tokens[1]);
            score += distance(X,Y);
        }
        Console.WriteLine(score);
    }
            
  }    
}


/*
Consider a game in which darts are thrown at a board. The board is formed by 10 circles with radii 20, 40, 60, 80, 100, 120, 140, 160, 180, and 200 (measured in millimeters), centered at the origin. Each throw is evaluated depending on where the dart hits the board. The score is 𝑝 points (𝑝∈{1,2,…,10}) if the smallest circle enclosing or passing through the hit point is the one with radius 20⋅(11−𝑝). No points are awarded for a throw that misses the largest circle. Your task is to compute the total score of a series of 𝑛

throws.
Input

The first line of the input contains the number of test cases 𝑇
, where 1≤𝑇≤10000

. The descriptions of the test cases follow:

Each test case starts with a line containing the number of throws 𝑛
(1≤𝑛≤106). Each of the next 𝑛 lines contains two integers 𝑥 and 𝑦 (−200≤𝑥,𝑦≤200) separated by a space—the coordinates of the point hit by a throw. The sum of 𝑛 across all 𝑇 test cases is at most 221

.
Output

Print the answers to the test cases in the order in which they appear in the input. For each test case print a single line containing one integer—the sum of the scores of all 𝑛

throws.
Sample Input 1 
1
5
32 -39
71 89
-60 80
0 0
196 89

Sample Output 1
29


*/