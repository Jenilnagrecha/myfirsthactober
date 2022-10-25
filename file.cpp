#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define fo(a,b,c) for(int a=b;a<c;a++)
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void func(int n,vi &a){
    int x=n;
    if(n==0)
    {
        if(a[1]!=0)
        a[0]=0;
        else
        a[0]=1;
        return;
    }
    if(n==1){
        a[0]=1;
        a[1]=0;
        return ;
    }
    x=sqrt(x);
    x++;
    x*=x;
    int y=sqrt(n);
    y*=y;
    if(y==n)
    x=y;
    //cout<<x;
    for(int i=n;i>=0;i--){
        if(x-(i)<=n)
        a[i]=x-i;
        else{
        func(i,a);
        return;
        }
    }
    return ;
}
void code()
{
    int n;
    cin>>n;
    vi a(n);
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    else if(n==2)
    {
        cout<<0<<" "<<1<<endl;
        return;
    }
    // cout << "SFA";
    func(n-1,a);
    fo(i,0,n)
    cout<<a[i]<<" ";
    cout<<endl;

}
int32_t main()
{
    fast
    int test = 1;
    cin >> test;
    for(int i=0;i<test;i++)
    {
        // cout << "AD";
        code();
    }
    return 0;
}
