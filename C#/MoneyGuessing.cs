//A program that will correctly guess an amount of money between 1 and 1000 dollars in less than 9 guesses.
//Written by Sam Jefferis

using System;

class MoneyGuessing 
{
  static void Main() 
  {
    Random rnd = new Random();
    int amount = makeRandom(rnd);
    int low = 1, mid = 500, high = 1000, counter=0;
    
    while (amount != mid && counter < 9)
    {
        if(mid > amount)
        {
            counter++;
            high = mid;
            mid = (low +high)/ 2;
            Console.WriteLine("guess " + counter + ": $" + mid);
        }
        if(mid < amount)
        {
            counter++;
            low = mid;
            mid = (low+high) / 2;
            Console.WriteLine("guess " + counter + ": $" + mid);
        }
    }
    Console.WriteLine("");
    Console.WriteLine("total guesses: " + counter);
    Console.WriteLine("correct amount $" + amount);
    Console.WriteLine("guessed amount $" + mid);
  }
  
    public static int makeRandom(Random rnd)
    {
    return rnd.Next(1000);
    }
}
