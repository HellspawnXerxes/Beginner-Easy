#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int X, Y, points, bags;
        cin >> X >> Y;
        points = X * Y;
        bags = points/100;
        cout << bags << endl;
    }

    return 0;
}