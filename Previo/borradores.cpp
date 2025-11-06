#include <iostream>
using namespace std;

// Función que cuenta las palabras de una frase
int countWords(string phrase) {
int count = 0;
bool inWord = false;

for (int i = 0; i < phrase.length(); i++) {
if (phrase[i] != ' ' && !inWord) {
inWord = true;
count++;
} else if (phrase[i] == ' ') {
inWord = false;
}
}
return count;
}

// Función que encuentra la palabra más larga
string findLongestWord(string phrase) {
string longest = "", current = "";

for (int i = 0; i < phrase.length(); i++) {
if (phrase[i] != ' ') {
current += phrase[i];
} else if (current != "") {
if (current.length() > longest.length()) {
longest = current;
}
current = "";
}
}

// Verifica última palabra
if (current.length() > longest.length()) {
longest = current;
}

return longest;
}

// Función principal que coordina todo
void showWordData() {
string phrase;

cout << "Ingrese una frase: ";
getline(cin, phrase);

int totalWords = countWords(phrase);
string longest = findLongestWord(phrase);

cout << "\nCantidad de palabras: " << totalWords << endl;
cout << "Palabra más larga: " << longest << endl;
}

int main() {
showWordData();
return 0;
}
