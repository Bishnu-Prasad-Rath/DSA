// Valid Anagram
   
#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t)
{

    if (s.length() != t.length())
    {
        return false;
    }

    int count[26] = {};

    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    cout << "Enter those strings u want to input : " << endl;

    string s, t;

    getline(cin, s);
    getline(cin, t);

    bool result = isAnagram(s, t);

    if (result)
    {
        cout << "This is a Anagram" << endl;
    }
    else
    {
        cout << "THis is not an Anagram" << endl;
    }

    return 0;
}