#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack <string> s;

    s.push("Arnob");
    s.push("Mahmud");
    s.push("Tanvir");

    while (!s.empty())
    {
        string x;
        x = s.top();
        cout << x << endl;
        s.pop();
    }
    
    return 0;
}
