link: https://www.codingninjas.com/studio/guided-paths/oops-in-c/content/274160/offering/3757747?leftPanelTab=0

#include <bits/stdc++.h> 
#include<iostream>

#include<algorithm>

using namespace std;

class Fraction {

    public:
    int num, den;

    public:
    Fraction(int a, int b){
        num=a, den=b;
    }
    void add(Fraction& p){
        int a=this->num, b=this->den, c=p.num, d=p.den;
        this->num=(a*d)+(b*c);
        this->den=(b*d);
    }
    void multiply(Fraction& p){
        int a=this->num, b=this->den, c=p.num, d=p.den;
        this->num=(a*c);
        this->den=(b*d);
    }
    void simplify(){
        int a=__gcd(num, den);
        this->num=num/a;
        this->den=den/a;
    }
    void print(){
        cout << num << "/" << den << endl;
    }

};

int main() {

    int num, den;
    cin >> num >> den;
    int n;
    cin >> n;
    Fraction s(num, den);
    while (n>0){
        int a, b, c;
        cin >> a >> b >> c;
        Fraction t(b, c);
        if (a==1){
            s.add(t);
            s.simplify();
            s.print();
        } else if (a==2){
            s.multiply(t);
            s.simplify();
            s.print();
        }
        n--;
    }

    return 0;
}