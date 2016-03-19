//https://www.codechef.com/problems/FLOW004
#include<iostream>
#include<cmath>
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
       int temp=0;
       temp=log10(n);
       int last=n%10;
       int x = (pow(10,temp));
       int first = n / x;

       cout << first+last << endl ;

    }

    return 0;
}
