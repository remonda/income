#include "../include/simpleStack.h"
#include "gtest/gtest.h"

int main(int argc, char** argv) {
    std::cout<<"running main from ut_main"<<std::endl;
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(FooTest, simpleStack_push) {
    SimpleStack simpleStack;
    simpleStack.push(10);

    int top = simpleStack.getTop();
    EXPECT_EQ(top, 10);
}


