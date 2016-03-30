//https://www.codechef.com/problems/CARVANS
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int test;
    cin >> test;
    while(test--)
    {
        int n;
        scanf("%d",&n);
        long long int a[n];
        int count=1;
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(i>0 && a[i-1] >= a[i])
                count++ ;
            else{
                if(i==0){}
                else{
                   a[i]=a[i-1] ;
                      }

            }

        }
        printf("%d\n",count);

    }

    return 0;
}
