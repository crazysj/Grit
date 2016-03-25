//https://www.codechef.com/problems/LAPIN
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string s,s1,s2;
        cin >> s;
        int sz=s.size();
        if(sz%2==0)
        {
            s1=s.substr(0,sz/2);
            s2=s.substr(sz/2,sz);
        }
        else
        {
            s1=s.substr(0,sz/2); //0 1 2 3 4 5 6
            s2=s.substr(sz/2+1,sz);
        }

        //cout << s1 << "\n" << s2 << endl;

        int a1[58],a2[58];
        for(int i=0;i<58;i++)
        {
            a1[i]=0;
            a2[i]=0;
        }
         int t1=0 , t2 =0 ;

        for(int i=0;i<sz/2;i++)
        {
            t1=((int)s1[i])%65;
            t2=((int)s2[i])%65;
            ++a1[t1];
             ++a2[t2];

        }

        int flag=0;

        for(int i=0;i<58;i++)
        {
           if(a1[i] == a2[i])
               flag=0;
           else{
                  flag=1;
                  break;
             }
        }

          if(flag==0)
               cout << "YES" << endl;
          else
               cout << "NO" << endl;

    }

    return 0;
}
