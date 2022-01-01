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
