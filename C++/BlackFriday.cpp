#include <stdio.h>
#include <iostream> 
#include <string> 
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

void tokenize_string_to_i(string const &str, const char delim, vector<int> &out)
{
    stringstream ss(str);
    
    string s;
    while(getline(ss, s, delim))
    {
        out.push_back(stoi(s));
    }
}

int main()
{
    int people = 0, maxVal = 0;
    string input = "";
    vector<int> rolls;
    vector<int> possibleRolls;

    for(int i = 0; i < 6; i++){
        possibleRolls.push_back(0);
    }

    getline(cin, input);
    people = stoi(input);
    
    getline(cin, input);
    tokenize_string_to_i(input, ' ', rolls);
    for(int i = 0; i < people; i++){
    int roll = rolls.at(i);
    ++possibleRolls[roll];
    }
    
    int findMaxInt = 6;
    while(maxVal == 0){
        if(findMaxInt == 0){
            cout << "none";
            break;
        }
        if(possibleRolls[findMaxInt] == 1){
            maxVal = findMaxInt;
        }
        findMaxInt--;
    }
    if(maxVal != 0){
    vector<int>::iterator it = find(rolls.begin(), rolls.end(), maxVal);
    int dis = distance(rolls.begin(), it);
    cout << dis + 1;
    }
    
    return 0;
}

/*

Black Friday is the Friday following Thanksgiving Day in the United States (the fourth Thursday of November). Since the early 2000s, it has been regarded as the beginning of the Christmas shopping season in the US, and most major retailers open very early and offer promotional sales. (Source: Wikipedia)

You work in the IT support division of an electronics store. This year, in an attempt to prevent overcrowding, the management has decided to limit the number of people entering the store. They divide the people at the entrance into groups of size 𝑛
and process them as follows: all 𝑛 participants roll a die, and report the outcomes 𝑎1,𝑎2,…,𝑎𝑛

. To prevent cheating, instead of selecting the one with the highest outcome, the rule is to select the participant with the highest unique outcome. Everybody not selected has to move to the back of the queue. If there is no winner, the experiment is repeated.

For example, if there are three players and the outcomes are 6, 6 and 5, then the third player wins, because the first and second player lose even though their outcomes are higher, since they both have the same outcome. If instead the third player also rolls 6, then nobody wins.

They asked you to write a program for selecting the winner.
Input

The first line of the input contains one integer 𝑛
, 1≤𝑛≤100, the group size. The second line contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (1≤𝑎𝑖≤6 for all 1≤𝑖≤𝑛

): the outcome of each participant’s die roll.
Output

Output the index of the participant that has the highest unique outcome, or “none” (without the quotes) if nobody has a unique outcome.
Sample Input 1  
8
1 1 1 5 3 4 6 6

Sample Output 1
4
*/