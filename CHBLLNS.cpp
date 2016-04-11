//
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int  main()
{
    int test;
    cin >> test;
    while(test--)
    {
       ll int r,g,b;
       cin >> r >> g >> b;
       ll int k;
       cin >> k;

       ll int ans=0;
       if(k==1)
        ans= 1;
       else if(r >= k && g >= k && b >=k )
          ans= ((k-1)*3 )+ 1;
       else if(r>=k && g<k && b<k )
          ans=k+g+b;
       else if(r<k && g>=k && b<k )
          ans=k+r+b;
       else if(r<k && g<k && b>=k )
          ans=k+g+r;
       else if((r>=k && g<k && b>=k ))
          ans=(k-1)*2+g+1;
       else if((r>=k && g>=k && b<k ))
          ans=(k-1)*2+b+1;
       else if((r<k && g>=k && b>=k ))
          ans=(k-1)*2+r+1;
       else
          ans=r+g+b;
       cout << ans << endl;

    }
    return 0;
}
