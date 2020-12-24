// Topological sort algorithm

#include <iostream>
#include <list>
#include <unordered_map>
#include <vector>
using namespace std;


class Graph{
    public:
        unordered_map<int, list<int>> um;
        
        // For Topological Sort
        // A parent hashmap to store parent and child relation
        unordered_map<int, int> parent;
        // A vector to store topological sort upto a given vertex
        vector<int> topo;
        
        // Create a graph by adding edges
        void addEdges(int x, int y){
            um[x].push_back(y);
            // Remove below comment to make the graph undirected
            //um[y].push_back(x);
        }
        
        // Recurisevly visit all the nodes rechable from 'vertex'
        void dfs_visit(list<int> adj, int vertex){
            for(int i : adj){
                if(parent.find(i) == parent.end()){
                    //cout << i << endl;
                    parent[i] = vertex;
                    dfs_visit(um[i], i);
                }
            }
            topo.push_back(vertex);
        }

        // visit all the vertices given in vector v
        void dfs(vector<int> v){
            
            for(int i : v){
                if(parent.find(i) == parent.end()){
                    parent[i] = 0;
                    dfs_visit(um[i], i);
                }
            }
        }

        // print topological sort upto a given vertex 'ver'
        void topolo_sort(vector<int> v, int ver){
            dfs(v);
            bool temp = false;
            for(int i : topo){
                if(i == ver)
                    temp = true;
                if(temp)
                    cout << i << endl;
            }
        }
        
};

int main(){
    Graph gp;
    gp.addEdges(1,2);
    gp.addEdges(3,2);
    gp.addEdges(3,4);
    gp.addEdges(5,4);
    gp.addEdges(4,7);
    gp.addEdges(7,8);
    gp.addEdges(5,6);
    gp.addEdges(6,8);

    // vector of all the vertex present in our graph
    vector<int> vt = {1,2,3,4,5,6,7,8};
    
    // topological sort upto given 'ver'
    gp.topolo_sort(vt, 8);
}