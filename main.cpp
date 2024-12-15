#include <iostream>

using namespace std;
void tupleebil(int& x, int * e);
int function(int, int);

void delimiter(char , int );

int main() {
    char string[3];
    string [0] = 'h';
    printf("hi");
    cout<<endl;
    std::cout<<"Hello, World!"<<std::endl;

    printf("this will be your result: \n");
    int x, y;
    cin>>x;
    cin>>y;
    int z = function(x, y);
    char buffer[100];
    sprintf(buffer, "another way to contain your result %d", z);
    if (z > 10) {
        printf("z is greater than 10");
    } else {
        printf("z is less than 10");
    }
    int* e = new int;
    *e = 10;
    cout << "e: " << &e;
    tupleebil(x ,e);
    cout<<"x: " << x;
    delimiter(string[0],x);
    printf("%s", buffer);
    cout<<endl;
    printf("%d", z);
    return 0;
}


int function(int x, int y) {
    int z = x * y;
    printf("hello\n");
    return z;
}

void delimiter(char f, int x){
    if (x>1){
        f = 'h';
    }
    cout << f<<endl;
}
void tupleebil(int& x, int * e){
    x = 20;
    *e = x; cout << "x: " << x << endl << "e: " << *e<<endl;
}
