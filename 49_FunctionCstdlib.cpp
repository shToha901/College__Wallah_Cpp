// CODE FOR: All the standard library function that are available in <sctdlib>

#include <bits/stdc++.h>
using namespace std;
int compare(const void *a, const void *b);

int main()
{
    // String to int and double
    cout << endl;
    cout << "Converting string to integer and double" << endl;

    // 1. atoi
    // Converts a string to an int.
    char intStr[] = "123";
    int intValue = atoi(intStr);
    cout << "atoi(\"123\") = " << intValue << " [Converts a string to an int.]" << endl;

    // 2. atoll
    // Converts a string to a long long.
    char llongStr[] = "1234567890123456789";
    long long llongValue = atoll(llongStr);
    cout << "atoll(\"1234567890123456789\") = " << llongValue << " [Converts a string to a long long.]" << endl;

    // 3. strtod
    // Converts a string to a double.
    char dblStr[] = "123.456";
    double dblVal = strtod(dblStr, nullptr);
    cout << "strtod(\"123.456\") = " << dblVal << " [Converts a string to a double.]" << endl;

    // 4. strtoll
    // Converts a string to a long long.
    char str2[] = "1234567890123456789";
    long long strToLLong = strtoll(str2, nullptr, 10);
    cout << "strtoll(\"1234567890123456789\") = " << strToLLong << " [Converts a string to a long long.]" << endl;

    // Memory allocation
    cout << endl;
    cout << "Function for memory allocation" << endl;

    // 1. calloc
    // Allocates memory for an array of elements, initializes to zero.
    int *p = (int *)calloc(5, sizeof(int));
    cout << "calloc: ";
    for (int i = 0; i < 5; ++i)
    {
        cout << p[i] << " ";
    }
    cout << " [Allocates memory for an array of elements, initializes to zero.]" << endl;
    free(p); // Free allocated memory

    // 2. malloc
    // Allocates memory without initializing.
    int *q = (int *)malloc(5 * sizeof(int));
    cout << "malloc: ";
    for (int i = 0; i < 5; ++i)
    {
        q[i] = i;
        cout << q[i] << " ";
    }
    cout << " [Allocates memory without initializing.]" << endl;
    free(q); // Free allocated memory

    // 3. realloc
    // Reallocates memory, possibly moving it to a new location.
    p = (int *)malloc(2 * sizeof(int));
    p[0] = 1;
    p[1] = 2;
    p = (int *)realloc(p, 4 * sizeof(int));
    p[2] = 3;
    p[3] = 4;
    cout << "realloc: ";
    for (int i = 0; i < 4; ++i)
    {
        cout << p[i] << " ";
    }
    cout << " [Reallocates memory, possibly moving it to a new location.]" << endl;
    free(p); // Free allocated memory

    // Searching and sorting
    cout << endl;
    cout << "Searching and sorting" << endl;

    // 1. qsort
    // Sorts an array using quicksort algorithm.
    int qarr[] = {30, 50, 20, 10, 40};
    cout << "Array: 30, 40, 20, 10, 40 " << endl;
    qsort(qarr, 5, sizeof(int), compare);
    cout << "qsort: ";
    for (int i = 0; i < 5; ++i)
    {
        cout << qarr[i] << " ";
    }
    cout << " [Sorts an array using quicksort algorithm.]" << endl;

    // 2. bsearch
    // Performs a binary search on an array.
    int key = 30;
    int *item = (int *)bsearch(&key, qarr, 5, sizeof(int), compare);
    if (item != nullptr)
    {
        cout << "bsearch: Found " << *item << " [Performs a binary search on an array.]" << endl;
    }
    else
    {
        cout << "bsearch: Not found" << " [Performs a binary search on an array.]" << endl;
    }

    // other
    cout << endl;
    cout << "Others" << endl;

    // 1. div
    // Performs integer division and returns quotient and remainder.
    div_t result = div(38, 5);
    cout << "div(38, 5): quotient = " << result.quot << ", remainder = " << result.rem << " [Performs integer division and returns quotient and remainder.]" << endl;

    // 2. rand and srand
    // Generates random numbers and sets the seed for random number generation.
    srand(time(0)); // Seed the random number generator
    cout << "rand: " << rand() << " [Generates random numbers and sets the seed for random number generation.]" << endl;
    cout << endl;

    return 0;
}

int compare(const void *a, const void *b)
{
    const int *x = (int *)a;
    const int *y = (int *)b;

    if (*x > *y)
        return 1;
    else if (*x < *y)
        return -1;

    return 0;
}