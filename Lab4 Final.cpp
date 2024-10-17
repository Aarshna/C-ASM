/*   CSCI 515
 
 Aarshna Vasaya
 
 Practice Program 4
 
 User will enter a value (N) which represents the number of values to process
 
 User will enter N numbers and the program will display the sum and average of the N numbers
 
 Program will also find and display the largest and smallest of the N numbers
 
 User enters N numbers in the range of -2147483648 to 2147483647
 NOTE: you must have a loop to input the data, sum the data, and find largest and smallest values.
 */

#include <iostream>  
using namespace std;

int main()
{
    int N; 
    double sum = 0.0;   
    double num;         
    double largest, smallest; 

    // Tell the user to input a number which is the number of data values to process
    cout << "Enter the number of values to process: "; 
    cin >> N;

    cout << "Enter a number: ";
    cin >> num;

    sum = num;
    largest = smallest = num;
    
    // Is the For loop the best loop for this problem?
    // For loop is suitable for this problem as it processes a known number of values (N)

    for(int i = 1; i < N; ++i)
    {
        cout << "Enter a number: ";
        cin >> num;

        sum += num;

        if(num > largest)
            largest = num;

        if(num < smallest)
            smallest = num;
    }    

    double average = sum / N; 

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

    return 0;
}
