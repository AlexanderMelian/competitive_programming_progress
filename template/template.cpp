#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define ini(x) scanf("%d",&x)
#define inl(x) scanf("%lld",&x)
#define ins(s) getline(cin, s)
#define pri(x) printf("%d\n",x)
#define prl(x) printf("%lld\n",x)
#define prs(s) printf("%s\n",s)

void solve(){

}

#ifndef CALCULATE_TIME
void calculate_time(){
    auto start = clock();
    solve();
    auto end = clock();
    cout << "Time taken: " << end-start << endl;
}
#endif

int main(){
    int t;
    ini(t);
    #ifndef CALCULATE_TIME
    for(int i=1;i<=t;i++){
        cout << "Case #" << i << ": ";
        solve();
    }
    #else
    while(t--){
        solve();
    }
    #endif
}
