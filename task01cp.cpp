#include <iostream>
using namespace std;

bool canFormConsecutive(int arr[], int n) {
    if (n == 0) 
    {
        return false;                                                // An empty array 
    }

    int minNum = arr[0];
    int maxNum = arr[0];

                                                                    // Find the minimum and maximum numbers in the array
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] < minNum)
        {
            minNum = arr[i];
        }
        if (arr[i] > maxNum) 
        {
            maxNum = arr[i];
        }
    }

                                                                    // Create an array to count occurrences
    int count[100] = {0};

    
    for (int i = 0; i < n; i++) 
    {                                                               // Count occurrences of each number
        count[arr[i]]++;
    }

    
    for (int i = minNum; i <= maxNum; i++) 
    {                                                               // Check for consecutive numbers
        if (count[i] != 1) 
        {
            return false;
        }
    }

    return true; 
}

main() 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "Invalid input." << endl;
        return 0;
    }

    int arr[100]; 
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }


    bool result = canFormConsecutive(arr, n);
    if (result) 
    {
        cout << "True" << endl;
    } 
    else 
    {
        cout << "False" << endl;
    }
}
