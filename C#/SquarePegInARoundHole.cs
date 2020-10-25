using System;
using System.Collections.Generic;

class SquarePegInARoundHole
{

  static void Main() 
  {

    List<int> plots = new List<int>();
    List<double> houseRadii = new List<double>();

    string input = Console.ReadLine();
    string[] tokens = input.Split(' ');
    int N = Convert.ToInt32(tokens[0]);
    int M = Convert.ToInt32(tokens[1]);
    int K = Convert.ToInt32(tokens[2]);
    int toBuild = 0;

    input = Console.ReadLine();
    tokens = input.Split(' ');
    for(int i = 0; i < N; i++)
    {
        plots.Add( Convert.ToInt32(tokens[i]) );
    }

    input = Console.ReadLine();
    tokens = input.Split(' ');
    for(int i = 0; i < M; i++)
    {
        houseRadii.Add( Convert.ToInt32(tokens[i]) );
    }

    input = Console.ReadLine();
    tokens = input.Split(' ');
    for(int i = 0; i < K; i++)
    {
        double l = Convert.ToDouble(tokens[i]) / 2;
        double Radi =  Math.Pow(l, 2) + Math.Pow(l, 2);
        double Radii = Math.Pow(Radi, 0.5);
        houseRadii.Add(Radii);
    }
    plots.Sort();
    houseRadii.Sort();

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M+K; j++){
            if(plots[i] > houseRadii[j] && houseRadii[j] != 0 ){
                toBuild++;
                plots[i] = 0;
                houseRadii[j] = 0;
                plots.Sort();
                houseRadii.Sort();
            }
        }
    
    }
    Console.WriteLine(toBuild);
     
  }    
}

/*
Mr. Johnson likes to build houses. In fact, he likes it so much that he has built a lot of houses that he has not yet placed on plots. He has recently acquired 𝑁

circular plots. The city government has decided that there can be only one house on each plot, and a house cannot touch the boundary of the plot.

Mr. Johnson has 𝑀
circular houses and 𝐾

square houses. Help him figure out how many of the plots he can fill with houses so that he can get some money back on his investments.
Input

The first line of input consists of 3
space-separated integers 𝑁, 𝑀, and 𝐾. The second line contains 𝑁 space-separated integers, where the 𝑖th integer denotes the radius 𝑟𝑖 of the 𝑖th plot. The third line contains 𝑀 space-separated integers, where the 𝑖th integer denotes the radius 𝑟𝑖 of the 𝑖th circular house. The fourth line contains 𝐾 space-separated integers, where the 𝑖th integer denotes the side length 𝑠𝑖 of the 𝑖th

square house.
Output

Output the largest number of plots he can fill with houses.
Limits

    1≤𝑁,𝑀,𝐾,𝑟𝑖,𝑠𝑖≤100

Sample Input 1  
5 3 3
1 2 6 7 8
2 6 7
4 8 9

Sample Output 1
3
*/