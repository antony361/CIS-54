#include <iostream>
#include <fstream>
using namespace std;

// ===========================
// Purpose: sort the numbers in arr[] ( in a bubble sort manner)
// Precondition:
//      1. arr[] is populated with "size" number of integers
// Postcondition:
//      1.arr[] is sorted ascending
// Calls:
//      n/a
// ===========================
void sort(int arr[], int size);
// ===========================
// Purpose: swap the value of a with b and b with a
// Precondition:
//      1. both a and b are integers
// Postcondition:
//      1. array is now sorted
// Calls:
//      swap(int *a, int *b)
// ===========================
void swap(int &a, int &b); 

// ===========================
// Purpose: initialize the program asking user for file they want to sort out
// Precondition:
//      1. file exist
// Postcondition:
//      1.prints out sorted array
// Calls:
//      sort(int arr[], int size)
// ===========================

int main(int argc, const char * argv[]) {
   char file_in[21];
   int arr[50];
   int size = 50;
   int i = 0;
   ifstream fin;


    cout << "Welcome to Bubble Sort!\n"
       << "===========================\n"
       << "Which file do you want us to crunch?\n";
    cin >> file_in;

    fin.open(file_in);
    if (fin.fail( ))
    {
      cout << "Input file opening failed.\n";
      exit(1);
    }
   
   while ((i < size ) && (fin >> arr[i])){
      i++;
   }
   size = i; // gives accurate number of integers in arrays

   sort(arr, size);

   cout << "Here are the numbers sorted in ascending order: \n";
   for (i = 0; i < size; i++) // prints out each integer from the array after theyve been sorted
   {
      cout << arr[i] << endl;
   }
   return 0;
}
void swap(int &a, int &b) 
{ 
    int temp = a; 
    a = b; 
    b = temp; 
} 

void sort(int arr[], int size) 
{ 
   int i, j;  
   for (i = 0; i < size-1; i++) 
   {
     for (j = 0; j < size-i-1; j++) 
     { 
        if (arr[j] > arr[j+1]) 
        { 
           swap(arr[j], arr[j+1]); 
  
        } 
     } 
   } 
} 
