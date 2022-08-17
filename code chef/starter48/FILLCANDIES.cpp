#include<iostream>
using namespace std;
void fill(int t)
{
    for (int i = 0; i < t; i++)
    {
        int n,k,m;
        cin>>n>>k>>m;
        int bag=n/(k*m);
        if ((n%(k*m))==0)
        {
            cout<<bag<<endl;
        }
        else
        {
            cout<<bag+1<<endl;
        }
    }
    
}

int main()
{
    int t;
    cin>>t;
    fill(t);
}