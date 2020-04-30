#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "..\catch.hpp"

#include "swap.h"

using Catch::Matchers::Equals;

TEST_CASE( "Two ints are swapped", "[swap]" ) {
    int one = 1;
    int two = 2;

    Swap_i(&one, &two);
    REQUIRE(one == 2);
    REQUIRE(two == 1);
}

TEST_CASE( "Two larger ints are swapped", "[swap]" ) {
    int one = 10;
    int two = 20;

    Swap_i(&one, &two);
    REQUIRE(one == 20);
    REQUIRE(two == 10);
}

TEST_CASE("Two chars are swapped", "[swap]"){
    char a = 'a';
    char b = 'b';

    Swap_c(&a, &b);
    REQUIRE(a == 'b');
    REQUIRE(b == 'a');

}

TEST_CASE("Two strings are swapped", "[swap]"){
    char *one = "one";
    char *two = "two";

    Swap_s(&one, &two);
    REQUIRE_THAT(one, Equals("two"));
    REQUIRE_THAT(two, Equals("one"));

}