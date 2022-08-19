#include<bits/stdc++.h>

using namespace std;

void solve() {

}

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long a, b,c,d;
        int count = 0;
        cin>>a>>b>>c>>d;
        int n = (a/b)*(d/c);
        if((a/b) == (c/d)) {
            count = 0;
        } else if ((long double)n==(int)n){
            count=1;
        } else if( a==0 || c==0) { 
            count = 1;
        } else {
            count=2;
        }
        cout<<count<<endl;
    }
}