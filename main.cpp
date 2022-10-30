#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,j,cnt=0;
    sort(s.begin(), s.end());
    for(i=0;i<s.length();i++){
            if(s[i]!=s[i+1])
                cnt++;
    }
    //cout<<cnt;
    if(cnt%2!=0)
        cout<<"IGNORE HIM!"<<endl;
    else
        cout<<"CHAT WITH HER!"<<endl;
    return 0;
}
/*like example 369. To check similarity, 1st sort it then compare it.*/
