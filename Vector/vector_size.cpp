#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector <int> vec;

    vec.push_back(17);
    vec.push_back(23);
    vec.push_back(43);

    cout << vec.size() << endl; 

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
    
    return 0;
}