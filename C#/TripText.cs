using System;
class TripText {
  static void Main() {
        string input = Console.ReadLine();
        int numofChar = 0;
        string string1 = "", string2 = "";
        
        foreach (char chr in input){
            numofChar++;
        }
        
        numofChar /= 3;
        
        char[] chars = input.ToCharArray();
        for(int i = 0; i < numofChar; i++)
        {
            int c1 = i + numofChar, c2 = i + numofChar * 2;
            if 
            (
                chars[i] == chars[c1] 
            )
            {
                string2 = chars[i].ToString();
                string1 = string1.Insert(i, string2);
            }
            else if 
            (
                chars[c1] == chars[c2]
            )
            {
                string2 = chars[c1].ToString();
                string1 = string1.Insert(i, string2);
            }
            else if 
            (
                chars[i] == chars[c2]
            )
            {
                string2 = chars[i].ToString();
                string1 = string1.Insert(i, string2);
            }
        }
        
        
        
        Console.WriteLine(string1);
  }
}