/**************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <iostream>
#include<string>
using namespace std;


string encrypt(string s,int n){
    
    string result="";
    for(int i=0;s[i];i++){
        if(isupper(s[i])){
            result+=char(int(s[i]+n-65)%26+65);
        }
        else{
            result+=char(int(s[i]+n-97)%26+97);
        }
    }
    return result;
    
}



int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    cout<<"ENCRYPTED DATA FOR THE KEY "<<n<<" : "<<encrypt(s,n)<<endl;
    
    s=encrypt(s,n);
cout<<"DECRYPTED DATA FOR THE KEY "<<n<<" : "<<encrypt(s,26-n)<<endl;

    return 0;
}
