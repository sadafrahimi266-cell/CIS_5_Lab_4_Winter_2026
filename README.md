# CIS 5 Lab 4 – Functions & Passing Methods

## Lab Goal
Manage 5 student scores using different parameter passing methods in C++.

## Student Scores
Original scores: `{65, 82, 90, 45, 78}`

## Functions Implemented
1. `totalScore(const int arr[], int size)` – calculates sum of scores (pass by const array).  
2. `averageScore(int sum, int size)` – calculates average (pass by value).  
3. `addExtraPoints(int arr[], int size, int bonus = 5)` – adds bonus points (pass by reference).  
4. `topScore(const int* arr, int size)` – finds the highest score (pass by pointer).  
5. `passedCount(const int arr[], int size)` – counts students with scores ≥70 (pass by const array).  

## Main Program
- Shows original scores  
- Calculates sum and average  
- Adds bonus points and displays updated scores  
- Finds highest score  
- Counts number of students who passed

## Key Notes
- Pass by value does **not** change the original array.  
- Pass by reference/pointer **modifies** the array.  
- Using `const` prevents accidental changes when only reading values.

## Lab 4 Video Walkthrough
video2226981647
Video link
https://youtu.be/VSr2wpRWhlk

