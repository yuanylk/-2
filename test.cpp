
#include "pch.h"

TEST(MaxSubArraySumTest, NegativeNumbers) {
    int a[] = { -2, -11, -4, -13, -5, -2 };
    int n = sizeof(a) / sizeof(a[0]);
    EXPECT_EQ(maxSubArraySum(a, n), 0);
}

TEST(MaxSubArraySumTest, PositiveNumbers) {
    int a[] = { 2, 11, 4, 13, 5, 2 };
    int n = sizeof(a) / sizeof(a[0]);
    EXPECT_EQ(maxSubArraySum(a, n), 37);
}

TEST(MaxSubArraySumTest, MixedNumbers) {
    int a[] = { -2, 11, -4, 13, -5, -2 };
    int n = sizeof(a) / sizeof(a[0]);
    EXPECT_EQ(maxSubArraySum(a, n), 20);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
