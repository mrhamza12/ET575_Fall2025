/*
Student's full name 
Aug 27, 2025 
Lab 1, 
/*
#include <iostream>
using namespace std;

int main() 
{
    cout << "------Example 1----"<<endl;
    cout<<"Machine"<<endl;
    // variables + temporary strorage of data
    // deleare the variable first
    string username = "peterpan123";
    cout<<"Welcome to class"<<username<<endl;
    
    cout << "------Example 2: cin data----"<<endl;
    cout<<"Enter a new username"<<endl;
    cin >> username;
    cout<<"New user has is "<<username<<endl;

    cout <<"----- Example 3: deta type -----"<<endl;
    // declear variable
    char sym = '%' ;
    float distance = 5.63;
    int number = 8.2;

    cout<<"Given symbol = "<<sym<<endl;
    cout<<"Given distance ="<<distance<<endl;
    cout<<"Given number ="<<number<<endl;
    
    cout<< "-------Exercise----"<<end;

    //declare variable
    // collect data
    // print the result

    return 0;
}


//Homework

//declare variable
    string country;
    char gender;
    int zipcode;
    double rate;

    // Collect data - using cin >>
    cout << "Please enter a country: ";
    cin >> country;
    
    cout << "Please enter gender (f for female, m for male, o for others): ";
    cin >> gender;
    
    cout << "Please enter a zip code: ";
    cin >> zipcode;
    
    cout << "Please enter a tax rate (with decimal places): ";
    cin >> rate;
    
   // print the result
    cout << "\n------Results------" << endl;
    cout << "Entered country:\t" << country << endl;
    cout << "Selected gender:\t" << gender << endl;
    cout << "Zip code:\t\t" << zipcode << endl;
    cout << "Tax rate:\t\t" << rate << endl;

    return 0;
}
