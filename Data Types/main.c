#include<stdio.h>
#include<string.h>      //includes string data type.

int main()
{
    //integers
    int a = 5;
    printf("Value stored in a : %d\n" , a);

    //float and double are used to hold real numbers.
    float b = 5.5;
    printf("Value stored in b : %f\n" , b);

    double c = 5.5;
    printf("Value stored in c : %f\n" , c);

    //float with 2 decimal values
    float d = 5.57821;
    printf("Value stored in d : %.2f\n" , d);

    //characters
    char e = 'a';
    printf("Value stored in d : %c\n" , e);

    //short and long
    short f;
    long g;
    long long h;
    long double i;

    printf("size of short = %d bytes\n", sizeof(f));
    printf("size of long = %d bytes\n", sizeof(g));
    printf("size of long long = %d bytes\n", sizeof(h));
    printf("size of long double= %d bytes\n", sizeof(i));

    //signed and unsigned are type modifiers. You can alter the data storage of a data type by using them:

    //signed - allows for storage of both positive and negative numbers
    //unsigned - allows for storage of only positive numbers

    // valid codes
    unsigned int x = 35;
    int y = -35;  // signed int
    int z = 36;  // signed int

    // invalid code: unsigned int cannot hold negative integers
    unsigned int num = -35;

    //string or words using arrays
    char j[10] = "Kartikey";
    printf("String in j: %s", j);
    return 0;
}
//Program By TMtechnomania