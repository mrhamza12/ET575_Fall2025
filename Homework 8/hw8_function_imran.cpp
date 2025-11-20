/*
Hamza Imran
Nov 20 2025
Functions for Homework 8 (2D search)
*/
#include <iostream>
using namespace std;


void search_value(int ar[][4], int target, int pos[]){
    bool found = false;
    for(int r = 0; r < 4; r++){
        for(int c = 0; c < 4; c++){
            if(ar[r][c] == target){
                pos[0] = r;
                pos[1] = c;
                found = true;
                return;          
            }
        }
    }
    if(!found){
        pos[0] = -1;
        pos[1] = -1;
    }
}

// print result exactly as specified
void display_message(int target, int pos[]){
    if(pos[0] != -1){
        cout << "Number " << target
             << " was found in row " << pos[0]
             << " and column " << pos[1] << endl;
    }
    else{
        cout << "Number " << target << " was not found" << endl;
    }
}