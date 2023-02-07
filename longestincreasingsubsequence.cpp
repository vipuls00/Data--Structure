#include <iostream>
#include <vector>
using namespace std;
int solvelis(int arr[], int size, int current, int prev)
{
    if (current >= size)
    {
        return 0;
    }
    int include =0;
    if (prev == -1 || arr[current] > arr[prev] )
    {
         include = 1 + solvelis(arr, size, current + 1, current);
    }
    int exclude = 0 + solvelis(arr, size, current + 1, prev);
    return max(include, exclude);
}
int main()
{
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60,80};
    int size = sizeof(arr) / sizeof(arr[0]);
    int current = 0;
    int prev = -1;
    // vector <int> dp((size+1),-1);
 

    int ans = solvelis(arr, size, current, prev);
    cout << ans << " " << endl;
    return 0;
}
