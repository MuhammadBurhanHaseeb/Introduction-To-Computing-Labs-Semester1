#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string parse(string row, int column)
{

    int commansCount = 1;
    string item;
    int index = 0;
    while (true)
    {

        char ch = row[index];
        if (ch == '\0')
            return item;
        if (ch == ',')
        {
            commansCount++;
        }
        else if (commansCount == column)
        {
            item = item + ch;
        }
        index++;
    }

    return item;
}

main()
{

    fstream file;
    file.open("student_data_comma.txt", ios::in);

    int sum = 0;
    int count = 0;
    while (!file.eof())
    {
        string row;
        getline(file, row);

        string name = parse(row, 1);
        string age = parse(row, 2);
        string marks = parse(row, 3);

        int mymarks = stoi(marks);
        int myage = stoi(age);
        sum = sum + mymarks;
        count++;
    }

    int avg = sum / count;
    cout << "Makrks Avarage " << avg;
}