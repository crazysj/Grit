#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cr=0,cg=0,cb=0;
        for(int i =0 ; i< n;i++)
        {
            if(s[i]=='R')
                cr++;
            else if(s[i]=='G')
                cg++;
            else if(s[i]=='B')
                cb++;
            else{}
        }
       /* int mx1,mx;
        mx1=max(cr,cg);
        mx=max(mx1,cb);*/
        cout << n-mx << endl;

    }

    return 0;
}
