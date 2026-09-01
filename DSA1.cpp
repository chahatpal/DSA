#include <iostream>
using namespace std;

int main() {

    // Find maximum and minimum value
    int arr1[] = {1, 5, 8, 4, 9, 7, 6, 2, 3};
    int n1 = 9;

    int max = arr1[0];
    int min = arr1[0];

    for(int i = 1; i < n1; i++) {
        if(arr1[i] > max)
            max = arr1[i];

        if(arr1[i] < min)
            min = arr1[i];
    }

    cout << "Maximum value = " << max << endl;
    cout << "Minimum value = " << min << endl;
     
   

// Calculate sum of all array elements
    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = 5;
    int sum = 0;

    for(int i = 0; i < n2; i++) {
        sum = sum + arr2[i];
    }

    cout << "Sum = " << sum << endl;
    

   
// Search given element x in array
    int arr3[] = {1, 5, 6, 7, 9, 2, 4, 8};
    int n3 = 8;
    int x = 6;
    int index = -1;

    for(int i = 0; i < n3; i++) {
        if(arr3[i] == x) {
            index = i;
            break;
        }
    }

    cout << "Index = " << index << endl;

     // Count number of occurrences of an element
    int arr4[] = {3, 5, 8, 2, 1, 4, 3, 6, 3, 3, 1, 7, 3};
    int n4 = 13;
    int x4 = 3;
    int count = 0;

    for(int i = 0; i < n4; i++) {
        if(arr4[i] == x4) {
            count++;
        }
    }

    cout << "Occurrences = " << count << endl;
return 0;
}