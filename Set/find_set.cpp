#include <bits/stdc++.h>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{
    set <int> s;
    set <int> :: iterator it;

    s.insert(8);
    s.insert(22);
    s.insert(5);
    s.insert(15);
    s.insert(17);

    it = s.find(15);
    cout << *it << endl;

    // for (it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    
    return 0;
}
