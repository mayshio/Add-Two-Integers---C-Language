//
//  main.c
//  AddSubMulDiv2Numbers
//
//  Created by Shio on 22/07/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a;
    int b;
    
    printf("enter two integers: ");
    
    scanf("%d %d", &a, &b);
    
    
    int sum;
    sum = a + b;
    
    int product;
    product = a * b;
    
    int subtract;
    subtract = a - b;
    
    float division;
    division = a / b;
    
    printf("sum: %d\n",sum);
    printf("product: %d\n" , product);
    printf("subtract: %d\n" , subtract);
    printf("division: %f\n" , division);
    
    
    return 0;
}
