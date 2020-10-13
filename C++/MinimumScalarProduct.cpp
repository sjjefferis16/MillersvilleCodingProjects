#include <stdio.h>
#include <iostream> 
#include <string> 
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

void tokenize(string const &str, const char delim, vector<long long> &out)
{
    stringstream ss(str);
    
    string s;
    while(getline(ss, s, delim))
    {
        out.push_back(stol(s));
    }
}

int main()
{
    
    string test_cases = "";
    getline(cin, test_cases);
    for(int i = 0; i < stoi(test_cases); i++)
    {
        string nums = "";
        getline(cin, nums);
        int int_nums = stoi(nums);
        long long sum = 0;

        string x_string = "", y_string = "";
        getline(cin, x_string);
        getline(cin, y_string);
        
        vector<long long> x_vector;
        vector<long long> y_vector;

        tokenize(x_string, ' ', x_vector);
        tokenize(y_string, ' ', y_vector);

        sort(x_vector.begin(), x_vector.end());
        sort(y_vector.begin(), y_vector.end());
        reverse(y_vector.begin(), y_vector.end());

        for (int j = 0; j < stoi(nums); j++)
        {
            sum += x_vector[j] * y_vector[j];
        }
            
        cout << "Case #" << i+1 << ": " << sum << '\n';
        
    }

    return 0;
}