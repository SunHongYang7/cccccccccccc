#include <stdio.h>
#include <stdlib.h> 
struct pid
{
	float SetSpeed;
	float ActualSpeed;
	float err;
	float err_last;
	float Kp,Ki,Kd;
	float voltage;
	float integral;
	float umax;
	float umin;
} pid; 
void PID_init(void)
{ 
	printf("PID_init begin \n");
	pid.SetSpeed=0.0;
	pid.ActualSpeed=0.0;
	pid.err=0.0;
	pid.err_last=0.0;
	pid.voltage=0.0;
	pid.integral=0.0; 
 	pid.Kp=0.2;
 	pid.Ki=0.1; //增大了积分环节的值 
 	pid.Kd=0.2;
 	pid.umax=400;
 	pid.umin=200;
 	printf("PID_init end \n");
 }
 float PID_realize(float speed)
 {
 	int index;
 	pid.SetSpeed=speed;
 	pid.err=pid.SetSpeed-pid.ActualSpeed;
	if(pid.ActualSpeed>pid.umax)
	{
		if(abs(pid.err)>200)
		{
			index=0;
		}
		else
		{
			index=1;
			if(pid.err<0)
			{
				pid.integral+=pid.err;
			}
		}
	}
	else if(pid.ActualSpeed<pid.umin)
	{
		if(abs(pid.err)>200)
		{
			index=0;
		}
		else
		{
			index=1;
			if(pid.err>0)
			{
				pid.integral+=pid.err;
			}
			else
			{
				index=1;
				pid.integral+=pid.err;
			}
		}
		pid.voltage=pid.Kp*pid.err+index*pid.Ki*pid.integral+pid.Kd*(pid.err-pid.err_last);
		pid.err_last=pid.err;
		pid.ActualSpeed=pid.voltage*1.0;
		return pid.ActualSpeed;
	}
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

