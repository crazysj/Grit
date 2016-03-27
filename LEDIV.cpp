//https://www.codechef.com/problems/LEDIV
#include<bits/stdc++.h>

using namespace std;

int a[100001];

int sieve1()
{
    for(int i=0;i<100001;i++)
        a[i]=0;


    for(int i=2;i<100001;i++)
    {
        if(a[i]==0)
        {
          int j=2;
            while((i*j)<100001)
            {
                a[i*j]=1;
                j++;
            }

        }
    }
    return 0;
}

int gcd(int p,int q)
{

    if(q==0)
        return p;
    else
        return gcd(q,p%q);
}




int main()
{

    sieve1();
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int b[n];
        for(int j=0;j<n;j++)
            cin >> b[j];

        int temp=b[0];

        for(int k=1;k<n;k++)
        {
            if(temp>=b[k])
            temp=gcd(temp,b[k]);
            else
                temp=gcd(b[k],temp);
           // cout << "temp= " << temp  <<endl;
        }



        int ans=0;
        if(temp==1)
           ans=-1;
        else if(a[temp]==0)
           ans=temp;
        else{
        for(int k=2;k<=temp;k++)
        {
            if(temp%k==0)
            {
                ans=k;
                break;
            }
            else{}
        }
        }


        cout << ans << endl ;
    }

        return 0;
}

