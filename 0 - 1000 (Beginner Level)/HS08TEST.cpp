#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int withdraw;
    float balance;
    cin >> withdraw;
    cin >> balance;
    if((withdraw % 5 == 0) && (withdraw + 0.50 <= balance))
        cout << (balance - withdraw -0.50);
    else
        printf("%.2f",balance);
	return 0;
}
