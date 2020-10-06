#include <stdio.h>
#include <iostream> 
#include <string> 
#include <utility>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

bool hasDef(string input){
    for(int i = 0; i < input.length(); i++){
        if (input[i] == '='){
            return true;
        }
    }
    return false;
}

bool hasVariable(string input){
    for(int i = 0; i < input.length(); i++){
        if (isdigit(input[i]) == false){
            return false;
        }
    }
    return true;
}

void tokenize_string_to_i(string const &str, const char delim, vector<pair<string, int>> &out)
{
    stringstream sss(str);
    
    string s;
    
    bool hasContents = false;

    vector<string> holder;
    while(getline(sss, s, delim))
    {
         holder.push_back(s);
    }

    for(vector<pair<string, int>>::iterator it = out.begin(); it != out.end(); ++it){
        int value = it->second;
        string key = it->first;
        if(key == holder.at(0))
        {
            hasContents = true;
            it->second = stoi(holder.at(2));
        }
    }
    
    if(!hasContents){
        pair<string, int> pair1;
        pair1.first = holder.at(0);
        pair1.second = stoi(holder.at(2));
        out.push_back(pair1);
    }
}

void createString(string const &str, const char delim, vector<pair<string, int>> &out)
{
    stringstream ss(str);
    
    string s, output = "", intstring = "";
    bool isNum = true;
    int sum = 0, holderVal = 200, count = 0;
    while(getline(ss, s, delim))
    {
        isNum = hasVariable(s);
        if(isNum){
        sum += stoi(s);
        }
        else{

            for(vector<pair<string, int>>::iterator it = out.begin(); it != out.end(); ++it){
                int value = it->second;
                string key = it->first;
                if(key == s)
                {
                    holderVal = value;
                    sum += value;
                }
            }
            if(s != "+" && holderVal == 200){
                
                if(count != 0){
                output.append(" + ");
                }
                output.append(s);
                count++;
            }
        }
        holderVal = 200;
    }
    if(sum != 0){
    intstring = to_string(sum);
        if(count != 0){
        intstring.append(" + ");
        }
    } 
    cout << intstring << output << '\n';
    sum = 0;
}

int main()
{
    
    string input = "";
    vector<pair<string, int>> ValVector;
    bool hasEquals = false;

    while("0" != input){
        
        getline(cin, input);

        if("0" == input){
            break;
        }

        hasEquals = hasDef(input);
        
        if(hasEquals){
            tokenize_string_to_i(input, ' ', ValVector);
        }
        else{
            createString(input, ' ', ValVector);
        }
    }
    

    return 0;
}
