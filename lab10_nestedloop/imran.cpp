/*
student"s hamza imran
Oct 15, 2025
lab 10,nested loop
*/
#include<iostream>
using namespace std;

int main(){
    cout<<"\n---- Example 1: nested loops ----"<<endl;
    //each run of the outher loop, one complete cycle of an inner loop is run
    int i = 0;
    while(i<3){
        cout<<"OUTER LOOP"<<i;
        int j = 1;
        while(j<=5){
            cout<<"\tinner loop "<<j<<endl;
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<<"\n---- Example 2: cinema seating grib ----"<<endl;
    int user_row;
    int seats;
    cout<<"Enter the number of rows: ";
    cin>> user_row;
    cout<<"Enter the number of seats: ";
    cin>>seats;

    for(int row = i; row<=user_row; row++ ){
        for(int s = 1; s<seats; s++){
            cout<<"Row "<<row<<" Seat "<<s<<"\t";
        }
        cout<<endl;
    }


    cout<<"\n---- Example 3: 2D Graphing ----"<<endl;
    int dimension = 9;
    for(int row = 1; row<=dimension; row++){
        for(int co1 = 1; co1<=dimension; co1++){
            if(co1==5 || row==5)
                cout<<" x ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }

    cout<<"\n---- Example 4: H Graph----"<<endl;
    dimension = 10;
    for(int row = 1; row<=dimension; row++){
        for(int co1 = 1; co1<=dimension; co1++){
            if((4>=co1>= 3 && 8>=row>3 && 8>=row && row>=3 )|| (co1>=5 && co1<=6 &&  row>=5 && row<=6) || (co1>=7 && co1<=8 && row>=3 && row>=8))
                cout<<" % ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }
    cout 

    return 0;

}