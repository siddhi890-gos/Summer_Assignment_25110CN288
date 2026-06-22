#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int count = 1;

    cout << "Enter a statement: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
            count++;
    }

    cout << "Number of words = " << count;

    return 0;
}