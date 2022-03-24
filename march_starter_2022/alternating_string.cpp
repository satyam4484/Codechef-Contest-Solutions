#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll                 long long int
#define pb                 push_back
#define mod             1000000007
#define inf             1e18
#define ump                unordered_map
#define mp                 make_pair

#define  inpv(v,n)  for(int i=0;i<n;i++) cin>>v[i]
#define  outv(v)    for(auto i:v) cout<<i<<' ' 
#define  loop(i,a,b)  for(int i=(a);i<(b);i++)
#define  looprev(i,a,b)  for(int i=(a);i>=0;i--)

void file_i_o()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void Main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int one = 0,zero = 0;
        for(int i=0;i<n;i++) {
            char c;
            cin>>c;
            if(c == '1') one++;
            else zero++;
        }
        if(abs(one-zero) <= 1) cout<<one+zero<<endl;
        else if(one == 0 or zero == 0) cout<<1<<endl;
        else cout<<2*min(one,zero) + 1<<endl;
    }
}

int main( ) {
    clock_t begin = clock();
    file_i_o();
    // Write your code here....
    Main();

    // code ends here !!!!!! 
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC<<" seconds";
    #endif 
    return 0;
}