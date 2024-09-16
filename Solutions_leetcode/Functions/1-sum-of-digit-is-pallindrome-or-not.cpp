class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int sum = 0;
        while(n!=0){
            sum += (n%10);
            n = n/10;
        }
        int second = 0;
        int temp = sum;
        while(temp!=0){
            second = second*10 + (temp%10);
            temp = temp/10;
        }
        
        return (second == sum);
    }
};