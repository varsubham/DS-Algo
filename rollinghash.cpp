#include <iostream>
#include <cmath>
#include <sstream>
#include <fstream>
using namespace std;

// Rabin-Karp algorithm for searching in a given string(just like the find button you find in 
//                                                   text editors)




int generateHash(string s){
    int size = s.size();
    int generatedHash = 0;
    for(int i = 0; i < size; i++){
        int ascii_val = int(s[i]);
        // here generatedHash is going to overflow for a long string 's', so keep pattern small
        generatedHash += (pow(7,i) * ascii_val);
    }
    return generatedHash;
}

//this is where constant time is used to calculating the next hash, since the rolling window is 
//moving laterally just like a queue
int rollingHash(int prevHash, char removedChar, char addedChar, int lenpattern){
    int ascii_val_removedchar = int(removedChar);
    int ascii_val_addedChar = int(addedChar);
    int rollinghashgenerated = prevHash - (ascii_val_removedchar * pow(7,0));
    rollinghashgenerated /= 7;
    rollinghashgenerated += (ascii_val_addedChar * pow(7 , lenpattern - 1));
    return rollinghashgenerated;
}

int main(){

    std::ifstream t("file.txt");
    std::stringstream buffer;
    buffer << t.rdbuf();

    string s = "Look at the has function, we have to compute the hash for each substring. It will take m time if the length of the substring. We need to do it in constant O(1) time. This is when the Rolling Hash comes into the picture. Look at the example from Quora: Consider this example. Let's say you have a string “abcdeacdoe” & you want to find pattern “bcd” in this string. Now in a naive way, you will try to compare each character of the pattern with the string characters forming three character strings. This might be really inefficient especially as the input gets larger. If you use a rolling hash, you can do this intelligently. First, you calculate the hash of the first three letter substring (abc) in the string. To keep matters simple, let's say we use base 7 for this calculation (in actual scenario we should mod it with a prime to avoid overflow) So you compare two hash values and since they are different, you move forward. Now you reach to second substring in string. Here is where the fun begins. We can calculate the hash of this string without rehashing everything. As you can see, the window has moved forward only by dropping one character and adding another jonny:";

    //string s = buffer.str();
    //cout << s.size() << endl;
    string pattern = "time";
    
    int patter_hash = generateHash(pattern);

    int size = pattern.size();
    string rolling_window = s.substr(0, size);
    if(generateHash(rolling_window) == patter_hash)
        cout << "found at 0" << endl;
    int rollingwindowhash = generateHash(rolling_window);
    bool iffound = false;
    for(int i = size; i < s.size(); i++){
        char firstchar = rolling_window[0];
        char lastchar = s[i];
        rolling_window.erase(rolling_window.begin());
        rolling_window.push_back(lastchar);
        
        rollingwindowhash = rollingHash(rollingwindowhash, firstchar, lastchar, size);
        if(rollingwindowhash == patter_hash){
            cout << "found at " << i + 1 - size << endl;
            iffound = true;
            break;
        }
    
    }
    if(!iffound)
        cout << "cannot find what you are looking for " << endl;

}