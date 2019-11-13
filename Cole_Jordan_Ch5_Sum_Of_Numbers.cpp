//Jordan Cole
//CO SCI_802_26188FA19V
//Chap. 5: Sum of Numbers
//Program that asks for a positive number (uses a loop to validate the input).
//Then uses a second loop to compute the sum of all the integers from 1 up to the number entered.

#include <iostream>
using namespace std;

int main()
{
    //Create variables for user input and sum total
    int num, total = 0;
    
    //Retrieve user input
    cout << "Enter a positive integer: ";
    cin >> num;
    
    //Input Validation
    while (num <= 0)
    {
        cout << "ERROR: Enter a value that is greater than 0: ";
        cin >> num;
    }
    
    //Calculate the sum of all numbers from 1 up to the user-input number
    for (int count = 1; count <= num; count++)
    {
        total = (total + count);
    }
    
    //Display the results
    cout << "The total of all the integers from 1 to " << num << " is " << total << "." << endl;

    return 0;
    system("pause");
}
