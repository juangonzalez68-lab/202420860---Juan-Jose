#include <iostream>
using namespace std;


bool isCorrect(char userAnswer, char correctAnswer) {
    return userAnswer == correctAnswer;
}

int questionScore(bool correct) {
    return correct ? 10 : 0;
}


void playQuiz() {
    char userAnswer;
    int totalScore = 0;

   
    cout << "Pregunta 1: " << endl;
    cout << "a)   b)   c) " << endl;
    cout << "Tu respuesta: ";
    cin >> userAnswer;
    totalScore += questionScore(isCorrect(userAnswer, 'b'));


    cout << "Pregunta 2: " << endl;
    cout << "a)   b)   c) " << endl;
    cout << "Tu respuesta: ";
    cin >> userAnswer;
    totalScore += questionScore(isCorrect(userAnswer, 'c'));


    cout << "Pregunta 3: " << endl;
    cout << "a)  b)   c) " << endl;
    cout << "Tu respuesta: ";
    cin >> userAnswer;
    totalScore += questionScore(isCorrect(userAnswer, 'a'));

    cout << "Puntaje final: " << totalScore << endl;
}

int main() {
    playQuiz();
    return 0;
}
