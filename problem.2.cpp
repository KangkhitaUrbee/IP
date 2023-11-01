#include <iostream>
using namespace std;

int main()
{
    int num, r, sum = 0, t;
    cout << "\n\n Display the number in reverse order:\n";
    cout << "-----------------------------------------\n";
    cout << " Input a number: ";
    cin >> num;
    for (t = num; num != 0; num = num / 10)
    {
        r = num % 10;
        sum = sum * 10 + r;
    }
    cout << " Reverse of the Even Digit Integer: " << sum << endl;
}
