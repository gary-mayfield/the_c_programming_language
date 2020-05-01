#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "..\catch.hpp"

#include "input_str.h"

using Catch::Matchers::Equals;

const char* mock_getchar_data_ptr;
char mock_getchar()
{
    return *mock_getchar_data_ptr++;
}

TEST_CASE( "Strings less than maxroom are stored", "[input_str]" ) {
    mock_getchar_data_ptr = "bob";
    char s[8];
    input_str(s, 8);
    REQUIRE_THAT(s, Equals("bob"));
}

TEST_CASE( "Strings equal to maxroom are stored", "[input_str]" ) {
    mock_getchar_data_ptr = "bobbing";
    char s[8];
    input_str(s, 8);
    REQUIRE_THAT(s, Equals("bobbing"));
}

TEST_CASE( "Strings greater than maxroom are truncated", "[input_str]" ) {
    mock_getchar_data_ptr = "bobbington";
    char s[8];
    input_str(s, 8);
    REQUIRE_THAT(s, Equals("bobbing"));
}