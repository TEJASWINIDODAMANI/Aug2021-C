#include "feature.h"
#include "unity.h"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_feature()
{
    int n1 = 10, n2 = 20;
    TEST_ASSERT_EQUAL(30, feature(n1, n2, 1));
    TEST_ASSERT_EQUAL(-10, feature(n1, n2, 2));
    TEST_ASSERT_EQUAL(200, feature(n1, n2, 3));
    TEST_ASSERT_EQUAL(0.5, feature(n1, n2, 4));
    TEST_ASSERT_EQUAL(0.5, feature(n1, 0, 4));

    //TEST_ASSERT_EQUAL(2*INT_MAX, feature(INT_MAX, INT_MAX));

}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();
    /* Run Test functions */
    RUN_TEST(test_feature);
    /* Close the Unity Test Framework */
    return UNITY_END();
}