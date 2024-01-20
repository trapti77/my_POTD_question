class Solution {
public:
     int climbStairs(int n) {
        if(n==1||n==2)
{
    return n;
}
int prev=1;
int curr=2;
int sum=0;

while(n>=3)
{
    sum=prev+curr;
    prev=curr;
    curr=sum;
    n--;
}
return sum;
    }
};
