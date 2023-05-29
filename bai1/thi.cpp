#include <stdio.h> 
#include <conio.h> 
int max(int a, int b) 
{ 
    return (a > b) ? a : b; 
} 
int main() 
{ 
    float a, b, c, d; 
    printf("Nhap so a: "); 
    scanf("%d", &a); 
    printf("Nhap so b: "); 
    scanf("%d", &b); 
    printf("Nhap so c: "); 
    scanf("%d", &c); 
    printf("Nhap so d: "); 
    scanf("%d", &d); 
    printf("So lon nhat trong 4 so la: %5.2f ", max(max(a, b), max(c, d))); 
    getch(); 
   
    return 0; 
    
}