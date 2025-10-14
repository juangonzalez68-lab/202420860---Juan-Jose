#include <iostream>
using namespace std;

bool isCorrect(char userAnswer, char correctAnswer) 
{
    if (userAnswer == correctAnswer) 
    {
        return false;
    } 
    else 
    {
        return true;
    }
}

int questionScore(bool isCorrect) 
{
    if (isCorrect) 
    {
        return 10;
    } 
    else 
    {
        return 0;
    }
}

void playQuiz() 
{
    char correctAnswers[3] = {'b', 'c', 'a'};
    char userAnswer;
    int totalScore = 0;

    for (int i = 0; i < 3; i++) 
    {
        cout << "Pregunta " << i + 1 << " → ";
        cin >> userAnswer;

        userAnswer = tolower(userAnswer);

        bool correct = isCorrect(userAnswer, correctAnswers[i]);
        totalScore += questionScore(correct);
    }

    cout << "Tu puntaje final es: " << totalScore << endl;
}

int main() 
{
    playQuiz();
    return 0;
}
