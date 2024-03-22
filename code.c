#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int n;
	    scanf("%d",&n);
	    if(1<=n<=15){
	        if(1<n<=10){
	            printf("Lower Double\n");
	        }
	        else if(11<=n<=15){
	            printf("Lower Single\n");
	        }
	    }
	    else{
	        if(15<n<=25){
	            printf("Upper Double\n");
	        }
	        else if(26<=n<=30){
	            printf("Upper Single\n");
	        }
	    }
	}
	return 0;
}

