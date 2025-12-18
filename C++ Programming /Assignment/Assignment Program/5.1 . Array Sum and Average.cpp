#include<iostream>
using namespace std;

int main() 
{
    int n;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];  // Declare array of size n
    int sum = 0;
    float average;

    // Input array elements
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];  // Add each element to sum
    }

    // Calculate average
    average = static_cast<float>(sum) / n;

    // Display results
    cout << "Sum of the array elements = " << sum << endl;
    cout << "Average of the array elements = " << average << endl;

    return 0;
}
