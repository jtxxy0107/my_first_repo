# include <stdio.h>
int main()
 { 
   int hour1;
   int minute1;  
   int hour2;
   int minute2;
   printf("Start time:");
   scanf("%d %d",&hour1,&minute1);
   printf("End time:");
   scanf("%d %d",&hour2,&minute2);
   int total_time1 = (hour2-hour1)*60+(minute2-minute1);
   double total_time2 = total_time1/60.0;
   printf("You worked: %.2fhours",total_time2);



   

   

return 0;
}
