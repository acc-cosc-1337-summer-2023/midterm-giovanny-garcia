#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test whether the input will return the correct binary value"){
	REQUIRE(decimal_to_binary(10)== "00001010");
	REQUIRE(decimal_to_binary(170)== "10101010");
	REQUIRE(decimal_to_binary(255)=="11111111");
}
