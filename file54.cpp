#include <iostream>
#include <vector>

using namespace std;

int peakfinding(vector<int> vt, int start, int end){
    int mid = (start + end) / 2;
    if(start == end){
        return vt[start];
    }
    else{
        if(vt[mid] > vt[mid+1] && vt[mid] < vt[mid-1]){
            peakfinding(vt, start, mid - 1);
        }
        else if(vt[mid] > vt[mid-1] && vt[mid] < vt[mid+1]){
            peakfinding(vt, mid+1, end);
        }
        else if(vt[mid] > vt[mid+1]  && vt[mid] > vt[mid-1])
            return vt[mid];
    }
    return 0;

    
}

int main(){
    vector<int> vt = {1,2,3,4,5,6,7,2,1};
    cout << peakfinding(vt, 0, 8) << endl;

}