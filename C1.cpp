#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)cin >> v[i];
    if(n%2!=0)cout << -1 << endl;
    else{
        vector<pair<int,int>> k;
        for(int i = 0; i < n; i+=2){
            if(v[i]==v[i+1])k.push_back(make_pair(i+1,i+2));
            else k.push_back(make_pair(i+1,i+1)),k.push_back(make_pair(i+2,i+2));
        }
        cout << (int)size(k) << endl;
        for(auto p:k)cout << p.first << " " << p.second << endl;
    }
}
int main()
{
    int test_cases = 1;
    cin >> test_cases;
    while(test_cases--)solve();
    return 0;
}

