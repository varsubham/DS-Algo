#include <iostream>
#include <stack>

using namespace std;
 
void print_reverse(stack<int> st){
    if(st.empty()){
       return;
    }
        int x = st.top();
        st.pop();
        print_reverse(st);
        cout << x << endl;
        st.push(x);
    
   
}

int main(){
    stack<int> st;
    st.push(23);
    st.push(74);
    st.push(15);
    st.push(2);
    print_reverse(st);
}