// tests/test_main.cpp
// Copyright 2024 Mauricio Mendes

#include <gtest/gtest.h>

TEST(ExampleTest, Example) {
    ASSERT_EQ(1, 1);
}

// Define another test case
TEST(ExampleTest, Test2) {
    ASSERT_TRUE(true);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
