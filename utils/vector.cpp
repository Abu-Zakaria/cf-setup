template <typename T>
bool vector_has(vector<T> vec, T el)
{
    if (find(vec.begin(), vec.end(), el) != vec.end())
    {
        return true;
    }
    return false;
}

template <typename T>
int vector_how_many_times(vector<T> vec, T el)
{
    int freq = 0;
    for (T x : vec)
    {
        if (x == el)
        {
            freq++;
        }
    }
    return freq;
}

int vec_get_sum(vecint numbers)
{
    int sum = 0;
    FOR(i, numbers.size())
    {
        sum += numbers.at(i);
    }
    return sum;
}