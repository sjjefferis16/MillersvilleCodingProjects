/******************************************************************************
Alice is saving for her retirement. She hasn’t really decided how much she wants to save, but when she retires, she wants to have strictly more money than Bob will have when he retires.

Bob is 𝐵
years old. He plans to retire when he becomes 𝐵𝑟 years old. He saves 𝐵𝑠

every year from now until then.

Alice is 𝐴
years old. She wants to save 𝐴𝑠

every year. When is the earliest time she can retire?
Input

The input is a single line consisting of 5
space separated integers; int b br bs a as1

.
Output

Output the age at which Alice can retire so that she has more money than Bob will have at age 𝐵𝑟
.

*******************************************************************************/

using System;
class SavingForRetirement {
  static void Main() {
            var input = Console.ReadLine();
            string[] tokens = input.Split(' ');
            int b = Convert.ToInt32(tokens[0]);
            int br = Convert.ToInt32(tokens[1]);
            int bs = Convert.ToInt32(tokens[2]);
            int a = Convert.ToInt32(tokens[3]);
            int as1 = Convert.ToInt32(tokens[4]);
            
            int bobretage = br - b;
            int bobmoney = bs * bobretage;
            int aliceRetAge = a;
            if(bobmoney % as1 != 0){
                aliceRetAge++;
            }
            aliceRetAge += (bobmoney / as1);
            if (bobmoney == ((aliceRetAge - a) * as1)){
                aliceRetAge++;
            }
            Console.WriteLine(aliceRetAge);
            
  }    
}
