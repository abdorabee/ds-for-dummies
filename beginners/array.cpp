/**
 * Arrays - Beginner Level

Introduction

An array is a collection of elements stored in a contiguous memory block, allowing efficient data management. Think of an array as a row of lockers where each locker holds one item, and every locker has a unique number (index) for easy access.

Why Learn Arrays?

Quick Access: Retrieve elements instantly using their index.

Data Organization: Organize related data efficiently.

Foundation Concept: Understanding arrays helps grasp more complex data structures.
 */

// create a new array
#include <iostream>
using namespace std;
int main() {

// Declaration
int arr[5];

// Initialization
int arr2[5] = {1, 2, 3, 4, 5};

// Accessing Elements
cout << arr2[0] << endl; // Output: 1

// Updating Elements
arr2[0] = 10;

// Iterating Over an Array
for (int i = 0; i < 5; i++) {
    cout << arr2[i] << " ";
    }
    

}