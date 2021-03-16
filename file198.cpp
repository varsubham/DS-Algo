// pallindrome partition 4 (time-limit exceed)

#include <iostream>
#include <string>

using namespace std;

bool isPallindrome(string str)
{
    // check if a string str is pallidrome
    string str_copy = str;
    int str_len = str.length();
    // loop through str in backward direction
    for (int i = str_len - 1; i >= 0; i--)
    {
        if (str[i] != str_copy[str_len - i - 1])
            return false;
    }
    return true;
}
bool checkPartitioning(string s)
{
    int str_len = s.length();

    // first cut
    for (int i = 1; i < str_len - 1; i++)
    {

        // second cut
        for (int j = i + 1; j < str_len; j++)
        {

            string s1 = s.substr(0, (i - 0));

            string s2 = s.substr(i, (j - i));

            string s3 = s.substr(j, (str_len - j));

            if (isPallindrome(s1) && isPallindrome(s2) && isPallindrome(s3))
            {
                return true;
            }
        }
    }
    return false;
}
int main(){
    string s = "lozeukvpvhjgrpkyyntkxppbhrscfplnnycmwjtrkdwgercawyggpiakhbnkcnezkhkveiqgymbhjolellyuxtupbyyxtqotdcrzkuvsmszjmpsrlalnawjnekpsgvobnucjwfcdsrmbjghsevaqegejwwigpiyjhyqszbtrjngqbtvwadmlpyqtisgbwjqpvzeaqidbxbafyhnirsjwjmmabsorfsxjwaebjwfebxxiqresccserqixxbefwjbeawjxsfrosbammjwjsrinhyfabxbdiqaezvpqjwbgsitqyplmdawvtbqgnjrtbzsqyhjyipgiwwjegeqaveshgjbmrsdcfwjcunbovgspkenjwanlalrspmjzsmsvukzrcdtoqtxyybputxuyllelojhbmygqievkhkzencknbhkaipggywacregwdkrtjwmcynnlpfcsrhbppxktnyykprgjhvpvkuezolbnvbmqhdyrhczdeeksgfhrdntwdgosopitiukxakwqnacgsappasgcanqwkaxkuitiposogdwtndrhfgskeedzchrydhqmbvnbvpyztexbxetzypv";
    cout << checkPartitioning(s) << endl;
}