#include <iostream>
#include <bits/stdc++.h>
using namespace std;;

int main(){
    vector<int> vt = {2,4,7,5,2,11};
    priority_queue <int, vector<int>, greater<int> > pq(vt.begin(), vt.end());
    
    int x = 103040 % 5;
    int y = pow(2,10);
    int z = pow(10,9) + 7;
    int a = 34983589 % z;
    cout << a << endl;









}