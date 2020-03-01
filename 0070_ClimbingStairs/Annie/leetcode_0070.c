/**
 * 70. Climbing Stairs
 * You are climbing a stair case. It takes n steps to reach to the top.
 * Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
 * Note: Given n will be a positive integer.
 *
 * Example: 
 * Input: 2
 * Output: 2
 * Explanation: There are two ways to climb to the top.
 * 1. 1 step + 1 step
 * 2. 2 steps
 * 
 * Runtime: 0 ms, faster than 100.00% of C online submissions for Climbing Stairs.
 * Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Climbing Stairs.
 *
 */

int climbStairs(int n){
    int step_prev_2 = 1;
    int step_prev_1 = 1;
    int step = 0;
    
    if(n == 0 || n == 1){
        return 1;
    }
    
    for(int i=2; i<=n; i++){
        //printf("step_prev_1=%d, step_prev_2=%d\n", step_prev_1, step_prev_2);
        step = step_prev_1 + step_prev_2;
        step_prev_2 = step_prev_1;
        step_prev_1 = step;
        //printf("step[%d] %d\n",i,step);
    }
    return step;
}