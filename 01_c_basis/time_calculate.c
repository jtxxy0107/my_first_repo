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
   int work_hour = total_time1/60;
   int work_minute  = total_time1%60;
   printf("停留时间:%d小时%d分钟\n",work_hour,work_minute);


   

   

return 0;
}
