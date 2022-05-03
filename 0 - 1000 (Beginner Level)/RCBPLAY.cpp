#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, z, rempoints;
        cin >> x >> y >> z;
        rempoints = y - x;
        if(z*2 >= rempoints)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }


    return 0;
}