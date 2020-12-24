#include <iostream>
#include <map>
#include <vector>
using namespace std;
void func(){
    vector<string> magazine = {"give", "me", "one", "grand", "today", "night"};
    vector<string> note {"give", "one", "grand", "todays"};
    map<string, int> mp;
    for(string i : magazine){
        mp[i]++;
    }
    for(string nt : note){
        if(mp[nt]){
            mp[nt]--;
        }
        else{
            cout << "No" << endl;
            return;
        }
    }
    cout << "YES" << endl;

}
int main(){
    
}