#include "hms.h"
#include "unity.h"


/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_read(void)
{
    // Can ommi the below intialization as it is done at the declaration time
    
}
void test_add(void)
{
    
}

void test_view(void)
{
    

}
void test_search(void)
{

}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_add);
    RUN_TEST(test_add);
    RUN_TEST(test_view);
    RUN_TEST(test_search);

    /* Close the Unity Test Framework */
    return UNITY_END();
}