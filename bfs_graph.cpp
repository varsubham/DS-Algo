#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
using namespace std;

// Breadth First Search Graph Traversal Algorithm
// Using unordered_map(hashTable) to store key and list


class Graph{
    public:
        int num_vertices;
        unordered_map<int, list<int>> um;
        Graph(int num_Vertices){
            this->num_vertices = num_vertices;
        }
        void addEdges(int x, int y){
            um[x].push_back(y);
            um[y].push_back(x);
        }
        void bfs(int src){
            queue<int> qt;
            qt.push(src);
            unordered_map<int, bool> visited;

            while(!qt.empty()){
                int frnt = qt.front();
                qt.pop();
                visited[frnt] = true;
                cout << frnt << endl;
                for(int i : um[frnt]){
                    if(!visited[i]){
                        qt.push(i);
                        visited[i] = true;
                    }
                }
            }    
        }
};

int main(){
    Graph gp(5);
    gp.addEdges(0,1);
    gp.addEdges(0,2);
    gp.addEdges(1,2);
    gp.addEdges(2,3);
    gp.addEdges(3,3);
    gp.bfs(2);
}