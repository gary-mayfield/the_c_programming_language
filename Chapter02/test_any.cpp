#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "..\catch.hpp"

#include "any.h"

TEST_CASE( "any returns -1 if char from s2 not found in s1", "[any]" ) {
    char s1[] = "Bob Bobbington";
    char s2[] = "Aa";
    int result = any(s1, s2);
    REQUIRE(result == -1);
}

TEST_CASE( "any returns pos in s1 if char from s2 found in s1", "[any]" ) {
    char s1[] = "Bob Bobbington";
    char s2[] = "B";
    int result = any(s1, s2);
    REQUIRE(result == 0);
}

TEST_CASE( "any returns pos in s1 if char from later in s2 found in s1", "[any]" ) {
    char s1[] = "Bob Bobbington";
    char s2[] = "Aab";
    int result = any(s1, s2);
    REQUIRE(result == 2);
}

TEST_CASE( "any returns pos in s1 if char from s2 found at end of s1", "[any]" ) {
    char s1[] = "Bob Bobbington";
    char s2[] = "AaNn";
    int result = any(s1, s2);
    REQUIRE(result == 9);
}