#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    vector<int> vt = {2,45,76,3,2,9,5,2};
    priority_queue<int> pq(vt.begin(), vt.end());
    pq.pop();
    cout << pq.top() << endl;
}