#include <iostream>
using namespace std;

extern int array_min(int [], int);
extern int array_max(int [], int);
extern int sum_min_max(int [], int);

int main() {
    int array[4] = {0,1,2,-1};
    int min = array_min(array, 4);
    int max = array_max(array, 4);
    int sum = sum_min_max(array, 4);
    cout << min << " " << max << " " << sum;
}