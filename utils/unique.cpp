#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
vector<T> find_unique_items(vector<T> stuffs)
{
    vector<T> items;
    for (size_t i = 0; i < stuffs.size(); i++)
    {
        if (find(items.begin(), items.end(), stuffs.at(i)) == items.end())
        {
            items.push_back(stuffs.at(i));
        }
    }
    return items;
}