#include <bits/stdc++.h>
using namespace std;
/*
Gven fabourte team
gven number of games already played

from remanng games determne all possble outcomes
from possble outcomes determne number of favourte domnatons

condtons:
all teams can onyl paly each other oncea
\\\\\\\\\\\\\\\

vector checker
    for (int i = 0; i < combinations.size(); i++)
    {
        cout << combinations[i].first << " " << combinations[i].second << endl;
    }


*/

int main()
{
    int favourite, games_played;
    cin >> favourite >> games_played;

    vector<pair<int, int>> combinations = {{1, 2}, {1, 3}, {1, 4}, {2, 3}, {2, 4}, {3, 4}};
    vector<int> points(5, 0);

    for (int i = 0; i < games_played; i++) // go through all inputs
    {
        int A, B, a, b; // A & B = team # and a & b = team point for current game
        cin >> A >> B >> a >> b;

        // below if else will determine the winner and assign points accordingly
        if (a > b)
        {
            points[A] += 3;
        }

        else if (b > a) // b has more points than a?
        {
            points[B] += 1;
        }

        else // oh they have same points
        {
            points[A] += 1;
            points[B] += 1;
        }
        //finds specific locattion of the combo in the combo vector
        auto temp1 = find(combinations.begin(), combinations.end(), make_pair(A, B));
        //removes the combo
        combinations.erase(temp1); 

    }

// section below will deals with remianing combos
/*

for all elements in the comnbiantions vector
each element gets assigned 0
last element increments by one untill hits three
move to next element incrementing untill hits 3
move untill top element hits 3

while (true)
{
    
}

reverse decrement all elements by 1 at a time untill hits back to 0



0 = win, 1 = loss, 2 = tie

size of combinations ^ combinations == all 
possible combinations of point distribution



*/















}


