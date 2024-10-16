#include <iostream.h>
#include <conio.h>
#include <ctype.h>  // for toupper()

void askQuestion(char question[], char option1[], char option2[], char option3[], char option4[], char correctAnswer, int &score) {
    char userAnswer;

    cout << question << endl;
    cout << "A. " << option1 << endl;
    cout << "B. " << option2 << endl;
    cout << "C. " << option3 << endl;
    cout << "D. " << option4 << endl;
    cout << "Your answer (A/B/C/D): ";
    userAnswer = toupper(getch());  // Using getch() to capture input without needing Enter
    cout << userAnswer << endl;  // Display the entered choice

    if (userAnswer == correctAnswer) {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is " << correctAnswer << ".\n\n";
    }
}

int main() {
    clrscr();  // Clear screen for Turbo C++

    int score = 0;

    // Question 1
    char q1[] = "What is the time complexity of binary search?";
    askQuestion(q1, "O(log n)", "O(n)", "O(n^2)", "O(1)", 'A', score);

    // Question 2
    char q2[] = "Which data structure uses the Last-In-First-Out (LIFO) principle?";
    askQuestion(q2, "Queue", "Array", "Stack", "Linked List", 'C', score);

    // Question 3
    char q3[] = "Which programming language is used for Android app development?";
    askQuestion(q3, "Python", "C++", "Java", "Kotlin", 'D', score);

    // Question 4
    char q4[] = "What is the output of 2 + 2 * 2 in C++?";
    askQuestion(q4, "8", "6", "4", "10", 'B', score);

    // Final score
    cout << "You got " << score << " out of 4 correct." << endl;

    if (score == 4) {
        cout << "Excellent! You got all the answers right!\n";
    } else if (score >= 2) {
        cout << "Good job! You passed the quiz.\n";
    } else {
        cout << "Better luck next time!\n";
    }

    getch();  // Wait for user input before closing the program
    return 0;
}
