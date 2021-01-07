//kth missing positive num

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int size = arr.size();
        int current_num = 0;
        int num_missing = 0;
        int kthnum = 0;
        for (int i = 0; i < size; i++)
        {
            int temp = arr[i] - current_num - 1;
            if (num_missing + temp < k)
            {
                num_missing += temp;
            }
            else
            {
                kthnum = current_num + 1 * (k - num_missing);
                break;
            }
            current_num = arr[i];
        }
        return kthnum == 0 ? (current_num + (k - num_missing))  : kthnum;
    }
};


int main(){
    vector<int> arr = {3, 10};
    int k = 2;
    Solution st;
    cout << st.findKthPositive(arr, k) << endl;
}