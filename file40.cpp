#include <iostream>
#include <vector>

using namespace std;

void findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> final_arr((nums1.size() + nums2.size()));
        int i = 0; int j = 0; int k = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] <= nums2[j]){
                final_arr[k] = nums1[i];
                k++;
                i++;
            }
            else if(nums2[j] < nums1[i]){
                final_arr[k] = nums2[j];
                j++;
                k++;
            }
        }
        while(i < nums1.size()){
            final_arr[k] = nums1[i];
            k++;
            i++;
        }
        while(j < nums2.size()){
            final_arr[k] = nums2[j];
            j++;
            k++;
        }
        for(int i  : final_arr)
            cout << i << " ";
        cout << endl;
    }

int main(){
    vector<int> v1 = {1,2};
    vector<int> v2 = {3,4};
    findMedianSortedArrays(v1, v2);
}