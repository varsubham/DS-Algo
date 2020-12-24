// spliting array

#include <iostream>
#include <vector>
#include <string>
using namespace std;
string slicearr(vector<int> &nums, int start, int end, int m){
    if(m == 1)
        return " " + to_string(start) + "," + to_string(nums.size() - 1);
    else{
        for(int i = start; i <= end; i++){
            for(int j = i + 1; j <= end; j++){
                return " " + to_string(i) + "," + to_string(j) + slicearr(nums, j + 1, end, m - 1);
            }
        }
    }
    return "";
}
int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8};
    cout << slicearr(nums, 0, nums.size() - 1, 3) << endl;
}