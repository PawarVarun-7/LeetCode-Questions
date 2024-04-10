class Solution {
public:
    bool isPalindrome(int x) {
        
     long long ans=0;
        int temp =x;
      if(x<0){
          return false;
      }  
        while(temp!=0){
            int num;
            
            num = temp%10;
            
            ans =(ans*10) + num;
            temp=temp/10;
            
        }

       return(ans ==x);
        
       
        
   
        
        
    
    }
    
};