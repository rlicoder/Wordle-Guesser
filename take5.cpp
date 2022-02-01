#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("words.txt", "r", stdin);
    freopen("5letters.txt", "w", stdout);
    string str;
    while (cin >> str)
    {
        if (str.size() == 5)
        {
            cout << str << endl;
        }
    }
}
