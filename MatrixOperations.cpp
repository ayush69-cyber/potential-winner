#include<iostream>
using namespace std;
class Matrix
{
    float ** element;
    int row,column;
    void displaySpace(int n)
    {
        for(int i = 1; i <= n ; i++)
        {
            cout << ' ';
        } 
    }
    public:
        Matrix(int r , int c)
        {
            row = r;
            column = c;
            element = new float*[row];
            for(int i = 1;i <=row; i++)
            {
                element[i-1] = new float[column]; 
            }
        }
       
        void getMatrix()
        {
            cout << " Enter your elements : ";
            for (int i = 1 ; i<=row ; i++)
            {
                for (int j = 1; j<=column ; j++)
                {
                    cin >> element[i-1][j-1];
                }
            }
        }
        void displayMatrix()
        {
            for(int i = 1; i <= row; i++)
            {
                for(int j = 1; j <= column ; j++)
                {
                    cout << element[i-1][j-1];
                    displaySpace(4);
                }
                cout << endl;
            }
        }
        
};
int main()
{
    return 0;
}