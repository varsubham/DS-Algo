// find in mountain array leetcode
// incomplete 

#include <iostream>
#include <vector>
using namespace std;

class MountainArray {
    public:
        vector<int> mountainarr;
        MountainArray(vector<int> &intial_vector){
            for(int i = 0; i < intial_vector.size(); i++){
                mountainarr.push_back(intial_vector[i]);
            }
        }
        int length(){
            return mountainarr.size();
        }
        int get(int index){
            return mountainarr[index];
        }
};

class Solution{
    public:
        int findInMountainArray(int target, MountainArray &mountainarr){
            int size = mountainarr.length();
            int start = 0; int end = size - 1; int mid = 0;
            int min_index = -1;
            while(start <= end){
                mid = start + (end - start) / 2;

                //ascending
                if((mountainarr.get(mid - 1) < mountainarr.get(mid) && mountainarr.get(mid) < mountainarr.get(mid + 1)) && mountainarr.get(mid) != target){
                    if(mountainarr.get(mid) < target){
                        start = mid + 1;
                    }
                    else if(mountainarr.get(mid) > target){
                        end = mid - 1;
                    }
                }
            }
        }
};

int main(){
    vector<int> vt = {1,2,3,4,5,3,1};
    int target = 3;
    MountainArray ma(vt);
    //cout << ma.length() << endl;
    Solution st;
    cout << st.findInMountainArray(target, ma) << endl;

}