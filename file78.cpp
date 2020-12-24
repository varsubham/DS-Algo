// Shorted path between two given vertices
// Using BFS without any edge weight
// considering directed graph

#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
using namespace std;

// Breadth First Search Graph Traversal Algorithm
// Using unordered_map(hashTable) to store key and list (adjacency list)


class Graph{
    public:
        
        unordered_map<int, list<int>> um;
        unordered_map<int, int> parent;
        
        void addEdges(int x, int y){
            um[x].push_back(y);
            //Commenting below line to make it a directed graph
            //um[y].push_back(x);
        }
        void bfs(int src){
            queue<int> qt;
            qt.push(src);
            unordered_map<int, bool> visited;

            while(!qt.empty()){
                int frnt = qt.front();
                qt.pop();
                visited[frnt] = true;
                //cout << frnt << endl;
                for(int i : um[frnt]){
                    if(!visited[i]){
                        qt.push(i);
                        parent[i] = frnt;
                        visited[i] = true;
                    }
                }
            }    
        }
        void shorted_path(int start, int end){
            bfs(start);
            auto itr = parent.find(end);
            cout << itr->first << "-->";
            while(itr->second != start){
                cout << itr->second << "-->";
                itr = parent.find(itr->second);
            }
            cout << itr->second << endl;
        }
};

int main(){
    Graph gp;
    gp.addEdges(1,2);
    gp.addEdges(1,3);
    gp.addEdges(2,3);
    gp.addEdges(2,4);
    gp.addEdges(2,5);
    gp.addEdges(5,4);
    gp.addEdges(4,6);
    gp.addEdges(4,9);
    gp.addEdges(5,6);
    gp.addEdges(3,4);
    gp.addEdges(3,7);
    gp.addEdges(7,8);
    gp.addEdges(8,9);
    gp.addEdges(5,10);
    gp.addEdges(11,10);
    gp.addEdges(9,11);
    gp.addEdges(6,9);
    
    gp.shorted_path(3, 10);
}