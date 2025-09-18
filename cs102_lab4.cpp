#include <iostream>
#include <cmath>
using namespace std;

int main() {

            int o;
            cin >> o;
            if (o >= 0){cout << "positive";}
            else {cout << "negative";}

            //Problem2

            int as;
            cin >> as;
            if (as >= 0 & as%2==0){cout << "The number is positive and even";}
            if (as >=0 & as%2==1){cout << "The number is positive and odd";}
            if (as <0 & as%2==0){cout << "The number is negative and even";}
            if (as <0 & as%2==1){cout << "The number is negative and odd";}

            //Problem3

            int a, b, c;
            cin >> a >> b >> c;
            if (a >b & a>c){cout << a << " is the largest";}
            if (b >c & b>a){cout << b << " is the largest";}
            if (c >a & c>b){cout << c << " is the largest";}

            //Problem4

            int q, w;
            cin >> q >> w;
            if (q%w==0){cout << q << " is divisible by " << w;}
            else {cout << q << " is not divisible by " << w;}

            //Problem5
            int year;
            cin >> year;
            if (year%400==0){cout << year << " is a leap year";}
            else { cout << year << " is not a leap year";}

            //Problem6
            double x4, x5, x3;
            cin >> x4 >> x5 >> x3;
            double D=x5*x5-4*x3*x4;
            cout << "x1 is equal to " << (-x5+sqrt(D))/(2*x4)<<endl;
            cout << "x2 is equal to " << (-x5-sqrt(D))/(2*x4)<<endl;

            //Problem7
            int ygl1, ygl2, ygl3;
            cin >> ygl1 >> ygl2 >> ygl3;
            if (ygl1+ygl2>ygl3 & ygl1+ygl3>ygl2 & ygl2+ygl3>ygl1){cout << "The triangle is valid";}
            else {cout << "The triangle is not valid";}

            //Problem8

            char character;
            cin >> character;
            if ( character>= 'a' && character<= 'z' )
            {cout << "Lowercase alphabet"<< endl;}
            else if (character>= 'A' && character<= 'Z')
                {cout << "Uppercase alphabet"<< endl;}
            else {cout << "It is not an alphabet"<< endl;}

        //Problem9
        int soh;
        cin >> soh;
        if (soh<20){cout << "too slow" << endl;}
        if (soh>80){cout << "too fast" << endl;}
        else {cout << "just right" << endl;
    }


        //Problem10
        int xp, yp;
        cin >> xp >> yp;
        if (sqrt((xp*xp)+(yp*yp)) < 10) {cout << " The point is inside the circle ";}
        else{ cout << "The point is outside the circle";}

        //Problem11
        int weight1, price1, weight2, price2;
    cout << "Enter the weight and price for package 1:";
        cin >> weight1 >> price1;
        cout << "Enter the weight and price for package 2:";
        cin >> weight2 >> price2;
        if (weight1/price1>weight2/price2){cout << "Package 2 has a better price";}
        if (weight1/price1<weight2/price2){cout << "Package 1 has a better price";}
        if (weight1/price1==weight2/price2){cout << "Two packages have the same price";}

        //Problem12
        int pld;
        cout << "Enter a three-digit integer: ";
        cin >> pld;
        pld >=100;
        pld <=999;
        int first = pld/100;
        int last = pld%10;
        if (first == last){cout << pld << " is a palindrome";}
        else{cout << pld << " is not a palindrome";}

    //Problem13
    char mych;
    cin>>mych;
    if (mych == 'g') {cout << "Go!" << endl;}
    if (mych == 'y') {cout << "Get ready!" << endl;}
    if (mych == 'r') {cout << "Stop" << endl;}


    //Problem14
    int myn;
    cin >> myn;
    if (myn == 1){cout << "Monday";}
    if (myn == 2){cout << "Tuesday";}
    if (myn == 3){cout << "Wednesday";}
    if (myn == 4){cout << "Thursday";}
    if (myn == 5){cout << "Friday";}
    if (myn == 6){cout << "Saturday";}
    if (myn == 7){cout << "Sunday";}
    else if (myn >=8 ){cout << "There is no such weekday";}


    //Problem15
    int etd, ende ;
    cout << "Enter today's day: ";
    cin >> etd;
    cout << "Enter the number of days elapsed since today: ";
    cin >> ende;
    int ft=(etd+ende)%7;
    if (etd == 1){cout << "Today is Monday";}
    if (etd == 2){cout << "Today is Tuesday";}
    if (etd == 3){cout << "Today is Wednesday";}
    if (etd == 4){cout << "Today is Thursday";}
    if (etd == 5){cout << "Today is Friday";}
    if (etd == 6){cout << "Today is Saturday";}
    if (etd == 0){cout << "Today is Sunday";}
    if (ft == 1){cout << " and the future day is Monday";}
    if (ft == 2){cout << " and the future day is Tuesday";}
    if (ft == 3){cout << " and the future day is Wednesday";}
    if (ft == 4){cout << " and the future day is Thursday";}
    if (ft == 5){cout << " and the future day is Friday";}
    if (ft == 6){cout << " and the future day is Saturday";}
    if (ft == 0){cout << " and the future day is Sunday";}


    //Problem16
    int grade;
    cin >> grade;
    switch (grade /10) {
        case 10: cout << "A" << endl; break;
        case 9: cout << "A" << endl; break;
        case 8: cout << "B" << endl; break;
        case 7: cout << "C" << endl; break;
        case 6: cout << "D" << endl; break;
        default : cout << "F" << endl; break;
    }

}