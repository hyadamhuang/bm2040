// clang++ print_pattern.cpp clearscreen.cpp -std=c++11 -lcurses
// g++ print_pattern.cpp clearscreen.cpp -std=c++11 -lcurses
// ./a.out sz x y
// a.exe sz x y
#include <iostream>
#include <thread>
#include <chrono>
#include "clearscreen.hpp"
using std::cout;
using std::endl;
int main(int argc,char **argv){
    constexpr int w=180,h=60;
    int M[h][w]={0}; // array to store pattern
    int sz,x,y,dx=1,dy=1;
    sz= atoi(argv[1]);
    x=atoi(argv[2]);
    y=atoi(argv[3]);
    cout<<sz<<","<<x<<","<<y<<endl;
    for(int i=0;i<sz;++i){
        for(int j=0;j<sz;++j){
            cout<<'x';
       }
        cout<<endl;
    }
    int count=500;
    while (--count>0) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));//sleep 1000ms
        for(int i=0;i<sz;++i){
            for(int j=0;j<sz;++j){
                if (i+x>=0 && i+x<h && j+y>=0 && j+y<w){
                    M[i+x][j+y]=1;
                }
            }
        }
        ClearScreen(); // clear screen
        for(int i=0;i<h;++i){
            for(int j=0;j<w;++j){
                if (M[i][j]==1){
                    cout<<'x';
                    M[i][j]=0;//clear for next step
                }
                else{
                    cout<<' ';
                }
            }
            cout<<endl;
        }
        if (x>=h-sz && dx>0) {
            dx=-1;
        }
        if (x<=0 && dx<0){
            dx=1;
        }
        if (y>=w-sz && dy>0) {
            dy=-1;
        }
        if (y<=0 && dy<0){
            dy=1;
        }
        x+=dx;
        y+=dy;
    }
    return 0;
}