// BubbleSort
 
#include <iostream>
#include <string.h>
using namespace std;


string * BubbleSortString(string string_array[], int len_str)
{
   string temp;
   int counter = 0;
    for (int i = 0; i < len_str - 1; i++){
        for (int j = len_str - 1; j > i ; j--){
            counter++;
            if (string_array[j] < string_array[j-1]) {
                temp = string_array[j];
                string_array[j] = string_array[j-1];
                string_array[j-1] = temp;
            }
        }
    }
    cout<<counter<<endl;
    return string_array; 
}

int * BubbleSort(int unsorted_array[], int len)
{
    int temp;
    for (int i = 0; i < len - 1; i++){
        for (int j = len - 1; j > i ; j--){
            if (unsorted_array[j] < unsorted_array[j-1]) {
                temp = unsorted_array[j];
                unsorted_array[j] = unsorted_array[j-1];
                unsorted_array[j-1] = temp;
            }
        }
    }
    return unsorted_array;
}

void display(int *sorted_array, string *sorted_string_array,int len,int len_str)
{
    cout<<"Sorted integer array is: "<<endl;
    for (int i = 0; i < len; i++){
        cout<<sorted_array[i]<<endl;
    }
    cout<<""<<endl;
    cout<<"Sorted string array is: "<<endl;
    for (int i = 0; i < len_str; i++){
        cout<<sorted_string_array[i]<<endl;
    }
}

int main()
{
  int unsorted_array[] = {1, 2, 3, 4, 5};
  int * sorted_array;
  string string_array[] = {"Fish", "Ace", "Fire", "Rubber"};
  string * sorted_string_array;
  int len = sizeof(unsorted_array)/sizeof(unsorted_array[0]);
  int len_str = sizeof(string_array)/sizeof(string_array[0]);
  sorted_array = BubbleSort(unsorted_array, len);
  sorted_string_array = BubbleSortString(string_array, len_str);
  display(sorted_array, sorted_string_array, len, len_str);
  return 0;
}





