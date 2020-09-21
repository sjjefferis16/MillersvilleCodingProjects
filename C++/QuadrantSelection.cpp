
/*

Quadrant Selection

A common problem in mathematics is to determine which quadrant a given point lies in. There are four quadrants, numbered from 1
to 4

, as shown in the diagram below:
\includegraphics[width=0.5\textwidth ]{quadrant.png}

For example, the point 𝐴
, which is at coordinates (12,5) lies in quadrant 1 since both its 𝑥 and 𝑦 values are positive, and point 𝐵 lies in quadrant 2 since its 𝑥 value is negative and its 𝑦

value is positive.

Your job is to take a point and determine the quadrant it is in. You can assume that neither of the two coordinates will be 0

.
Input

The first line of input contains the integer 𝑥
(−1000≤𝑥≤1000;𝑥≠0). The second line of input contains the integer 𝑦 (−1000≤𝑦≤1000;𝑦≠0

).
Output

Output the quadrant number (1
, 2, 3 or 4) for the point (𝑥,𝑦).
*/
#include <stdio.h>
#include <iostream> 
#include <string> 
using namespace std; 

int main()
{
    string x_str, y_str;
    int x, y;
    getline(cin, x_str);
    getline(cin, y_str);
    x = stoi(x_str);
    y = stoi(y_str);
    if(0 < x && 0 < y){
        cout << "1";
    } else if ( 0 > x && 0 < y){
        cout << "2";
    }else if ( 0 < x && 0 > y){
        cout << "4";
    }else {
        cout << "3";
    }

    return 0;
}
