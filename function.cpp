// #include<iostream> oops stl
// using namespace std;
// int sum(int x , int y){
//     return x+y;
// }
// int main(){
//     int x,y;
//     cin>>x>>y;
//     int ans=sum(x,y);
//     cout<<ans;
//}
// #include <iostream>
// using namespace std;

// void swapNumbers(int x, int y) {
//     int temp = x;
//     x = y;
//     y = temp;
//     cout << x << " " << y;
// }

// int main() {
//     int x, y;
//     cin >> x >> y;
//     swapNumbers(x, y);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// void swapNumbers(int &x, int &y) {
//     int temp = x;
//     x = y;
//     y = temp;
// }
// int main() {
//     int x, y;
//     cin >> x >> y;
//     swapNumbers(x, y);
//     cout << x << " " << y;
//     return 0;
// }   
#include <iostream>
using namespace std;

class Complex {
    int a, b;   // data members
public:
    void setNumbers(int n1, int n2) {
        a = n1;
        b = n2;
    }

    // friend function declaration
    friend Complex sumComplex(Complex c1, Complex c2);

    void printNumbers() {
        cout << "Number is: " << a << " + " << b << "i" << endl;
    }
};

// friend function definition
Complex sumComplex(Complex c1, Complex c2) {
    Complex c3;
    c3.setNumbers((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}

int main() {
    Complex c1, c2, c3;

    c1.setNumbers(1, 2);
    c2.setNumbers(3, 4);

    c1.printNumbers();
    c2.printNumbers();

    c3 = sumComplex(c1, c2);
    c3.printNumbers();

    return 0;
}
