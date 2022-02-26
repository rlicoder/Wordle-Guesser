#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("5letters.txt", "r", stdin);
    string no {"cdcrstmarghstln"};
    string str;
    while (cin >> str)
    {
        bool skip = false;
        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < no.size(); j++)
            {
                if (no[j] == str[i])
                {
                    skip = true;
                }
            }
        }
        if (!skip)
        {
            cout << str << endl;
        }
    }
}
