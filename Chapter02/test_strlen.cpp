#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "..\catch.hpp"

#include "str_len.h"

TEST_CASE( "strlen returns correct length of an empty string", "[str_len]" ) {
    char s[] = "";
    int result = str_len(s);
    REQUIRE(result == 0);
}

TEST_CASE( "strlen returns correct length of a string", "[str_len]" ) {
    char s[] = "Bob Bobbington had the bobbingest bob.";
    int result = str_len(s);
    REQUIRE(result == 38);
}
