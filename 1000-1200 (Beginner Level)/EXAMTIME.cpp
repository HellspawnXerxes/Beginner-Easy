#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a1, b1, c1, a2, b2, c2;
        cin >> a1 >> b1 >> c1;
        cin >> a2 >> b2 >> c2;
        if ((a1 + b1 + c1) > (a2 + b2 + c2))
            cout << "DRAGON" << endl;
        else if ((a1 + b1 + c1) < (a2 + b2 + c2))
            cout << "SLOTH" << endl;
        else
        {
            if (a1 > a2)
                cout << "DRAGON" << endl;
            else if (a1 < a2)
                cout << "SLOTH" << endl;
            else
            {
                if (b1 > b2)
                    cout << "DRAGON" << endl;
                else if (b1 < b2)
                    cout << "SLOTH" << endl;
                else
                    cout<< "TIE" << endl;
            }
        }
    }
    return 0;
}