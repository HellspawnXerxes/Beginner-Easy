#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int sa, sb, sc;
        cin >> sa >> sb >> sc;
        if(sa>sc && sb>sc)
            cout << "Alice" << endl;
        else if(sa>sb && sc>sb)
            cout << "Bob" << endl;
        else
            cout << "Draw" << endl;
    }

    return 0;
}