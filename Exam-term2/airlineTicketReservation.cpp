


#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct flight {
   string passengerName;
   string passengerEmail;
   string destination;
   int ticketId;
   flight *next;
};

 class AirlineTicketReservation{
 private:
     flight *head;
     flight *tail;

 public:
     AirlineTicketReservation(){
         head = NULL;
         tail =NULL;
     }

     void bookTicket (){
         string names;
         string email;
         string destination;

         cout << "Enter name : "<<endl;
         cin>>names;

         cout << "Enter email :" << endl;
         cin>>email;

         cout << "Enter destination :" << endl;
         cin>>destination;

         flight *newFlight = new flight();
         int ticketId = 45236;
         newFlight->passengerName = names;
         newFlight->passengerEmail = email;
         newFlight->destination = destination;
         newFlight->ticketId = ticketId;
         newFlight->next = NULL;
         cout<<"xxxx"<<endl;
         if(head == NULL){
             head = newFlight;
             tail = newFlight;
             cout<<"hhhh"<<endl;
//             displayPassengers();

         }
         else{
             tail->next = newFlight;
             tail = newFlight;
             displayPassengers();
         }
//         displayPassengers();

     }


     void displayPassengers(){
         flight *temp = head;

         if(temp !=NULL){
             while (temp !=NULL){
                 cout<<"\t\t\t passenger: " <<temp->passengerName<<endl;
                 cout<<"\t\t\t email: " <<temp->passengerEmail<<endl;
                 cout<<"\t\t\t destination: " <<temp->destination<<endl;
                 cout<<"\t\t\t ticket Id: " <<temp->ticketId<<endl;

                 temp = temp->next;
             }
             cout<<endl;
         } else{
             cout<<"\t\t\t No reservation made!"<<endl;
         }
     }
 };


 int main(){
     char toContinue;
     do{
         AirlineTicketReservation airlineTicketReservation;
         int choice;
         cout << "\t\t\t\t ....... Welcome to Abc-Airline-ltd ....." << std::endl;
         cout << "\t\t\t\t 1. Reserve ticket  " << std::endl;
         cout << "\t\t\t\t 2. Cancel Reservation  " << std::endl;
         cout << "\t\t\t\t 3. Check whether a ticket is reserved  " << std::endl;
         cout << "\t\t\t\t 4. display passengers  " << std::endl;
         cout << "\t\t\t\t 5. Exit! " << std::endl;


         cout<<"\t\t\t Make a choice: "<<endl;
         cin>>choice;

         switch (choice) {
             case 1:
                 airlineTicketReservation.bookTicket();
                 break;
             case 4:
                 airlineTicketReservation.displayPassengers();
                 break;
             default:
                 cout<<"\t\t\t Invalid operation!"<<endl;
                 break;
         }

         cout<<"do you want to continue!? Y/N "<<endl;

         cin>>toContinue;

     } while (toContinue == 'Y' || toContinue == 'y');

     return 0;
 }