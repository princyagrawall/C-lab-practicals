#include <stdio.h>

struct Employee {
    char Name[50];
    float basic_pay;
    float gross_pay;

};

int main(){
    struct Employee emp[100];

    int n;
    printf("Number of employees:");
    scanf("%d",&n);
    

    for (int i=0;i<n;i++){
        printf("***********Fill the basic details of Employees********\n");
        printf("Name of the employee: \n");
        scanf(" %[^\n]",emp[i].Name);
        printf("Basic salary of the employee: \n");
        scanf("%f", &emp[i].basic_pay);

        
        emp[i].gross_pay= emp[i].basic_pay + (0.5* emp[i].basic_pay);

    }
        printf("-------------------------------------------------\n");
        printf("| Name\t\t\t\t| Gross_pay\t |\n");
     
    for(int i=0;i<n;i++){

        printf("------------------------------------------------\n");
        printf("| %s\t\t\t| %.2f\t|\n",emp[i].Name ,emp[i].gross_pay);
        printf("------------------------------------------------\n");


}
return 0;
}                   