//https://www.codechef.com/problems/STONES
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    string j,s;
    while(test--)
    {
        cin >> j >> s;
        int aj[58],as[58];
        for(int i =0; i< 58 ; i++)
        {
            aj[i]=0;
            as[i]=0;
        }

        for(int i=0;i<j.size();i++)
            ++aj[((int)j[i])%65];

        for(int i=0;i<s.size();i++)
            ++as[((int)s[i])%65];

        int cnt=0;
        for(int i=0;i<58;i++)
          {
              if(aj[i] > 0 && as[i] > 0 )
                cnt+=as[i];
          }
          cout << cnt << endl;

    }

    return 0;
}
