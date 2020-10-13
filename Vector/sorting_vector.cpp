#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector <int> vct;
    vector <int>:: iterator it;

    vct.push_back(12);
    vct.push_back(22);
    vct.push_back(7);
    vct.push_back(13);
    vct.push_back(9);
    vct.push_back(36);

    sort(vct.begin(), vct.end());

    for (it = vct.begin(); it != vct.end(); it++)
    {
        cout << *it << '\t';
    }
    cout << endl;
    
    return 0;
}