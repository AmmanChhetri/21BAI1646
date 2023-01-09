
// Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually 
// split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.


// process->
// initially the first element of the array is the only element in the sorted array...
// im each iteration we will store the value of the first element of the unsorted array in a variable ...say temp...
// in each iteration we will compare this temp with the sorted array ..in this way we will put the element in its position

#include<iostream>
using namespace std;



void insertionSort(int arr[],int n){

    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

}

int main()
{
    int arr[] = {5,4,10,1,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Array before sorting is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    insertionSort(arr,n);

    cout<<"Array after sorting is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}