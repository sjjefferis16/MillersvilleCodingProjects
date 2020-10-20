using System;
using System.Collections.Generic;

public struct coords
{ 
    public int x, y;
    public coords(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
}

class Jabuke
{

    public static float areaOfTriangle(int x1, int y1,int x2, int y2,int x3, int y3)
    {
        float absarea = Math.Abs(x1 *(y2-y3) + x2 * (y3 - y1) + x3 *(y1 - y2));
       return (absarea / 2);
    }

  static void Main() 
  {
    var input = "";

    List<coords> listofCords = new List<coords>();
    int appleTreesOnLand = 0;

    for(int i = 0; i < 3; i++)
    {
        input = Console.ReadLine();
        string[] tokens = input.Split(' ');
        int X = Convert.ToInt32(tokens[0]);
        int Y = Convert.ToInt32(tokens[1]);

        coords xy = new coords(X,Y);
        listofCords.Add(xy);

    }

    int appleTrees = Convert.ToInt32(Console.ReadLine());
    float areaOfLand = areaOfTriangle(listofCords[0].x,listofCords[0].y,listofCords[1].x,listofCords[1].y,listofCords[2].x,listofCords[2].y);           

    for(int i = 0; i < appleTrees; i++)
    {
        input = Console.ReadLine();
        string[] tokens = input.Split(' ');
        int px = Convert.ToInt32(tokens[0]);
        int py = Convert.ToInt32(tokens[1]);  

        float p1 = areaOfTriangle(listofCords[0].x,listofCords[0].y,listofCords[1].x,listofCords[1].y,px,py);
        float p2 = areaOfTriangle(listofCords[0].x,listofCords[0].y,listofCords[2].x,listofCords[2].y,px,py);
        float p3 = areaOfTriangle(listofCords[2].x,listofCords[2].y,listofCords[1].x,listofCords[1].y,px,py);
        if(areaOfLand == p1 + p2 +p3)
        {
            appleTreesOnLand++;
        }         
    }

    Console.WriteLine(String.Format("{0:0.0}", areaOfLand));
    Console.WriteLine(appleTreesOnLand);
            
  }    
}

/*
Ante bought a piece of land. The land contains N apple trees, but his piece is triangular and it is not easy for him to determine which apple trees belong to him.

Your program will be given the coordinates of the vertices of the triangle forming Ante’s piece, and the coordinates of all apple trees. Determine the area of land 
belonging to Ante, and the number of trees belonging to him. We consider apple trees on the very border of his piece to belong to him.

The area of a triangle with vertices (𝑥𝐴,𝑦𝐴),(𝑥𝐵,𝑦𝐵)
and (𝑥𝐶,𝑦𝐶)

is given by the following formula:
|𝑥𝐴(𝑦𝐵−𝑦𝐶)+𝑥𝐵(𝑦𝐶−𝑦𝐴)+𝑥𝐶(𝑦𝐴−𝑦𝐵)| / 2

Input

The first three lines contain the coordinates of the vertices of the triangle.

The following line contains the integer 𝑁
(1≤𝑁≤100)

, the number of apple trees.

Each of the following 𝑁

lines contains the coordinates of one apple tree.

All coordinate are pairs of positive integers less than 1000, separated by a space.
Output

Output the area of land belonging to Ante on the first line, with exactly one digit after the decimal point.

Output the number of trees belonging to Ante on the second line.

Sample Input 3
2 6
5 1
7 8
5
1 4
3 5
6 4
6 5
4 7

Sample Output 3
15.5
2


*/