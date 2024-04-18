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

    // Find highest and lowest scores
    int highest_score = scores[0];
    int lowest_score = scores[0];
    double total_score = scores[0];
    for (int i = 1; i < num_students; ++i) {
        if (scores[i] > highest_score) {
            highest_score = scores[i];
        }
        if (scores[i] < lowest_score) {
            lowest_score = scores[i];
        }
        total_score += scores[i];
    }

    // Calculate class average
    double average_score = total_score / num_students;

    // Display results
    cout << "\nHighest score: " << highest_score << endl;
    cout << "Lowest score: " << lowest_score << endl;
    cout << "Class average: " << average_score << endl;



    return 0;
}
