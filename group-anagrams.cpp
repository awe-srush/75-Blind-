#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    unordered_map<string, vector<string>> anagrams;
    for (auto str : strs)
    {
        string key = str;
        sort(key.begin(), key.end());
        anagrams[key].push_back(str);
    }

    /* for (auto pair : anagrams)
     {
         cout << pair.first << " : ";
         for (auto s : pair.second)
         {
             cout << s << " ";
         }
         cout << endl;
     } */

    vector<vector<string>> result;
    for (auto pair : anagrams)
    {
        result.push_back(pair.second);
    }

    for (auto r : result)
    {
        for (auto word : r)
        {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}