using System;
class tetris {
  static void Main() {
    var input = Console.ReadLine();
    string[] tokens = input.Split(' ');
    int C = Convert.ToInt32(tokens[0]);
    int P = Convert.ToInt32(tokens[1]);
    
    input = Console.ReadLine();
    string[] nums = input.Split(' ');
    int[] columns = new int[C + 2];
    
    for(int i = 0; i <= C + 1; i++){
        if(i != 0 && i != C + 1){
            columns[i] = Convert.ToInt32(nums[i- 1]);
        }
        else {
            columns[i] = 101;
        }
            Console.WriteLine(columns[i]);
    }
    
  }
}