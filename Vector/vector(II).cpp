#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[3];
    arr[0] = 7;
    arr[1] = 9;
    arr[2] = 11;

    cout << arr[0] << endl;

    vector <int> vec;
    vec.push_back(7);
    vec.push_back(9);
    vec.push_back(11);

    for (int i = 0; i < 3; i++)
    {
        cout << vec[i] << endl;
    }
    
    return 0;
}
