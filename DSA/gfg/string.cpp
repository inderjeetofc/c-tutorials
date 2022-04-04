// ques- print freq of char in string smaleest to highest
#include <bits/stdc++.h>
using namespace std;
void printFreq(string str)
{
    map<int, int> m;
    for (char i : str)
    {
        m[i]++;
    }
    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout << (char)(i->first) << " - " << i->second;
        cout << endl;
    }
}
int main()
{
    string str = "geeksforgeeks";
    printFreq(str);
    return 0;
}