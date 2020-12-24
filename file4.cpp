#include <iostream>
using namespace std;
class Solution
{
	public:
        int gcd(int a, int b) 
    	{ 
    	    if (a == 0) 
           return b; 
        if (b == 0) 
           return a; 
       
        // base case 
        if (a == b) 
            return a; 
       
        // a is greater 
        if (a > b) 
            return gcd(a-b, b); 
        return gcd(a, b-a); 
    	} 
};
int main(){
    int arr[3][3] = {{1,2,3},{4,6,7},{34,23,12}};
    cout << arr[1][0] << endl;
    int a = 8;
    int b = 80;
    Solution obj;
    cout << obj.gcd(a,b) << endl;
    return 0;
}