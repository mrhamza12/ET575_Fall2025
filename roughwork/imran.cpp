#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1416;

int number;
cout<<" Enter a number between 1 and 100: "<<endl;
cin>>number;
while(number < 1 || number > 1000) {
    cout<<" Input invalid: Please enter another number: "<<endl;
    cin>>number;
}
return number;

double volumehemisphere(int r){
    double volume = (2.0/3.0) * PI * pow(r, 3);
    return volume;
}

void promptresult(){
    int radius = number();
    double volume = volumehemisphere(radius);
    cout<<" The volume of hemisphere with radius "<<radius<<" is " <<volume<<endl;
}
int main() {
    promptresult();
    return 0;
}






