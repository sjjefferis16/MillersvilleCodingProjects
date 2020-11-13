#include <stdio.h>
#include <iostream> 
#include <string> 
#include <sstream>
#include <vector>
using namespace std;

void tokenize_string_to_i(string const &str, const char delim, vector<int> &out)
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
    string action;
    std::vector<int> yards;
    getline(cin, action);
    int plays = stoi(action), down = 1, yardsToGain = -10, yardLine = 20, result = 0;

    getline(cin, action);
    tokenize_string_to_i(action, ' ', yards);

    vector<int>::iterator it = yards.begin();

    for (int i = 0; i < plays; ++i)
    {

        
        down++;
        yardLine += *it;
        yardsToGain += *it;
        it++;

        if(yardsToGain >= 0){
            down = 1;
            yardsToGain = -10;
        }
        if(down == 5){
            break;
        }
        if(yardLine >= 100){
            result = 1;
            break;
        }
        if (yardLine <= 0){
            result = 2;
            break;
        }
    }

    switch(result){
        case 0:
            printf("Nothing");
            break;
        case 1:
            printf("Touchdown");
            break;
        case 2:
            printf("Safety");
            break;
    }
    
    return 0;
}

/*
In a game of American Football, there are several factors to take into consideration when detailing the rules of the game. 
The goal of the game is to move the football across the field into the endzone of the defending team through a series of plays, 
which form a drive. In each play, the attacking team may either gain or lose a number of yards, that is, their position 
on the field moves either towards or away from the defending team’s endzone.

In the simplified version of football that we consider, a team has four chances (in up to four plays) to advance the ball 10

yards downfield; if they are successful, they will have achieved a “first down” and keep possession of the ball. If they 
achieve a first down, they have another up to four plays to continue their drive towards the defending team’s endzone. 
If they keep possession and reach the defending team’s endzone, they will have achieved a Touchdown. If they are pushed 
back into their own endzone, a Safety occurs and ends the drive. Otherwise the team loses possession of the ball and Nothing happens.

Sadly, the outcome of a drive has been lost, and all that remains is the yards gained or lost on each play! Your job is 
to determine whether a Touchdown, Safety, or Nothing occurred on the given drive.

For simplicity, we assume that the team starts the drive on their own 20
yard line on a 100 yard field (with 0 being the team’s own endzone, and 100 being the defending team’s endzone). This means
 that a touchdown is scored if at least 80 yards are gained in total, relative to the starting position, and without losing
  possession due to failing to get a first down. Note that it is possible for a team to score a Touchdown without getting a first down. A safety occurs if the team is pushed back 20

yards from their original starting position, which would place them in their own endzone. Nothing occurs if neither of these events occurs.
Input

The input starts of a line containing one integer 𝑁
(1≤𝑁≤15), which is the number of plays that this given drive recorded. Following this line are 𝑁 integers representing the 
numbers of yards gained or lost on each particular play. Each given number is between −100 and 100

yards (exclusive range) since that is the length of the football field.
Output

Output a single word, the result of the drive! If a touchdown is achieved, output “Touchdown”, if a safety is achieved, 
output “Safety”, else output “Nothing”. (Do not add a period at the end.) Once the outcome has been determined, your program should ignore any remaining yards listed in the drive.
*/