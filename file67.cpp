// using Graph BFS to find all the balanced bracket sequence by removing the least
// number of brackets

#include <iostream>
#include <stack>
#include <queue>
#include <unordered_map>
#include <unordered_set>
using namespace std;

char inverserBracket(char ch){
    char returnval;
    if(ch == ')')
        returnval = '(';
    else if(ch == '}')
        returnval = '{';
    else if(ch == ']')
        returnval = '[';
    return returnval;
}

bool isBalanced(string s){
    stack<char> st;
    for(char ch : s){
        if(ch == '{' || ch == '(' || ch == '['){
            st.push(ch);
        }
        else if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)){
            continue;
        }
        else if(ch == '}' || ch == ')' || ch == ']'){
            if(st.empty()){
                return false;
            }
            if(st.top() == inverserBracket(ch)){
                st.pop();
            }
            else if(st.top() != inverserBracket(ch))
                return false;
        }
    }
    if(!st.empty())
        return false;
    else
        return true;
}

vector<string> bfs(string s){
    unordered_set<char> st;
    st.insert('(');
    st.insert('{');
    st.insert('[');
    st.insert(')');
    st.insert('}');
    st.insert(']');
    queue<string> qt;
    unordered_map<string, bool> visited;
    qt.push(s); bool found = false;
    vector<string> finalstring;
    while(!qt.empty()){
        string frnt = qt.front();
        qt.pop();
        if(visited[frnt])
            continue;
        visited[frnt] = true;
        if(isBalanced(frnt)){
            finalstring.push_back(frnt);
            found = true;
        }
        if(found){continue;}
        for(int i = 0; i < frnt.size(); i++){
            if(st.find(frnt[i]) != st.end()){
                string temp = frnt.substr(0, i) + frnt.substr(i + 1, frnt.size());
                qt.push(temp);
            }
        }
    }
    return finalstring;
}

int main(){
    string s = "(a)()){()";
    vector<string> st = bfs(s);
    for(string s: st){
        cout << s << endl;
    }
}