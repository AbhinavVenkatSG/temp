#include <stdio.h>
#include <math.h>

int main() {
   
// Initial 
    int x = 0;
    int y = 1;
    //            0 1
    //            x y
    int Q1[2] = { 0,0 };
    int Q2[2] = { 1,0 };
    int Q3[2] = { 0,-1 };
    int Q4[2] = { 1,-1 };

    



// Largest Y Value 
    int LargestY = Q1[y];

    if (LargestY < Q2[y]) {
        LargestY = Q2[y];
    }

    if (LargestY < Q3[y]) {
        LargestY = Q3[y];
    }

    if (LargestY < Q4[y]) {
        LargestY = Q4[y];
    }

    printf("The largest y is: %d\n", LargestY);


    // Lowest Y Value 
    int LowestY = Q1[y];

    if (LowestY > Q2[y]) {
        LowestY = Q2[y];
    }

    if (LowestY > Q3[y]) {
        LowestY = Q3[y];
    }

    if (LowestY > Q4[y]) {
        LowestY = Q4[y];
    }

    printf("The Lowest y is: %d\n", LowestY);


// Largest X Value 
    int LargestX = Q1[x];

    if (LargestX < Q2[x]) {
        LargestX = Q2[x];
    }

    if (LargestX < Q3[x]) {
        LargestX = Q3[x];
    }

    if (LargestX < Q4[x]) {
        LargestX = Q4[x];
    }

    printf("The largest x is: %d\n", LargestX);

    // Lowest X Value 
    int LowestX = Q1[x];

    if (LowestX > Q2[x]) {
        LowestX = Q2[x];
    }

    if (LowestX > Q3[x]) {
        LowestX = Q3[x];
    }

    if (LowestX > Q4[x]) {
        LowestX = Q4[x];
    }

    printf("The largest x is: %d\n", LowestX);


    int BL[2] = { LowestX, LowestY };
    int TL[2] = { LowestX, LargestY };
    int BR[2] = { LargestX, LowestY };
    int TR[2] = { LargestX, LargestY };

    // BL and TL Share x values
    // BL and BR Share y values
    // BR and TR share x values
    // TR and TL share y values

    printf("Bottom Left: %d, %d\n", LowestX, LowestY);
    printf("Top Left: %d, %d\n", LowestX, LargestY);
    printf("Bottom Right: %d, %d\n", LargestX, LargestY);
    printf("Top Right: %d, %d\n", LargestX, LowestY);

    if (BL[x] == TL[x] && BL[y] == BR[y] && BR[x] == TR[x] && TR[y] == TL[y]) {
        
        printf("This is a rectangle\n");
    }

    else {
        
        printf("This is not a triangle\n");
    }

    return 0;
}

