#include<stdio.h>
int main()
{


    float km,time,total;
    long int phone,aadhar;
    int option,per,base;
    printf("\nEnter your aadhar no.: ");
    scanf(" %ld",&aadhar);
    printf("\nEnter your phone no.: ");
    scanf(" %ld",&phone);
    printf("\nEnter distance from pickup and drop: ");
    scanf(" %f",&km);
    printf("\nEnter current time in (24Hr clock) : ");
    scanf(" %f",&time);
    if(time>=20 || time<=6)
    {
        per=20;
    }
    else
    {
        per=10;
    }
    printf("\nChoose your ride:\n 1)Auto 2)Cab 3)XL Cab 4)Premium comfort\n ");
    scanf(" %d",&option);
    switch(option)
    {
    case 1:base=20;
    break;
    case 2:base=40;
    break;
    case 3:base=100;
    break;
    case 4:base=200;
    break;
    default:printf("Invalid choice");
    }
    


    //Now the visual of the bill would be coded


    printf("================================================");
    printf("\n                    UBER                        \n");
    printf("================================================\n\n\n");
    printf("Here's your receipt for your ride.\n Hope you enjoyed the ride with us\n");
    printf("\n\n\n\n");
    printf("Phone no. %ld\n",phone);
    printf("Distance travelled =  %.2f\n",km);
    printf("Ride start time =  %.2f\n",time);
    if(time>=20 || time<=6)
    {
        printf("Night time surcharge added\n");
    }


    if(option==1)
    {
        printf("Ride type: Auto\n");
    }
    else if(option==2)
    {
         printf("Ride type: Cab\n");
    }
      else if(option==3)
    {
         printf("Ride type: XL Cab\n");
    }
      else 
    {
         printf("Ride type: Premium comfort\n");
    }
    
total=base+per*km;
    printf("================================================");
    printf("\n\nTotal                        = %.2f Rs.\n",total);
    printf("================================================");
    
    
    
    return 0;
}  
