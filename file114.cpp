
// wrong code

#include <iostream>
#include <set>
#include <cmath>

using namespace std;

class Solution{
    public:
        int binaryGap(int n){
            int len = (log(n) / log (2)) + 1;
            //set<int> st;
            if(n == 1)
                return 0;
            int maxdistance = 0;
            int current_pointer = len;
            for(int i = len; i >= 0; i--){
                int temp = 1 << i;
                if((n & temp) != 0){
                    //st.insert(i);
                    //current_pointer = i;
                    maxdistance = current_pointer - i > maxdistance ? current_pointer - i : maxdistance;
                    current_pointer = i;
                }
            }
            // if(st.empty() || st.size() == 1)
            //     return 0;
            // auto itr1 = st.begin();
            // auto itr2 = st.end();
            // itr2--;
            return maxdistance;
        }
};

int main(){
    Solution st;
    int n = 8;
    cout << st.binaryGap(n) << endl;
}