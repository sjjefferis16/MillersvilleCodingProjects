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
    struct treeStruct
  {
    int parent;
    vector<int> children;
  };
    int kitten_Pos = 0;
    vector<int> childrenVector;
    vector<int> path;
    vector<treeStruct> MainTree;
    string input = "";
    getline(cin, input);
    kitten_Pos = stoi(input);
    path.push_back(kitten_Pos);

    getline(cin, input);

    while(input != "-1"){
        tokenize_string_to_i(input, ' ', childrenVector);
        vector <int>::iterator childVecIter = childrenVector.begin();
        int parentInt = *childVecIter;
        childrenVector.erase(childVecIter);
        treeStruct subtree = {parentInt, childrenVector};
        MainTree.push_back(subtree);
        //cout << parentInt << '\n';
        getline(cin, input);
        childrenVector.clear();
    }
    vector<treeStruct>::iterator nextNode = MainTree.begin();
    while(nextNode != MainTree.end()){
        vector <int>::iterator childVecIter = (nextNode->children).begin();
        while(childVecIter !=  (nextNode->children).end()){
            if(kitten_Pos == *childVecIter){
                kitten_Pos = (nextNode->parent);
                path.push_back(kitten_Pos);
                nextNode = MainTree.begin() - 1;
                break;
            }
            childVecIter++;
        }
        nextNode++;
    }
    

    vector<int>::iterator pathIter = path.begin();
    while(pathIter != path.end()){
        cout << *pathIter << " ";
        pathIter++;
    }

    return 0;
}

/*

Kitten on a Tree
Ouch! A kitten got stuck on a tree. Fortunately, the tree’s branches are numbered. Given a description of a tree and the position of the kitten, can you write a program to help the kitten down?
Input

The input is a description of a single tree. The first line contains an integer 𝐾
denoting the branch on which the kitten got stuck. The next lines each contain two or more integers 𝑎,𝑏1,𝑏2,…. Each such line denotes a branching: the kitten can reach 𝑎 from 𝑏1,𝑏2,… on its way down. 
Thus, 𝑎 will be closer to the root than any of the 𝑏𝑖. The description ends with a line containing -1. Each branch 𝑏𝑖 will appear on exactly one line. All branch numbers are in the range 1..100

, though not necessarily contiguous. You are guaranteed that there is a path from every listed branch to the root. The kitten will sit on a branch that has a number that is different than the root.

The illustration above corresponds to the sample input.
Output

Output the path to the ground, starting with the branch on which the kitten sits.

Sample Input 1  
14
25 24
4 3 1 2
13 9 4 11
10 20 8 7
32 10 21
23 13 19 32 22
19 12 5 14 17 30
14 6 15 16
30 18 31 29
24 23 26
26 27 28
-1

Sample Output 1
14 19 23 24 25
*/