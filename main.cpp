#include <iostream>  
using namespace std;

int totalScore(const int arr[], int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += arr[i];
    }
    return sum;
}

double averageScore(int sum, int count) {
    return static_cast<double>(sum) / count;
}

void addExtraPoints(int arr[], int count, int bonus = 5) {
    for (int i = 0; i < count; i++) {
        arr[i] += bonus;
    }
}

int topScore(const int* arr, int count) {
    int highest = arr[0];
    for (int i = 1; i < count; i++) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
    }
    return highest;
}

int passedCount(const int arr[], int count) {
    int passed = 0;
    for (int i = 0; i < count; i++) {
        if (arr[i] >= 70) {
            passed++;
        }
    }
    return passed;
}

int main() {
    int scoresList[5] = {65, 82, 90, 45, 78};
    int numOfStudents = 5;

    cout << "Original Scores: ";
    for (int index = 0; index < numOfStudents; index++) {
        cout << scoresList[index] << "  ";
    }
    cout << endl;

    int total = totalScore(scoresList, numOfStudents);
    double avg = averageScore(total, numOfStudents);
    cout << "Sum: " << total << "  Average: " << avg << endl;

    addExtraPoints(scoresList, numOfStudents);
    cout << "Scores after bonus: ";
    for (int index = 0; index < numOfStudents; index++) {
        cout << scoresList[index] << "  ";
    }
    cout << endl;

    cout << "Highest score: " << topScore(scoresList, numOfStudents) << endl;
    cout << "Number of students passed: " << passedCount(scoresList, numOfStudents) << endl;

    return 0;
}
