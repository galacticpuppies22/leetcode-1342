/*
Problem: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
*/
#include "../incl/util.h"
#include "../incl/problem.h"

/**
 * Constraints: 0 <= num <= 10^6
 * (hence the #define MAX_RESULT in problem.h)
 */
int numberOfSteps(int num)
{
#ifdef SOLUTION_1
    int stepCounter = 0;

    while (num != 0)
    {
        if (num % 2 == 0) //if num is even
        {
            num = num / 2;
        }
        else //num is odd
        {
            num--;
        }
        stepCounter++;
    }
    return stepCounter;
#endif /* SOLUTION_1 */

#ifdef SOLUTION_2
    int steps = 0;
    while(num)
    {
        num = num&1 ? num-1 : num>>1;
        /**
         * Binarily evaluating the result of applying a bitmask of 1 will tell us if the numnbr is cleanly divisible by 2...
         * If it is not cleanly divisible by two, the ternary operator is false/0 and we subtract one...
         * If it is cleanly divisible by two, we divide by two by right-shifting the num to divide by two
        */
        steps++ ;
    }
    return steps;
#endif /* SOLUTION_2 */
}
