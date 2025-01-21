#include <iostream>
#include <string> // includes all standard libraries
#include <cassert>
using namespace std; 

//1. Given a string that represents a base X number, convert it to equivalent string in base Y,
//2 ≤ X, Y ≤ 36. For example: “FF” in base X = 16 (Hexadecimal) is “255” in base Y1 = 10

string baseXtoBaseY(const string& s, int baseX, int baseY){
    int decimalValue = stoi(s, nullptr, baseX);
    string baseYValue;

    while (decimalValue > 0){
        //This string contains all possible digits for bases up to 36. The expression inside the brackets ([...]) uses the remainder calculated in step 1 as an index to get the corresponding character for that digit. For example, if the remainder is 10, it will get the character 'A'.
         baseYValue = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[decimalValue % baseY] + baseYValue;
         decimalValue /= baseY;
    }

    return baseYValue.empty() ?  "0" : baseYValue;
}


void testBaseXtoBaseY() {
    // Test case 1: Hexadecimal to Decimal
    assert(baseXtoBaseY("FF", 16, 10) == "255");

    // Test case 2: Binary to Decimal
    assert(baseXtoBaseY("1010", 2, 10) == "10");

    // Test case 3: Decimal to Binary
    assert(baseXtoBaseY("10", 10, 2) == "1010");

    // Test case 4: Decimal to Hexadecimal
    assert(baseXtoBaseY("255", 10, 16) == "FF");

    // Test case 5: Base 36 to Decimal
    assert(baseXtoBaseY("Z", 36, 10) == "35");

    // Test case 6: Decimal to Base 36
    assert(baseXtoBaseY("35", 10, 36) == "Z");

    cout << "All test cases passed!" << endl;
}


int main() {
    testBaseXtoBaseY();
    return 0;
}