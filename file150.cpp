// all possible vector of num 'n'
// wrong code
#include <iostream>
#include <vector>


using namespace std;

vector<int> vec(3);
vector<vector<int>> final_vec;
void generate(vector<int> vt){
    for(int i = 0; i < vt.size(); i++){
        vec[i] = vt[i];
        //vec.push_back(vt[i]);
        vector<int> new_vec(vt);
        new_vec.erase(new_vec.begin() + i);
        generate(new_vec);
        
    }
    final_vec.push_back(vec);
    //vec.clear();
}

int main(){
    
    int n = 3;
    vector<int> vt(3);
    for(int i = 1; i <= 3; i++){
        vt[i - 1] = i;
    }

    generate(vt);
    //generate(n, 1);
    for(int i = 0; i < final_vec.size() ; i++){
        for(int j = 0; j < final_vec[i].size(); j++){
            cout << final_vec[i][j] << " ";
        }
        cout << endl;
    }

}
