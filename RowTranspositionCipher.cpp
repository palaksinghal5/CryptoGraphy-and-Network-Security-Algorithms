#include <iostream>

using namespace std;

string rowtranspose(string s, int key)
{
    
    
    int array[6];
int number = key;
for (int i = 5; i >= 0; i--) 
{
    array[i] = number % 10;
    number /= 10;
}

int n=(s.length()%6)+1;

char a[6][n];
int j=0;
for(int i=0;i<6;i++){
    for(int j=0;j<n;j++){
        a[i][j]=s[k];
        k++;
    }
}

 


}



int main()
{
   string s;
   cin>>s;
   int key;
   cin>>key;
   
   
   cout<<rowtranspose(s,key);
   return 0;
}
