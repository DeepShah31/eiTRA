#include <iostream>

using namespace std;

void input_element(int A[][20],int m, int n);

void display_matrix(int A[][20], int m, int n);

int sum(int A[][20], int m, int n);

int row_sum(int A[][20], int m, int n);

int col_sum(int A[][20], int m, int n);

void transp(int A[][20],int B[][20], int m, int n);

int main()
{
    int a,b,choice, A[10][20],n,x,y,z;
    
    do
    {
      
        cout <<"Menu" << endl;
        cout <<"1. input elements" << endl;
        cout <<"2. Display matrix" << endl;
        cout <<"3. Sum of matrix elements" << endl;
        cout <<"4. Sum of matrix rows" << endl;
        cout <<"5. Sum of matrix elements" << endl;
        cout <<"6. Exit"<< endl;
        cout <<"Choose among the options above: ";
        cin  >> choice;
         
        x = sum(A,a,b);
        y = row_sum(A,a,b);
        z = col_sum(A,a,b);
        
        switch(choice)
        {
                case 1: input_element(A,a,b); break;
                
                case 2: display_matrix(A,a,b); break;
                
                case 3: cout <<"The sum of the matrix elements is " << x << endl;
                break;
                
                case 4: cout <<"The sum of the matrix rows is "<< y << endl;
                break;
                
                case 5: cout <<"The sum of the matrix columns is "<< z << endl;
                break;
                
                default: cout <<"Your choice is invalid" << endl;
        }
        
        }while(choice != 6);
        
        cin.ignore();
        cin.get();
        
        return 0;

}

void input_element(int A[][20], int m, int n)
{
    int row, col;
    cout <<"Enter the number of rows: ";
    cin  >> row;
    
    cout <<"Enter the number of columns: ";
    cin  >> col;
}

void display_matrix(int A[][20], int m, int n)
{
    
    for(int r = 0; r < m; r++)
        for(int colum = 0; colum < n; colum++)
        {
            cout <<"Enter element "<<": ";
            cin >> A[r][colum];
        }
}

int sum(int A[][20], int m, int n)
{
    int s = 0,r,colum;
    for( r = 0; r < m; r++)
    {
        for(colum = 0; colum < n; colum++)
        {
            s += A[r][colum];
        }
    }
    return s;
}

int row_sum(int A[][20], int m, int n)
{
    int r_s = 0,r,colum;
    for(r = 0; r < m; r++)
    {
        for(colum = 0; colum < n; colum++)
        {
            r_s += A[r][colum]; 
        }
    }
    return r_s;
}

int col_sum(int A[][20], int m, int n)
{
    int col_s(0),colum,r;
    for(r = 0; r < m; r++)
    {
        for(colum = 0; colum < n; colum++)
        {
            col_s += A[r][colum]; 
        }
    }
    return col_s;
}

void transp(int A[][20], int B[][20], int m, int n)
{
    int r,colum;
    for(r = 0; r < m; r++)
    {
        for(colum = 0;  colum < n; colum++)
            B[r][colum] = A[colum][r];
    }
}