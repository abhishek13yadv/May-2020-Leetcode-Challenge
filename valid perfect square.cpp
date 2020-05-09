class Solution {
public:
    bool isPerfectSquare(int num) {
        long int mid, l=0, r=num, sq;
        while(l<=r){
            mid = (l+r)/2;
            sq = mid*mid;
            if(sq == num){
                return true;
            }
            else if(sq > num){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return false;
    }
};
