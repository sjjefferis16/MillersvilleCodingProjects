#include <stdio.h>
#include <iostream> 
#include <string> 
using namespace std;

void tokenizeInts(string const &str1, string const &str2, 
    string &numberOfString1, string &numberOfString2,
    bool &val1Yoda, bool &val2Yoda)
{
    int intlocal1 = stoi(str1);
    int intlocal2 = stoi(str2);
    while(intlocal1 != 0 || intlocal2 != 0){
        int val1 = intlocal1 % 10;
        intlocal1 /= 10;
        int val2 = intlocal2 % 10;
        intlocal2 /= 10;

        if(val1 == val2){
            numberOfString1.insert(0, to_string(val1));
            numberOfString2.insert(0, to_string(val2));
            val1Yoda = false;
            val2Yoda = false;
        }

        if (val1 > val2){
            val1Yoda = false;
            numberOfString1.insert(0, to_string(val1));
        }
        if (val1 < val2){
            val2Yoda = false;
            numberOfString2.insert(0, to_string(val2));
        }
    }
}

int main()
{
    string action1,action2 ,numberOfString1, numberOfString2;
    bool val1Yoda = true, val2Yoda = true;
    getline(cin, action1);
    getline(cin, action2);
    tokenizeInts(action1, action2, numberOfString1, numberOfString2, val1Yoda, val2Yoda);
    if(val1Yoda){
        printf("%s\n", "YODA");
    }
    else{
        printf("%i\n", stoi(numberOfString1));
    }
    if(val2Yoda){
        printf("%s\n", "YODA");
    }
    else{
    printf("%i\n", stoi(numberOfString2));
    }

    return 0;
}

/*

A long, long time ago in a galaxy far, far away a big collision of integers is taking place right 
now. What happens when two integers collide? During collision, each digit of one number compares
 itself to the corresponding digit of the other number (the least significant digit with the other’s 
 least significant digit, and so on). The smaller digit “falls out” of the number containing it. 
 Additionally, if the digits are the same, nothing happens. If a number doesn’t consist of a 
 corresponding digit, then we consider it to be zero. After all comparisons of corresponding digits, 
 the leftover digits in the number come closer and create a new number. 

Write a programme that will, for two given integers, determine their values after collision. If it happens that 
all the digits of one number fell out, then for that number output the message “YODA”.
Input

The first line of input contains the integer 𝑁
(1≤𝑁≤109), one of the integers from the task. The second line of input contains the integer 𝑀 (1≤𝑁≤109

), one of the integers from the task.
Output

The first line of output must contain the new value of the first given integer from the task. The second line of output must contain the new value of the second given integer from the task.
Sample Input 1  
2341
6785

Sample Output 1
YODA
6785

*/