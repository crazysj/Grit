//https://www.codechef.com/problems/TREEROOT
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n,a,b,suma=0,sumb=0;
        cin >> n;
        for(int j=0;j<n;j++)
        {
            cin >> a;
            suma+=a;
            cin >> b;
            sumb+=b;

        }
        cout << abs(suma-sumb) <<endl;

    }
    return 0;
}
