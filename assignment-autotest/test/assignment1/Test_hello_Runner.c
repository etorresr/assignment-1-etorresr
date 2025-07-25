/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <stdbool.h>

/*=======External Functions This Runner Calls=====*/
extern void Test_hello_setUp(void);
extern void Test_hello_tearDown(void);
extern void test_hello();


/*=======Mock Management=====*/
static void CMock_Init(void)
{
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Setup (stub)=====*/
void Test_hello_setUp(void) {}

/*=======Teardown (stub)=====*/
void Test_hello_tearDown(void) {}

/*=======Test Reset Options=====*/
void Test_hello_resetTest(void);
void Test_hello_resetTest(void)
{
  Test_hello_tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  Test_hello_setUp();
}
void Test_hello_verifyTest(void);
void Test_hello_verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, int line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        Test_hello_setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        Test_hello_tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
 int Test_hello_main(void);
int Test_hello_main(void)
{
  UnityBegin("/home/emmanuel-torres/Documents/cursera/linux_embed/assignment-1-etorresr/assignment-autotest/test/assignment1/Test_hello.c");
  run_test(test_hello, "test_hello", 4);

  return UnityEnd();
}
