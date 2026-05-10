/* File Name: Chapter_7_Problem_1.cpp
Programmer: Jason Cronenwett
Date: 04/30/2026
Requirements:
1. Read 20 correct answers from CorrectAnswers.txt into a char array
2. Read 20 student answers from StudentAnswers.txt into a second char array
3. Compare the arrays to determine which questions were missed
4. Display each missed question with its correct answer and the student's incorrect answer
5. Display the total number of missed questions
6. Calculate and display the percentage answered correctly (correct ÷ total)
7. Indicate "passed" if percentage ≥ 70%, otherwise "failed"
*/


#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_QUESTIONS = 20;
    char correctAnswers[NUM_QUESTIONS];
    char studentAnswers[NUM_QUESTIONS];

    // Open the correct answers file
    ifstream correctFile("CorrectAnswers.txt");
    if (!correctFile)
    {
        cout << "Error: Could not open CorrectAnswers.txt\n";
        return 1;
    }

    // Open the student answers file
    ifstream studentFile("StudentAnswers.txt");
    if (!studentFile)
    {
        cout << "Error: Could not open StudentAnswers.txt\n";
        return 1;
    }


    for (int i = 0; i < NUM_QUESTIONS; i++)
    {
        correctFile >> correctAnswers[i];
        studentFile >> studentAnswers[i];
    }

    correctFile.close();
    studentFile.close();

   
    int missedCount = 0;

    cout << "Questions missed:\n";
    cout << "-----------------\n";
    cout << "Question  Correct Answer  Student Answer\n";

    for (int i = 0; i < NUM_QUESTIONS; i++)
    {
        if (correctAnswers[i] != studentAnswers[i])
        {
            cout << setw(5) << (i + 1)
                 << setw(13) << correctAnswers[i]
                 << setw(15) << studentAnswers[i] << endl;
            missedCount++;
        }
    }

   
    int correctCount = NUM_QUESTIONS - missedCount;
    double percentage = (static_cast<double>(correctCount) / NUM_QUESTIONS) * 100.0;

   
    cout << "\nTotal questions missed: " << missedCount << endl;
    cout << fixed << setprecision(1);
    cout << "Percentage answered correctly: " << percentage << "%\n";

    if (percentage >= 70.0)
        cout << "The student PASSED the exam.\n";
    else
        cout << "The student FAILED the exam.\n";

    return 0;
}