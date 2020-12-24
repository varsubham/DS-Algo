// coins - atcoder
// time limit exceded

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> final_vect;
void fn(vector<int> bits, int i){
    if(i == bits.size()){
        
        int zer = 0;
        int one = 0;
        for(int i = 0; i < bits.size(); i++){
            if(bits[i] == 1)
                one++;
            else
                zer++;
        }
        if(one > zer)
            final_vect.push_back(bits);
        return;
    }
    
    bits[i] = 0;
    fn(bits, i+1);

    bits[i] = 1;
    fn(bits, i+1);
}


int main(){
    int n;
    cin >> n;
    vector<float> p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    vector<int> bits(n);
    fn(bits, 0);
    double final_prob = 0.0;
    for(auto it : final_vect){
        double temp = 1.0;
        for(int i = 0; i < it.size(); i++){
            if(it[i] == 1){
                temp *= p[i];
            }
            else{
                temp *= (1 - p[i]);
            }
        }
        final_prob += temp;
    }
    cout << final_prob << endl;
}