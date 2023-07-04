#include <bits/stdc++.h>
using namespace std;
const int MAXN = 500000+1;
int frequency[MAXN];
void solve()
{
    int n, nb, x;
    cin >> n >> x;
    for(int i = 0; i <= x; i++)frequency[i] = 0;
    for(int i = 0; i < n; i++){
        cin >> nb;
        frequency[nb]++;
    }
    for(int i = 1; i < x; i++){
        if(frequency[i]%(i+1)!=0){
            cout << "No" << endl;
            return;
        }
        frequency[i+1]+=frequency[i]/(i+1);
    }
    cout << "Yes" << endl;
}
int main()
{
    int test_cases = 1;
    // cin >> test_cases;
    while(test_cases--)solve();
    return 0;
}

