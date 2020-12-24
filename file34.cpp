#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <queue>
using namespace std;
int main() {
	// map<int, int> mp;
	// mp.insert(make_pair(23,34));
	// mp.insert(make_pair(3,34));
	// map<int, int>::iterator itr = mp.begin();
	// for (; itr != mp.end(); itr++) {
	// 	cout << itr->first << " " << itr->second << endl;
	// }
	// cout << endl;

	// vector<int> v1 = {23,54,56,76,34};
	// vector<int> v2(v1);
	// v2[0] = 5342;
	// cout << v1[0] << v2[0] << endl;
	// vector<int> vt = {23,54,65,34,32,32,5656};
	// multiset<int> ms(vt.begin(), vt.end());
	// for(int i : ms)
	// 	cout << i << " ";
	// ms.insert(*(vt.begin()+3));
	// cout << endl; 
	priority_queue<int, vector<int>, greater<int>> pq;
	pq.push(23);
	pq.push(11);
	pq.push(89);
	cout << pq.top() << endl; 
	vector<int> vt;
}