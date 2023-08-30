#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long divide(long long dividend, long long divisior)
{
    long long sign = ((dividend < 0) ^ (divisior < 0)) ? -1 : 1;
    dividend = abs(dividend);
    divisior = abs(divisior);
    long long quotient = 0, temp = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (temp + (divisior << i) <= dividend)
        {
            temp += divisior << i;
            quotient += 1 << i;
        }
    }
    if (sign == -1)
        quotient = -quotient;
    return quotient;
}
int main()
{
    long long dividend, divisior;
    cout << "enter dividend and divisior " << endl;
    cin >> dividend >> divisior;
    long long ans = divide(dividend, divisior);
    cout << ans;
    return 0;
}