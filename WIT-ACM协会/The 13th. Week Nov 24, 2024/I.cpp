#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    int ans = 0x3f3f3f3f;
    int a[2001][2001] = {0};

    cin>>n>>m;
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int j = n-2;j >= 0;j--)
    {
        for(int i = 0;i < m;i++)
        {
            a[i][j] = min(a[(i+1)%m][j+1], a[i][j+1]) + a[i][j];
        }
    }
    for(int i = 0;i < m;i++)
    {
        ans = min(ans,a[i][0]);
    }
    cout<<ans<<endl;
}