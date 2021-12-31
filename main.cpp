#include <iostream>
#include <vector>

using namespace std;

#define endl '\n'
#define PRINT(stuff) std::cout << stuff << endl
#define PRINT_VEC(stuff)                      \
    for (size_t i = 0; i < stuff.size(); i++) \
    {                                         \
        PRINT(stuff.at(i));                   \
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}