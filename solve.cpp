#include <bits/stdc++.h>

using namespace std;

int main()
{
    string yes = "ic";
    string no = "sautemroflk";
	ifstream input;
	input.open("5letters.txt");
	
    while (!input.eof())
    {
		string str;
		input >> str;
        bool found = true;
        bool skip = false;
        for (int i = 0; i < str.size(); i++)
        {
			
            //int count = 0;
            //for (int j = 0; yes.size(); j++)
            //{
            //    if (str[i] == yes[j])
            //    {
            //        count++;
            //    }
            //}
            for (int j = 0; j < no.size(); j++)
            {
                if (str[i] == no[j])
                {
                    skip = true;
                }
            }
            if (skip)
            {
                break;
            }
            else
            {
                //if (count >= yes.size())
                //{
                    cout << str << endl;
                //}
            }
        }
		if (skip) continue;
    }
}
