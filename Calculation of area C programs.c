//Calculating area of a rectangle
#include <stdio.h> //scanf(), printf()
int main() {
    int l, w, area;
    printf("Enter length (cm):", l);
    scanf("%d",&l);
    
    printf("Enter width (cm):", w);
    scanf("%d",&w);
    
//Area calculation begins
    area= l * w;
    printf("area or l and w %d", area);
    
    return 0;
    
    
}