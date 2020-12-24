// max points obtain from cards
// Memoized by still time limit excedding

#include <vector>
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution
{
public:
    int f = -1;
    unordered_map<string, int> um;
    string convertor(int start, int end){
        string temp = to_string(start) + " ," + to_string(end);
        return temp;
    }
    int max_points(vector<int> &cardPoint, int start, int end, int k){
        if(start > end)
            return 0;
        if(k == 0){
            return 0;
        }
        if(um.find(convertor(start, end)) != um.end()){
            //cout << "from memoization" << endl;
            cout << um[convertor(start, end)] << endl;
            return um[convertor(start, end)];
        }
        else{
            f =  max((cardPoint[start] + max_points(cardPoint, start + 1, end, k - 1)), (cardPoint[end] + max_points(cardPoint, start, end - 1, k - 1)));
            um[convertor(start, end)] = f;
        }
        return f;
    }


    int maxScore(vector<int> &cardPoints, int k)
    {
        return max_points(cardPoints, 0, cardPoints.size() - 1, k);

    }
};

int main()
{
    vector<int> cardPoints = {99, 82, 25, 56, 39, 77, 22, 58, 64, 77, 19, 36, 93, 14, 19, 12, 94, 76, 93, 24, 92, 67, 18, 37, 37, 60, 87, 28, 64, 7, 29};
    int k = 27;
    Solution st;
    cout << st.maxScore(cardPoints, k) << endl;
    //cout << st.convertor(1, 4) << endl;
}