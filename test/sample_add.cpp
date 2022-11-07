#include <gtest/gtest.h>

#include "sample.h"

TEST(sample, add) {
  double res = 3.0;
  res = sample_add(1.0, 2.0);
  ASSERT_NEAR(res, 3.0, 1.0e-11);
}