#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
unordered_map<pair<int, int>, bool, hash_pair> visited;




bool ifNextMovePossible(vector<vector<char>>& maze, pair<int, int> current_index) {
    bool is_fesable = false;
    int rows = maze.size();
    int columns = maze[0].size();
    if (current_index.first + 1 < rows) {
        if (maze[current_index.first + 1][current_index.second] == 'O' && !visited[{current_index.first + 1, current_index.second}])
            is_fesable = true;
    }
    if (current_index.second + 1 < columns) {
        if (maze[current_index.first][current_index.second + 1] == 'O' && !visited[{current_index.first, current_index.second + 1}])
            is_fesable = true;
    }
    if (current_index.first - 1 >= 0) {
        if (maze[current_index.first - 1][current_index.second] == 'O' && !visited[{current_index.first - 1, current_index.second}])
            is_fesable = true;
    }
    if (current_index.second - 1 >= 0) {
        if (maze[current_index.first][current_index.second - 1] == 'O' && !visited[{current_index.first, current_index.second - 1}])
            is_fesable = true;
    }
    else
        is_fesable = false;
    return is_fesable;
}

int main(){
    vector<vector<char>> maze = {
        {'S', 'O', 'O', 'O', 'O', 'X'},
        {'O', 'X', 'O', 'O', 'O', 'O'},
        {'O', 'X', 'E', 'X', 'O', 'O'},
        {'O', 'X', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'X', 'O', 'X', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'X', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O'},
    };
    visited[{7,4}] = true;
    visited[{7,5}] = true;
    visited[{6,5}] = true;
    cout << ifNextMovePossible(maze, {5,5}) << endl;

}