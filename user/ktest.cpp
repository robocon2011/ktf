#include <stdio.h>
#include <stdlib.h>
#include "ktest_run.h"
#include "debug.h"

/* This program is now a generic
 * user level app to run kernel tests
 * provided by the test driver.
 */

int main (int argc, char** argv)
{
  testing::GTEST_FLAG(output) = "xml:ktest.xml";
  ktest_debug_init();
  testing::InitGoogleTest(&argc,argv);

  return RUN_ALL_TESTS();
}