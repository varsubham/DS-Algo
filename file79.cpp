// Finding the shortest path in case of weighted graph i.e G(u, v, w)
// Simple approach is to add 'w' new edges between 'u' and 'v'



#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
#include <string>
using namespace std;

// Breadth First Search Graph Traversal Algorithm
// Using unordered_map(hashTable) to store key and list (adjacency list)


class Graph{
    public:
        
        unordered_map<string, list<string>> um;
        unordered_map<string, string> parent;
        
        void addEdges(string u, string v, int w){
            
            if(w > 1){
                string newstr1 = u+v+to_string(1);
                um[u].push_back(newstr1);

                for(int i = 2; i < w; i++){
                    string newstr1 = u+v+to_string(i);
                    string newstr2 = u+v+to_string(i+1);
                    um[newstr1].push_back(newstr2);
                }

                um[u+v+to_string(w-1)].push_back(v);
            }
            else if(w == 1){
                um[u].push_back(v);
            }

        }
        void bfs(string src){
            queue<string> qt;
            qt.push(src);
            unordered_map<string, bool> visited;

            while(!qt.empty()){
                string frnt = qt.front();
                qt.pop();
                visited[frnt] = true;
                //cout << frnt << endl;
                for(string i : um[frnt]){
                    if(!visited[i]){
                        qt.push(i);
                        parent[i] = frnt;
                        visited[i] = true;
                    }
                }
            }    
        }
        void shorted_path(string start, string end){
            bfs(start);
            auto itr = parent.find(end);
            cout << itr->first << "-->";
            while(itr->second != start){
                if(itr->second.size() == 1){              // Assuming that vertices are just 1 character word
                    cout << itr->second << "-->";
                }
                
                itr = parent.find(itr->second);
            }
            cout << itr->second << endl;
        }
};

int main(){
    Graph gp;
    gp.addEdges("S","A", 1);
    gp.addEdges("S","B", 2);
    gp.addEdges("B","A", 1);
    gp.addEdges("A","B", 3);
    gp.addEdges("A","C", 5);
    gp.addEdges("A","E", 2);
    gp.addEdges("B","D", 1);
    gp.addEdges("D","C", 2);
    gp.addEdges("C","E", 3);
    gp.addEdges("E","D", 1);
    gp.addEdges("E","F", 4);
    gp.addEdges("D","F", 1);
    // gp.addEdges(1,3);
    // gp.addEdges(2,3);
    // gp.addEdges(2,4);
    // gp.addEdges(2,5);
    // gp.addEdges(5,4);
    // gp.addEdges(4,6);
    // gp.addEdges(4,9);
    // gp.addEdges(5,6);
    // gp.addEdges(3,4);
    // gp.addEdges(3,7);
    // gp.addEdges(7,8);
    // gp.addEdges(8,9);
    // gp.addEdges(5,10);
    // gp.addEdges(11,10);
    // gp.addEdges(9,11);
    // gp.addEdges(6,9);
    
    gp.shorted_path("S", "C");
}