//https://www.codechef.com/problems/HORSES

#include<bits/stdc++.h>

using namespace std;
int cmpfunc(const void *a,const void *b)
 {
     return (*(int *)a - *(int*)b);
 }

int main( )
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=0;
        for(int i=0;i<n;i++)
            cin >> a[i];

        qsort(a,n,sizeof(int),cmpfunc);
        int b[n-1];

        for(int i=0;i<=n-2;i++)
        {
            b[i]=a[i+1]-a[i];
        }
         qsort(b,n-1,sizeof(int),cmpfunc);
        cout << b[0] <<endl;

    }

    return 0;
}
