#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a, count;
    cin >> t;
    while (t--) 
    {
        cin >> n;
        count = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> a;
            if(a>=10 && a<=60)
                count += 1;
        }
        cout << count << endl;
    }

    return 0;
}