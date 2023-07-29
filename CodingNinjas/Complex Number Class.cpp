link: https://www.codingninjas.com/studio/guided-paths/oops-in-c/content/274160/offering/3757742?leftPanelTab=0

#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    
    public:
    int real, img;

    public:
    ComplexNumbers(int a, int b){
        real=a; img=b;
    }
    void plus(ComplexNumbers& p){
        this->real = (this->real)+p.real;
        this->img = (this->img)+p.img;
    }
    void multiply(ComplexNumbers& p){
        int a=this->real, b=this->img, c=p.real, d=p.img;
        this->real=(a*c)-(b*d);
        this->img=(a*d)+(b*c);
    }
    void print(){
        cout << real << " + i" << img << endl;
    }

};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}