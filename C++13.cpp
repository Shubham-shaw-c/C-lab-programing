//Write a program in c++ to calculate simple interest where the rate of interest has a default value of 15%
#include<iostream>
using namespace std;
float calculateSimpleInterest(float principal, float time, float rate = 15.0) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, time, interest;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the time (in years): ";
    cin >> time;
    interest = calculateSimpleInterest(principal, time);
    cout << "The Simple Interest is: " << interest << endl;

}