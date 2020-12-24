#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_num = 0; int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                count = 0;
            }
            else{
                count++;
                if(count > max_num)
                    max_num = count;
            }
        }
        return max_num;
    }

int main(){
    vector<int> vect = {1,0,0,0,1,0};
    cout << findMaxConsecutiveOnes(vect) << endl;
}