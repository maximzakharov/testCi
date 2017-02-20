/*
 *  main.c
 *
 *  Created on: 09-02-2017
 *  Author: Maxim Zakharov
 *  email:  zakharov.m89@gmail.com
 */
#include <CppUTest/UtestMacros.h>
#include <CppUTest/CommandLineTestRunner.h>
#include <stdio.h>
//#include "CppUTest/TestHarness.h"
//#include "CppUTest/CommandLineTestRunner.h"

TEST_GROUP(FirstTestGroup)
{

	void mmm(void);
};

TEST(FirstTestGroup, FirstTest)
{
   FAIL("Fail me!");
}
//
//
//
int main(void) {

	printf("Hello world!!!\n");

	while (1);
	return 0;
}

//#include "CppUTest/TestHarness.h"
//#include "ClassName.h"

//SimpleString StringFrom(const yourType&);
//
//
//
//TEST_GROUP(ClassName)
//{
//  ClassName* className;
//
//  void setup()
//  {
//    className = new ClassName();
//  }
//  void teardown()
//  {
//    delete className;
//  }
//}
//
//TEST(ClassName, Create)
//{
//  CHECK(0 != className);
//  CHECK(true);
//  CHECK_EQUAL(1,1);
//  LONGS_EQUAL(1,1);
//  DOUBLES_EQUAL(1.000, 1.001, .01);
//  STRCMP_EQUAL("hello", "hello");
//  FAIL("The prior tests pass, but this one doesn't");
//}


//
//int main(int ac, char** av)
//{
//   LogPlugin logPlugin;
//   TestRegistry::getCurrentRegistry()->installPlugin(&logPlugin);
//   int result = CommandLineTestRunner::RunAllTests(ac, av);
//   TestRegistry::getCurrentRegistry()->resetPlugins();
//   return result;
//}




