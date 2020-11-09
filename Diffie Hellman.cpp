/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int p,g,x,y;
    cout<<"ENTER p,g,x,y"<<endl;
    cin>>p>>g>>x>>y;
    
    long long int r1,r2;
    r1=((long long int)(pow(g,x)))%p;
    r2=((long long int)(pow(g,y)))%p;
    
    cout<<"r1:"<<r1<<endl;
    cout<<"r2:"<<r2<<endl;
    
    long long int k;
    k=((long long int)(pow(r1,y)))%p;
    
    cout<<"k:"<<k;

    return 0;
}
