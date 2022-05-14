#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    map<char,int> m;
    for(auto x:s){
        m[x]++;
    }
    if(m['E']==m['W'] && m['N']==m['S'])
    cout<<"true\n";
    else cout<<"false\n";
    return 0;
}