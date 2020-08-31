/**************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <iostream>
#include<string>
using namespace std;

string ciphertext(string s, string key){
    
    string cipher;
    for(int i=0;s[i];i++){
        if(s[i]!=' '){
            cipher+=s[i];        }
    }
    
    string cipher1;
    
    for(int i=0;cipher[i];i++){
        char a=(cipher[i]+key[i])%26;
        a+='A';
       cipher1.push_back(a); 
    }
    
    
    return cipher1;
}

string keys(string s, string k){
    if(k.size() >= s.size())
        return k;
    else{
        int psize = s.size()-k.size();
        int ksize = k.size(); 
        while(psize >= ksize){
            k += k;
            psize -= ksize;
        }
 
        k += k.substr(0, psize);
        
        string k1;
        for(int i=0;i<s.length();i++){
            k1[i]=k[i];
        }
        
        return k1;
    }
}
int main()
{
    string s;
    getline(cin,s);
    string key;
    cin>>key;
    key=keys(s,key);
    string s1= ciphertext(s,key);
    cout<<s1<<endl;
}
