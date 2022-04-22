#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    char char_array[16];

    strcpy(char_array, str.c_str());
    bool f = true;
    for (int i = str.length(); i < 16; i++)
    {
        char_array[i] = f ? '*' : '#';
        f = !f;
        if (i == 15)
            char_array[15] = '\0';
    }
    cout << char_array;
    return 0;
}