// Grading a Multi-Choice Test
// Automatically grade multiple-choice test answers for multiple students using 2D arrays

#include <iostream>
using namespace std;

int main() {
    int numStudents, numQuestions;

    cout << "Enter number of questions: ";
    cin >> numQuestions;

    // Answer key
    char key[numQuestions];
    cout << "Enter answer key (e.g., A B C D):" << endl;
    for (int i = 0; i < numQuestions; i++) {
        cin >> key[i];
    }

    cout << "\nEnter number of students: ";
    cin >> numStudents;

    // Student answers (each row is one student, each column is a question)
    char answers[numStudents][numQuestions];

    // Taking student answers
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter answers for Student " << (i + 1) << ": ";
        for (int j = 0; j < numQuestions; j++) {
            cin >> answers[i][j];
        }
    }

    // Grading each student
    cout << "\n=== Grading Results ===" << endl;
    for (int i = 0; i < numStudents; i++) {
        int score = 0;

        // Compare student answers with key
        for (int j = 0; j < numQuestions; j++) {
            if (answers[i][j] == key[j]) {
                score++;
            }
        }

        cout << "Student " << (i + 1) << ": " << score << "/" << numQuestions;
        cout << " (" << (score * 100.0 / numQuestions) << "%)" << endl;
    }

    return 0;
}
