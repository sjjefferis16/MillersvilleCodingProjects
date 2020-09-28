#include <stdio.h>
#include <iostream> 
#include <string> 
#include <utility>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

string line1 = "";
string line2 = "";
string line3 = "";
string line4 = "";
string line5 = "";
string line6 = "";
string line7 = "";
char treeSorter(int line, bool bA[5], char index){
    if (line == 0){
        if (bA[0] == true && bA[1] == true && bA[4] == true){
            return 'a';
        }
        if (bA[0] == false && bA[1] == false && bA[4] == true){
            return '1';
        }
        if (bA[0] == true && bA[1] == false && bA[4] == true){
            return '4';
        }
        if (bA[0] == false && bA[1] == false && bA[4] == false){
            return '+';
        }
    }
    if (line == 1 && index == 'a')
    {
        if (bA[0] == false && bA[1] == false && bA[4] == true){
            return 'b';
        }
        if (bA[0] == true && bA[1] == false && bA[4] == false){
            return 'c';
        }
        if (bA[0] == true && bA[1] == false && bA[4] == true){
            return 'd';
        }
    }
    if (line == 3 ){
        if (index == 'b'){
            if (bA[0] == false && bA[1] == false && bA[4] == true){
            return '7';
            }
            else {
            return 'e';
            }
        }
        if (index == 'd'){
            if (bA[2] == true){
            return 'f';
            }
            else {
            return '0';
            }
        }
        
    }
    if (line == 4){
        if (index == 'e'){
            if (bA[0] == true){
            return '2';
            }
            else {
            return '3';
            }
        }
        if (index == 'c'){
            if (bA[0] == true){
            return '6';
            }
            else {
            return '5';
            }
        }
        if (index == 'f'){
            if (bA[0] == false){
            return '9';
            }
            else {
            return '8';
            }
        }
    }
    return index;
}

void dots(){
    line1.append(".");
    line2.append(".");
    line3.append(".");
    line4.append(".");
    line5.append(".");
    line6.append(".");
    line7.append(".");
}

void Ascii(vector<int> numVector){
    
    for(int i = numVector.size() - 1; i > -1; i--){
        switch(numVector.at(i)){
            case 1:
                line1.append("....x");
                line2.append("....x");
                line3.append("....x");
                line4.append("....x");
                line5.append("....x");
                line6.append("....x");
                line7.append("....x");
                if(i != 0){
                    dots();
                }
                break;
            case 2:
                line1.append("xxxxx");
                line2.append("....x");
                line3.append("....x");
                line4.append("xxxxx");
                line5.append("x....");
                line6.append("x....");
                line7.append("xxxxx");
                if(i != 0){
                    dots();
                }
                break;
            case 3:
                line1.append("xxxxx");
                line2.append("....x");
                line3.append("....x");
                line4.append("xxxxx");
                line5.append("....x");
                line6.append("....x");
                line7.append("xxxxx");
                if(i != 0){
                    dots();
                }
                break;
            case 4:
                line1.append("x...x");
                line2.append("x...x");
                line3.append("x...x");
                line4.append("xxxxx");
                line5.append("....x");
                line6.append("....x");
                line7.append("....x");
                if(i != 0){
                    dots();
                }
                break;
            case 5:
                line1.append("xxxxx");
                line2.append("x....");
                line3.append("x....");
                line4.append("xxxxx");
                line5.append("....x");
                line6.append("....x");
                line7.append("xxxxx");
                if(i != 0){
                    dots();
                }
                break;
            case 6:
                line1.append("xxxxx");
                line2.append("x....");
                line3.append("x....");
                line4.append("xxxxx");
                line5.append("x...x");
                line6.append("x...x");
                line7.append("xxxxx");
                if(i != 0){
                    dots();
                }
                break;
            case 7:
                line1.append("xxxxx");
                line2.append("....x");
                line3.append("....x");
                line4.append("....x");
                line5.append("....x");
                line6.append("....x");
                line7.append("....x");
                if(i != 0){
                    dots();
                }
                break;
            case 8:
                line1.append("xxxxx");
                line2.append("x...x");
                line3.append("x...x");
                line4.append("xxxxx");
                line5.append("x...x");
                line6.append("x...x");
                line7.append("xxxxx");
                if(i != 0){
                    dots();
                }
                break;
            case 9:
                line1.append("xxxxx");
                line2.append("x...x");
                line3.append("x...x");
                line4.append("xxxxx");
                line5.append("....x");
                line6.append("....x");
                line7.append("xxxxx");
                if(i != 0){
                    dots();
                }
                break;
            case 0:
                line1.append("xxxxx");
                line2.append("x...x");
                line3.append("x...x");
                line4.append("x...x");
                line5.append("x...x");
                line6.append("x...x");
                line7.append("xxxxx");
                if(i != 0){
                    dots();
                }
                break;
        }
    }

}

