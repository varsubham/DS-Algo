#include <iostream>
#include <unordered_map>


using namespace std;

struct hash_pair { 
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    { 
        auto hash1 = hash<T1>{}(p.first); 
        auto hash2 = hash<T2>{}(p.second); 
        return hash1 ^ hash2; 
    } 
}; 


int k = 0;
unordered_map<pair<int, int>, int, hash_pair> um;
int numofways(pair<int, int> pr){
    if(um.find(pr) != um.end()){
        return um[pr];
    }
    if(pr.first  == 0 || pr.second == 0){
        k = 1;
    }
    else{
        k = numofways(make_pair(pr.first, pr.second - 1)) + numofways(make_pair(pr.first - 1, pr.second));
        um[pr] = k;
    }
    return k;

}

int main(){
    cout << numofways({80,40}) << endl;
}