#include<stdio.h>
#include<string.h>

void input(char s[][20], int n);
int vowelCount(char str[]);
void f3();


int main(){
    // char str[5][20];
    // input(str,5);
    
    // for(int i =0;i<5;i++){
    //     printf("%s | Vowels = %d",str[i],vowelCount(str[i]));
    // }
    // printf("\n");

    f3();
    printf("\n");
    return 0;
}

void input(char s[][20], int n)
{   
    int i;
    printf("Enter %d string",n);
    for(i=0;i<n;i++){
        fgets(s[i],20,stdin);
        
        s[i][strlen(s[i])-1]='\0';
    }

}

int vowelCount(char str[]){
    char v[]= "aeiouAEIOU";
    int count = 0;
    for(int i =0;str[i];i++){
        for(int j =0;v[j];j++){
            if(str[i] == v[j]){
                count++;
                break;

            }
        }
    }
    return count;
}

void sort(char city[][20],int n){
    int r,i;
    char temp[20];
    for(r=1;r<n;r++){
        for(i =0;i<=n-1-r;i++){
            if (strcmp(city[i],city[i+1])>0)
            {
                strcpy(temp,city[i]);
                strcpy(city[i],city[i+1]);
                strcpy(city[i+1],temp);
            }
        }
    }
}

void f3(){
    char city[10][20];
    input(city,10);
    sort(city,10);
    for(int i =0;i<10;i++){
        printf("\n%s",city[i]);
    }
}