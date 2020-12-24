#include <iostream>
#include <vector>

using namespace std;

int maxindex(vector<vector<int>> vt, int mid){
    int size = vt.size();
    int max = 0;int max_index = 0;
    for(int i = 0; i < size; i++){
        if(vt[mid][i] > max){
            max = vt[mid][i];
            max_index = i;
        }
    }
    return max_index;
}

int peakfinding(vector<vector<int>> vt, int start, int end){
    int mid = (start+end)/2;
    int max_in_col = maxindex(vt, mid);
    int final_val = 0;
    if(start == end)
        final_val = vt[start][start];
    else{
        if(vt[mid][max_in_col] < vt[mid+1][max_in_col] && vt[mid][max_in_col] > vt[mid-1][max_in_col]){
            final_val = peakfinding(vt, mid+1, end);
        }
        else if (vt[mid][max_in_col] < vt[mid-1][max_in_col] && vt[mid][max_in_col] > vt[mid+1][max_in_col])
            final_val = peakfinding(vt, start, mid - 1);
        else if(vt[mid][max_in_col] > vt[mid+1][max_in_col] && vt[mid][max_in_col] > vt[mid-1][max_in_col]){
            final_val = vt[mid][max_in_col];
        }
    }
    return final_val;

}

int main(){
    vector<vector<int>> vt = {{0,0,0,0},{1,3,4,2},{1,6,5,1},{2,3,8,2}};
    cout << peakfinding(vt,0, 3) << endl;
}