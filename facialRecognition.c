#include<stdio.h>
#include <math.h>

int main(void){
    double 
    first_eyes, 
    second_eyes, 
    third_eyes,
    first_nose_chin,
    second_nose_chin,
    third_nose_chin,
    ratio_1,
    ratio_2,
    ratio_3,
    diff_1_2,
    diff_2_3,
    diff_1_3;
    printf("Enter values in cm. \n");
    printf("Enter eye distance and nose-chin distance for image 1: \n"); 
    scanf("%lf %lf",&first_eyes,&first_nose_chin);
    printf("Enter eye distance and nose-chin distance for image 2: \n"); 
    scanf("%lf %lf",&second_eyes,&second_nose_chin);
    printf("Enter eye distance and nose-chin distance for image 3: \n"); 
    scanf("%lf %lf",&third_eyes,&third_nose_chin);

    ratio_1 = first_eyes/first_nose_chin; 
    ratio_2 = second_eyes/second_nose_chin; 
    ratio_3 = third_eyes/third_nose_chin;


    diff_1_2 = fabs(ratio_1 - ratio_2);
    diff_1_3 = fabs(ratio_1 - ratio_3); 
    diff_2_3 = fabs(ratio_2 - ratio_3);

    if ((diff_1_2 <= diff_1_3) && (diff_1_2 <= diff_2_3))
    printf("Best match is between images 1 and 2 \n");
    if ((diff_1_3 <= diff_1_2) && (diff_1_3 <= diff_2_3)) 
    printf("Best match is between images 1 and 3 \n");
    if ((diff_2_3 <= diff_1_3) && (diff_2_3 <= diff_1_2)) 
    printf("Best match is between images 2 and 3 \n");


    return 0;
}
