class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int sum = 0;
        for(auto i = J.begin();i!=J.end();++i)
        {
            sum += count(S.begin(),S.end(),*i);
        }
        return sum;
    }
};
