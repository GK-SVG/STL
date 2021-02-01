#include<iostream>
using namespace  std;

void swap(int *num1, int *num2){
    int *temp;
    temp=num1;
    num1=num2;
    num2=temp;
}

void bubble_sort(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(a[j]>a[j+1]){
            int temp ;
            swap(a[j],a[j+1]);     
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(int i = 0; i< n; i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}