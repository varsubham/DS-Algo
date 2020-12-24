// Two city scheduling interview problem where there are two city and n/2 candidates should go to city A and remaining n/2 should go to city B
// There by minimizing the cost of travel of flight

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // bool sortbydiff(const vector<int> &a,const vector<int> &b){
    //     return ((a[1] - a[0]) > (b[1] - b[0])); 
    // }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        sort(costs.begin(), costs.end(), [](const vector<int> &a,const vector<int> &b) {             // lambda function used here
            return ((a[1] - a[0]) > (b[1] - b[0]));
        });
        int min_cost = 0;
        int size = costs.size();
        for(int i = 0; i < size; i++){
            if(i < size / 2){
                min_cost += costs[i][0];
            }
            else{
                min_cost += costs[i][1];
            }
        }
        return min_cost;
    }
};

int main(){
    vector<vector<int>> costs = {{10,20},{30,200},{400,50},{30,20}};
    
    Solution st;
    cout << st.twoCitySchedCost(costs) << endl;
    
}