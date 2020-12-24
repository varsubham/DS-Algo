#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;

int main(){
    std::ifstream t("file.txt");
    std::stringstream buffer;
    buffer << t.rdbuf();

    string s = buffer.str();
    //string s = "hello guys what are you doing";
    string patter = "khgswasdfasgavaeb";
    int size = patter.size();
    int size_s = s.size();
    bool iffound = false;
    for(int i = 0; i < size_s - size; i++){
        string rollingwindow = s.substr(i, size);
        if(patter == rollingwindow){
            cout << "found at " << i << endl;
            iffound = true;
            break;
        }
    }
    if(!iffound)
        cout << "not found " << endl;
}