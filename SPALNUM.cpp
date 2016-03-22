//https://www.codechef.com/problems/SPALNUM

#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int palin(ll temp)
{
    ll  k,rem=0;
    ll sum=0;
    k=temp;
    while(k!=0)
    {
        rem=k%10;
        sum=sum*10+rem;
        k/=10;
    }
    if(sum==temp)
        return true;
    else
        return false;
}
ll a[100001];
int initialize()
{

    for(ll i=1;i<100001;i++)
    {
        a[i]=0;

    }
    for(ll j=1;j<100001;j++)
    {
        if(palin(j))
            a[j]=1;

    }

    return 0;
}

int main()
{
    initialize();
    int test;
    cin >> test;
    while(test--){
    int l,r;
    cin >> l >> r;
    ll sum=0;
    for(int k=l;k<r+1;k++)
    {
        if(a[k] )
            sum+=k;
    }

    cout << sum << endl;

    }
    return 0;
}

