#include <stdio.h>
#include <iostream> 
#include <string> 
#include <utility>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

void tokenize(string const &str, const char delim, vector<string> &out)
{
    stringstream ss(str);
    
    string s;
    while(getline(ss, s, delim))
    {
        out.push_back(s);
    }
}

int main()
{
    
    string test_cases = "";
    getline(cin, test_cases);
    for(int i = 0; i < stoi(test_cases); i++)
    {
        string recording = "", animal = "", goes = "", noise = "";
        getline(cin, recording);
        vector<string> recording_vector;
        vector<string> sound_check;
        vector<string> recording_fox;

        tokenize(recording, ' ', recording_vector);
        
        while(recording != "what does the fox say?")
        {
        getline(cin, recording);
        tokenize(recording, ' ', recording_fox);
        sound_check.push_back(recording_fox.at(2));
        recording_fox.clear();
        }
        
        vector<string>::iterator rIter = recording_vector.begin();
        while(rIter != recording_vector.end()){
            bool hasValue = true;
            vector<string>::iterator sIter = sound_check.begin();
            while(sIter != sound_check.end()){
                if(*rIter == *sIter){
                    hasValue = false;
                    sIter = sound_check.end() - 1;
                }
                sIter++;
            }
            if(hasValue){
                cout << *rIter << " ";
            }
            rIter++;
        }
        cout <<'\n';
    }

    return 0;
}
/*

Determined to discover the ancient mystery—the sound that the fox makes—you went 
into the forest, armed with a very good digital audio recorder. The forest is, however, 
full of animals’ voices, and on your recording, many different sounds can be heard. But you are well prepared for your task: 
you know exactly all the sounds which other animals make. Therefore the rest of the recording—all the unidentified noises—must have been made by the fox.
Input

The first line of input contains the number of test cases 𝑇

. The descriptions of the test cases follow:

The first line of each test case contains the recording—words over lower case English alphabet, 
separated by spaces. Each contains at most 100 letters and there are no more than 100 words. 
The next few lines are your pre-gathered information about other animals, in the format <animal> goes <sound>. 
There are no more than 100 animals, their names are not longer than 100 letters each and are actual names of animals in English. There is no fox goes ... among these lines.

The last line of the test case is exactly the question you are supposed to answer: what does the fox say?
Output

For each test case, output one line containing the sounds made by the fox, in the order from the recording. 
You may assume that the fox was not silent (contrary to popular belief, foxes do not communicate by Morse code).

Sample Input
1
toot woof wa ow ow ow pa blub blub pa toot pa blub pa pa ow pow toot
dog goes woof
fish goes blub
elephant goes toot
seal goes ow
what does the fox say?

Sample Output:
wa pa pa pa pa pa pow


*/