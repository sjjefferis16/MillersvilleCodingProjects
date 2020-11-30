using System;
using System.Collections.Generic;
using System.Linq;

class DiagonalCut {
  static void Main() {
            string[] tokens = Console.ReadLine().Split(' ');
            ulong u1 = Convert.ToUInt64(tokens[0]);
            ulong u2 = Convert.ToUInt64(tokens[1]);
            ulong l = 0, g = 0, p = 0;

            if(u1 < u2){
                l = u1;
                g = u2;
            } else {
                l = u2;
                g = u1;
            }
            
            ulong gcf = gcfFun(l,g);

            l /= gcf;
            g /= gcf;
            
            if(l % 2 == 0 || g % 2 == 0){
                gcf = 0;
            }
            Console.WriteLine(gcf);

            
  }
  public static ulong gcfFun (ulong num1, ulong num2){
        if(num2 != 0){
            return gcfFun(num2, num1 % num2);
        } else{
            return num1;
        }
    }
    
}

/*
Quido and Hugo are making a chocolate cake. The central ingredient of the cake is a large chocolate bar, 
lying unwrapped on the kitchen table. The bar is an 𝑀×𝑁 rectangular grid of chocolate blocks. All of the 𝑀𝑁

blocks are rectangles of identical shape and size. The chocolate bar is of top quality and the 
friends want to eat part of it, before the rest is used in the cake.

“OK,” says Quido, “let’s divide the whole bar into two triangular chunks by a straight diagonal cut 
from its upper-left corner to its lower-right corner. We will then eat all of the blocks which have been cut exactly in half, 
into two equal-area pieces. You will eat one half and I will eat the other half of each such block. All other blocks, that is, 
the blocks which are either uncut or cut into two parts of different sizes, will go directly into the cake. Of course, we will 
make sure the cut is perfectly precise.

Let’s see how much chocolate we get to eat!”
Input

The input consists of two space-separated integers 𝑀
and 𝑁 given on a single line, (where 1≤𝑀,𝑁≤1018). The numbers 𝑀 and 𝑁

denote the number of blocks in one column and in one row, respectively, in the chocolate bar.
Output

Print the number of blocks of the chocolate bar which are cut into exactly two pieces of equal area.

Sample Input 1  
6 10
Sample Output 1
2

Sample Input 2  
75206452536745713 10322579177493903

Sample Output 2
40318322589

*/