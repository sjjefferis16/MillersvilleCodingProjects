#include <stdio.h>
#include <iostream> 
#include <string> 
#include <sstream>
#include <vector>
#include <algorithm>
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
    string input;
    getline(cin, input);

    int cases = stoi(input);

    for (int i = 0; i < cases; ++i)
    {
        int min = 0, max = 0, index1 = 0, index2 = 0;
        vector<int> data;
        getline(cin, input);
        tokenize_string_to_i(input, ' ', data);

        vector<int> pos;
        while(pos.size() != data[1]){
            getline(cin, input);
            tokenize_string_to_i(input, ' ', pos);
            
        }
        
        sort(pos.begin(), pos.end());
        
        for(int i = 0; i < pos.size(); i++){
            index1 = pos[i];
            index2 = data.at(0) - index1;
            int pmin = 0;
            if(index1 < index2){
                pmin = index1;
            } else{
                pmin = index2;
            }
            
            if(min < pmin){
                min = pmin;
            }
            index1 = 0;
            index2 = 0;
            
        }
        
        for(int i = 0; i < pos.size(); i++){
            index1 = pos[i];
            index2 = data.at(0) - index1;
            int pmax = 0;
            if(index1 > index2){
                pmax = index1;
            } else{
                pmax = index2;
            }
            
            if(max < pmax){
                max = pmax;
            }
            index1 = 0;
            index2 = 0;
            
        }
        
        printf("%d %d\n", min, max);

    }

    return 0;
}


/*
An army of ants walk on a horizontal pole of length 𝑙 cm, each with a constant speed of 1

cm/s. When a walking ant reaches an end of the pole, it immediatelly falls off it. When two 
ants meet they turn back and start walking in opposite directions. We know the original positions of ants on the pole, 
unfortunately, we do not know the directions in which the ants are walking. Your task is to compute the earliest and the 
latest possible times needed for all ants to fall off the pole.
Input

The first line of input contains one integer giving the number of cases that follow, at most 100. 
The data for each case start with two integer numbers: the length 𝑙
of the pole (in cm) and 𝑛, the number of ants residing on the pole. These two numbers are followed by 𝑛 
integers giving the position of each ant on the pole as the distance measured from the left end of the pole, 
in no particular order. All input integers are between 0 and 1000000

and they are separated by whitespace.
Output

For each case of input, output two numbers separated by a single space. The first number is the earliest possible 
time when all ants fall off the pole (if the directions of their walks are chosen appropriately) and the second number is the latest possible such time.
Sample Input 1  
2
10 3
2 6 7
214 7
11 12 7 13
176 23 191

Sample Output 1
4 8
38 207

*/