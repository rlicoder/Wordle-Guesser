#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> words;
    freopen("real5.txt", "r", stdin);
    string str;
    while (cin >> str)
    {
        words.push_back(str);
    }
    int limit = 2;
    int lo = INT_MAX;
    for (int i = 0; i < words.size()-3; i++)
    {
        for (int j = i+1; j < words.size()-2; j++)
        {
            vector<int> count1(26, 0);
            for (int m = 0; m < 5; m++)
            {
                count1[words[i][m] - 'a']++;
                count1[words[j][m] - 'a']++;
            }
            bool valid = true;
            for (int m = 0; m < count1.size(); m++)
            {
                if (count1[m] > limit)
                {
                    valid = false;
                    break;
                }
            }
            if (!valid)
            {
                break;
            }
            for (int k = j+1; k < words.size()-1; k++)
            {
                vector<int> count2(26, 0);
                for (int m = 0; m < 5; m++)
                {
                    count2[words[i][m] - 'a']++;
                    count2[words[j][m] - 'a']++;
                    count2[words[k][m] - 'a']++;
                }
                bool valid = true;
                for (int m = 0; m < count2.size(); m++)
                {
                    if (count2[m] > limit)
                    {
                        valid = false;
                        break;
                    }
                }
                if (!valid)
                {
                    break;
                }
                for (int l = k+1; l < words.size(); l++)
                {
                    vector<int> count(26, 0);
                    for (int m = 0; m < 5; m++)
                    {
                        count[words[i][m] - 'a']++;
                        count[words[j][m] - 'a']++;
                        count[words[k][m] - 'a']++;
                        count[words[l][m] - 'a']++;
                    }
                    bool valid = true;
                    int cur = 0;
                    for (int m = 0; m < count.size(); m++)
                    {
                        if (count[m] > limit)
                        {
                            valid = false;
                            break;
                        }
                        if (count[m] == 2)
                        {
                            cur++;
                        }
                    }
                    if (valid && cur <= 2)
                    {
                        cout << "MIN: " << cur << endl;
                        cout << words[i] << endl << words[j] << endl << words[k] << endl << words[l] << endl << endl;
                    }
                }
            }
        }
    }
}
