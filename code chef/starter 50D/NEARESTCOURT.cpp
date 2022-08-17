#include <iostream>
using namespace std;
void fun(int t)
{
    if(t>0)
    {
       int x,y;
       cin>>x>>y;
       if(x,y>=1 && x,y<=1000)
       {
           if(x-y==1) cout<<1<<endl;
           else 
           {
               if((abs(x-y))%2==0) cout<<((abs(x-y))/2)<<endl;
               else cout<<abs((x-y)/2)+1<<endl;
           }
           fun(t-1);
       }
    }
}

int main() {
    int t;
    cin>>t;
    if(t>=1 && t<=1000) fun(t);
	return 0;
}
