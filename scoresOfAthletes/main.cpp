/*
2. У двовимірному масиві зберігається інформація про бали, отримані спортсменами-п'ятиборцями у
кожному з п'яти видів спорту (у першому рядку – інформація про бали першого спортсмена, у другому – другого тощо).
Загальна кількість спортсменів дорівнює 20. Визначити загальну суму балів, набраних третім спортсменом
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int SIZE = 5;

    int SumOfBul = 0;

    int sportsmen = 3;


    vector<vector<int>> scoresOfAthletes = {
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5},
    };

    for (int i = 0; i < SIZE; i++) {
        SumOfBul += scoresOfAthletes[sportsmen][i];
    }

    cout << SumOfBul << endl;
    return 0;
}