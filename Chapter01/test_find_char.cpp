#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "..\catch.hpp"

#include "find_char.h"

TEST_CASE( "Find char returns true if present", "[find_char]" ) {
    char s = 'b';
    char string[] = "Bob";
    int result = find_char(string, s);
    REQUIRE(result);
}

TEST_CASE( "Find char returns false if not present", "[find_char]" ) {
    char s = 'c';
    char string[] = "Bob";
    int result = find_char(string, s);
    REQUIRE_FALSE(result);
}
