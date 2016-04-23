//Given an unsorted array, find the
//minimum difference between any pair in given array.
//crazysj
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin >> v[i];
        sort(v.begin(),v.end());
        int mindiff=9999999;
        for(int i=0;i<n-1;i++)
        {
            int temp;
            temp=v[i+1]-v[i];
            temp<mindiff ? mindiff=temp : temp ;

        }


        cout << mindiff << "\n";
    }

    return 0;
}