int main()
{
    

        int int1 = 0, int2 = 0, size = 0;
        string recording = "";
        getline(cin, recording);
        recording.append(".");
        size = recording.size() / 6;
        char charArray [size];
        for(int i = 0; i < size; i++){
            charArray[i] = 'z';
        }
        bool boolArray[5] = {false, false, false, false, false};
        bool boolArray2[5] = {false, false, false, false, false};
        
        for(int line = 0; line < 5; line++){
            if(line != 0){
            getline(cin, recording);
            recording.append(".");
            }
            int i = 5;
            int pos = 0;
            while( i < recording.size())
            {
                boolArray[0] = (recording.at(i-5) == 'x');
                boolArray[1] = (recording.at(i-4) == 'x');
                boolArray[2] = (recording.at(i-3) == 'x');
                boolArray[3] = (recording.at(i-2) == 'x');
                boolArray[4] = (recording.at(i-1) == 'x');
                charArray[pos] = treeSorter(line, boolArray, charArray[pos]);
                //cout << recording.at(i) << " ";
                i +=6;
                pos++;
                for(int a = 0; a < 5; a++){
                    boolArray[a] = false;
                }
            }
        }

        char* chars_array = strtok(charArray, "+");
        //cout << chars_array << '\n';
        sscanf(chars_array, "%d", &int1);
        chars_array = strtok(NULL, "+");
        //cout << chars_array << '\n';
        sscanf(chars_array, "%d", &int2);
        //cout << int1 << '\n';
        //cout << int2 << '\n';
        int1 += int2;
        //cout << int1 << '\n';
        
        int2 = int1;
        int count =0;
        while(int2 != 0){
            int2 /= 10;
            count++;
        }

        //cout << count << '\n';
        vector<int> int1Vector;

        for(int i = 0; i < count; i++){
            int a = int1 % 10;
            int1 /= 10;
            int1Vector.push_back(a);
        }
        
        Ascii(int1Vector);
        
        cout << line1 << '\n';
        cout << line2 << '\n';
        cout << line3 << '\n';
        cout << line4 << '\n';
        cout << line5 << '\n';
        cout << line6 << '\n';
        cout << line7 << '\n';
        
    return 0;
}

/*
Nowadays, there are smartphone applications that instantly translate text and even solve math problems if you just point your phone’s camera at them. Your job is to implement a much simpler functionality reminiscent of the past – add two integers written down as ASCII art.

An ASCII art is a matrix of characters, exactly 7

rows high, with each individual character either a dot or the lowercase letter x.

An expression of the form 𝑎+𝑏
is given, where both 𝑎 and 𝑏 are positive integers. The expression is converted into ASCII art
 by writing all the expression characters (the digits of 𝑎 and 𝑏 as well as the + sign) as 7×5 
 matrices, and concatenating the matrices together with a single column of dot characters between consecutive individual matrices. 
 The exact matrices corresponding to the digits and the + sign are as folows:




xxxxx
x...x
x...x
x...x
x...x
x...x
xxxxx

....x
....x
....x
....x
....x
....x
....x

xxxxx
....x
....x
xxxxx
x....
x....
xxxxx

xxxxx
....x
....x
xxxxx
....x
....x
xxxxx

x...x
x...x
x...x
xxxxx
....x
....x
....x

xxxxx
x....
x....
xxxxx
....x
....x
xxxxx

xxxxx
x....
x....
xxxxx
x...x
x...x
xxxxx

xxxxx
....x
....x
....x
....x
....x
....x

xxxxx
x...x
x...x
xxxxx
x...x
x...x
xxxxx

xxxxx
x...x
x...x
xxxxx
....x
....x
xxxxx

.....
..x..
..x..
xxxxx
..x..
..x..
.....

Given an ASCII art for an expression of the form 𝑎+𝑏

, find the result of the addition and write it out in the ASCII art form.
Input

Input consists of exactly 7
lines and contains the ASCII art for an expression of the form 𝑎+𝑏, where both 𝑎 and 𝑏 are positive integers consisting of at most 9

decimal digits and written without leading zeros.

....x.xxxxx.xxxxx.x...x.xxxxx.xxxxx.xxxxx.......xxxxx.xxxxx.xxxxx
....x.....x.....x.x...x.x.....x.........x...x...x...x.x...x.x...x
....x.....x.....x.x...x.x.....x.........x...x...x...x.x...x.x...x
....x.xxxxx.xxxxx.xxxxx.xxxxx.xxxxx.....x.xxxxx.xxxxx.xxxxx.x...x
....x.x.........x.....x.....x.x...x.....x...x...x...x.....x.x...x
....x.x.........x.....x.....x.x...x.....x...x...x...x.....x.x...x
....x.xxxxx.xxxxx.....x.xxxxx.xxxxx.....x.......xxxxx.xxxxx.xxxxx


Output

Output 7
lines containing ASCII art corresponding to the result of the addition, without leading zeros.

....x.xxxxx.xxxxx.xxxxx.x...x.xxxxx.xxxxx
....x.....x.....x.x.....x...x.x.........x
....x.....x.....x.x.....x...x.x.........x
....x.xxxxx.xxxxx.xxxxx.xxxxx.xxxxx.....x
....x.x.........x.....x.....x.....x.....x
....x.x.........x.....x.....x.....x.....x
....x.xxxxx.xxxxx.xxxxx.....x.xxxxx.....x


*/