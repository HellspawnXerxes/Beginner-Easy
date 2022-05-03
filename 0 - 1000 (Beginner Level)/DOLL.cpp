#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int los[n], deceased=0;
        for(int i=0; i<n; i++)
        {
            cin >> los[i];
        }
        for(int i=0; i<n; i++)
        {
            if(los[i] > k)
                deceased += 1;
        }
        cout << deceased << endl;
    }

    return 0;
}