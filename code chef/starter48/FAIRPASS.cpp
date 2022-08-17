#include<iostream>
using namespace std;
void fun(int t)
{
    if(t>0)
    {
        int n,k;
        cin>>n>>k;
        if (n,k,t>=1 && n,k,t<=100)
        {
            if((n+1)<=k)
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
        }
        fun(t-1);
    }
}
int main()
{
    int t;
    cin>>t;
    fun(t);
}