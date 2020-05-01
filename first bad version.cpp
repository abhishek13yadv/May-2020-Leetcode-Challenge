Binary Search C++ Solution

int firstBadVersion(int n) {
         long int mid,l=1,r=n;
        mid=(l+r)/2;
        if(isBadVersion(n)==true && isBadVersion(n-1)==false)return n;
        while(!(isBadVersion(mid)==true && isBadVersion(mid-1)==false) && mid>=1){
            if(isBadVersion(mid)==true){
                r=mid;
                mid=(l+r)/2;
            }
            else if(isBadVersion(mid)==false){
                l=mid;
                mid=(l+r)/2;
            }
        }
        return mid; 
    }
