#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    string s="";
    for(int i=0;i<n;i++){
        s=to_string(v[i])+s;
    }
    cout<<s<<"\n";
    return 0;
}