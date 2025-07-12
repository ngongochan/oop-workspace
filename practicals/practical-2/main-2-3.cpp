#include <iostream>

extern bool is_palindrome(int [], int);
extern int sum_array_elements(int [], int);
extern int sum_if_palindrome(int [], int);

int main() {
    int array[6] = {1,2,3,3,2,1};
    cout << is_palindrome(array, 6) << endl;
    cout << sum_array_elements(array, 6) << endl;
    cout << sum_if_palindrome(array, 6) << endl;
}