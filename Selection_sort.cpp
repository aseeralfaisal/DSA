#include<iostream>
using namespace std;

int sel_sort(int arr[],int len){
    int p, q;

    for(p=0; p<len-1; p++){
        for(q=p+1; q<len; q++){
            if(arr[q]<arr[p]){
                int temp = arr[q];
                arr[q]=arr[p];
                arr[p]=temp;
            }
        }
    }
}

int main(){
    int arr[]={5,1,3,4,2,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    sel_sort(arr, len);
    for(int i=0; i<len; i++){
        cout<<arr[i];
    }
    return 0;
}