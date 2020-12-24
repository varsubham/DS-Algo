// Tower of Hanoi, move plates from A to C 

#include <iostream>
#include <string>

using namespace std;
// numbers of steps required to move
int count2 = 0;

void fromto(char a, char b){
    count2 += 1;
    string c = string(1,a);
    string d = string(1,b);
    string ans = c + "->" + d;
    
    cout << ans << endl;

}
// void fromviato(char a, char b, char c){
//     fromto(a, b);
//     fromto(b, c);
// }

void hanoi(int n,char from,char via,char to){
    if(n == 0)
        {}
    else{
        hanoi(n-1, from, to, via);
        //count++;
        fromto(from, to);
        //count++;
        hanoi(n-1, via, from, to);
    }
}
int main(){
    int n;
    //fromto('A', 'B');
    // fromviato('C', 'B', 'D');
    hanoi(2, 'A', 'B', 'C');
    cout << count2 << endl;
}