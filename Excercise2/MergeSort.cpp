

// Time complexity of Merge Sort is O(nlogn) and Space complexity is O(n)
// For merge sort see abdulbari,lovebabbar and apnacollege(in C++) ...videos


// always include the middle indexed element to the left subarray


#include<iostream>
using namespace std;

// function for displaying array
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<" "<<endl;
}


// Function for merging arrays after sorting them
void merge(int arr[],int l,int mid,int r){
    
    //size of left and right subarrays
    int nl = mid-l+1;
    int nr = r-mid;
    int larr[nl],rarr[nr];

    // filling left and right subarrays    
    for(int i=0;i<nl;i++){
        larr[i]=arr[l+i];
    }
    for(int j=0;j<nr;j++){
        rarr[j]=arr[mid+1+j];
    }

    //merging temp arrays to real array
    int i=0;
    int j=0;
    int k=l;

    while(i<nl && j<nr){
        if(larr[i]<=rarr[j]){
            arr[k]=larr[i];
            i++;
        }else{
            arr[k]=rarr[j];
            j++;
        }
        k++;
    }


    //filling extra element in left array
    while(i<nl){
        arr[k]=larr[i];
        i++;
        k++;
    }   
    
    //filling extra element in right array
    while(j<nr){
        arr[k]=rarr[j];
        j++;
        k++;
    }

}




// Recursive function for mergeSort
void mergeSort(int arr[],int l,int r){
    //This is our base condition here it will execute until we get our minimum size array..or we can say until will divide our array till we get single element
    // when we reach at one element at that time l becomes equals to r and our recursive function break ...then we start merging arrays
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}






int main()
{
    int arr[] = {6,3,9,5,2,8,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Array before sorting is "<<endl;
    display(arr,n);

    cout<<"Array after sorting is "<<endl;
    mergeSort(arr,0,n-1);
    display(arr,n);
    
    return 0;
}