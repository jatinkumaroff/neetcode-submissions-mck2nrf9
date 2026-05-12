class Solution {
public:
    vector<int> steps = vector<int>(46, -1);

    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        if(n==0) return 0;
        if(steps[n]!=-1) return steps[n];
        steps[n]= climbStairs(n-1) + climbStairs(n-2);
        return steps[n];
    }
};
