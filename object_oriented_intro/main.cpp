#include <iostream>

using namespace std;

void fill_array(int *array, int n) {}
struct stat_resut
{
    float mean;
    float max;
};
stat_resut calculate_stats(int *array, int n) {}
int main()
{
    int array[10];
    fill_array(array, 10);
    auto result = calculate_stats(array, 10);
    return 0;
}
