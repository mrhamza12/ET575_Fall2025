/*
Hamza Imran
Nov 27, 2025
Homework 10, file streaming
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// global file stream objects
ifstream fin;
ofstream fout;


// Example 1: Function to read and print contents of a file

void readFile(string filename){
    fin.open(filename);

    if(!fin.is_open()){
        cout << "Error! Could not open file." << endl;
        return;
    }

    string line;
    int linecounter = 1;

    while(getline(fin, line)){
        cout << "Line " << linecounter << ": " << line << endl;
        linecounter++;
    }

    fin.close();
}


// Example 2: Count number of words and write to wordcounts.txt

void countWords(string filename){
    fin.open(filename);

    if(!fin.is_open()){
        cout << "Error! File not found." << endl;
        return;
    }

    string word;
    int wordCount = 0;

    while(fin >> word){
        wordCount++;
    }

    fin.close();

    // Write results into wordcounts.txt
    fout.open("wordcounts.txt");

    fout << "Hamza Imran\n";
    fout << "Total number of words: " << wordCount << endl;

    fout.close();
}

// Example 3: Count number of times "Earth" appears in file
// Append results to wordcounts.txt
void countEarth(string filename){
    fin.open(filename);

    if(!fin.is_open()){
        cout << "Error! File not found." << endl;
        return;
    }

    string word;
    int count = 0;

    while(fin >> word){
        if(word == "Earth" || word == "Earth,")
            count++;
    }

    fin.close();

    // Append results to wordcounts.txt
    fout.open("wordcounts.txt", ios::app);

    fout << "The word 'Earth' appears " << count << " times in the document." << endl;

    fout.close();
}