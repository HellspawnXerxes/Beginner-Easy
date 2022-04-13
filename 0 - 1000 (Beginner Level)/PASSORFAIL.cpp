#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x, p, marks;
    cin >> t;
    while(t--) 
    {
        cin >> n >> x >> p;
        marks = x*3 - (n-x);
        if(marks >= p)
            cout << "PASS" << endl;
        else
            cout << "FAIL" << endl;
    }

    return 0;
}