#include <stdio.h>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int fromX(int base, int numberX){
    int resultnum = 0;
    while(numberX > 0){
        resultnum += pow((numberX % base), 2);
        numberX /= base;
    }
    return resultnum;
}


int main()
{
    int nums = 0;
    
    cin >> nums;
    
    for(int i = 0; i < nums; i++){
        int k=0, base=0, numberX = 0, resultnum =0;
        cin >> k >> base >> numberX;
        resultnum = fromX(base, numberX);
        cout << " " << k << " " << resultnum << "\n";
    }

    return 0;
}
