  #define CATCH_CONFIG_MAIN  // This tell CATCH to provide a main() - only do this in one cpp file
  #include "catch.hpp"

  unsigned int Factorial( unsigned int number ) {
      return number <= 1 ? number : Factorial(number-1)*number;
  }

  TEST_CASE( "example/factorial", "The Factorial function returns the factorial of the number passed in" ) {
      REQUIRE( Factorial(0) == 1 );
      REQUIRE( Factorial(1) == 1 );
      REQUIRE( Factorial(2) == 2 );
      REQUIRE( Factorial(3) == 6 );
      REQUIRE( Factorial(10) == 3628800 );
  } 
