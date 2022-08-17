#include <iostream>
using namespace std;

int interior()
 {
    int t;
    cin>>t;
    return t;
}

int cost(int x1,int y1,int x2, int y2)
{
    if(x1,y1>=1 && x2,y2<=100)
    {
        int sum1= x1+y1;
        int sum2= x2+y2;
        if(sum1<=sum2)
         {
            cout<<sum1<<endl;
            return sum1;
         }
        else
        {
            cout<<sum2<<endl;
            return sum2;
        }
    }
}
void repeat(int t)
{
    for (int i = 0; i < t; i++)
    {
        int x1,y1,x2,y2;
       cin>>x1;

       cin>>y1;

       cin>>x2;

       cin>>y2;
       cost(x1,y1,x2,y2);
    }
    
}

int main() {
    int t=interior();
    repeat(t);
	return 0;
}
