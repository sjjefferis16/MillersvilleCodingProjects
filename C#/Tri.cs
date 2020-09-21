/******************************************************************************

                            Little Mirko wrote into his math notebook an equation containing three positive integers, the equals sign and one of the four basic arithmetic operations (addition, subtraction, multiplication and division).

During another class, his friend Slavko erased the equals sign and the operations from Mirko’s notebook. Help Mirko by reconstructing the equation from the three integers
Input

The first line of input contains three integers less than 100, separated by spaces. The input data will guarantee that a solution, although not necessarily unique, will always exist.
Output

On a single line, output a valid equation containing the three integers (in the same order), an equals sign and one of the four operations. If there are multiple solutions, output any of them.

*******************************************************************************/

using System;
class Tri {
  static void Main() 
    {       var input = Console.ReadLine();
            string finalvalue = "";
            string[] tokens = input.Split(' ');
            int a = Convert.ToInt32(tokens[0]);
            int b = Convert.ToInt32(tokens[1]);
            int c = Convert.ToInt32(tokens[2]);
           
           if(a == b + c){
               Console.WriteLine(a + "=" + b + "+" + c);
               return;
           }
           if(a == b - c){
               Console.WriteLine(a + "=" + b + "-" + c);
               return;
           }
           if(a == b * c){
               Console.WriteLine(a + "=" + b + "*" + c);
               return;
           }
           if(a == b / c){
               Console.WriteLine(a + "=" + b + "/" + c);
               return;
           }
           if(a + b == c){
               Console.WriteLine(a + "+" + b + "=" + c);
               return;
           }
           if(a - b == c){
               Console.WriteLine(a + "-" + b + "=" + c);
               return;
           }
           if(a * b == c){
               Console.WriteLine(a + "*" + b + "=" + c);
               return;
           }
           if(a / b == c){
               Console.WriteLine(a + "/" + b + "=" + c);
               return;
           }
      
  }
}