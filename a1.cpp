#include<iostream>
using namespace std;

int prime(int a);
int prime1(int a);
void factor(int a);

int main(){
    int n;
    cout<< "enter the number"<< endl;
    cin >> n;
    if(prime(n)==0){
       cout << "It's not a prime no."<< endl;
       cout<<"Factors are"<< endl;
        factor(n);
    }else{
        cout << "It's a prime no."<< endl;
        cout << "The next prime no. is "<< prime1(n);
    }
}

int prime(int a){
    int c=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            c++;
        }
    }
    if(c>=1){
        return 0;
    }else{
        return 1;
    }
}

int prime1(int a){
    bool found= false;
    while(!found){
        a++;
        if(prime(a)==1){
            return a;
            found = true;
        }
    }
}

void factor(int a){
    for(int i=1;i<=a;i++){
          if(a%i==0){
            cout<<i<<endl;
          }
    }
}
