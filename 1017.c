#include<stdio.h>
int  main()
{
    int spent_time,average_speed;
    
    
    double liters_needed,total_distance;
    
    scanf("%d%d",&spent_time,&average_speed);
    
    total_distance = spent_time*average_speed;
    
    liters_needed = total_distance/12;
    
    printf("%.3lf\n",liters_needed);
    
    return 0;

}
