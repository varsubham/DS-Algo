// float

#include <iostream>
#include <vector>
using namespace std;;

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int maxpoints = 0;
        int count = 0;
        for(int i = 0; i < points.size() - 1; i++){
            for(int j = i + 1; j < points.size(); j++){
                int x1 = points[i][0];
                int y1 = points[i][1];
                int x2 = points[j][0];
                int y2 = points[j][1];
                float m;
                // if(x2 == x1)
                //     m = 1e8;
                // else
                    m = (y2 - y1)/(float(x2 - x1));
                //cout << m << endl;
                // find the line
                // y - y1 = m(x - x1);
                
                for(int k = 0; k <  points.size(); k++){
                    // if(x1 == points[k][0])
                    if(float(points[k][1] - y1) == m * (float(points[k][0] - x1)))
                        count++;
                }
                maxpoints = maxpoints < count ? count : maxpoints;
                count = 0;
            }
        }
        return maxpoints;
    }
};

int main(){
   Solution st;
   vector<vector<int>> points = {{1,1},{2,2},{3,3}};
   cout << st.maxPoints(points) << endl;
}