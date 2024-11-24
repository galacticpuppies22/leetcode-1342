#include "../incl/main.h"
#include "../incl/problem.h"

int main(void)
{
    int runningReturn = 0;

    printf("------------------------");
    printf("Running Tests...");
    printf("------------------------\n");

    runningReturn += testCaseN(case1Num, case1Solution);
    runningReturn += testCaseN(case2Num, case2Solution);
    runningReturn += testCaseN(case3Num, case3Solution);

    printf("------------------------");
    printf("%d / %d tests passed!", runningReturn - NUM_TEST_CASES, NUM_TEST_CASES);
    printf("------------------------\n");

    return runningReturn;
}

int testCaseN(int num, int solution)
{
    bool rollingFlag = false;
    int result = numberOfSteps(num);

    printf("Test case %ld ", ++currentTestCase);
    if ((result == solution)
        && (MIN_RESULT <= result)
        && (result <= MAX_RESULT))
    {
        printf("passed!\n");
        return 0;
    }
    else
    {
        printf("FAILED!\n");
        return 1;
    }
}