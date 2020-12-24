// snap arr

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class SnapshotArray {
public:
    vector<int> snaparr;
    int count = 0;
    unordered_map<int, vector<int>> prevsnap;
    //vector<vector<int>> prevsnap;
    SnapshotArray(int length) {
        for(int i = 0; i < length; i++){
            snaparr.push_back(0);
        }
    }
    
    void set(int index, int val) {
        snaparr[index] = val;
    }
    
    int snap() {
        prevsnap[count] = snaparr;
        count++;
        return count - 1;
    }
    
    int get(int index, int snap_id) {
        vector<int> arr = prevsnap[snap_id];
        return arr[index];
    }
};

int main(){
    SnapshotArray sa(10);
    sa.set(0, 5);
    cout << sa.snap() << endl;
    sa.set(0, 6);
    cout << sa.get(0, 0) << endl;
}