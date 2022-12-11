#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

void print_stacks(vector<vector<char>> vec)
{

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j];
        }
        cout << "\n";
    }
}

void parse_stacks(vector<vector<char>> &stack)
{
    std::string line;
    while (getline(cin, line))
    {
        if (line[1] == '1')
        {
            getline(cin, line);
            break;
        }
        for (int i = 0; 1 + 4 * i < line.size(); i++)
        {
            if (stack.size() <= i)

                stack.push_back(vector<char>());

            if (line[1 + 4 * i] != ' ')
                stack[i].insert(stack[i].begin(), line[1 + 4 * i]);
        }
    }
}

void part_a()
{
    vector<vector<char>> stack;
    parse_stacks(stack);
    std::string line;
    int n, o, d; // num, origin, destination
    while (getline(cin, line))
    {
        if (line.size() == 18)
        {
            n = line[5] - 48;
            o = line[12] - 49;
            d = line[17] - 49;
        }
        else
        {
            n = stoi(line.substr(5, 2));
            o = line[13] - 49;
            d = line[18] - 49;
        }

        for (int i = 0; i < n; i++)
        {
            stack[d].push_back(stack[o].back());
            stack[o].pop_back();
        }
    }
    for (int i = 0; i < stack.size(); i++)
    {
        cout << stack[i].back();
    }
    cout << endl;
}

void part_b()
{
    vector<vector<char>> stack;
    parse_stacks(stack);
    std::string line;
    int n, o, d; // num, origin, destination
    while (getline(cin, line))
    {
        if (line.size() == 18)
        {
            n = line[5] - 48;
            o = line[12] - 49;
            d = line[17] - 49;
        }
        else
        {
            n = stoi(line.substr(5, 2));
            o = line[13] - 49;
            d = line[18] - 49;
        }

        for (int i = 0; i < n; i++)
        {
            stack[d].insert(stack[d].end() - i, stack[o].back());
            stack[o].pop_back();
        }
    }
    for (int i = 0; i < stack.size(); i++)
    {
        cout << stack[i].back();
    }
    cout << endl;
}

int main()
{
    part_b();
    return 0;
}