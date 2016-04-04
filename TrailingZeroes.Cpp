#include<bits/stdc++.h>

using namespace std;

long int trzeros(long int A)
{
    long int ans=0;
    while(A>=5)
    {
        A=A/5;
        ans+=A;

    }
    return ans;
}


int main()
{
    int n;
    cin >> n;
    cout << trzeros(n) << endl;

}
