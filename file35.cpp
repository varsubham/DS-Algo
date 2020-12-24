#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

int activityNotifications(vector<int> expenditure, int d) {
    int count = 0;
    int i = 0;
    while(i+d-1 < expenditure.size() - 1){
        multiset<int> ms;
        for(int j = i; j < d+i ; j++){
            ms.insert(expenditure[j]);
        }
        
        // vector<int> ms(expenditure.begin() + i, expenditure.begin() + i + d);
        // for(int i : ms)
        //     cout << i << " ";
        // cout << endl;
        double med = 0;
        if(d % 2 == 0){
            auto itr = ms.begin();
            int median = ms.size() / 2;
            advance(itr, median);
            med = ((*itr) + (*(--itr))) / 2.0;
        }
        else{
            auto itr = ms.begin();
            int median = ms.size() / 2;
            advance(itr, median);
            med = *itr;
        }
        if((expenditure[i+d]) >= med * 2)
            count++;
        i++;
    }
    return count;

}


int main(){
    vector<int> vt = {2, 3, 4, 2, 3, 6, 8, 4, 5};        
    // vector<int> vt2(vt.begin(), vt.begin() + 4);
    // for(int i : vt2)
    //     cout << i << " ";
    // cout << endl;
    activityNotifications(vt, 5);
}