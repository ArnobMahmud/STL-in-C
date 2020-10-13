#include <bits/stdc++.h>
#include <vector>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<pair<int, string>> v;
    vector<pair<int, string>>::iterator it;

    v.push_back(make_pair(1, "Arnob"));
    v.push_back(make_pair(2, "Tanvir"));
    v.push_back(make_pair(3, "Afif"));
    v.push_back(make_pair(4, "Sakib"));
    v.push_back(make_pair(5, "Utsho"));

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
