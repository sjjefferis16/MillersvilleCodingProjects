/******************************************************************************


Cetvrta

Mirko needs to choose four points in the plane so that they form a rectangle with sides parallel to the axes. He has already chosen three points and is confident that he hasn’t made a mistake, but is having trouble locating the last point. Help him.
Input

Each of the three points already chosen will be given on a separate line. All coordinates will be integers between 1
and 1000

.
Output

Output the coordinates of the fourth vertex of the rectangle.

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
#include <string> 
#include <sstream>
#include <algorithm>
#include <iterator>
using namespace std;


int main()
{
    int x[3], y[3];
    int x_int=0, y_int=0;
    for(int i = 0; i <= 2; i++){
        
    cin >> x[i] >> y[i];
        if(i == 0){
            y_int = y[0];
        }
    
    }
    
    if(x[0] == x[1]){
        x_int = x[2];
    }
     if(x[0] == x[2]){
        x_int = x[1];
    }
    if(x[1] == x[2]) {
        x_int = x[0];
    }
    if(y[0] == y[1]){
        y_int = y[2];
    }
    if(y[0] == y[2]){
        y_int = y[1];
    }
    if(y[1] == y[2]) {
        y_int = y[0];
    }
    cout << to_string(x_int) << " " << to_string(y_int);

    return 0;
}
