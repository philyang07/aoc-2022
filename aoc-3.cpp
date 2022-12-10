#include <iostream>
#include <string.h>

using namespace std;

int get_index(char c)
{
    return c < 97 ? c - 65 + 26 : c - 97;
}

void part_a()
{
    std::string line;
    int total = 0;
    while (getline(cin, line))
    {
        int table[52] = {};
        for (int i = 0; i < line.size() / 2; i++)
            table[get_index(line[i])] = 1;

        for (int i = line.size() / 2; i < line.size(); i++)
            if (table[get_index(line[i])] == 1)
            {
                total += get_index(line[i]) + 1;
                break;
            }
    }
    cout << total << '\n';
}

void part_b()
{
    std::string line;
    int total = 0, curr = 0, ind;
    int table[52] = {};
    while (getline(cin, line))
    {
        for (int i = 0; i < line.size(); i++)
        {
            ind = get_index(line[i]);
            if (curr % 3 == 0)
            {
                table[ind] = 1;
            }
            else if (curr % 3 == 1 && table[ind] == 1)
            {
                table[ind] = 2;
            }
            else if (curr % 3 == 2 && table[ind] == 2)
            {
                total += ind + 1;
                fill(table, table + 52, 0);
                break;
            }
        }
        curr++;
    }
    cout << total << '\n';
}

int main()
{
    part_b();
    return 0;
}