#include <stdio.h>
#include <stdlib.h>
struct _pid{
	float SetSpeed;
	float ActualSpeed;
	float err;
	float err_next;
	float err_last;
	float Kp,Ki,Kd;
	float voltage;
	float integral;
}pid;
void PID_init()
{
	printf("PID_inti begin\n");
	pid.SetSpeed=0.0;
	pid.ActualSpeed=0.0;
	pid.err=0.0;
	float err_next=0.0;
	pid.err_last=0.0;
	pid.voltage=0.0;
	pid.integral=0.0;
	pid.Kp=0.2;
	pid.Ki=0.015;
	pid.Kd=0.2;
	printf("PID_init end\n");	
} 
float PID_realize(float speed)
{
	pid.SetSpeed=speed;
	pid.err=pid.SetSpeed-pid.ActualSpeed;
	float
	incrementSpeed=pid.Kp*(pid.err-pid.err_next)+pid.Ki*pid.err+pid.Kd*(pid.err-2*pid.err_next+pid.err_last);
	pid.ActualSpeed +=incrementSpeed;
	pid.err_last=pid.err_next;
	pid.err_next=pid.err;
	return pid.ActualSpeed;	
}
int main()
{
	printf("System begin \n");
	PID_init();
	int count=0;
	while(count<1000)
	{
		float speed=PID_realize(200.0);
		printf("%f\n",speed);
		count++;
	}
	return 0;
}
