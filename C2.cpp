#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 200000;
int v[MAX_N];
void reduce_target(int target_size, int opposite_size, int target, int n){
    vector<pair<int,int>> k;
    int i = 0;
    while(i < n){
        if(target_size > opposite_size && i != n-1){
            if(v[i+1]==target){
                k.push_back(make_pair(i+1,i+2));
                target_size--;
                opposite_size++;
                i+=2;
                continue;
            }
            else k.push_back(make_pair(i+1,i+1));
        }
        else k.push_back(make_pair(i+1,i+1));
        i++;
    }
    if(target_size > opposite_size){
        cout << -1 << endl;
        return;
    }
    cout << (int)k.size() << endl;
    for(auto p:k)cout << p.first << " " << p.second << endl;
}
void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)cin >> v[i];
    int pos = 0, neg = 0;
    for(int i = 0; i < n; i++)pos+=(v[i]==1),neg+=(v[i]==-1);
    if((pos+neg)%2!=0)cout << -1 << endl;
    else if(pos == neg){
        cout << n << endl;
        for(int i = 0; i < n; i++)cout << i+1 << " " << i+1 << endl;
    }
    else if(pos > neg)reduce_target(pos,neg,1,n);
    else reduce_target(neg,pos,-1,n);
}

int main()
{
    int test_cases = 1;
    cin>>test_cases;
    while(test_cases--)solve();
    return 0;
}


