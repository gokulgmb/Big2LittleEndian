//Big2LittleEndian converter
//Author-Gokul Babu
#include<stdio.h>
#include<string.h>
 
int main() {
   char str[3000], temp, temp2[3000];
   int i, j = 0;
 
   printf("\nEnter the string :");
   gets(str);
 
   i = 0;
   j = strlen(str) - 1;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
     i = 0;
   j = 1;
 while (i<=strlen(str))
 {
 	temp = str[i];
 	str[i] = str[j];
 	str[j] = temp;
 	i = i+2;
 	j = j+2;
 	
 }
 i=0;
    printf("\nLittle endian string is:");
   
 while (i<=strlen(str))
    {
    	temp=str[i];
    	temp2[0]=temp;
    		temp=str[i+1];
    	temp2[1]=temp;
    		temp=str[i+2];
    	temp2[2]=temp;
    		temp=str[i+3];
    	temp2[3]=temp;
    		temp=str[i+4];
    	temp2[4]=temp;
    		temp=str[i+5];
    	temp2[5]=temp;
    		temp=str[i+6];
    	temp2[6]=temp;
    		temp=str[i+7];
    	temp2[7]=temp;
   		i = i+8;
   		printf("\n%s", temp2);
    }
   return (0);
}