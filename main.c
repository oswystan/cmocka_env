/*
 **************************************************************************************
 *       Filename:  main.c
 *    Description:   source file
 *
 *        Version:  1.0
 *        Created:  2014-11-02 09:06:37
 *
 *       Revision:  initial draft;
 **************************************************************************************
 */


#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdio.h>

#include "cmocka.h"

static void test_add(void** state)
{
    assert_int_equal(2,2);
}
static void test_sub(void** state)
{
    assert_int_equal(2,2);
}
static void test_multi(void** state)
{
    assert_int_equal(1,2);
}
static void test_div(void** state)
{
    assert_int_equal(1,2);
}

UnitTest tests[] =
{
    unit_test(test_add),
    unit_test(test_sub),
    unit_test(test_multi),
    unit_test(test_div),
};

int main(int argc, char *argv[])
{
    return run_tests(tests);
}

/********************************** END **********************************************/

