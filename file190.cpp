// happy numbers

#include <iostream>
#include <set>
#include <cmath>

using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        set<int> st;
        while (true)
        {
            if (st.find(n) != st.end())
                return false; //if cycle then break
            st.insert(n);
            long long squreSum = 0;
            while (n)
            {
                squreSum += (pow(n % 10, 2));
                n /= 10;
            }
            if (squreSum == 1)
                return true;
            n = squreSum;
        }
    }
};

int main() {
    Solution st;
    cout << st.isHappy(19) << endl;
}
