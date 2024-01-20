//WAP TO TAKES NAME AND MARKS OF 20 STUDENTS AND SORT 
//THEM IN DESCENDING ORDER ON THE BASIC OF MARKS.
#include<stdio.h>
struct student
{
	char name[20];
	int marks;
};
int main(){
	struct student s[5],temp;
	int i,j;
	for(i=0;i<=4;i++){
		printf("%d.Enter name : ",i+1);
		scanf("%s",s[i].name);
		printf("Enter marks :");
		scanf("%d",&s[i].marks);
	}
	for(i=0;i<=4;i++){
		for(j=i+1;j<=4;j++){
			if(s[i].marks<s[j].marks){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("Data in Descending order\n");
	for(i=0;i<=4;i++){
	printf("Name=%s ||| Marks=%d \n",s[i].name,s[i].marks);
	}
}
