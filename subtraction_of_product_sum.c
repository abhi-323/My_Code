#include<stdio.h>

int sub(int n)
{
    int sum=0;
    int product=1;
    while(n>0)
    {
        sum+=n%10;
        product*=n%10;
        n/=10;
    }
    printf("\nsum=%d\nproduct=%d\n",sum,product);
    return product-sum;
}

        int main()
        {
            int num,d;

            printf("Enter No \n");
            scanf("%d",&num);

            d=sub(num);
            
            printf("Difference of Product and Sum=%d\n",d);
        }
