#include <stdio.h>
#include <conio.h>
struct PlaneTicket
{
   char Name[100];
   char Destination[100];
   float TicketPrice;

};
struct PlaneTicket b1={"Monir","Bombay",22000.25};
struct PlaneTicket b2={"Sharmin","Bangkok",12500.75};
main()
{
   printf("\n The details entered for the Structure PlaneTicket is");
   printf("\n For the first variable is");
   printf("\n Name is %s",&b1.Name);
   printf("\n Destination is %s",&b1.Destination);
   printf("\n Price is %f",&b1.TicketPrice);
   printf("\n For the Second variable is");
   printf("\n Name is %s",&b2.Name);
   printf("\n Destination is %s",&b2.Destination);
   printf("\n Price is %f",&b2.TicketPrice);

   getch();
}
