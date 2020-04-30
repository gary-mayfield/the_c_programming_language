#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "..\catch.hpp"

#include "reverse.h"

using Catch::Matchers::Equals;

TEST_CASE( "Simple strings are reversed", "[reverse]" ) {
    char s[] = "bob";
    Reverse(s);
    REQUIRE_THAT(s, Equals("bob"));
}

TEST_CASE( "Mix of lower and upper strings are reversed", "[reverse]" ) {
    char s[] = "Bob";
    Reverse(s);
    REQUIRE_THAT(s, Equals("boB"));
}

TEST_CASE("Correctly handles empty string", "[reverse]"){
    char s[] = "";
    Reverse(s);
    REQUIRE_THAT(s, Equals(""));
}

TEST_CASE("Handles sentence with punctuation", "[reverse]"){
    char s[] = "The cat in the hat.";
    Reverse(s);
    REQUIRE_THAT(s, Equals(".tah eht ni tac ehT"));
}