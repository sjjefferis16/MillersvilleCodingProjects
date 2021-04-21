#include <iostream> 
#include <string> 
#include <sstream> 
using namespace std;

void tokenize_string(string const &str, const char delim, string &parta, string &partb, string &partc)
{
    stringstream ss(str);
    int count = 0;
    
    string s;
    while(getline(ss, s, delim))
    {
        count++;
        if (count == 4){
            partb = s;
        } 
        if (count == 5){
            partc = s;
        } 
        if (count <= 3){
            parta += s + " ";
        }
    }
}
void tokenize_time(string const &str, const char delim, int &mins)
{
    stringstream ss(str);
    int count = 0;
    
    string s;
    while(getline(ss, s, delim))
    {
        count++;
        if (count == 1){
            mins = stoi(s) * 60;
        } 
        else {
            mins += stoi(s);
        }
    }
}

void mins_to_hours(int &suntime)
{
    int hours = 0, mins = 0;
    mins = suntime % 60;
    suntime -= mins;
    hours = suntime / 60;
    cout << hours << " hours " << mins << " minutes" << "\n";
}

int main(){
    string input = "";
    getline(cin, input);
    while (input != ""){
        string a = "";
        string b = "";
        string c = "";
        int sunrise = 0, sunset = 0, suntime = 0;
        
        tokenize_string(input, ' ', a, b, c);
        tokenize_time(b,':', sunrise);
        tokenize_time(c,':', sunset);
        suntime = sunset - sunrise;
        
        cout << a;
        mins_to_hours(suntime);
        getline(cin, input);
    }
}

/*
The shortest day of the year in the northern hemisphere is the winter solstice, around December 22, which marks the beginning of winter. This day is not really any shorter, of course, because it still has 24 hours. But it has the fewest hours of daylight of any day. On the other hand, the longest day (the summer solstice) is around June 22.

Being a weather buff you would like to know just how much time the sun is above the horizon on different days during the year. Because you are an impressive programmer, you should write an impressive program to do just that.
Input

Input has between 1
and 1000

days, one day per line. Each line contains the month, day, year, time that the sun rises, and time that the sun sets. Adjacent fields are separated by a single space. Times are expressed in 24-hour format in the range 0:00 to 23:59 (integer hours and minutes separated by a colon, with minutes zero-padded). The time of sunrise is always earlier than the time of sunset, and your solution should ignore any time-changing effects (such as daylight saving time). Input ends at the end of file.
Output

Print the month, day, and year as given in the input followed by the amount of time that the sun is above the horizon in hours and minutes (always plural).
Sample Input 1  
June 22 2005 6:24 20:37
December 22 2005 7:24 17:30
November 2 2005 6:45 17:38
January 8 1992 7:45 18:46


Sample Output 1
June 22 2005 14 hours 13 minutes
December 22 2005 10 hours 6 minutes
November 2 2005 10 hours 53 minutes
January 8 1992 11 hours 1 minutes

*/