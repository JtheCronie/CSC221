/* File Name: Chapter_7_Problem_1.cpp
Programmer: Jason Cronenwett
Date: 05/1/2026
Requirements:
1. Read Text.file
2. Prompt user to enter name of a team
3. Display number of times the selected team appears
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


void stripCarriageReturn(string &s)
{
    if (!s.empty() && s.back() == '\r')
        s.pop_back();
}

int main()
{
    vector<string> teams;
    vector<string> winners;
    string line;

    // Read the list of teams
    ifstream teamsFile("Teams.txt");
    if (!teamsFile)
    {
        cout << "Error: Could not open Teams.txt\n";
        return 1;
    }

    while (getline(teamsFile, line))
    {
        stripCarriageReturn(line);
        if (!line.empty())
            teams.push_back(line);
    }
    teamsFile.close();


    ifstream winnersFile("WorldSeriesWinners.txt");
    if (!winnersFile)
    {
        cout << "Error: Could not open WorldSeriesWinners.txt\n";
        return 1;
    }

    while (getline(winnersFile, line))
    {
        stripCarriageReturn(line);
        if (!line.empty())
            winners.push_back(line);
    }
    winnersFile.close();

  
    cout << "Major League Baseball Teams:\n";
    cout << "----------------------------\n";
    for (size_t i = 0; i < teams.size(); i++)
        cout << teams[i] << endl;


    cout << "\nEnter the name of a team: ";
    string selectedTeam;
    getline(cin, selectedTeam);

  
    int winCount = 0;
    for (size_t i = 0; i < winners.size(); i++)
    {
        if (winners[i] == selectedTeam)
            winCount++;
    }


    cout << "\nThe " << selectedTeam
         << " won the World Series " << winCount
         << " time(s) between 1903 and 2012.\n";

    return 0;
}