#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l, r, count=0;
        cin >> l >> r;
        for(int i = l; i <= r; i++)
        {
            if(i%10==2)
                count += 1;
            else if(i%10==3)
                count += 1;
            else if(i%10==9)
                count += 1;
        }
        cout << count << endl;
    }
}