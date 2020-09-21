/*
You and your sister have to share a large, circular cookie. The cookie is quite stale, so you must break it by striking it with a hammer. When struck at point 𝑝, the cookie will break along the shortest chord containing 𝑝

. You follow the usual strategy of one person breaking the cookie into two parts and the other person choosing which part to take. Thus, after the cookie is broken, you want to know which part is larger.
Input

Input consists of up to 200
test cases, one per line. Each test case is given as three real numbers 𝑟 𝑥 𝑦, where each value is in the range [0,20] with at most 8 digits past the decimal point. All units are given in centimeters. The 𝑟 value gives the radius of an origin-centered cookie. The 𝑥 and 𝑦 values give the coordinates where the cookie is struck. No strike will be within 0.001

cm of the edge of the cookie. Input ends at end of file.
Output

For each test case, print a line giving the area of the resulting two cookie pieces, larger piece first. Answers should be correct to within 0.001
square centimeters. If the hammer misses the cookie entirely, simply print out the word “miss”.
*/
using System;
class HalfACookie {
  static void Main() {
      var input = "0";
        while ((input = Console.ReadLine()) != null){
                
                string[] tokens = input.Split(' ');
                double r =0, x=0, y=0, r2=0, x2=0, y2=0, distance=0, 
                AM=0, MB=0,area =0, big =0, small =0, chord = 0, angleA=0
                , angleB =0;
                r = Convert.ToDouble(tokens[0]);
                x = Convert.ToDouble(tokens[1]);
                y = Convert.ToDouble(tokens[2]);
                r2 = r * r;
                x2 = x * x;
                y2 = y * y;
                    //Console.WriteLine(y2);
                if(r2 <= x2 + y2){
                    Console.WriteLine("miss");
                }
                else{
                    distance = Math.Sqrt(x2 + y2);
                    AM = r;
                    MB = r;
                    AM += distance;
                    MB -= distance;
                    
                    chord = Math.Sqrt(r2 - (distance * distance));
                    
                    //Console.WriteLine(distance);
                    
                    //Console.WriteLine(chord);
                    angleA = (Math.Asin(distance/r)) * (180 / Math.PI);
                    //Console.WriteLine(angleA);
                    chord *= 2;
                    //Console.WriteLine(chord);
                    angleB = 180 - (angleA * 2);
                    //Console.WriteLine(angleB);
                    area = Math.PI * r2;
                    small = (angleB/360 * area) - (0.5*chord*distance);
                    //Console.WriteLine(small);
                    
                    
                    big = area - small;
                    Console.Write(String.Format("{0:0.000000}", big) + " " + 
                    String.Format("{0:0.000000}", small) + "\n");
                }
      }
  }
}
