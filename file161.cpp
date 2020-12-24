#include <iostream>
#include <vector>

using namespace std;

int main(){
    int count = 0;
    for(int i = 0; i < 5; i++){
        int temp;
        cin >> temp;
        if(temp == 0){
            count++;
            cout << count << endl;
            break;
        }
        else{
            count++;
        }
    }
}