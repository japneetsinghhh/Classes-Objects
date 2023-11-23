#include<iostream>
using namespace std;
class Matrix{
    public:
    int rows;
    int cols;
    int mat[100][100];
    Matrix(int r,int c,int m[100][100]){
        rows = r;
        cols = c;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                mat[i][j]=m[i][j];
            }
        }
    }
    Matrix operator+(Matrix X){
        int res_mat[100][100];
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                res_mat[i][j]=mat[i][j]+X.mat[i][j];
            }
        }
        return Matrix(rows,cols,res_mat);
    }
    void display(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
};
int main(int argc, char const *argv[])
{
    /* code */
    int r=3,c=3;
    int m1[100][100],m2[100][100];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            m1[i][j]=1;
            m2[i][j]=1;
        }
    }
    Matrix M1(r,c,m1),M2(r,c,m2);
    Matrix M3=M1+M2;
    M3.display();
    return 0;
}
