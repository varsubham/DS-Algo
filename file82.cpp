// How to cut a rod to maxamize the profit
// using Dynammic Programming

#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

unordered_map<int, int> hashtab;
unordered_map<int, int> solutions;

int rodcut(int n){
    int val;
    if(n == 1){
        val = hashtab[1];
    }
    else{
        int left = 1; int right = n - 1; int max_val = hashtab[n];
        while(left <= right){
            int left_sol;
            int right_sol;
            
            left_sol = solutions[left] ? solutions[left] : rodcut(left);
            solutions[left] = left_sol;
            right_sol = solutions[right] ? solutions[right] : rodcut(right);
            solutions[right] = right_sol;

            max_val = left_sol + right_sol > max_val ? left_sol + right_sol : max_val;

            left++;
            right--;
        }
        val = max_val;
    }
    return val;
}

int main(){
    hashtab[1] = 1;
    hashtab[2] = 5;
    hashtab[3] = 8;
    hashtab[4] = 9;
    hashtab[5] = 10;
    hashtab[6] = 17;
    hashtab[7] = 17;
    hashtab[8] = 20;
    hashtab[9] = 24;
    hashtab[10] = 30;
    cout << rodcut(5) << endl;

}