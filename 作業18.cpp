#include<stdio.h> 
#include<stdlib.h>
#include<string.h> 

#define MAX 10000
int main(void)
{

	char *str=(char*)malloc(sizeof(char)*MAX); 
    int B,D,num[128]={0}; 
    
    printf("�п�J�@�r��");
    scanf("%s",str);  
    
    D=strlen(str);
    
    for(B=0;B<D;B++){
    	num[(int)str[B]]++; 
	}
    for(B=0;B<128;B++){
    	
    	if(num[B]!=0){
    		
    		printf("�r��%c�X�{%d��",(char)B,num[B]);
    		
		}
	
	}
    return 0;
    
    free(str);

}
