class Solution {
public:
   
    int arrangeCoins(int n) {
         int i;
        if(n==1||n==0){return n;}
        for(i=1;i<=n;i++)
        {
            n=n-i;
        }
        
        int res = (i-1);
        return res;
        
    }

};
