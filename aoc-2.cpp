#include <iostream>
#include <string.h>

using namespace std;

void part_a()
{
    std::string line;
    char you, opp;
    int total = 0;
    while (getline(cin, line))
    {
        opp = line[0] - 64;
        you = line[2] - 87;
        if (you - opp == 1 || you - opp == -2)
            total += 6;
        if (you == opp)
            total += 3;
        total += you;
    }
    cout << total << "\n";
}

int fix(int n)
{
    return (n % 3 == 0 ? 3 : n % 3);
}

void part_b()
{
    std::string line;
    char opp, out;
    int total = 0;
    while (getline(cin, line))
    {
        opp = line[0] - 64;
        out = line[2];
        if (out == 'X')
            total += fix(opp - 1);
        if (out == 'Y')
            total += opp + 3;
        if (out == 'Z')
            total += fix(opp + 1) + 6;
    }
    cout << total << "\n";
}

int main()
{
    part_b();
    return 0;
}