#include <stdio.h>
#include <iostream> 
#include <string> 
#include <sstream>
#include <vector>
#include <algorithm> 
using namespace std;

void tokenize_string(string const &str, const char delim, vector<string> &out)
{
    stringstream ss(str);
    
    string s;
    while(getline(ss, s, delim))
    {
        out.push_back(s);
    }
}

    struct ClassList{
    string ClassName;
    vector<string> Students;
    
    ClassList(string ClassName, vector<string> Students){
        this->ClassName = ClassName;
        this->Students = Students;
    }
  };
  
  string cName = "";
    bool pred (ClassList i) {
      return i.ClassName == cName;
    }

int main()
{
    
    int courseRequests = 0;
    vector<string> inputVector;
    vector<ClassList> schoolRecord;

    string input = "";
    getline(cin, input);
    courseRequests = stoi(input);

    for(int i = 0; i < courseRequests; i++){
        getline(cin, input);
        tokenize_string(input, ' ', inputVector);
        string name = inputVector[0] + " " + inputVector[1];
        cName = inputVector[2];
        inputVector.clear();
        
        vector<ClassList>::iterator it = find_if(schoolRecord.begin(), schoolRecord.end(), pred);
        if( it == schoolRecord.end()){
            
            inputVector.push_back(name);
            ClassList cl = {cName, inputVector};
            schoolRecord.push_back(cl);
            inputVector.clear();
        } else {
            inputVector = it->Students;
            vector<string>::iterator its = find(inputVector.begin(), inputVector.end(), name);
                if(its == inputVector.end()){
                    inputVector.push_back(name);
                    it->Students = inputVector;
                }
        }
        inputVector.clear();
    }

    sort(schoolRecord.begin(), schoolRecord.end(), [](const ClassList& a, const ClassList& b){
        return a.ClassName < b.ClassName;
    });
    for(int i = 0; i < schoolRecord.size(); i++){
        cout << schoolRecord[i].ClassName + " " + to_string(schoolRecord[i].Students.size()) + "\n";
    } 

    return 0;
}

/*
It is a difficult job to schedule all of the courses in a university to satisfy students’ choices with a minimum of conflicts. 
The task is made all the more difficult when some students don’t pre-enroll, or pre-enroll multiple times because they forget that they already did it.
Input

The first line of input contains an integer 0≤𝑛≤100000
, the number of student course requests. Each of the next 𝑛 lines contains three strings separated by spaces: a student’s first and last name, 
and the course that the student wishes to take. You may assume that each name is a string of at least one and at most 20 upper-case letters, 
and that a course is a string of at least one and at most 10

upper-case letters and digits. If a student requests a given course more than once, only the first such request should be considered. 
You may assume that no two students have both their first and last names the same.
Output

For each requested course, output a line containing the course, a space, and the number of students who requested the course. 
Output the courses sorted in lexicographical order (with digits sorted before letters).

Sample Input 1  
4
PINK TIE CS241
JOHN DOE CS241
JOHN DOE CSS
JOHN DOE CSS

Sample Output 1
CS241 2
CSS 1

*/