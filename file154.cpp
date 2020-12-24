// 
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    struct pair_hash {
        inline std::size_t operator()(const std::pair<int,int> & v) const {
            return v.first*31+v.second;
        }
    };
    unordered_set<pair<int, int>, pair_hash> isVisited;
    vector<pair<int, int>> adjacent_vertex(int rows, int cols, pair<int, int> current_pos){
        // current position
        int current_x = current_pos.first;
        int current_y = current_pos.second;
        
        vector<pair<int, int>> adjacent_pos;
        if(current_x - 1 >= 0)   adjacent_pos.push_back(make_pair(current_x - 1, current_y));
        if(current_y - 1 >= 0)   adjacent_pos.push_back(make_pair(current_x, current_y - 1));
        if(current_x + 1 < rows)    adjacent_pos.push_back(make_pair(current_x + 1, current_y));
        if(current_y + 1 < cols)    adjacent_pos.push_back(make_pair(current_x, current_y + 1));
        return adjacent_pos;
        
    }
    bool DFS_Visit(vector<pair<int, int>> adj, pair<int, int> curr, vector<vector<char>>& board, int i, string word ){
        for(auto v : adj){
            if(isVisited.find(v) == isVisited.end() && board[curr.first][curr.second] == word[i]){
                isVisited.insert(v);
                i++;
                if(i == word.size()){
                    return true;
                }
                DFS_Visit(adj, v, board, i, word);
            }
        }
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        vector<pair<int, int>> adj = adjacent_vertex(3, 4, make_pair(1, 3));
        isVisited.insert(make_pair(1, 3));
        return DFS_Visit(adj, make_pair(1, 3), board, 0, word);
    }
};

int main(){
    vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word = "SEE";
    Solution st;
    vector<pair<int, int>> adj = st.adjacent_vertex(3, 4, make_pair(1, 3));
    // for(int i = 0; i < adj.size(); i++){
    //     cout << adj[i].first << " " << adj[i].second << endl;
    // }
    cout << st.exist(board, word) << endl;

}