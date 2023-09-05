#include <gtest/gtest.h>
#include "../request/request.hpp" 

 
// Test cases for checking function with different arguments counts

// Test case for CheckArg when argc is not equal to 3
TEST(CheckArgTest1, CountNotEqualTo3) {

    int argc = 4;  
    // Call the CheckArg function and expect the result to be FAILED.
    Error_t result = CheckArg(argc);
    
    EXPECT_EQ(result, FAILED);// Expect the function to return FAILED
}

// Test case where the argument count is equal to 3.
TEST(CheckArgTest2, CountEqualTo3) {
    int argc = 3;  
    // Call the CheckArg function and expect the result to be SUCCESS.
    Error_t result = CheckArg(argc);
    
    EXPECT_EQ(result, SUCCESS);
}

// Another test case where the argument count is not equal to 3.
TEST(CheckArgTest3, CountNotEqualTo3) {
    int argc = 2;  

    // Call the CheckArg function and expect the result to be FAILED.
    Error_t result = CheckArg(argc);
    
    EXPECT_EQ(result, FAILED);
}

// Test case for the ReadOrder function with a specified order type.

// Test case where the order type is "-r" (read).
TEST(ReadOrder, ReadOrderTypeR) {

    string order;                // Create a string to store the order.
    char orderType[] = "-r";     // Simulate an order type of "-r" (read).

    // Call the ReadOrder function and expect the result to be READ_FILE and order to be "0".
    Error_t result = ReadOrder(&order, orderType);
    
    EXPECT_EQ(result, READ_FILE);
    EXPECT_EQ(order, "0");
}

// Main function for running all the defined tests.
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();  // Run all the defined Google Test cases.
}