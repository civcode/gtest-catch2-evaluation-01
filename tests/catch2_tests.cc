#include "my_class.h"

//#include <catch2/catch_session.hpp>
#include <catch2/catch_test_macros.hpp>

#include <memory>

//std::shared_ptr<MyClass> my_class_ptr;
std::shared_ptr<MyClass> my_class_ptr = std::shared_ptr<MyClass>(new MyClass());

TEST_CASE( "Factorial of 0 is 1 (fail)", "[single-file]" ) {
    REQUIRE(my_class_ptr->FactorialRecursive(0) == 1 );
}

TEST_CASE( "Factorials of 1 and higher are computed (pass)", "[single-file]" ) {
    REQUIRE(my_class_ptr->FactorialRecursive(1) == 1 );
    REQUIRE(my_class_ptr->FactorialRecursive(2) == 2 );
    REQUIRE(my_class_ptr->FactorialRecursive(3) == 6 );
    REQUIRE(my_class_ptr->FactorialRecursive(10) == 3628800 );
}

// int main(int argc, char **argv) {

//   my_class_ptr = std::shared_ptr<MyClass>(new MyClass());

//   int result = Catch::Session().run(argc, argv);

//   return result;
// }