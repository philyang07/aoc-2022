#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    std::string line;
    int curr = 0, biggest = 0, second = 0, third = 0;
    while (getline(cin, line))
    {
        if (line.compare("") == 0)
        {
            if (curr >= biggest)
            {
                third = second;
                second = biggest;
                biggest = curr;
            }
            else if (curr <= biggest && curr >= second)
            {
                third = second;
                second = curr;
            }
            else if (curr <= second && curr >= third)
            {
                third = curr;
            }
            curr = 0;
        }
        else
        {
            curr += stoi(line);
        }
    }
    cout << biggest << "\n";                  // biggest
    cout << biggest + second + third << "\n"; // top 3

    return 0;
}