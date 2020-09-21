#include <stdio.h>
#include <iostream> 
#include <string> 
#include <utility>
#include <vector>
#include <algorithm>
using namespace std; 

int main()
{
    pair<int, string> numAndText;
    vector<pair<int, string>> numAndTextList;
    string defineOrEval = "", text = "", string1 = "", stringO = "" ,string2 = "";
    int num = 0;
    while(cin >> defineOrEval){
            if(defineOrEval == "define"){
                cin >> num >> text;
                numAndText = make_pair (num, text);
                numAndTextList.push_back(numAndText);
            }
            else {
                cin >> string1 >> stringO >> string2;
                int int1 = 10001;
                int int2 = 10001;
                bool returnman = true;
                string tf = "";
                
                
                for(vector<pair<int, string>>::iterator it = numAndTextList.begin(); it != numAndTextList.end(); ++it){
                    int value = it->first;
                    string key = it->second;
                    if(key == string1){
                        int1 = value;
                    }
                    if(key == string2){
                        int2 = value;
                    }
                }
                if(int1 == 10001 || int2 == 10001){
                    tf = "undefined";
                }
                else if (stringO == "<"){
                    returnman = int1 < int2;
                }else if (stringO == "="){
                    returnman = int1 == int2;
                }else if (stringO == ">"){
                    returnman = int1 > int2;
                }
                
                if(returnman== 1 && tf != "undefined"){
                    tf ="true";
                }
                if(returnman== 0 && tf != "undefined"){
                    tf ="false";
                }
                
                cout << tf << "\n";
                
            }
          
    }
    

    return 0;
}
