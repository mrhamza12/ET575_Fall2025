/*
Hamza Imran
Nov 19,2025
lab 19, files and console
*/
#include<iostream>
#include<fstream>
#include "lab19_function_imran.h"
using namespace std;

// example 1: console input failure
// function to check if num values is the proper data type
void checknumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(cin.fail())
        {cout<<"Error! input dismatched data type!"<<endl;
        num = -1;
        }
    else
        {cout<<"Entered number = "<<num<<endl;}

    // clear the cin state
    cin.clear();
    cin.ignore(1000,'\n');

    cout<<"END OF FUNCTION. Return number = "<<num<<endl;
}

// example 2: console input to validate an input datat lype
float validatenumber(){
    float n;
    bool isNotValid = false;

    do{
        cout<<"Enter a number: ";
        cin>>n;
        isNotValid = cin.fail();
        cin.clear();
        cin.ignore(1000,'\n');
    }while(isNotValid);

    return n;
}

// example 3: set object for input and output files
ifstream fin;
ofstream fout;
void readfile(string filename){
    fin.open(filename);

    // variable 'line' is used to store each line of samplefile.txt
    string line;

    // loop through each line in samplefile.txt
    int linecounter = 1;
    while(getline(fin,line)){
        cout<<"Line "<<linecounter<<": "<<line<<endl;
        linecounter++;
    }
    // close file
    fin.close();
}

// examplle 4: writing a file
// fout will write a new existing file, fout overwrite all the content of an existing file
void writefile(string filename){
    ofstream fout;
    fout.open(filename);

    for(int n=1; n<=5; n++){
        fout<<"Good morning "<<n<<endl;
    }
    fout.close();
}
// example 5: append data into  a file
void appendfile(string filename){
    fout.open(filename, ios::app);
    for(int n=3; n>=0; n--){
        fout<<"Good morning "<<n<<endl;
    }
    fout.close();
}


