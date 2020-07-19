#include<iostream>
using namespace std;

int ins_sort(int arr[],int len){
    int p, q;

    for(p=1; p<=len-1; p++){
        for(q=p; q>0 && arr[q-1]>arr[q]; q--){
                int temp=arr[q];
                arr[q]=arr[q-1];
                arr[q-1]=temp;
        }
    }
}
int main(){
    int arr[]={5,1,3,4,2,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    ins_sort(arr, len);
    for(int i=0; i<len; i++){
        cout<<arr[i];
    }
    return 0;
}