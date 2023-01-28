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
    const int SIZE = 5;
    int SumOfBul = 0;
    int athleteIndex;

    vector<vector<int>> scoresOfAthletes = {
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
         {1,2,3,4,5},
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