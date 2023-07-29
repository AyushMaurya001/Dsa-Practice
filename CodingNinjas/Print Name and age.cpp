link: https://www.codingninjas.com/studio/guided-paths/oops-in-c/content/274160/offering/3757748?leftPanelTab=0

#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class Person {

    private:
    string name;
    int age;

    public:
    void SetValue(string str, int n){
        name=str;
        age=n;
    }
    void GetValue(){
        cout << "The name of the person is " << name << " and the age is " << age << ".";
    }

};

int main() {

    string str;
    cin >> str;
    int n;
    cin >> n;
    Person man;
    man.SetValue(str, n);
    man.GetValue();

    return 0;
}