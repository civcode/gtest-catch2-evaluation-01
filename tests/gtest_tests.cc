#include "my_class.h"

#include <gtest/gtest.h>

#include <memory>

//MyClass* my_class;

//std::shared_ptr<MyClass> my_class_ptr;
std::shared_ptr<MyClass> my_class_ptr = std::shared_ptr<MyClass>(new MyClass());

// Tests factorial of 0.
TEST(FactorialTest, HandlesZeroInput) {
  EXPECT_EQ(my_class_ptr->FactorialRecursive(0), 1);
}

// Tests factorial of positive numbers.
TEST(FactorialTest, HandlesPositiveInput) {
  EXPECT_EQ(my_class_ptr->FactorialRecursive(1), 1);
  EXPECT_EQ(my_class_ptr->FactorialRecursive(2), 2);
  EXPECT_EQ(my_class_ptr->FactorialRecursive(3), 6);
  EXPECT_EQ(my_class_ptr->FactorialRecursive(8), 40320);
}

// int main(int argc, char **argv) {
//   testing::InitGoogleTest(&argc, argv);

//   my_class_ptr = std::shared_ptr<MyClass>(new MyClass());

//   return RUN_ALL_TESTS();
// }
