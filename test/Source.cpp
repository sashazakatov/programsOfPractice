/*1. Написати програму, яка зчитує текст із файлу і виводить лише слова, що починаються з великих літер.*/


#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

struct Worker_s
{
    string Surname_of_the_worker;
    string type_of_position;
    string took_office;
};

int main()
{
    ifstream in("text.txt");

    if (!in.is_open()) return -1;

    vector<string> lines;

    while (!in.eof())
    {
    string value = "";
    getline(in, value);
    lines.push_back(value);
    }
    for (auto line : lines) 
    {
        char firstSymbol = line[0];
    if (!firstSymbol == isupper(firstSymbol)) continue;
        cout << line << endl;
    }
    return 0;
}