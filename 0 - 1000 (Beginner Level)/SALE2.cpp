#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int q = n / 3;
        int r = n % 3;
        int ans = (2*q+r)*x;
        cout << ans << "\n";
    }
}