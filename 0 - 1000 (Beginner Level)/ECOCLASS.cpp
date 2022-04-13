#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, s[n], d[n], timepoint = 0;
        cin >> n;
        cout << endl;
        for (int i = 1; i <= n; i++)
        {
            cin >> s[i];
        }
        for(int i = 1; i <= n; i++)
        {
            cin >> d[i];
        }
        for(int i = 1; i <= n; i++)
        {
            if(s[i]==d[i])
                timepoint += 1;
        }
        cout << timepoint << endl;
    }



    return 0;
}