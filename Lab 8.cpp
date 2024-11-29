#include <iostream>
using namespace std;                                              
Task 2
int main() {
    double num1,num2;
    char operation;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter the second number: ";
    cin >> num2;
    switch (operation) {
    case '+':
    cout << "Result: " << num1 + num2<<endl;
    break;
    case '-':
    cout << "Result: " << num1 - num2<<endl;
    break;
    case '*':
    cout << "Result: " << num1 * num2<<endl;
    break;
    case '/':
    if (num2 != 0) {
    cout << "Result: " << num1 / num2<<endl;
    } else {
    cout << "Error: Division by zero!"<<endl;
    }
    break;
    default:
    cout << "Invalid operation!" <<endl;
    }
    return 0;
}
	
Lab Task 1
#include<iostream>using namespace std;

int main(){
    int day;
    cout<<"enter day number(1-7):";
    switch(day){
        cin>>day;
        case'1';
        cout<<"monday";
 break;
    case'2';
    cout<<"tuesday";
    break;
    case'3';
    cout<<"wednesday";
    break;
    case'4';
    cout<<"thrusday";
    break;
    case'5';
    cout<<"friday";
    break;
    case'6';
    cout<<"saturday";
    break;
    case '7';
    cout<<"sunday";
    default;
    cout<<"invalid day number!";
    }
return 0;
}

Task 4
#include <iostream>
#include<string>
using namespace std;
int main() {
    char grade;

    cout<<"Enter a letter grade (A, B, C, D, F): ";
cin >> grade;
    switch (toupper(grade)) {
    case 'A':
    cout << "Excellent" <<endl;
    break;
    case 'B':
    cout << "Good" <<endl;
    break;
    case 'C':
    cout << "Fair" <<endl;
    break;
    case 'D':
    cout << "Poor" <<endl;
    break;
    case 'F':
    cout << "Failing" <<endl;
break;
    default:
    cout << "Invalid grade" <<endl;
    }
    return 0;
}

Task 3

#include <iostream>
#include <cctype>
using namespace std;
int main() {
char ch;
cout << "Enter an alphabet character: ";
cin >> ch;

    
ch = toupper(ch);
switch (ch) {
case 'A':
case 'E':
case 'I':
 case 'O':
 case 'U':
cout << (char)tolower(ch) << " is a vowel" <<endl;
break;
case 'B':
 case 'C':
 case 'D':
 case 'F':
 case 'G':
 case 'H':
 case 'J':
 case 'K':
 case 'L':
 case 'M':
 case 'N':
 case 'P':
 case 'Q':
 case 'R':
 case 'S':
 case 'T':
 case 'V':
 case 'W':
 case 'X':
 case 'Y':
 case 'Z':
cout << (char)tolower(ch) << " is a consonant" <<endl;
break;
default:
cout << "Invalid input. Please enter an alphabet character." <<endl;
}
return 0;
}


Task 5

#include<iostream>
using namespace std;

int main() {
    double balance = 0.0;
    int choice;
    double amount;
    while (true) {
    
    cout << "\nBank System Menu:" <<endl;
    cout << "1. Deposit" <<endl;
    cout << "2. Withdraw" <<endl;
    cout << "3. Check Balance" <<endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
    cout << "Enter amount to deposit: ";
    cin >> amount;
    balance += amount;
    cout << "Deposit successful. New balance: " << balance <<endl;
    break;
    case 2:
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount > balance) {
    cout << "Insufficient funds." <<endl;
    } else {
    balance -= amount;
    cout << "Withdrawal successful. New balance: " << balance <<endl;
    }
    break;
 case 3:
    cout << "Current balance: " << balance <<endl;
    break;
    case 4:
    cout << "Exiting program. Goodbye!" <<endl;
    return 0;
    default:
    cout << "Invalid choice. Please try again." <<endl;
 }
    }
    return 0;
}


Task 6
#include <iostream>
#include <cctype>
using namespace std;
int main() {
char color;

    while (true) {
    cout << "Enter traffic light color (R/G/Y) or 'Q' to quit: ";
    cin >> color
    color = std::toupper(color);
    switch (color) {
 case 'R':
cout << "Stop" <<endl;
break;
case 'G':
cout << "Go" <<endl;
break;
case 'Y':
cout << "Slow down" <<endl;
break;
case 'Q':
cout << "Exiting program. Goodbye!" <<endl;
return 0;
default:
cout << "Invalid color.Enter R, G, Y or Q." <<endl;
        }
    }
    return 0;
}

Task 7
#include<iostream>
#include<string>
using namespace std;
int main() {
    int month;
cout << "Enter month (1-12): ";
cin >> month;
if (month >= 1 && month <= 12) {
switch (month) {
case 12:
case 1:
case 2:
cout << "Winter" <<endl;
break;
case 3:
case 4:
case 5:
cout << "Spring" <<endl;
break;
case 6:
case 7:
case 8:
cout << "Summer" <<endl;
break;
case 9:
case 10:
case 11:
cout << "Autumn" <<endl;
break;
        }
    } else {
cout << "Invalid month. Please enter 1-12." <<endl;
    }
    return 0;
}



Task 8
#include <iostream>
using namespace std;
int main() {
    int digit;

cout << "Enter a digit (0-9): ";
cin >> digit;
    if (digit >= 0 && digit <= 9) {
        switch (digit) {
            case 0:
cout << "Zero" <<endl;
break;
case 1:
cout << "One" <<endl;
                break;
            case 2:
cout << "Two" <<endl;
break;
case 3:
cout << "Three" <<endl;
break;
case 4:
cout << "Four" <<endl;
break;
case 5:
cout << "Five" <<endl;
break;
case 6:
cout << "Six" <<endl;
break;
case 7:
cout << "Seven" <<endl;
break;
case 8:
cout << "Eight" <<endl;
break;
case 9:
cout << "Nine" <<endl;
break;
}
    } else {
cout << "Invalid digit. Please enter 0-9." <<endl;
    }
    return 0;
}

