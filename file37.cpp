#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

double count_sort_func(vector<int> &count_sort,int old_element, int new_element, int d){
    count_sort[old_element]--;
    count_sort[new_element]++;
    int sum = 0;
    for(int i = 0; i < count_sort.size(); i++){
        sum += count_sort[i];
        if(d % 2 != 0){
            int md = d/2 + 1;
            if(sum >= md){
                return i;
            }
        }
        else{
            int md = d/2 + 1;
            if(sum >= md){
                int diff = sum - md;
                if(diff <= count_sort[i])
                    return i;
                else
                    return (i + (i-1))/2;
            }

        }
    }
    return 0.0;
}

// Complete the activityNotifications function below.
int activityNotifications(vector<int> expenditure, int d) {
    int count = 0;
    int i = 0;
    vector<int> count_sort(201);
    queue<int> qt;
    for(int i = 0; i < d; i++){
        count_sort[expenditure[i]]++;
        qt.push(expenditure[i]);
    }
    
    while(i+d-1 < expenditure.size() - 1){
        double med = 0;
        if(i == 0){
            vector<int> vt(expenditure.begin(), expenditure.begin() + d);
            sort(vt.begin(), vt.end());
            double med = 0;
            if(d % 2 == 0){
                med = (expenditure[d/2] + expenditure[d/2 - 1]) / 2;
            }
            else
                med = expenditure[d/2];
            if((expenditure[i+d]) >= med * 2)
            count++;
            i++;
        }
        if(i != 0){
            int old_element = qt.front();
            int new_element = expenditure[i + d - 1];
            double med = count_sort_func(count_sort, old_element, new_element, d);
            qt.pop();
            qt.push(new_element);

            if((expenditure[i+d]) >= med * 2)
            count++;
            i++;
        }
        
        
        
    }
    return count;
}

int main(){
    vector<int> vt = {1, 2, 3, 4, 4};
    cout  << activityNotifications(vt,4) << endl;
}