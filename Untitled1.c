#include<stdio.h>
main()
{
    int n,i;
    printf("Enter customer number \n");
    scanf("%d",&n);
    printf("Enter Inter Arrival Time\n");
    int m[100];
    for(i=1;i<=n;i++){
        scanf("%d",&m[i]);
    }
    int a[100];
    a[1]=0;
    for(i=2;i<=n;i++){
        a[i]=m[i]+a[i-1];
    }
    for(i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
printf("\nCustomer   Inter A.T.     Arival T.\n");
for (i=1;i<=n;i++)
    printf("\n%d\t\t %d\t\t %d\t\t",i,m[i],a[i]);

}
