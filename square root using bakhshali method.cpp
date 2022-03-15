#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    // "s" is the number we want to find its square root.
    // "n" is the square root of the whole number that is represented in "s" without decimals.
    // "d" is the difference between "s" and "n ^ 2" to find the decimals only.
    // "p" is the devision between "d" and (2 * n)---> { d / (n * 2)}.
    // "a" is the summation between "n" and "p" ---> a = n + p.
    int n;
    float s, p, a, d, square_root;
    cout << "enter a number: \n";
    cin >> s;
    n = sqrt(int(s));
    d = s - pow(n,2);
    p = d / (2 * n);
    a = n + p;
    square_root = a - (pow(p, 2) / (2 * p));
    cout << "square root of " << "(" << s << ")" << " is " << square_root;
    return 0;
}

