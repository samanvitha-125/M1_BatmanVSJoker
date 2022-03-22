#include "unity.h"
#include "record.h"
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_win(void)
{
   // All the functions are of return type void. I can't run test cases for most of them.
   TEST_ASSERT_EQUAL(-1, win_game());
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_win);

    /* Close the Unity Test Framework */
    return UNITY_END();
}
