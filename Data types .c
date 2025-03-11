#include <stdio.h>
#include <stdbool.h>
int main() {
    
    char a = 'c';
    char b[] ="subro";
    float c = 3.141592;
    double d = 3.141592653589793;
    bool e = true;
    char f = 100;
    unsigned char g  =255;
    short int h = 32767;
    unsigned short int i = 65535;
    int j = 2147483647;
    unsigned int k = 4294967295l;
    long long int l = 9223372036854775807;
    unsigned long long int m = 18446744073709551615u;
    
    printf("%c\n",a);
    printf("%s\n",b);
    printf("%f\n",c);
    printf("%lf\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    printf("%d\n",g);
    printf("%d\n",h);
    printf("%d\n",i);
    printf("%d\n",j);
    printf("%u\n",k);
    printf("%lld\n",l);
    printf("%llu\n",m);


    return 0;
}
