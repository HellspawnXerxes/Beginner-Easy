#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int x, y;
        cin >> x >> y;
        if(x<y)
            cout << "BIKE" << endl;
        else if(x==y)
            cout << "SAME" << endl;
        else
            cout << "CAR" << endl;
    }
    
    return 0;
}