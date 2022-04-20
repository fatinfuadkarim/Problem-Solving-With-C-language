#include <stdio.h>
int main() {
	int sec, hour, month, secs;
	printf("Please input seconds: ");
	scanf("%d", &sec);

	hour = (sec/3600);

	month = (sec -(3600*hour))/60;

	secs = (sec -(3600*hour)-(month*60));

	printf("HOUR-MONTH-SEC - %d:%d:%d\n",hour,month,secs);

	return 0;
}
