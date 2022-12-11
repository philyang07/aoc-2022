#include <iostream>
#include <string.h>

using namespace std;

bool all_diff(string line, int ind)
{
    return line[ind] != line[ind + 1] && line[ind] != line[ind + 2] && line[ind] != line[ind + 3] && line[ind + 1] != line[ind + 2] && line[ind + 1] != line[ind + 3] && line[ind + 2] != line[ind + 3];
}

int main()
{
    std::string line;
    getline(cin, line);

    for (int i = 0; i < line.size() - 3; i++)
    {
        if (all_diff(line, i))
        {
            cout << i + 4 << endl;
            break;
        }
    }

    return 0;
}