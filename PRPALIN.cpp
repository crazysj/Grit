//https://www.codechef.com/problems/PRPALIN
//crazysj
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> v(1003002);
vector<ll> pp(115);

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

int sieve()
{
    ll temp=0,temp2=0;

    for(ll i=0;i<1003002;i++)
        v[i]=0;

    for(ll i=2;i<1003002;i++)
    {
        if(v[i]==0)
        {
            temp=2;
            temp2=temp*i;
            while((temp2) < 1003002 )
            {
                v[temp2]=1;
                temp++;
                temp2=temp*i;
            }

        }

        else {

        }


    }

    return 0;
}

int main()
{
    sieve();
     int j = 0;
    for(ll  i=2;i<1003002;i++)
    {

        if(v[i] == 0)
        if(palin(i)){
            pp[j] = i;
            j++;
        }
        else{}


    }

    int x,z=0;
    cin >> x;

    int temp=-1;
    while(pp[z] <= x)
    {
        z++;
        temp++;

    }
    if(pp[temp] < x )
        cout << pp[temp+1];
    else
        cout << pp[temp];

    return 0;
}
