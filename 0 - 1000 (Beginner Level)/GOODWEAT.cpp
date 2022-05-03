#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int day[7], sunny = 0, rainy = 0;
        for(int i = 1; i <= 7; i++)
        {
            cin >> day[i];
        }
        for(int i = 1; i <= 7; i++)
        {
            if(day[i]==1)
                sunny += 1;
            else
                rainy += 1;
        }
        if(sunny > rainy)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}