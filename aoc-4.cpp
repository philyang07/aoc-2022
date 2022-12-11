#include <iostream>
#include <string.h>

using namespace std;

void part_a()
{
    std::string line;
    int fs, fe, ss, se, n = 0, i, l; // first start, first end, second start, second end
    while (getline(cin, line))
    {
        i = 0;
        // parse in numbers
        for (l = 0; line[l] != '-'; l++)
            continue;
        fs = stoi(line.substr(i, l));
        // cout << fs;
        i += l + 1;
        for (l = 0; line[l + i] != ','; l++)
            continue;
        fe = stoi(line.substr(i, l));
        i += l + 1;
        for (l = 0; line[l + i] != '-'; l++)
            continue;
        ss = stoi(line.substr(i, l));
        se = stoi(line.substr(i + l + 1));

        if ((fs >= ss && fe <= se) || (ss >= fs && se <= fe))
            n++;
    }
    cout << n << "\n";
}

void part_b()
{
    std::string line;
    int fs, fe, ss, se, n = 0, i, l; // first start, first end, second start, second end
    while (getline(cin, line))
    {
        i = 0;
        // parse in numbers
        for (l = 0; line[l] != '-'; l++)
            continue;
        fs = stoi(line.substr(i, l));
        i += l + 1;
        for (l = 0; line[l + i] != ','; l++)
            continue;
        fe = stoi(line.substr(i, l));
        i += l + 1;
        for (l = 0; line[l + i] != '-'; l++)
            continue;
        ss = stoi(line.substr(i, l));
        se = stoi(line.substr(i + l + 1));

        if ((fs >= ss && fs <= se) || (fe >= ss && fe <= se) || (ss >= fs && ss <= fe) || (se >= fs && se <= fe))
            n++;
    }
    cout << n << "\n";
}

int main()
{
    part_b();
    return 0;
}