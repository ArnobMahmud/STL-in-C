#include <bits/stdc++.h>
#include <list>

using namespace std;
int main(int argc, char const *argv[])
{
    list<int> myList;
    list<int> :: iterator it;

    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(11);
    myList.push_back(122);
    myList.push_back(22);

    for (it =  myList.begin(); it != myList.end() ; it++)
    {
        cout << *it << '\t';
    }
    cout << endl;
    
    cout << myList.size() << endl;
    
    return 0;
}