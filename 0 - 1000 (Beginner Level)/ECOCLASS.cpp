#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, timepoint = 0;
        cin >> n;
        int s[n], d[n];
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(s[i]==d[i])
                timepoint += 1;
        }
        cout << timepoint << endl;
    }

    return 0;
}