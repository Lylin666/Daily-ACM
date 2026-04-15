#include <stdio.h>
#define MAX 1000
char num[16] = {'0','1','2','3','4','5','6','7','8','9',
                'A','B','C','D','E','F'};
int get_diff(char a){
    if (a > '9')return a - 'A' + 10;
    else return a - '0';
}
int main(){
char input[MAX]={0};
char output[MAX]={0};
int original_n = 0;
int target_n = 0;
scanf("%d",&original_n);
scanf("%s",input);
scanf("%d",&target_n);
int length_of_input=0;
for(;input[length_of_input]!=0;length_of_input++);
int base_num = 1;
int input_result = 0;
for(int i=length_of_input-1;i>=0;i--){
    input_result += base_num * get_diff(input[i]);
    base_num *= original_n;
}
int j=0;
if (input_result==0){output[0]='0';}
else{
    while(input_result > 0){
        output[j] = num[input_result % target_n];
        input_result = input_result / target_n;
        //printf("%c\n",output[j]);
        j++;
    }
}
//printf("%c\n",output[j-1]);
for(int i=j;i>=0;i--){
    printf("%c",output[i]);
}
return 0;

}
