#include <bits/stdc++.h>
#include <list>
#include <iterator>

using namespace std;
int main(int argc, char const *argv[])
{
    list<double> myList;
    list<double>::iterator it;

    myList.push_back(10);
    myList.push_back(20);
    myList.push_front(23);

    for (it =  myList.begin(); it != myList.end() ; it++)
    {
        cout << *it << '\t';
    }
    cout << endl;
    
    return 0;
}
