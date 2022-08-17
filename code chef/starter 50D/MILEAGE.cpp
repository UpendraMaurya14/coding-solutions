#include <iostream>
using namespace std;
void fun(int t)
{
    if (t>0)
    {
        float n,x,y,a,b;
        cin>>n>>x>>y>>a>>b;
        if(n,x,y,a,b>=1 && n,x,y,a,b<=100)
        {
            if((n*(x/a))<(n*(y/b)))
        {
            cout<<"Petrol"<<endl;
        }
        else if ((n*(x/a))==(n*(y/b)))
        {
            cout<<"Any"<<endl;
        }
        else
        {
            cout<<"Diesel"<<endl;
        }
        }
        fun(t-1);
    }
}
int main() {
    int t;
    cin>>t;
    if(t>=1 && t<=100) fun(t);
	return 0;
}
