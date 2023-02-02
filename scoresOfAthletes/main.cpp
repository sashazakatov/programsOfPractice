/*
    У двовимірному масиві зберігається інформація про бали, отримані спортсменами-п'ятиборцями у
    кожному з п'яти видів спорту (у першому рядку – інформація про бали першого спортсмена, у другому – другого тощо).
    Загальна кількість спортсменів дорівнює 20. Визначити загальну суму балів, набраних третім спортсменом
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int SumOfBul = 0;
    int athleteIndex;

    vector<vector<int>> scoresOfAthletes = {
         { 10, 15, 20, 5, 10 },
         { 20, 20, 5, 5, 10 },
         { 20, 20, 20, 5, 10 },
         { 5, 5, 14, 15, 4 },
         { 3, 9, 10, 20, 18 },
         { 20, 11, 14, 6, 7 },
         { 15, 3, 2, 10, 20 },
         { 1, 10, 15, 20, 13 },
         { 2, 10, 20, 15, 13 },
         { 4, 10, 15, 20, 16 },
         { 15, 20, 15, 10, 5 },
         { 1, 10, 15, 20, 5 },
         { 10, 20, 13, 14, 15 },
         { 1, 13, 15, 20, 13 },
         { 10, 20, 17, 20, 3 },
         { 20, 12, 10, 13, 5 },
         { 14, 20, 13, 14, 15 },
         { 15, 20, 16, 4, 20 },
         { 10, 20, 13, 14, 5 },
    };


    cout << "Enter athlete Index: ";
    cin >> athleteIndex;

    if (athleteIndex > scoresOfAthletes.size() || athleteIndex < 0) 
    { 
        cout << "there is no athlete with this index" << endl; 
        return 0;
    }

    for (int i = 0; i < scoresOfAthletes[athleteIndex].size(); i++) {
        SumOfBul += scoresOfAthletes[athleteIndex][i];
    }

    cout << "The total number of points of " << athleteIndex << " of his athletes: " << SumOfBul << endl;

    system("PAUSE");

    return 0;
}