#include<iostream>
using namespace std;

int sort(int arr[],int len){
    
    int p, q;

    for(p=0; p<len-1; ++p){
        for(q=0; q<len-p-1; q++){
            if(arr[q]>arr[q+1]){
                int temp = arr[q];
                arr[q]=arr[q+1];
                arr[q+1]=temp;
            }

        }
    }
}

int main(){
    int a[]={5,1,3,4,2,6};
    int len = sizeof(a)/sizeof(a[0]);
    sort(a,len);
    for(int i=0; i<len; i++){
        cout<<a[i];
    }
    
    return 0;
}