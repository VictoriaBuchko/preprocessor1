#include <iostream>
#include <cstdlib>
#define INTEGER 
//#define DOUBLE 
//#define CHAR 
#include "preprocesor.h"

using namespace std;

int main() {
    const int size = 10;

#ifdef INTEGER
    int intArray[size];
    RANDOM_ARRAY(intArray, size);
    cout << "Integer array: ";
    SHOW_ARRAY(intArray, size);

    int minInt = FIND_MIN(intArray, size);
    int maxInt = FIND_MAX(intArray, size);
    cout << "Minimum: " << minInt << endl;
    cout << "Maximum: " << maxInt << endl;

    EDIT_ARRAY(intArray, size, 2, 100);
    cout << "Edited integer array: ";
    SHOW_ARRAY(intArray, size);

    SORT_ARRAY(intArray, size);
    cout << "Sorted integer array: ";
    SHOW_ARRAY(intArray, size);
#endif


#ifdef DOUBLE

    double doubleArray[size];
    RANDOM_ARRAY(doubleArray, size);
    cout << "Double array: ";
    SHOW_ARRAY(doubleArray, size);

    double minDouble = FIND_MIN(doubleArray, size);
    double maxDouble = FIND_MAX(doubleArray, size);
    cout << "Minimum: " << minDouble << endl;
    cout << "Maximum: " << maxDouble << endl;

    EDIT_ARRAY(doubleArray, size, 2, 10.5);
    cout << "Edited double array: ";
    SHOW_ARRAY(doubleArray, size);

    SORT_ARRAY(doubleArray, size);
    cout << "Sorted double array: ";
    SHOW_ARRAY(doubleArray, size);
#endif

#ifdef CHAR

    char charArray[size];
    RANDOM_ARR(charArray, size);
    cout << "Char array: ";
    SHOW_ARR(charArray, size);

    char minChar = FIND_MINCHAR(charArray, size);
    char maxChar = FIND_MAXCHAR(charArray, size);
    cout << "Minimum: " << minChar << endl;
    cout << "Maximum: " << maxChar << endl;

    EDIT_ARR(charArray, size, 2, 'Z');
    cout << "Edited char array: ";
    SHOW_ARR(charArray, size);

    SORT_ARR(charArray, size);
    cout << "Sorted char array: ";
    SHOW_ARR(charArray, size);

#endif

    return 0;
}
