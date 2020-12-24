// multiplying two strings together without using any existing library

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution{
    public:
        void modify_nums(string &a, string &b){
            int len;
            if (a.size() != b.size())
            {
                len = max(a.size(), b.size());

                if (b.size() == len)
                {
                    string temp = b;
                    b = a;
                    a = temp;
                }
                int diff = len - b.size();
                string temp(diff, '0');
                b = temp + b;
            }
        }
        string addition(string a, string b){
            //add 0's if the length are not equal
            modify_nums(a, b);
            //cout << a << " " << b << endl;
            string added_str = "";
            
            int len = a.size();
            int carry = 0;
            for(int i = len - 1; i >= 0; i--){
                int temp1 = a[i] - '0';
                int temp2 = b[i] - '0';
                if(temp1 + temp2 + carry >= 10){
                    
                    int rem = (temp1 + temp2 + carry) % 10;
                    added_str = added_str + to_string(rem);
                    carry = 1;
                }
                else{
                    added_str = added_str + to_string((temp1 + temp2 + carry));
                    carry = 0;
                }

            }
            if(carry == 1){
                added_str =  added_str + to_string(1);
            }
            reverse(added_str.begin(), added_str.end());
            return added_str;


            
        }
        
        
        string multiply(string num1, string num2){
            
            if (num1.size() != num2.size())
            {
                int len_a = max(num1.size(), num2.size());

                if (num2.size() == len_a)
                {
                    string temp = num2;
                    num2 = num1;
                    num1 = temp;
                }
            }
            int len_a = num1.size();
            int len_b = num2.size();

            //loop through b
            string final_str = "";int k = 0;
            for(int i = len_b - 1; i >= 0; i--){
                int carry = 0; string temp_row = "";
                for(int j = len_a - 1; j >= 0; j--){
                    int temp1 = num1[j] - '0';
                    int temp2 = num2[i] - '0';
                    if(temp1*temp2 + carry >= 10){
                        int rem = (temp1 * temp2 + carry) % 10;
                        temp_row = temp_row + to_string(rem);
                        carry = ((temp1*temp2 + carry) / 10) % 10;
                    }
                    else{
                        temp_row = temp_row + to_string((temp1 * temp2 + carry));
                        carry = 0;
                    }
                }
                if(carry != 0){
                    temp_row = temp_row + to_string(carry);
                }
                reverse(temp_row.begin(), temp_row.end());
                string zerostring(k, '0');
                temp_row = temp_row + zerostring;
                final_str = addition(final_str, temp_row);
                k++;
            }
            return final_str;
        }

};

int main(){
    string num1 = "121113";
    string num2 = "987";
    Solution st;
    //cout << st.addition(num1, num2) << endl;
    cout << st.multiply(num1, num2) << endl;
}