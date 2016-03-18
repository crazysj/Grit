//http://codechef.com/problems/RECIPE
#include<iostream>
#define md 1000000007
#define INF 999999
using namespace std;

int gcd( int a,int b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}


int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i] ;

        }
        int temp=a[0];
        for(int i=1;i<n;i++)
        {
            //cin >> a[i] ;
            temp=gcd(temp,a[i]);
        }

        for(int i=0;i<n;i++)
        {
            int temp2= (a[i]/temp);
            cout << temp2 << " " ;

        }
        cout << endl;

    }

    return 0;
}
