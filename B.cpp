#include <bits/stdc++.h>
void solve()
{
    int n;
    cin >> n;
    int x = n/2;
    for(int i = 0; i < n/2; i++){
        cout << x << " ";
        x+=(n/2);
        cout << x << " ";
        x-=(n/2)+1;
    }
    if(n%2!=0)cout << n;
    cout << endl;
}
int main()
{
    int test_cases = 1;
    cin>>test_cases;
    while(test_cases--)solve();
    return 0;
}

