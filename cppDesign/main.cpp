#include <gtest/gtest.h>
#include "static_check_app.h"

using namespace RoboK;

// Tests factorial of 0.
TEST(StaticCheckTest, safe_reinterpret_cast_success) {
    char somePointer = '\n';
    char c = safe_reinterpret_cast<char>(somePointer);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
