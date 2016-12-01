// 3. Write a program to create a inventory program to accept product name, unit price and quantity and to display the details with actual value of N products using structure and function
#include <stdio.h>
int n;
struct inventory {
        char pn[30];
        int price;
        int qnt;
};
void display(struct inventory x[],int n)
{
        int i;
        for(i=0; i<n; i++) {
                printf("%d product name is %s\n",i+1,x[i].pn);
                printf("%d price is %d\n",i+1,x[i].price);
                printf("%d quantity is %d\n",i+1,x[i].qnt);
        }


}

int main(int argc, char const *argv[]) {
        int i;
        printf("Enter total number of Products:\n ");
        scanf("%d",&n);
        struct  inventory var[n];
        for(i=0; i<n; i++) {
                printf("Enter %d Product name:\n",i+1);
                scanf("%s",&var[i].pn);
                printf("Enter %d price:\n",i+1);
                scanf("%d",&var[i].price);
                printf("Enter %d Quantity:\n",i+1);
                scanf("%d",&var[i].qnt);
        }
        display(var,n);

        return 0;
}
