#include <iostream>
#include <string>
#define MAX 10
int A[MAX][MAX];
int B[MAX][MAX];
using std::cout;
using std::endl;
int main(int argc,char **argv){
    int i,j,sz,counter;
    if (argc<2){
        sz=3; // default if no size was given
    }
    else {
        sz=atoi(argv[1]);
        if (sz>10){
            sz=10;
        }
    }
    // initialize A
    cout<<"===original A==="<<endl;
    counter=0;
    for (j=0;j<sz;++j){
        for (i=0;i<sz;++i){
            A[i][j]=++counter;
            cout<<A[i][j]<<",";
        }
        cout<<endl;
    }
    // using B to save rotated matrix
    for (j=0;j<sz;++j){
        for (i=0;i<sz;++i){
            B[j][sz-1-i]=A[i][j]; //rotate 90 degrees
        }
    }
    // print out B
    cout<<"===rotated B==="<<endl;
    for (j=0;j<sz;++j){
        for (i=0;i<sz;++i){
            cout<<B[i][j]<<",";
        }
        cout<<endl;
    }
    // in-place, using only O(1) memory
    int temp;
    for (j=0;j<sz/2;++j){
        for (i=0;i<sz/2;++i){
            temp=A[i][j];
            A[i][j]=A[sz-1-j][i];
            A[sz-1-j][i]=A[sz-1-i][sz-1-j];
            A[sz-1-i][sz-1-j]=A[j][sz-1-i];
            A[j][sz-1-i]=temp++;
        }
    }
    if (sz%2) { // odd number, need to move the middle strips
        i=sz/2;
        for (j=0;j<sz/2;++j){
            temp=A[i][j];
            A[i][j]=A[sz-1-j][i];
            A[sz-1-j][i]=A[sz-1-i][sz-1-j];
            A[sz-1-i][sz-1-j]=A[j][sz-1-i];
            A[j][sz-1-i]=temp++;
        }
    }
    // print out rotated A
    cout<<"===rotated A==="<<endl;
    for (j=0;j<sz;++j){
        for (i=0;i<sz;++i){
            cout<<A[i][j]<<",";
        }
        cout<<endl;
    }
    return 0;
}