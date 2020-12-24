// maze solving algorithm

#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>

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

// finding the start index
pair<int, int> find_start_point(vector<vector<char>>& maze) {
    for (int i = 0; i < maze.size(); i++) {
        for (int j = 0; j < maze[i].size(); j++) {
            if (maze[i][j] == 'S')   return make_pair(i, j);
        }
    }
    return make_pair(0, 0);
}

// find the fesable moves
// order of moves down down, right, top, left
// return true if fesable and change the current_index accordingly
// return false if none of the direction is fesable and don't change current_index
pair<int, int> next_fesable_move(vector<vector<char>>& maze, pair<int, int> current_index) {
    if (maze[current_index.first + 1][current_index.second] == 'O') {
        current_index.first += 1;
    }
    else if (maze[current_index.first][current_index.second + 1] == 'O') {
        current_index.second += 1;
    }
    else if (maze[current_index.first - 1][current_index.second] == 'O') {
        current_index.first -= 1;
    }
    else if (maze[current_index.first][current_index.second - 1] == 'O') {
        current_index.second -= 1;
    }
    return current_index;
}
bool ifNextMovePossible(vector<vector<char>>& maze, pair<int, int> current_index) {
    bool is_fesable;
    if (maze[current_index.first + 1][current_index.second] == 'O') {
        is_fesable = true;
    }
    else if (maze[current_index.first][current_index.second + 1] == 'O') {
        is_fesable = true;
    }
    else if (maze[current_index.first - 1][current_index.second] == 'O') {
        is_fesable = true;
    }
    else if (maze[current_index.first][current_index.second - 1] == 'O') {
        is_fesable = true;
    }
    else
        is_fesable = false;
    return is_fesable;
}


stack<pair<int, int>> depth_first_search(vector<vector<char>>& maze) {
    pair<int, int> start_index = find_start_point(maze);
    // set of moves
    // left, right, up, down
    unordered_map<pair<int, int>, bool, hash_pair> visited;
    pair<int, int> current_index = start_index;
    stack<pair<int, int>> st;
    while (maze[current_index.first][current_index.second] != 'E') {
        if (ifNextMovePossible(maze, current_index)) {
            if (!visited[current_index]) {
                st.push(current_index);
                visited[current_index] = true;
                current_index = next_fesable_move(maze, current_index);
            }
            else if (visited[current_index]) {
                pair<int, int> temp = st.top();
                st.pop();
                current_index = temp;
            }
        }
        else if (!ifNextMovePossible(maze, current_index)) {
            pair<int, int> temp = st.top();
            st.pop();
            current_index = temp;
        }
    }
    return st;
}

int main() {
    // 8 * 6 vector
    // 'O' means empty space
    // 'X' means barrier
    // 'S' means start point
    // 'E' means end point
    vector<vector<char>> maze = {
        {'O', 'O', 'O', 'O', 'O', 'X'},
        {'O', 'X', 'O', 'O', 'O', 'O'},
        {'O', 'X', 'E', 'X', 'O', 'O'},
        {'O', 'X', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'S', 'O', 'O'},
        {'O', 'X', 'O', 'X', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'X', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O'},
    };
    //pair<int, int> start = { 0,0 };
    //pair<int, int> end = { 2,2 };
    stack<pair<int, int>> final_path = depth_first_search(maze);

}