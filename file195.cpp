#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    int totalHammingDistance(vector<int> &nums)
    {
        vector<int> bits(32, 0);
        int n = nums.size(), res = 0;

       
        for (int i : nums)
            for (int j = 0; j < 32; j++)
                if (i & (1 << j))
                    bits[j]++;

        
        for (int i = 0; i < 32; i++)
            res += bits[i] * (n - bits[i]); ///

        return res;
    }
};

int main(){
    Solution st;
    vector<int> vt = {4, 14, 2};
    cout << st.totalHammingDistance(vt) << endl;
}
