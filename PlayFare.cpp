/**************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <iostream>

using namespace std;

void Playfair(string s,string key)
{
    for(int i=0;s[i];i++){
        if(s[i]=='j'){
            s[i]='i';
        }
    }
    string encrypt;
    char chart[5][5];
    int j=0,k=0;
    for(int i=0;i<key[i];i++)
    {
        chart[j][k]=key[i];
        k++;
        if(k==5){k=0;j=j+1;}
    }
    char a='a';
    for(int i=0;i<25;i++)
    {
       if(key.find(a)==0){a=char(int(a)+1);}
       else if(key.find(a)!=(-1)){a=char(int(a)+1);}
       else
       {
           if(a=='j'){a=char(int(a)+1);}
           chart[j][k]=a;
           a=char(int(a)+1);
           k++;
        if(k==5){k=0;j=j+1;}
           
       }
    }
    
    for(int p=0;p<5;p++)
    {
        for(int g=0;g<5;g++){
            cout<<chart[p][g]<<" ";
        }
        cout<<endl;
    }
    
    int r1,r2,c1,c2;
    for(int i=0;i<s.length();i=i+2)
    {
        for(int p=0;p<5;p++)
     {
        for(int g=0;g<5;g++)
        {
            if(s[i]==chart[p][g])
            {
                r1=p;
               c1=g;
            }
            
            if(s[i+1]==chart[p][g]){
                r2=p;
                c2=g;
            }
        }
       
     }
     
     if(r1==r2){
         encrypt[i]=chart[r1][(c1+1)%5];
         cout<<encrypt[i];
         encrypt[i+1]=chart[r2][(c2+1)%5];
         cout<<encrypt[i+1];
     }
     
     if(c1==c2)
     {
         encrypt[i]=chart[(r1+1)%5][c1];
         cout<<encrypt[i];
         encrypt[i+1]=chart[(r2+1)%5][c2];
         cout<<encrypt[i+1];
     }
     
     if(r1!=r2&&c1!=c2)
     {
         encrypt[i]=chart[r1][c2];
         cout<<encrypt[i];
         encrypt[i+1]=chart[r2][c1];
         cout<<encrypt[i+1];
         
     }
    }
    
    cout<<encrypt<<endl;
    
}



int main()
{
    string s;
    cin>>s;
    
    string key;
    cin>>key;
    Playfair(s,key);
   
    return 0;
}
