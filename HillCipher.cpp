/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


using namespace std;

string Hillcipherencryption(string s, string key){
  
    int keymatrix[3][3];
    
    int k=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            keymatrix[i][j]=(key[k])%65;
            k++;
        }
    }
    cout<<"Actual String----->"<<s<<endl;
    
    if((s.length()%3)!=0){
        for(int i=0;i<(s.length()%3);i++){
            s+='X';
        }
    }
    
    string cip;
    string s3=s;
    cout<<"Extended string--->"<<s3<<endl;
    
    cout<<"Encrypted string-->";
    
    for(int r=0;r<s3.length();r=r+3)
    {
       s = s3.substr(r, r+3); 
       
    
    int svector[3][1];
    for(int i=0;i<3;i++)
    {
        svector[i][0]=(s[i]%65);
    }
    
    int ciphermatrix[3][1];
    int x,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<1;j++)
        {
            ciphermatrix[i][j]=0;
            for(x=0;x<3;x++)
            {
                ciphermatrix[i][j]+=keymatrix[i][x]*svector[x][j];
            }
            
            ciphermatrix[i][j]=ciphermatrix[i][j]%26;
        }
    }
    
    string ciphertext;
    for(int i=0;i<3;i++){
        ciphertext+=ciphermatrix[i][0]+65;
    }
    
    cout<<ciphertext;
    cip+=ciphertext;
}

cout<<endl;

return cip;
}

//string Hilldecipher(string cip,string key) 

int main()
{
    string s;
    cin>>s;
    string key;
    cin>>key;
    string encryptedstring=Hillcipherencryption(s,key);
    //cout<<encryptedstring<<endl;
    //string decryptedstring=Hilldecipher(cip,key);
    //cout<<decryptedstring<<endl;

    return 0;
}
