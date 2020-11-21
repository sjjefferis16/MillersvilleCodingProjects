using System;
using System.Collections.Generic;
using System.Linq;

public struct values
{ 
    public int val;
    public string str;
    public values(int _val, string _str)
    {
        val = _val;
        str = _str;
    }
}

class CalculatingDartScores {
  static void Main() {
            int score = Convert.ToInt32(Console.ReadLine());
            List<values> listofValues = new List<values>();

            int d = 0;
            for(int i = 1; i < 21; i++){
                values v = new values(i, ("single " + (i).ToString() ) );
                listofValues.Add(v);
            }
            
            for(int i = 11; i < 21; i++){
                values v = new values((i * 2), ("double " + (i).ToString() ) );
                listofValues.Add(v);
            }
            
            for(int i = 7; i < 21; i++){
                if(i != 8 && i != 10 && i != 12){
                values v = new values((i * 3), ("triple " + (i).ToString() ) );
                listofValues.Add(v);
                }
            }

            int a = 42, b = 42, c = 42;
            while(a == 42){
                for(int x = 0; x < 41; x++){
                    for(int y = 0; y < 41; y++){
                        for(int z = 0; z < 41; z++){
                            int ps = listofValues[x].val + listofValues[y].val + listofValues[z].val;
                            if(ps == score){
                                a = x;
                                b = y;
                                c = z;
                            }
                            
                        }
                    }
                }
                break;
            }

            if(a == 42){
                if(score == 1){
                Console.WriteLine("single 1");
                }
                else if (score == 2){
                Console.WriteLine("single 2");
                } else {
                Console.WriteLine("impossible");
                }
            } else{
                Console.WriteLine(listofValues[a].str);
                Console.WriteLine(listofValues[b].str);
                Console.WriteLine(listofValues[c].str);
            }
            
  }
  
}

/*
In a game of darts a player throws darts at a board consisting of 20 different sections labelled 1 to 20. When the dart hits section 𝑖 the player scores 𝑖 points. Each section also contains a double area and a triple area. When the dart hits the double area of section 𝑖 the player scores 2𝑖 points, and when the dart hits the triple area the player scores 3𝑖 points, instead of 𝑖 points. When throwing three darts, the player can therefore score a total of at most 180 points by throwing all three darts in the triple area of section 20.

Given a target score, output at most three throw scores such that their sum is equal to the given target score. Note that the centre of the dartboard, which is usually called bullseye, is not taken into account is this problem.
Input

The input consists of a single integer 𝑛
(1≤𝑛≤180

), the target score.
Output

If the target score can be achieved, output at most three lines, each of the form “single 𝑑
”, “double 𝑑”, or “triple 𝑑”, where 𝑑 is an integer between 1 and 20 (inclusive), such that the sum of these scores is equal to 𝑛

. Otherwise, output “impossible”. If there are multiple valid answers you may output any of them.
Sample Input 1  
180

Sample Output 1
triple 20
triple 20
triple 20

Sample Input 2  
96

Sample Output 2
triple 19
double 15
single 9

Sample Input 3  
27

Sample Output 3
triple 9

*/