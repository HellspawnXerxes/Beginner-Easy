#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, m, k;
        cin >> n >> m >> k;
        if(n > m*k)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}