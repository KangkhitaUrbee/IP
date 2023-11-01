
#include <iostream>
using namespace std;

int main()
{
    int n1 = 0, n2 = 1, sum = 0, n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Fibonacci Series: " << n1 << ", " << n2 << ", ";

    sum = n1 + n2;

    while(sum <= n)
    {
        cout << sum << ", ";
        n1 = n2;
        n2 = sum;
        sum = n1 + n2;
    }
    return 0;
}
