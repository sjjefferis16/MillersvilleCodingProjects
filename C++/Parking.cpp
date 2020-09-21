/******************************************************************************

Parking
/problems/parking2/file/statement/en/img-0001.png
When shopping on Long Street, Michael usually parks his car at some random location, and then walks to the stores he needs. Can you help Michael choose a place to park which minimises the distance he needs to walk on his shopping round?

Long Street is a straight line, where all positions are integer. You pay for parking in a specific slot, which is an integer position on Long Street. Michael does not want to pay for more than one parking though. He is very strong, and does not mind carrying all the bags around.
Input

The first line of input gives the number of test cases, 1≤𝑡≤100
. There are two lines for each test case. The first gives the number of stores Michael wants to visit, 1≤𝑛≤20, and the second gives their 𝑛 integer positions on Long Street, 0≤𝑥𝑖≤99
2
4
24 13 89 37
6
7 30 41 14 39 42

.
Output

Output for each test case a line with the minimal distance Michael must walk given optimal parking.
152
70

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
#include <iostream> 
#include <string> 
#include <sstream>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int numOfTrips = 0;
    
    cin >> numOfTrips;
    
    for(int i = 0; i < numOfTrips; i++){
        int  stops = 0,store = 0, storeHi = -1, storeLo = 100, distance = 0;
        
        cin >> stops;
        for(int j = 0; j < stops; j++){
            cin >> store;
            if(storeHi < store){
                storeHi = store;
            }
            if(storeLo > store){
                storeLo = store;
            }
            
        }
        distance = (storeHi - storeLo) * 2;
            cout << distance << "\n";
    }

    return 0;
}