#include <stdio.h>
#include <iostream> 
#include <string> 
#include <utility>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

void tokenize(string const &str, const char delim, vector<int> &out)
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
    
    string test_cases;
    char order [3];
    vector<int> int_vector;
    getline(cin, test_cases);
    tokenize(test_cases, ' ', int_vector);
    sort(int_vector.begin(), int_vector.end());
    scanf("%3s", order);

    int loc1 = ((int)order[0]) - 65;
    int loc2 = ((int)order[1]) - 65;
    int loc3 = ((int)order[2]) - 65;

    printf("%d %d %d", int_vector.at(loc1),int_vector.at(loc2),int_vector.at(loc3));

    return 0;
}

/*
You will be given three integers 𝐴, 𝐵 and 𝐶. The numbers will not be given in that exact order, but we do know that 𝐴 is less than 𝐵 and 𝐵 less than 𝐶

. In order to make for a more pleasant viewing, we want to rearrange them in a given order.
Input

The first line contains the three positive integers 𝐴
, 𝐵 and 𝐶, not necessarily in that order. The three numbers will be less than or equal to 100

.

The second line contains three uppercase letters ’A’, ’B’ and ’C’ (with no spaces between them) representing the desired order.
Output

Output 𝐴
, 𝐵 and 𝐶 in the desired order on a single line, separated by single spaces.

Sample Input 1
1 5 3
ABC

Sample Output 1
1 3 5

*/