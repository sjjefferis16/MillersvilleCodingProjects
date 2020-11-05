#include <stdio.h>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main ()
{
  string input;
  
  getline(cin, input);
  int cases = stoi(input);
  getline(cin,input);

  for (int i = 0; i < cases; i++)
  {
    getline(cin, input);
    int students = stoi(input);
    long long int min = 9223372036854775807;
    long long int sum = 0;
    
    std::vector<long long int> candyCount;
    for (int i = 0; i < students; i++)
    {
      getline(cin, input);
      sum += stol(input);
      sum %= students;
      
    }
    if(0 == sum){
        cout << "YES \n";
    } else{
        cout << "NO \n";
    }
    getline(cin, input);
  }

 

  return 0;
}

/*
A class went to a school trip. And, as usually, all 𝑁

kids have got their backpacks stuffed with candy. But soon quarrels started all over the place, as some of the kids had more candies than others. Soon, the teacher realized that he has to step in: "Everybody, listen! Put all the candies you have on this table here!"

Soon, there was quite a large heap of candies on the teacher’s table. "Now, I will divide the candies into 𝑁

equal heaps and everyone will get one of them." announced the teacher.

"Wait, is this really possible?" wondered some of the smarter kids.
Task

You are given the number of candies each child brought. Find out whether the teacher can divide the candies into 𝑁

exactly equal heaps. (For the purpose of this task, all candies are of the same type.)
Input

The first line of the input file contains an integer 𝑇,1≤𝑇≤100

specifying the number of test cases. Each test case is preceded by a blank line.

Each test case looks as follows: The first line contains 𝑁,1≤𝑁≤20000
– the number of children. Each of the next 𝑁 lines contains the number of candies one child brought. Each child has less than 263

.
Output

For each of the test cases output a single line with a single word "YES" if the candies can be distributed equally, or "NO" otherwise.

Sample Input 1  
2

5
5
2
7
3
8

6
7
11
2
7
3
4

Sample Output 1
YES
NO


*/