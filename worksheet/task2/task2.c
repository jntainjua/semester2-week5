/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Jude Ntainjua
 * ID: 202028874
 */

#include <stdio.h>
#include <string.h>

int main(void){
    long decimal = 0;
    char hex[9];
    
    printf("Enter a hexadecimal:");
    scanf("%8s", hex);   // read up to 8 characters
    
    int len = strlen(hex);
    
    for(int i = 0; i < len; i++){
        char c = hex[i];
        int value;
        
        // determine numeric value of hex digit
        if(c >= '0' && c <= '9'){
            value = c - '0';
        }
        else if(c >= 'A' && c <= 'F'){
            value = c - 'A' + 10;
        }
        else if(c >= 'a' && c <= 'f'){
            value = c - 'a' + 10;
        }
        else{
            // invalid character
            printf("Error: Invalid Hexadecimal\n");
            return 0;
        }
        
        // shift previous result by base 16 and add new digit
        decimal = decimal * 16 + value;
    }
    
    // print the decimal result
    printf("decimal:%ld\n", decimal);
    
    return 0;
}