#include<iostream>
using namespace std;

int main()
{
    int n, k, i, counter = 0;
    cin >> n;
    cin >> k;
    for(i=0; i<=n; i++)
    {
        int t;
        cin >> t;
    
        if(t%k == 0)
            counter += 1;
    }
    cout << "\n" << counter;
}