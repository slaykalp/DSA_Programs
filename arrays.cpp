// Arrays are a collection of similar datatypes 
//  Arrays store data in contiguos memory locations
#include<iostream>
using namespace std;
int main(){
    int A[5];
    A[0]=12;
    A[1]=2;
    A[2]=42;
    cout<<sizeof(A)<<endl;
    int B[4]={2,5,8,1};//Initialising array at its initial place
    for(int i=0; i<4; i++){
        cout<<B[i]<<endl;
    }
    int C[10]={5,11};//Assigning only 2 values
    for(int i=0; i<10; i++){ //This shows all values other than the assigned ones are 0
        cout<<C[i]<<" ";
    }
    int n;
    cout<<"Enter number:";
    cin>>n;
    int arr[n];//Initialising array with custom size
    for(int i=0; i<n; i++){
        cout<<"Enter "<<i<<" value:";//Taking values from user
        cin>>arr[i];
    }
}
