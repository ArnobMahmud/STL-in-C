#include <bits/stdc++.h>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{
    set <string> s;
    set <string> :: iterator it;

    s.insert("Arnob");
    s.insert("Mahmud");

    for ( it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    
    return 0;
}
