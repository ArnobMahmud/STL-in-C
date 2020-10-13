#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector <int> vec;
    vector <int> :: iterator it;  // iterator initializing

    for (int i = 1; i <= 10; i++)
    {
        vec.push_back(i);         // value input
    }
    
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << '\t';       // value print using size() method
    }
    cout << endl;

    it = vec.begin();
    cout << *it << endl;

    for (it = vec.begin(); it != vec.end() ; it++)
    {
        cout << *it << '\t';       // value print using iterator 
    }
    
    return 0;
}