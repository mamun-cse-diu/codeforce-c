#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    double num,sum=0.0;
    cin >> n;

    for (int i=1; i<=n; i++)
    {
        cin >> num;
        sum += num;
    }

    cout << fixed << setprecision(12) << sum/n << endl;
}
