#include<bits/stdc++.h>
using namespace std;

                        //correct but 6s runtime
/*class Solution {
public:
    int reverse(int x) {
      int last,revn=0;
      

    while(x!=0){
      
        if((revn > INT_MAX/10) || (revn < INT_MIN/10)){
                return 0;
        }
        revn=revn*10+x%10;

        x=x/10;
    }  
    
    return revn;    
    }
};*/








                    //most optimized 0ms
/*class Solution {
public:
    int reverse(int x) {
        int rem =0;
        double num = 0;
        while(x != 0){
            rem = x%10;
            num = num*10 +rem;
            x = x / 10;
        }
        if(num > (pow(2,31)-1)){ 
            return 0;
        }
        else if(num < pow(-2,31))
        {
            return 0;
        }
        else{
        return num;
        }
    }
};*/