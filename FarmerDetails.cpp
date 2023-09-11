#include <stdio.h>
int getPrice(int);

struct farmer
{
    char name[10];
    int age;
    double aadhar_number;
    int wheat_quantity;
    double wheat_price;
    int paddy_qantity;
    double paddy_price;
};

 main()
{
    int i;
    struct farmer fr[4];
    printf("Enter the record of 10 farmers");
    for(i=0;i<2;i++){
        printf("\nEnter name");
        scanf("%s",&fr[i].name);
        printf("\nEnter age");
        scanf("%d",&fr[i].age);
        printf("\nEnter aadhar");
        scanf("%lf",&fr[i].aadhar_number);
        printf("\nEnter wheat quantity in kg");
        scanf("%d",&fr[i].wheat_quantity);
        printf("\nEnter wheat price per kg");
        scanf("%lf",&fr[i].wheat_price);
        printf("\nEnter paddy quantity in kg");
        scanf("%d",&fr[i].paddy_qantity);
        printf("\nEnter paddy price per kg");
        scanf("%lf",&fr[i].paddy_price);

    }
for(i=0;i<2;i++){
	double total_amount =((fr[i].wheat_quantity)*(fr[i].wheat_price)+(fr[i].paddy_qantity)*(fr[i].paddy_price));
    printf("\nname:%s,age:%d,aadhar:%lf,wheat quantity:%d,wheat price:%lf,paddy qantity:%d,paddy price:%lf,total amount:%lf",fr[i].name,fr[i].age,fr[i].aadhar_number,fr[i].wheat_quantity,fr[i].wheat_price,fr[i].paddy_qantity,fr[i].paddy_price,total_amount);
    
    
}
}
   




