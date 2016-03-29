//https://www.codechef.com/problems/CHEFA
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        int j=n-1;
        long long int sum=0;
        while(j>=0)
        {
            sum+=a[j];
            j-=2;
        }
        cout << sum << endl;
    }


    return 0;
}
