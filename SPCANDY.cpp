//https://www.codechef.com/problems/SPCANDY
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n,k,temp1,temp2;
        cin >> n >> k;
        if(k==0)
            cout << "0 " << n << endl;
        else if(n==0)
            cout << "0 0" << endl;
        else
        {
          temp1= n/k ;
          temp2= n%k;
          cout << temp1 << " " << temp2  << endl;

        }

    }

    return 0;
}
