#include <string>
#include <vector>
#include <sstream>

using namespace std;

void split_str(std::string const &str, const char delim,
               std::vector<std::string> &out)
{
    // create a stream from the string
    stringstream s(str);

    std::string s2;
    while (getline(s, s2, delim))
    {
        out.push_back(s2); // store the string in s2
    }
}

vector<int> str_to_int_vec(string &str)
{
    vector<char> temp(str.begin(), str.end());
    vector<int> result;
    for (char x : temp)
    {
        result.push_back(x - '0');
    }
    return result;
}

bool str_has(string &str, char x)
{
    if (find(str.begin(), str.end(), x) != str.end())
    {
        return true;
    }
    return false;
}

void str_to_lower(string &str)
{
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c)
              { return tolower(c); });
}

string str_get_unique_chars(string &str)
{
    string res;
    for (size_t i = 0; i < str.size(); i++)
    {
        char x = str.at(i);
        if (res.size() == 0 || !str_has(res, x))
        {
            res.append(string(1, x));
        }
    }
    return res;
}

std::vector<std::string> str_split_by_len(const std::string &str, int splitLength)
{
    int NumSubstrings = str.length() / splitLength;
    std::vector<std::string> ret;

    for (auto i = 0; i < NumSubstrings; i++)
    {
        ret.push_back(str.substr(i * splitLength, splitLength));
    }

    // If there are leftover characters, create a shorter item at the end.
    if (str.length() % splitLength != 0)
    {
        ret.push_back(str.substr(splitLength * NumSubstrings));
    }

    return ret;
}

string vec_to_str_with_space_between(vector<string> str)
{
    string ans;
    bool first_one = true;
    for (string x : str)
    {
        if (!first_one)
            ans += " ";
        ans += x;
        first_one = false;
    }
    return ans;
}