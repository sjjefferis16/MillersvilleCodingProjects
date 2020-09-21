using System;

public class PieceofKake 
{
    static void Main(){
        var input = Console.ReadLine();
        int finalvalue = 0;
        string[] tokens = input.Split(' ');
        int n = Convert.ToInt32(tokens[0]);
        int h = Convert.ToInt32(tokens[1]);
        int v = Convert.ToInt32(tokens[2]);
        if (h < n-h){
            h = n-h;
        }
        if (v < n-v){
            v = n-v;
        }
        finalvalue = 4 * h * v;
        Console.WriteLine(finalvalue);
    }
}