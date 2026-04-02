
#include<bits/stdc++.h>
using namespace std ;
double add(float a , float b) { return a + b ; }

double subtract(float a , float b) { return a - b ; }

double multiply(float a , float b) { return a*b ; }

double divide(float a , float b)
{
    if(b == 0) 
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a/b ;
}

int mod(int a , int b) { return a%b ; }

double power(int a, int b) { return pow(a,b); } 

double sqroot(float a){ return sqrt(a); }



int main()
{
    vector<string> history ;
    int choice ;

do{
        double a , b , result ;
    cout << "\n\n===== WELCOME TO SMART CALCULATOR =====\n";
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
        cout << "5. Remainder\n6. Power\n7. Square Root\n";
        cout << "8. Show History\n0. Exit\n";

        cout << "Enter choice : ";
        cin >> choice ;

        if(choice == 0) break ;

        if(choice == 8)
        {
            cout << "\n----------- CALCULATION HISTORY ----------\n\n";
            for(string h : history)
            {
                cout << h << endl ;
            }continue ;              // yahan hona chahiye (outer loop skip karega)
        }

        if(choice == 7)
        {
            cout << "Input a number : " ;
            cin >> a ;
        }
        else
        {
            cout << "Input two numbers : ";
            cin>> a >> b ;
        }

    switch(choice)
    {
        case 1 :
        cout << "Addition of two numbers : "<<add(a , b) ;
        history.push_back(to_string(a) + " + " + to_string(b) +  " = " + to_string(add(a , b)));
        break ;

        case 2 :
        cout << "Subtraction of two numbers : "<<subtract(a,b) ;
        history.push_back(to_string(a) + " - " + to_string(b) +  " = " + to_string(subtract(a , b)));
        break ;

        case 3 :
        cout << "Multiplication of two numbers : "<<multiply(a , b);
        history.push_back(to_string(a) + " * " + to_string(b) +  " = " + to_string(multiply(a , b)));
        break ;

        case 4 :
        cout << "Division of two numbers : "<<divide(a , b) ;
        history.push_back(to_string(a) + " / " + to_string(b) +  " = " + to_string(divide(a , b)));
        break ;

        case 5 :
        cout << "Remainder of two numbers : "<<mod((int)a , (int)b) ;
        history.push_back(to_string(a) + " % " + to_string(b) +  " = " + to_string(mod((int)a , (int)b)));
        break ;

        case 6 :
        cout << "Power of two numbers : "<< power(a , b) ;
        history.push_back(to_string(a) + " ^ " + to_string(b) +  " = " + to_string(power(a , b)));
        break ;

        case 7 :
        cout << "Square root of a number : "<<sqroot(a);
        history.push_back("sqrt( " + to_string(a)+ " ) = " + to_string(sqroot(a))) ;
        break ;

        default :
        cout << "Invalid choice\n" ;
    }
} while(true) ;

cout << "\n---------- Calculation Done ----------\n";
    return 0 ;
}