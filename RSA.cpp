/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
   int t;
   while(1) {
      t= a%b;
      if(t==0)
      return b;
      a = b;
      b= t;
   }
}
int main() {
   
   double p = 15;
   double q = 7;
   double n=p*q;
   double t;
   double phi= (p-1)*(q-1);
  
   double e=2;
  
   while(e<phi) {
       
      t = gcd(e,phi);
      if(t==1)
         break;
      else
         e++;
   }
  
   double d1=1/e;
   
   double d=fmod(d1,phi);//d*e=1 mod phi
   
   
   double message = 5;
   
   double c = pow(message,e); 
   
   double m = pow(c,d);
   
   c=fmod(c,n);
   m=fmod(m,n);
   
   cout<<"Message = "<<message<<endl;
   cout<<"p = "<<p<<endl;
   cout<<"q = "<<q<<endl;
   cout<<"n = pq = "<<n<<endl;
   cout<<"phi = "<<phi<<endl;
   cout<<"e = "<<e<<endl;
   cout<<"d = "<<d<<endl;
   cout<<"Encrypted message = "<<c<<endl;
   cout<<"Decrypted message = "<<m<<endl;
   return 0;
}
