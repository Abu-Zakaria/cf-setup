#include <vector>

using namespace std;

vector<long long int> get_n_numbers_from_1(long long int n)
{
    vector<long long int> result;
    for (size_t i = 1; i <= n; i++)
    {
        result.push_back(i);
    }
    return result;
}