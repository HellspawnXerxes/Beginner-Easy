#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int i, count = 0;
        for(i=n; i>0;)
        {
            if(i%10==4)
            {
                count += 1;
            }
            i/=10;
        }
        cout << count << endl;
    }

    return 0;
}