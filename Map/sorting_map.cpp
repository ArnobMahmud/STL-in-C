#include <bits/stdc++.h>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    map <string, int> m;
    map <string,int> :: iterator it;

    // m["Arnob"] = 47;
    // m["Tanvir"] = 39;
    // m["Afif"] = 42;

    m.insert(make_pair("Arnob", 47));
    m.insert(make_pair("Tanvir", 39));
    m.insert(make_pair("Afif", 42));

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it -> first << " " << it -> second << endl;
    }
    
    return 0;
}
