// grumpy bookstore owner (leetcode)
// Code can be improved

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int x) {
        vector<int> grum_cust(customers.size());
        for(int i = 0; i < customers.size(); i++){
            grum_cust[i] = customers[i] * grumpy[i];
        }
        
        // window of x
        int max_val = -1;
        pair<int, int> max_pos;
        for(int i = 0; i < customers.size() - x + 1; i++){
            int temp_max = 0;
            int temp_j = 0;
            for(int j = i; j < i + x; j++){
                temp_max += grum_cust[j];
                temp_j = j;
            }
            if(max_val < temp_max){
                max_val = temp_max;
                max_pos.first = i;
                max_pos.second = temp_j;
            }
        }
        
        for(int i = max_pos.first; i <= max_pos.second; i++){
            grumpy[i] = 0;
        }
        
        int max_customers = 0;
        for(int i = 0; i < customers.size(); i++){
            if(grumpy[i] == 0){
                max_customers += customers[i];
            }
        }
        return max_customers;
        
    }
};

int main(){
    Solution st;
    vector<int> customers = {1,0,1,2,1,1,7,5};
    vector<int> grumpy = {0,1,0,1,0,1,0,1};
    int x = 3;
    cout << st.maxSatisfied(customers, grumpy, x) << endl;
}