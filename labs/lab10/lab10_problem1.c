#include <stdio.h>

int main()
{
	char string[40], even[20], odd[20];
	char *p, *p_start, *e, *o;
	int i;

	printf("Enter a string (40 characters maximum): ");
	scanf("%s", string);
	
	p = p_start = string;
	e = even;
	o = odd;

	for(i = 0; i < 40; i++){
		if(*p == '\0'){
		break;
		}
	
		if((p - p_start) % 2 == 0){
			*o = *p;
			o++;
		}
		else{
			*e = *p;
			e++;
		}
		p++;
	}

	
	*o = '\0';
	*e = '\0';

	printf("The even string is: %s \n", even);
	printf("The odd string is: %s \n", odd);
	

	return 0;
}
