#include <iostream>
#include <fstream>
using namespace std;

// 1. get file name
// 2. connect file stream
// 3. populate array with integers

// ===========================
// Purpose: prompt user for filename, and connect to file stream while
//			putting the integers in array data
//          if the file cannot be opened, the program will exit
// Assumption: user's file has less than 50 integers
// Postcondition: fin has been successfully connected to the file
// ===========================
void get_file_stream(ifstream& fin, int data[], int &size);



// 4. sort integers
// ===========================
// Purpose: sort the numbers in arr[] ( in a bubble sort manner)
// Precondition:
//      1. arr[] is populated with "size" number of integers
// Postcondition:
//      1.arr[] is sorted ascending
// Calls:
//      swap
//			swaps value a and b
// ===========================
void sort(int arr[], int size);
void swap(int &a, int &b);

// 5. count occurrences
// ===========================
// Purpose: determine how many times a certain integer repeats itself in the given array
// Precondition:
//      1. arr[] is populated with "size" number of integers
// Postcondition:
//      1.arr[] is sorted ascending
// Calls:
//      n/a
// ===========================
void count_occurrences(const int arr[], int size_arr, int result[][2], int& size_result);

// 6. output
// ===========================
// Purpose: print out all elements of result[][2]
// Precondition:
//      1. array result is filled with the different integers and occurance of those integers
// Postcondition:
//      1. array result is printed out
// Calls:
//      n/a
// ===========================
void print_2d_array(const int result[][2], int size_result);

int main(int argc, const char * argv[]) {
	char file_in[21];
	int data[50];
	int size_data = 50;
    int occur[50][2];   // first column is the integer, second column is number of occurence
    int size_occur;
    ifstream fin;


    cout << "Welcome to Number Cruncher!\n"
     	 << "===========================\n"
     	 << "Which file do you want us to crunch?\n";
    cin >> file_in;

    fin.open(file_in);
    if (fin.fail( ))
    {
    	cout << "Input file opening failed.\n";
    	exit(1);
    }

// 1. get file name
// 2. connect file stream
// 3. fill integers
    get_file_stream(fin, data, size_data);
// 4. sort integers
    sort(data, size_data);
// 5. count occurrences
    count_occurrences(data, size_data, occur, size_occur);
// 6. output
    cout << "\nHere is the stats:\n";
	print_2d_array(occur, size_occur);

	return 0;
}

void get_file_stream(ifstream& fin, int a[], int &size) {
	int i = 0;
	while ((i < size ) && (fin >> a[i])){
		i++;
	}
	size = i;
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

void count_occurrences(const int arr[], int size_arr,
						int result[][2], int& size_result)
{
	bool diff_num = false;
	int arr_count, occurence = 0, number_count = 0;
	for(arr_count = 0; arr_count < size_arr+1; arr_count++)
	{
		if (diff_num == true){
			result[number_count - 1][1] = occurence + 1;
			occurence = 0;
			diff_num = false;
		}
		if(arr[arr_count] == arr[arr_count+1]){
			occurence++;

		}
		else{
			diff_num = true;
			result[number_count][0] = arr[arr_count];
			number_count++;
		}
	}
	size_result = number_count - 1; // total size of the new 2d array
}

void print_2d_array(const int result[][2], int size_result){
	cout << "N Count" << endl;
	for(int number_count = 0; number_count < size_result; number_count++)
	{
		cout << result[number_count][0] << ' '
			 << result[number_count][1] << endl;

	}
}
