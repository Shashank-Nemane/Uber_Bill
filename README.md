                                    ACTIVITY - 6


RESEARCH:

Links What Is Billing? Definition, Types & Importance

https://sathee.iitk.ac.in/article/reasoning/input-output-reasoning/#:~:text=Input-output%20reasoning%20is%20a%20cognitive%20skill%20that%20involves,the%20input%20required%20to%20produce%20a

Taxi Bill Format in Excel, Word, and PDF


The concept of bill is used in various industries, salary payment ,groceries , hospital, internet services, ticket booking.But the basic format of it is the same.Billing is the process when a business sends an invoice to the ‘payee’ or customer for the products or services provided and collects payment .Ultimately, billing is the transaction between a business selling a product or service and getting paid for it. Apart from the price, you can usually find the due date, tax information, payment methods, and details about the customer.
The underlying logic used in it is Forward Input-output reasoning. It is a cognitive skill that involves understanding the relationship between inputs and outputs in a system. It is used to predict the output of a system given a certain input.


ANALYSIS:

There are many types of bill,
1. Recurring Billing
2. Milestone Billing
3.  Hourly Billing
4. Progressive Billing
5. Prepaid Billing

6.Metered billing
Metered billing is a pricing model where the customer is charged based on their consumption level of the product or service.Typically, under metered billing, the customers subscribe to the product plan that will include a base price for a specific usage limit. Once the customers cross this limit, they are charged extra for every additional unit of consumption.
Eg. Cab ride
In a cab ride ,the estimated cost is shown to you before booking.  It is calculated using the metered system of billing.There is a fixed base amount regardless of the distance. There is a base price for insurance of profit, as short distance travelling is less profitable.The final cost has two components ,base price and distance travelled*cost per km. The base price and cost per unit changes based on location,demand,time,etc.For example there is a night time surge ,where after a fixed time the cost is increased.


IDEATE:
Design and implement a billing system for a cab service (similar to Uber) that accurately calculates the fare for each ride based on factors such as distance traveled, time taken, ride type (e.g., economy, premium), surge pricing during peak hours. The system should generate an itemized invoice for customers.
The input required to be given by the customer is;


Identity proof
Phone no.
Distance from pickup and drop
Time
Type of ride




Build:


CODE:


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
TEST:


Enter your aadhar no.: 325436571356


Enter your phone no.: 3125645356


Enter distance from pickup and drop: 15


Enter current time in (24Hr clock) : 22


Choose your ride:
 1)Auto 2)Cab 3)XL Cab 4)Premium comfort
 3
================================================
                    UBER                        
================================================




Here's your receipt for your ride.
 Hope you enjoyed the ride with us








Phone no. 3125645356
Distance travelled =  15.00
Ride start time =  22.00
Night time surcharge added
Ride type: XL Cab
================================================


Total                        = 400.00 Rs.
================================================
