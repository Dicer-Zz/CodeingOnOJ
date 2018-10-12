     #include<stdio.h>  
      
    int a[101];  //????洢©????????????????ģ?  
    int main(){  
        int n_test;  
        int i,j,num,max;  
        int N,M;  
        scanf("%d",&n_test);  
        while(n_test--){  
            scanf("%d %d",&N,&M);  
            a[0]=0;  
            for(i=1;i<=N;i++){  
                scanf("%d",&a[i]);  
            }  
            if(M>N) {  
                printf("100");  
                continue;  
            }  
            //??????һ????????ģ?̰???  
            num=N-M+1;  
            max=0;  
            for(j=1;j<=num;j++){  
                if((a[j+M]-a[j-1]-1)>max){  
                    //???????  
                    max=(a[j+M]-a[j-1]-1);  
                }  
            }  
            printf("%d\n",max);  
        }  
    }  
