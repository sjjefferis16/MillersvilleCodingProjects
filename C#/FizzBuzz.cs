using System;
class FizzBuzz {
  static void Main() {
            var input = Console.ReadLine();
            string[] tokens = input.Split(' ');
            string print = "";
            int X = 0, Y = 0, N = 0;
            X = Convert.ToInt32(tokens[0]);
            Y = Convert.ToInt32(tokens[1]);
            N = Convert.ToInt32(tokens[2]);
            
        for(int i = 1; i <= N; i++){
            print = "";
            if(i % X == 0){
                print += "Fizz";
            }
            if(i % Y == 0){
                print += "Buzz";
            }
            if(print == ""){
                Console.WriteLine(i);
            } else {
                Console.WriteLine(print);
            }
        }
  }
}
