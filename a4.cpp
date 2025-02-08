#include<iostream>
using namespace std;
 
int main(){
    int n;int d=1;int a[20][20];
    cout << "enter the no. for matrix";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            d=a[i][j];
            cout <<d;
            d++; 
        }
        cout<<endl;
    }
}

void matrix(int size){
    int row = 0, col = 0;
 
    int boundary = size - 1;
    int sizeLeft = size - 1;
    int flag = 1;
 
    char move = 'r';
 
        int matrix[size][size] = {0};
 
    for (int i = 1; i < size * size + 1; i++)
    {
 
        matrix[row][col] = i;
       switch (move) 
        {
 
            case 'r':
                col += 1;
                break;
     
            case 'l':
                col -= 1;
                break;
     
            case 'u':
                row -= 1;
                break;
     
            case 'd':
                row += 1;
                break;
        }
 
        
        if (i == boundary) 
        {
 
            boundary += sizeLeft;
 
            // If 2 rotations has been made,
            // decrease the size left by 1
            if (flag != 2) 
            {
 
                flag = 2;
            }
            else
            {
 
                flag = 1;
                sizeLeft -= 1;
            }
 
            // switch-case to rotate the movement
            switch (move) 
            {
 
                // if right, rotate to down
                case 'r':
                    move = 'd';
                    break;
     
                // if down, rotate to left
                case 'd':
                    move = 'l';
                    break;
     
                // if left, rotate to up
                case 'l':
                    move = 'u';
                    break;
     
                // if up, rotate to right
                case 'u':
                    move = 'r';
                    break;
            }
        }
    }
 
    // Print the matrix
    for (row = 0; row < size; row++) 
    {
        for (col = 0; col < size; col++) 
        {
 
            int n = matrix[row][col];
            if(n < 10)
                cout << n << " ";
            else
                cout << n << " ";
        }
 
        cout << endl;
    }
}
