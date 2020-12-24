#include <iostream>

#include <unordered_map>

using namespace std;
class Solution {
public:
    unordered_map<int, int> tribonaaci_val;
    int x = 0;
    int tribonacci(int n) {
        
        if(tribonaaci_val.find(n) != tribonaaci_val.end()){
            x = tribonaaci_val[n];
        }
        else if(n == 0)
            x =  0;
        else if(n == 1 || n == 2)
            x = 1;
        
        else{
            x =  tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
            tribonaaci_val[n] = x;
            
        }
        return x;
    }
};

int main(){
    Solution st;
    cout << st.tribonacci(5) << endl;
}