#include <iostream>

using namespace std;

int function(int, int);



int main() {

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
    cout<<endl;
    describeResult(z);
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

