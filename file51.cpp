#include <iostream>
#include <vector>

using namespace std;

 vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size() - 1] != 9){
            digits[digits.size() - 1]++;
            return digits;
        }
        else{
            int i = digits.size() - 1;
            while(digits[i] == 9 && i >= 0){
                digits[i] = 0;
                i--;
                if(i < 0)
                    break;
            }
            if(i == -1){
                digits.insert(digits.begin(), 1);
            }
            else{
                digits[i]++;
            }
        }
        return digits;
    }

int main(){
    vector<int> v2 = {9};
    //vector<int> v3 = {1,2,3,5};
    //v3.insert(v3.begin(), 8);
    plusOne(v2);
    for(int i : v2)
        cout << i << ' ';
    cout << endl;
}