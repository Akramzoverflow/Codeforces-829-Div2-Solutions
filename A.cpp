#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for(int i = n-1; i >= 0; i--){
        if(s[i] == 'Q')ans--;
        else ans++;
        if(ans < 0){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main()
{
    int test_cases = 1;
    cin >> test_cases;
    while(test_cases--)solve();
    return 0;
}
