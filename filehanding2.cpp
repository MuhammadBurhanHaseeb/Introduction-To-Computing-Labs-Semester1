#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isStar(string row)
{
    int index = 0;
    while (true)
    {
        char ch = row[index];
        if (ch == '\0')
            break;
        if (ch == '*')
            return true;
        index++;
    }

    return false;
}

main()
{

    char spc = ' ';

    fstream file;
    file.open("student_data_comma.txt", ios::in);

    int linenumber = 1;
    bool found = false;
    while (!file.eof())
    {
        string row;
        getline(file, row);
        if (isStar(row))
        {
            cout << " Start found at line " << linenumber;
            found = true;
        }

        linenumber++;
    }

    if (found == false)
    {
        cout << "Start was not found";
    }

    file.close();
}