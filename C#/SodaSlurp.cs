/******************************************************************************

Tim is an absolutely obsessive soda drinker, he simply cannot get enough. Most annoyingly though, he almost never has any money, so his only obvious legal way to obtain more soda is to take the money he gets when he recycles empty soda bottles to buy new ones. In addition to the empty bottles resulting from his own consumption he sometimes find empty bottles in the street. One day he was extra thirsty, so he actually drank sodas until he couldn’t afford a new one.
Input

Three non-negative integers 𝑒,𝑓,𝑐
, where 𝑒<1000 equals the number of empty soda bottles in Tim’s possession at the start of the day, 𝑓<1000 the number of empty soda bottles found during the day, and 2≤𝑐<2000

the number of empty bottles required to buy a new soda.
Output

How many sodas did Tim drink on his extra thirsty day?
*******************************************************************************/

using System;
class SodaSlurp {
  static void Main() 
    {       var input = Console.ReadLine();
            string finalvalue = "";
            string[] tokens = input.Split(' ');
            int e = Convert.ToInt32(tokens[0]);
            int f = Convert.ToInt32(tokens[1]);
            int c = Convert.ToInt32(tokens[2]);
            int emptybottles = 0, fullbottles = 0, leftoverbottles = 0, TSD = 0;
            
            emptybottles = e + f;
            while(emptybottles >= c)
            {
                // factor of c
                leftoverbottles = emptybottles % c;
                //make a factor of c
                emptybottles -= leftoverbottles;
                //trade emptys for fulls
                fullbottles = emptybottles/c;
                //there are no emptys
                emptybottles = 0;
                //drink fulls for total count
                TSD += fullbottles;
                //add emptys back
                emptybottles += leftoverbottles;
                //leftovers are no more
                leftoverbottles = 0;
                //fulls are now empty
                emptybottles += fullbottles;
                //there are no fulls
                fullbottles = 0;
            }
            Console.WriteLine(TSD);
           
           
      
  }
}
