// return the maximum product of three numbers.
// O(n) time complexity


#include <iostream>
#include <string>
#include <climits>
#include <vector>
using namespace std;
void maximumProduct(vector<int>& nums) {
        int min1 = INT_MAX, min2 = INT_MAX, max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        for(auto &n: nums){
            if(n<min1){
                min2 = min1;
                min1 = n;
            }else if(n<min2)
                min2 = n;
            if(n>max1){
                max3 = max2;
                max2 = max1;
                max1 = n;
            }else if(n>max2){
                max3 = max2;
                max2 = n;
            }else if(n>max3)
                max3 = n;
        }
        cout << min1<< endl;
        cout << min2<< endl;
        cout << max1<< endl;
        cout << max2<< endl;
        cout << max3<< endl;
}
int main(){
    vector<int> vt = {34,2,5,7,3,1,-3,-34,-1,5,23};
    maximumProduct(vt);
}