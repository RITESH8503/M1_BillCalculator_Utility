#include "unity.h"

#include "billing.h"

void test_add(void);

void test_multiply(void);

void setUp(){}
void tearDown(){}


int test_main()
{
  UNITY_BEGIN();

  RUN_TEST(test_add);
 
  RUN_TEST(test_multiply);
  

  return UNITY_END();
}

void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));

  TEST_ASSERT_EQUAL(15000, add(7500, 7500));
}



void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  TEST_ASSERT_EQUAL(10, multiply(2, 5));
}


