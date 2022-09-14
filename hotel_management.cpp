#include<iostream>
using namespace std;

int main()
{
    // Varables Initialization and Declaration
    int quantity;
    int choice;
    // Quantity of Items that we have now
    int roomsQ=0, pastaQ=0, burgerQ=0, noodlesQ=0, shakeQ=0, chickenQ=0;
    // Items that we sold
    int roomsS=0, pastaS=0, burgerS=0, noodlesS=0, shakeS=0, chickenS=0;
    // Total price of each the item
    int roomsP=0, pastaP=0, burgerP=0, noodlesP=0, shakeP=0, chickenP=0;


    // List to ask the number of items in hotel
    cout<<"\n\t\t\t QUANTITY OF ITEMS WE HAVE";
    cout<<"\n Rooms available :";
    cin>>roomsQ;
    cout<<"\n Pasta available :";
    cin>>pastaQ;
    cout<<"\n Burgers available :";
    cin>>burgerQ;
    cout<<"\n Noodles available :";
    cin>>noodlesQ;
    cout<<"\n Shake available :";
    cin>>shakeQ;
    cout<<"\n Chicken-rolls available :";
    cin>>chickenQ;

    m:  // It's label we use for menu after selecting a choice we will back to the menu( if we want to select more things)

    //MENU
    cout<<"\n\t---------------------------------------------------------------";
    cout<<"\n\t\t\t PLEASE SELECT FROM THE MENU ";
    cout<<"\n 1) Rooms";
    cout<<"\n 2) Pasta";
    cout<<"\n 3) Burger";
    cout<<"\n 4) Noodles";
    cout<<"\n 5) Shake";
    cout<<"\n 6) Chicken-rools";
    cout<<"\n 7) Information regarding sales and collection";
    cout<<"\n 8) Exit";
    
    cout<<"\n\t----------------------------------------------------------------";
    cout<<"\n ";
    cout<<"\n\t\t\t PLEASE ENTER YOUR CHOICE : ";
    cin>>choice;

    // Add functionalities to the choice part
    switch(choice)
    {
        case 1:
            cout<<"\n Enter the number of rooms you want : ";
            cin>>quantity;
            if(roomsQ-roomsS >= quantity) //roomsQ-roomS is reamining rooms
            {
                roomsS=roomsS+quantity;
                roomsP= roomsP+quantity*1200; //let's say 1200 price of each room
                cout<<"\n\n \t\t"<<quantity<<" rooms have been alloted to you!!! ";
            }
            else
              cout<<"\n\t Only "<<roomsQ-roomsS<<" Remaining rooms in hotel";
              break;

        case 2:
            cout<<"\n Enter Pasta Quantity : ";
            cin>>quantity;
            if(pastaQ-pastaS >= quantity) //pastaQ-pastaS is reamining rooms
            {
                pastaS=pastaS+quantity;
                pastaP= pastaP+quantity*120; //let's say 120 price of each room
                cout<<"\n\n \t\t"<<quantity<<" pasta is the order!! ";
            }
            else
              cout<<"\n\t Only "<<pastaQ-pastaS<<" Pasta remaining in hotel";
              break;

        case 3:
            cout<<"\n Enter Burger Quantity : ";
            cin>>quantity;
            if(burgerQ-burgerS >= quantity) //burgerQ-burgerS is reamining rooms
            {
                burgerS=burgerS+quantity;
                burgerP= burgerP+quantity*100; //let's say 100 price of each room
                cout<<"\n\n \t\t"<<quantity<<" burger is the order !! ";
            }
            else
              cout<<"\n\t Only "<<burgerQ-burgerS<<" Burger remaining in hotel";
              break;

        case 4:
            cout<<"\n Enter Noodles Quantity : ";
            cin>>quantity;
            if(noodlesQ-noodlesS >= quantity) //noodlesQ-noodlesS is reamining rooms
            {
                noodlesS=noodlesS+quantity;
                roomsP= roomsP+quantity*150; //let's say 150 price of each room
                cout<<"\n\n \t\t"<<quantity<<" noodles is order !! ";
            }
            else
              cout<<"\n\t Only "<<noodlesQ-noodlesS<<" noodles remaining in hotel";
              break;

        case 5:
            cout<<"\n Enter Shake Quantity : ";
            cin>>quantity;
            if(shakeQ-shakeS >= quantity) //shakeQ-shakeS is reamining rooms
            {
                shakeS=shakeS+quantity;
                shakeP= shakeP+quantity*80; //let's say 80 price of each room
                cout<<"\n\n \t\t"<<quantity<<" Shake is the order!! ";
            }
            else
              cout<<"\n\t Only "<<shakeQ-shakeS<<" shakes Remaining  in hotel";
              break;

        case 6:
            cout<<"\n Enter Chicken-rolls Quantity : ";
            cin>>quantity;
            if(chickenQ-chickenS >= quantity) //chikenQ-chikenS is reamining rooms
            {
                chickenS=chickenS+quantity;
                chickenP= chickenP+quantity*200; //let's say 200 price of each room
                cout<<"\n\n \t\t"<<quantity<<" Chicken-roll is the order!! ";
            }
            else
              cout<<"\n\t Only "<<chickenQ-chickenS<<" chiken-rolls Remaining in hotel";
              break;
        
        case 7:
            cout<<"\n\n\t\t DETAILS OF SALES AND COLLECTION ";

            cout<<"\n Number of rooms we had : "<<roomsQ;
            cout<<"\n Number of rooms we gave for rent : "<<roomsS;
            cout<<"\n Remaining rooms : "<<roomsQ-roomsS;
            cout<<"\n Price of Room collection for the day :"<<roomsP;

            cout<<"\n Number of pastas we sold : "<<pastaS;
            cout<<"\n Remaining pastas : "<<pastaQ-pastaS;
            cout<<"\n Price of Pasta collection for the day :"<<pastaP;

            cout<<"\n Number of burgers we sold : "<<burgerS;
            cout<<"\n Remaining burgers : "<<burgerQ-burgerS;
            cout<<"\n Price of Burger collection for the day :"<<burgerP;

            cout<<"\n Number of noodles we sold : "<<noodlesS;
            cout<<"\n Remaining noodles : "<<noodlesQ-noodlesS;
            cout<<"\n Price of Noodles collection for the day :"<<noodlesP;

            cout<<"\n Number of shake we sold : "<<shakeS;
            cout<<"\n Remaining shakes : "<<shakeQ-shakeS;
            cout<<"\n Price of shake collection for the day :"<<shakeP;

            cout<<"\n Number of chicken-rolls we sold : "<<chickenS;
            cout<<"\n Remaining chicken : "<<chickenQ-chickenS;
            cout<<"\n Price of Chicken-rolls collection for the day :"<<chickenP;

            cout<<"\n\n\n Total collection of the day = "<<roomsP+pastaP+burgerP+noodlesP+shakeP+chickenP;
            break;

        case 8:
            exit(0);

        default:
            cout<<" \n \t PLEASE SELECT THE NUMBER MENTIONED ABOVE !!";
    }
    
    goto m; //jump statement ... it will  transfer the control to menu after making choice
}