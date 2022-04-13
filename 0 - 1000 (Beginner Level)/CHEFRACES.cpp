#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, a, b, medals = 0;
        cin >> x >> y >> a >> b;
        if(x!= a && x != b)
            medals += 1;
        if(y!= a && y != b)
            medals += 1;
        cout << medals << "\n";
    }

    return 0;
}