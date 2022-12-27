// Today we are going to implement the merge sort algo.

// This is important algo  for sorting the   array ,string and others linear squenecs element .


// Let's code .



#include<iostream>
using namespace std;


void mergeBoth(int * arr, int start, int mid, int  last){

// we will have to create first a demo arrays with same size.

int temp[last+1];
int i=start;
int s=start;
int l=mid+1;
                while ((s<=mid) && (l<=last)){

                    // check  and find out  which element is smaller .

                    if (arr[s]<= arr[l]){
                        temp[i++]= arr[s++];
                    }
                    else{
                        temp[i++]=arr[l++];
                    }
                }

                while (s<=mid)
                    temp[i++]=arr[s++];

                while (l<=last)
                    temp[i++]=arr[l++];

                    // Now let's us add these sorted temp array into original array.

                    for ( int i=start; i<=last; i++){
                        arr[i]=temp[i];
                    }

}

void mergeSort(int *  arr , int start, int last){

// First of all we calculate the midille element then
// we will make first half array's element sorted  and then second half .
// And at the last we  add both part to make original and that is our original
// sortted array.So this is the motive  behind this.

  if (start < last){
    int mid = start+(last-start)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, last);
    // Now merge these both arrays.
    mergeBoth(arr, start, mid, last);
  }
}
int main(){

    int arr[]={12,-56,0,-90,12,-4,-56};
    cout<<" Before sorting array's element are :- "<< endl;
    for ( int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }

    mergeSort(arr, 0, 6);
      cout<<"\n After sorting array's element are :- "<< endl;
    for ( int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}
