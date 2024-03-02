#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string s = "A man, a plan, a canal: Panama"; // test case 1
    //string s = " "; 
    //test case 2 above with a space inside string
    string clean_s;
    for (char c : s)
    {
        if (isalnum(c))
        {
            if (isupper(c))
                clean_s += tolower(c);
            else
                clean_s += c;
        }
    }

    cout << clean_s << endl;
    if (clean_s.empty())
        cout << "true" << endl;

    for (int start = 0, end = clean_s.size() - 1; start <= clean_s.size() / 2 && end >= clean_s.size() / 2; start++, end--) // use && between multiple conditions
    {
        if (clean_s[start] != clean_s[end])
            cout << "false" << endl;
    }
    cout << "true" << endl;

    return 0;
}