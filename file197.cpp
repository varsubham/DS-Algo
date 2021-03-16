// valid parenthesis

#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isPairValid(char brkt1, char brkt2){
        if(brkt1 == '(' && brkt2 == ')')
            return true;
        if(brkt1 == '{' && brkt2 == '}')
            return true;
        if(brkt1 == '[' && brkt2 == ']')
            return true;
        return false;
    }
    
    bool isValid(string s) {
        stack<char> parenthesis_stack;
        
        // loop through s, insert any opening bracket, and pop off closing bracket only if top is equal to 
        // the bracket
        for(char brkt : s){
            // ckeck for opening bracket
            if(brkt == '(' || brkt == '[' || brkt == '{'){
                parenthesis_stack.push(brkt);
            }
            // check for closing bracket
            else if(brkt == ')' || brkt == '}' || brkt == ']'){
                if(parenthesis_stack.empty()){
                    return false;
                }
                if(!isPairValid(parenthesis_stack.top(), brkt))
                    return false;
                if(isPairValid(parenthesis_stack.top(), brkt)){
                    parenthesis_stack.pop();
                    continue;
                }
            }
        }
        if(parenthesis_stack.empty())
            return true;
        return false;
    }
};

int main(){
    Solution st;
    string s = "([)]";
    cout << st.isValid(s) << endl;
}