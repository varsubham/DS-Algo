#include <iostream>

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int case2 = 0;
        if(word.size() == 1)
            return true;
        
        if(word[0] >=97 && word[0] <= 122)
            case2 = 3;
        else if((word[0] >=65 && word[0] <= 90) && (word[1] >= 97 && word[1] <= 122))
            case2 = 1;
        else
            case2 = 2;
        for(int i = 1; i < word.size(); i++){
           switch(case2){
               case 1:
                   if(!(word[i] >=97 && word[i] <= 122))
                       return false;
               case 2:
                   if(!(word[i] >=65 && word[i] <= 90))
                       return false;
               case 3:
                   if(!(word[i] >=97 && word[i] <= 122))
                       return false;
           }        
    }
        return true;
}
};