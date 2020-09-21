#include <stdio.h>
#include <iostream> 
#include <string> 
#include <sstream>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int n=0, h=0, v = 0, finalvalue =0;
        
    cin >> n >> h >> v;
    
    if (h < n-h){
        h = n-h;
    }
    if (v < n-v){
        v = n-v;
    }
    finalvalue = 4 * h * v;
    
    cout << to_string(finalvalue);


    return 0;
}