#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s, word, word2, ind;
        getline(cin, s); //take input a line with space
        stringstream ss(s);  //push all word from "s" to "ss" which is separated by space
        stringstream sss(s);
        map<string, int> mp, mp2;
        /*here a diclar a map,map work like array but there is not integer index only
        the index can be word,charecter,integer or onything which called key*/
        while (ss >> word)
        {
            mp[word]++;
        }
        int max = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > max)
            {
                max = it->second;
            }
        }
        while (sss >> word2)
        {
            mp2[word2]++;
            if (mp2[word2] == max)
            {
                cout << word2 << " " << mp2[word2] << endl;
                break;
            }
        }
        
    }

    return 0;
}