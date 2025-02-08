#include<iostream>
using namespace std;

void reverse(int a[],int n);
void size(int a[],int n);

int main(){
    int n;
    int a[n];
    cout <<" enter the size of array"<< endl;
    cin >>n;
    cout<< "enter the array"<< endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    cout<<"reverse array"<< endl;
    reverse(a,n);
    size(a,n);
}

void reverse(int a[],int n){
      for(int i=n-1;i>=0;i--){
          cout<<a[i]<<endl;
      }
}

void size(int a[], int n){
   
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
           a[i]=a[i]+a[j];
           a[j]=a[i]-a[j];
           a[i]=a[i]-a[j];
        }
      }
   }
   cout << "second smallest no. is "<<a[1]<<endl; 
   cout << "second greatest no. is "<<a[n-2]<<endl; 
    
}