//sending to github
#include <iostream>

using namespace std;

const int MAX_STUDENTS = 20;

int main() {
    int num_students;

    // Ask for the number of students in the class section
    do {
        cout << "Enter the number of students in the class section (max 20): ";
        cin >> num_students;
    } while (num_students <= 0 || num_students > MAX_STUDENTS);

    // Array to store exam scores
    int scores[MAX_STUDENTS];

    // Prompt user for each student's exam score
    cout << "Enter exam scores for each student:" << endl;
    for (int i = 0; i < num_students; ++i) {                                 // just testing first few c out and c ins.
        cout << "Enter score for student #" << (i + 1) << ": ";
        cin >> scores[i];
    }



    return 0;
}
