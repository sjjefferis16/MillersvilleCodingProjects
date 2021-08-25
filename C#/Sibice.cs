using System;
using System.Collections.Generic;
using System.Linq;
class Sibice {
  static void Main() {
            string[] tokens = Console.ReadLine().Split(' ');
            int[] numbers = new int[3];
            
            tokenizeIntArray(ref numbers, tokens, 3);

            int matches = numbers[0];
            int width = numbers[1];
            int height = numbers[2];
            double hypot = Math.Sqrt( (width * width) + (height * height));

            for (int i = 0; i < matches; i++){
                int matchLength = Convert.ToInt32(Console.ReadLine());
                //Console.WriteLine(matchLength);
                if(hypot >= matchLength){
                    Console.WriteLine("DA");
                }
                else {
                    Console.WriteLine("NE");
                }
            }
            
  }
  public static void tokenizeIntArray (ref int[] intArray, string[] values, int length){
        for(int i = 0; i < length; i++){
                intArray[i] = Convert.ToInt32(values[i]);
                //Console.WriteLine(intArray[i]);
            }
    }

}

/*
Our favorite Onid Pizza would like to have a commercial aired in a radio. Since they are close to KTH, 
they want to attract mainly students. It’s not a good idea to have the commercial aired between 8 am and 5 pm, 
because most of the students are in the school and don’t listen to the radio. Onid made a survey and now they know how many students listen to the radio at each point of the day.

They also know that if each student listens to a commercial, he or she will spend one Swedish crown 
on pizza in expectation. Thus if 100 students listen to a commercial, Onid will increase their income by 100 crowns on average from selling more pizza.

Of course, Onid Pizza has to pay a fixed amount every time the commercial is played. The radio has a 
commercial break every 15 minutes. Unfortunately, Onid can choose only one continuous sequence of commercial breaks, 
for example all breaks from 5 pm to 8 pm. Help them to choose a continuous sequence of commercial breaks such that their profit is maximal.
Input

The first line of the input contains two space separated positive integers 𝑁,𝑃
– the total number of commercial breaks in a day and the price of one commercial break. You can assume that 𝑁≤100000 
and 𝑃≤1000. On the next line there are 𝑁 space-separated integers – the 𝑖’th integer denotes how many students listen 
to the 𝑖-th commercial break. There are always at most 2000

students listening.
Output

Output contains one line with one integer – the biggest expected extra profit Onid can get by selecting a continuous sequence of commercial breaks.
Sample Input 1  
6 20
18 35 6 80 15 21

Sample Output 1
61
*/