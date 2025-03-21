#include   "bits/stdc++.h"
#include <cstdio>

using namespace std;

void my_swap(char &a, char &b) {

    char temp;
    temp = a;
    a = b;
    b = temp;

    return;
}

int main(){
    char char_arra[3];
    string res[100];
    int counter = 0;
    while(scanf("%c%c%c\n",&char_arra[0],&char_arra[1],&char_arra[2]) != EOF) {
        
        if (char_arra[0] > char_arra[1]) {
           my_swap(char_arra[0], char_arra[1]);
        }

        if (char_arra[1] > char_arra[2]) {
            my_swap(char_arra[1], char_arra[2]);
        }
        if (char_arra[0] > char_arra[1]) {
            my_swap(char_arra[0], char_arra[1]);
        }

        res[counter] = char_arra;
        counter++;
    }

    for (const string& element : res) {
        if (!element.empty()) {
            printf("%c %c %c\n",element[0],element[1],element[2]);
        }
    }

    return 0;
}


/* #include <iostream>
using namespace std;

void swap_char(char& a, char& b)
{
    char container = a;
    a = b;
    b = container;
}

int main()
{
    char a, b, c;
    while (cin >> a >> b >> c)
    {
        if (c < b) swap_char(c, b);
        if (c < a) swap_char(c, a);
        if (b < a) swap_char(b, a);
        
        cout << a << " " << b << " " << c << "\n";
    }

    return 0;
} */