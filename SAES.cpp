#include <iostream>

using namespace std;
string w0,w1,w2,w3,w4,w5;
string key0,key1,key2;
string rcon0="10000000";
string rcon1="00110000";
string subnib[4][4]={{"1001","0100","1010","1011"}, {"1101","0001","1000","0101"}, {"0110","0010","0000","0011"}, {"1100","1110","1111","0111"}};
string mixcol[3][15]={{"0010","0100","0110","1000","1010","1100","1110","0011","0001","0111","0101","1011","1001","1111","1101"}, {"0100","1000","1100","0011","0111","1011","1111","0110","0010","1110","1010","0101","0001","1101","1001"}, {"1001","0001","1000","0010","1011","0011","1010","0100","1101","0101","1100","0110","1111","0111","1110"}};
string xore(string a,string b){
    string XOR;
    for(int i=0;i<8;i++){
       if((a[i]=='0'&&b[i]=='0')||(a[i]=='1'&&b[i]=='1')){
           XOR[i]='0';
       }
       else{
           XOR[i]='1';
       }
       
   }
   return XOR;
}
string xors(string a,string b){
    string XOR;
    for(int i=0;i<16;i++){
       if((a[i]=='0'&&b[i]=='0')||(a[i]=='1'&&b[i]=='1')){
           XOR[i]='0';
       }
       else{
           XOR[i]='1';
       }
       
   }
   return XOR;
}
 
string rot(string s){
    string s1;
    for(int i=0;i<8;i++){
        s1[i]=s[(i+4)%8];
    }
    
    return s1;
}
string sub(string s){
    string s1="";
    for(int i=0;i<8;i=i+4){
        s1+=subnib[((int(s[i])*2)+int(s[i+1]))][((int(s[i+2])*2)+int(s[i+3]))];
    }
    
    return s1;
}


int main()
{
    int j=0;
 string key;
 string p;
 cin>>key;
 cin>>p;
 cout<<"Entered Key is : "<<key<<endl;;
 cout<<"Entered Plain Text is : "<<p<<endl;
 
 for(int i=0;i<8;i++){
     w0[i]=key[i];
 }
 
 for(int i=8;i<16;i++){
     w1[j]=key[i];
     j++;
 }
 j=0;
 w2=rot(w1);
 
 w2=sub(w2);
 w2=xore(w2,rcon0);
 w2=xore(w2,w0);
 
 
  for(int i=0;i<8;i++){
      cout<<w2[i];
  }
  
  
}
