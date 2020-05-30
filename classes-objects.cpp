#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
    public:
    int scores[5],total,i;
    Student(){
        total=0;
    }
    void input(){
        for(i=0;i<5;i++){
            cin>>scores[i];
        }
    }
    int calculateTotalScore(){
        for(i=0;i<5;i++){
            total=total+scores[i];
        }
        return total;
    }
};

int main() {
