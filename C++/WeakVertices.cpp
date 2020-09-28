#include <stdio.h>
#include <iostream> 
#include <string> 
#include <utility>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

void tokenize_string_to_i(string const &str, const char delim, vector<int> &out)
{
    stringstream ss(str);
    
    string s;
    while(getline(ss, s, delim))
    {
        out.push_back(stoi(s));
    }
}

bool findNoTriangles(vector<int> adj[], int current){

    for (auto x: adj[current]){
        for(auto y:adj[x]){
            for(auto z: adj[y]){
                if(z == current){
                    return true;
                }
            }
        }
    }

    return false;
}

int main()
{
    
    string input = "";
    int active = 0, j = 0, binary = 0;
    vector<int> VertVector;
    getline(cin, input);
    
    active = stoi(input);

    while(active != -1){
        
        vector<int> adj[active];
        for(int i = 0; i < active; i++)
        {
        getline(cin, input);
        //cout << input << '\n';
        tokenize_string_to_i(input, ' ', VertVector);

        for(auto &binary: VertVector)
            {
                if(binary == 1){
                    addEdge(adj, i, j);
                }
                j++;
            }
            
            j = 0;
            
            //cout << VertVector.size() << '\n';
        
            VertVector.clear();
        }
        
        for(int i = 0; i < active; i++){
        bool hasTriangles = findNoTriangles(adj, i);

            if(!hasTriangles){
                cout << i << " ";
            }
        }

        getline(cin, input);
    
        active = stoi(input);

        if(active != -1){
            cout << '\n';
        }
    }
    
    

    return 0;
}

/* 
Engineers like to use triangles. It probably has something to do with how a triangle can provide a lot of structural strength. 
We can describe the physical structure of some designs using an undirected graph. We’ll say vertex 𝑖 is part of a triangle if 𝑖 has two different neighbors 𝑗 and 𝑘 such that 𝑗 and 𝑘

are neighbors of each other. For this problem, find weak vertices in graphs – those vertices that is not part of any triangle.
Input

Input consists of up to 100
graphs. Each starts with an integer, 1≤𝑛≤20, giving the number of vertices in the graph. Next come 𝑛 lines with 𝑛 integers on each line, which describe an 𝑛×𝑛 adjacency matrix for the graph. Vertices are numbered from 0 to 𝑛−1. If the adjacency matrix contains a one at row 𝑟, column 𝑐 (where 0≤𝑟,𝑐≤𝑛−1), it means that there is an edge from vertex 𝑟 to vertex 𝑐. Since the graph is undirected, the adjacency matrix is symmetric. The end of input is marked by a value of −1 for 𝑛

9
0 1 1 1 0 0 0 0 0
1 0 0 0 0 0 1 0 0
1 0 0 1 0 1 0 0 0
1 0 1 0 0 1 1 0 0
0 0 0 0 0 0 1 1 0
0 0 1 1 0 0 0 0 0
0 1 0 1 1 0 0 1 0
0 0 0 0 1 0 1 0 1
0 0 0 0 0 0 0 1 0
1
0
-1

.
Output

For each graph, produce a line listing the weak vertices ordered from least to greatest.

1 8
0

*/