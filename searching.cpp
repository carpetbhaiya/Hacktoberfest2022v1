#include<iostream>
using namespace std;
 void linear(){
 int n,find;
 cout<<"enter the number of element you want to enter in array: "<<endl;
 cin>>n;
 int arr[n];
 cout<<"enter the element "<<endl;
 for(int i=0;i<n;i++){
 cin>>arr[i];
 }
 cout<<"enter the element you want to find"<<endl;
 cin>>find;
 
 for(int j=0;j<n;j++){
 if(arr[j]==find){
 cout<<find <<" at position "<<j+1<<endl;
 }
 }
 }
 
 void bineary(){
 int n,find;
 cout<<"enter the number of element you want to enter in array: "<<endl;
 cin>>n;
 int arr[n];
 cout<<"enter the element in increasing order"<<endl;
 for(int i=0;i<n;i++){
 cin>>arr[i];
 }
 cout<<"enter the element you want to find"<<endl;
 cin>>find;
int start=0;
 int end=n-1;
 while(start<=end){
int mid=(start+end)/2;
 if(arr[mid]==find){
 cout<<find <<" at position "<<mid+1<<endl;
 break;
 }else if(arr[mid]<find){
 start= mid +1;
 }else{
 end=mid-1;
 } 
 }
 }
 
int main(){
int j;
cout<<"1. linear search"<<endl;
cout<<"2. bineary search "<<endl;
cout<<"\nEnter the search number you want to perform : "<< endl;
cin>>j;
if(j==1){
linear();
}
if(j==2){
 bineary();
}
return 0;
}