// find the odd occurence of the number, given that all other numbers in the array are having even occurence
// using XOR

#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
        int findOddOccurence(vector<int> &vt){
            int k = 0;
            int size = vt.size();
            for(int i = 0; i < size; i++){
                k = k ^ vt[i];
            }
            return k;
        }
};

int main(){
    vector<int> vt = {2,2,5,5,8,8,5,7,7};
    Solution st;
    cout << st.findOddOccurence(vt) << endl;
}