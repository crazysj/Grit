//https://www.codechef.com/problems/AMMEAT
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        ll m;
        cin >> m;
        ll a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        ll sum=m;
        sort(a,a+n);
        int i=n-1,count=0;
        while(sum >0 && i!=-1)
        {
            sum-=a[i];
            i--;
            count++;
        }
        if(sum <=0)
            cout << count  << endl;
         else
            cout << "-1" << endl;

    }

}

