// n bits (1 > 0)

#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> final_vect;
void fn(vector<int> bits, int zeros, int ones, int i){
    if(i == bits.size()){
        //final_vect.push_back(bits);
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
    //if(zeros < ones - 1){
        bits[i] = 0;
        fn(bits, zeros + 1, ones, i+1);
    //}
    bits[i] = 1;
    fn(bits, zeros, ones+1, i+1);

    // else{
    //     for(int i = 0; i < bits.size(); i++){
    //         if(bits[i] == 1){
    //             bits[i] = 0;
    //             ones--;
    //             zeros++;
    //             final_vect.push_back(bits);
    //             fn(bits, zeros, ones);
    //         }
    //     }
    // }
}
int main(){
    vector<int> bits(5);
    fn(bits, 0, 0, 0);
    for(int i = 0; i < final_vect.size(); i++){
        for(int j = 0; j < final_vect[0].size(); j++){
            cout << final_vect[i][j] << " ";
        }
        cout << endl;
    }
}
