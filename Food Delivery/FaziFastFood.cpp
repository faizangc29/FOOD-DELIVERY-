#include<iostream>
#include<conio.h>
using namespace std;
class Pizza
{
	private;
		int pchoice,pchoice1,quantity,bill;
    	char pizza1[50] = "Chicken Fazita" ,pizza2[50]="Chicken Bar BQ" ,pizza3[50]="Peri Peri" ,pizza4[50]="Creamy Max";
    public:
	Pizza()
	{
		cout<<"\n1) "<<pizza1<<"\n";
        cout<<"2) "<<pizza2<<"\n";
        cout<<"3) "<<pizza3<<"\n";
        cout<<"4) "<<pizza4<<"\n";
        cout<<"\nPlease Enter which Flavour would you like to have?:";
        cin>>pchoice;
        if (pchoice>=1&&pchoice<=4)
        {
            cout<<"\n1) Small Rs.250\n"<<"2) Regular Rs.500\n"<<"3) Large Rs.900\n";
			cout<<"\nChoose Size Please:";
			cin>>pchoice1;
            if(pchoice1>=1 && pchoice1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			    case 1:
                {
                    bill = 250*quantity;
                    break;
                } 
			    case 2:
                {
                    bill = 500*quantity;
                    break;
                } 
			    case 3:
                {
                    bill = 900*quantity;
                    break;
                }
			}
            system("CLS");
            switch (pchoice1)
            {
                case 1:
                {
                    cout<<"\t\t\t--------Your Order Sir---------\n";
			        cout<<""<<quantity<<" "<<pizza1;
			        cout<<"\n>Your Total Bill is="<<bill<<"\n>Your Order Will be delivered in 40 Minutes";
			        cout<<"\n\n>Thank you For Ordering From FAZI. Fast Food\n";
			        break;
                }
                case 2:
                {
                    cout<<"\t\t\t--------Your Order Sir---------\n";
                    cout<<""<<quantity<<" "<<pizza2;
                    cout<<"\n>Your Total Bill is="<<bill<<"\n>Your Order Will be delivered in 40 Minutes";
                    cout<<"\n\n>Thank you For Ordering From FAZI. Fast Food\n";
                    break;
                }
                case 3:
                {
                    cout<<"\t\t\t--------Your Order Sir---------\n";
                    cout<<""<<quantity<<" "<<pizza3;
                    cout<<"\n>Your Total Bill is="<<bill<<"\n>Your Order Will be delivered in 40 Minutes";
                    cout<<"\n\n>Thank you For Ordering From FAZI. Fast Food\n";
                    break;
                }
                case 4:
                {
                    cout<<"\t\t\t--------Your Order Sir---------\n";
                    cout<<""<<quantity<<" "<<pizza4;
                    cout<<"\n>Your Total Bill is="<<bill<<"\n>Your Order Will be delivered in 40 Minutes";
                    cout<<"\n\n>Thank you For Ordering From FAZI. Fast Food\n";
                    break;
                }
                default:
                {
                    cout<<"\t\t\t--------Incorrect Choice Sir---------\n";
                    break;
                }
            }
        }
        

	}
}:
class Burgers
{
    private:
    int bchoice,quantity,bill;
    char bur1[50]="Zinger Burger",bur2[50]="Chicken Burger",bur3[50]="Beef Burger";
    public:
    Burgers()
    {
        cout<<"\n1 "<<bur1<<" Rs.180"<<"\n";
		cout<<"2 "<<bur2<<" Rs.150"<<"\n";
		cout<<"3 "<<bur3<<" Rs.160"<<"\n";
        cout<<"\nPlease Enter which Flavour would you like to Order?:";
        cin>>bchoice;
        if (bchoice>=1&&bchoice<=3)
        {
            cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
            switch(bchoice)
            {
                case 1:
                {
                    bill=180*quantity;
                    break;
                }
                case 2:
                {
                    bill=150*quantity;
                    break;
                }
                case 3:
                {
                    bill=160*quantity;
                    break;
                }
            }
            system("CLS");
            switch(bchoice)
            {
                case 1:
                {
                    cout<<"\t\t\t--------Your Order Sir---------\n";
                    cout<<""<<quantity<<" "<<bur1;
                    cout<<"\n>Your Total Bill is="<<bill<<"\n>Your Order Will be delivered in 30 Minutes";
                    cout<<"\n\n>Thank you For Ordering From FAZI. Fast Food\n";
                    break;
                }
                Case 2:
                {
                    cout<<"\t\t\t--------Your Order Sir---------\n";
                    cout<<""<<quantity<<" "<<bur2;
                    cout<<"\n>Your Total Bill is="<<bill<<"\n>Your Order Will be delivered in 30 Minutes";
                    cout<<"\n\n>Thank you For Ordering From FAZI. Fast Food\n";
                    break;
                }
                case 3:
                {
                    cout<<"\t\t\t--------Your Order Sir---------\n";
                    cout<<""<<quantity<<" "<<bur2;
                    cout<<"\n>Your Total Bill is="<<bill<<"\n>Your Order Will be delivered in 30 Minutes";
                    cout<<"\n\n>Thank you For Ordering From FAZI. Fast Food\n";
                    break;
                }
            }
        }
        
    }
};
class Sandwich
{
    private:
    int schoice,quantity,bill;
    string sand1="Club Sandwich", sand2="Chicken Crispy Sandwich", sand3="Extream Veg Sandwich";
    public:
    Sandwich()
    {
        cout<<"\n1  "<<sand1<<" Rs.240"<<"\n";
		cout<<"2  "<<sand2<<" Rs.160"<<"\n";
		cout<<"3  "<<sand3<<" Rs.100"<<"\n";
        cout<<"\nPlease Enter which Flavour would you like to Order?:";
        cin>>schoice;
        if(schoice>=1&&schoice<=3)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>quantity;
            switch(schoice)
            {
                case 1:
                {
                    bill=240*quantity;
                    break;
                }
                case 2:
                {
                    bill=160*quantity;
                    break;
                }
                case 3:
                {
                    bill=100*quantity;
                    break;
                }
            }
            system("CLS");
            switch(schoice)
            {
                case 1:
                {
                    cout<<"\t\t\t--------Your Order Sir---------\n";
                    cout<<""<<quantity<<" "<<sand1;
                    cout<<"\n>Your Total Bill is="<<bill<<"\n>Your Order Will be delivered in 30 Minutes";
                    cout<<"\n\n>Thank you For Ordering From FAZI. Fast Food\n";
                    break;
                }
                case 2:
                {
                    cout<<"\t\t\t--------Your Order Sir---------\n";
                    cout<<""<<quantity<<" "<<sand2;
                    cout<<"\n>Your Total Bill is="<<bill<<"\n>Your Order Will be delivered in 30 Minutes";
                    cout<<"\n\n>Thank you For Ordering From FAZI. Fast Food\n";
                    break;
                }
                case 3:
                {
                    cout<<"\t\t\t--------Your Order Sir---------\n";
                    cout<<""<<quantity<<" "<<sand3;
                    cout<<"\n>Your Total Bill is="<<bill<<"\n>Your Order Will be delivered in 30 Minutes";
                    cout<<"\n\n>Thank you For Ordering From FAZI. Fast Food\n";
                    break;
                }
            }
        }

    }
};
class Biryani
{
    private:
    int quantity,bill,Birchoice;
    string bir1="Chicken Biryani", bir2="Prawn Biryani", bir3="Beef Biryani";
    public:
    Biryani()
    {
        cout<<"\n1 "<<bir1<<" Rs.160"<<"\n";
		cout<<"2 "<<bir2<<" Rs.220"<<"\n";
		cout<<"3 "<<bir3<<" Rs.140"<<"\n";
        cout<<"\nPlease Enter which Flavour would you like to Order?:";
        cin>>Birchoice;
        if(Birchoice>=1&&Birchoice<=3)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>quantity;
            switch(Birchoice)
            {
                case 1:
                {
                    bill=160*quantity;
                    break;
                }
                case 2:
                {
                    bill=220*quantity;
                    break;
                }
                case 3:
                {
                    bill=140*quantity;
                    break;
                }
            }
            system("CLS");
            switch(Birchoice)
            {
                case 1:
                {
                    cout<<"\t\t\t--------Your Order Sir---------\n";
                    cout<<""<<quantity<<" "<<bir1;
                    cout<<"\n>Your Total Bill is="<<bill<<"\n>Your Order Will be delivered in 50 Minutes";
                    cout<<"\n\n>Thank you For Ordering From FAZI. Fast Food\n";
                    break;
                }
                case 2:
                {
                    cout<<"\t\t\t--------Your Order Sir---------\n";
                    cout<<""<<quantity<<" "<<bir2;
                    cout<<"\n>Your Total Bill is="<<bill<<"\n>Your Order Will be delivered in 50 Minutes";
                    cout<<"\n\n>Thank you For Ordering From FAZI. Fast Food\n";
                    break;
                }
                case 3:
                {
                    cout<<"\t\t\t--------Your Order Sir---------\n";
                    cout<<""<<quantity<<" "<<bir3;
                    cout<<"\n>Your Total Bill is="<<bill<<"\n>Your Order Will be delivered in 50 Minutes";
                    cout<<"\n\n>Thank you For Ordering From FAZI. Fast Food\n";
                    break;
                }
            }
        }
    }
};
int  main()
{
	int choice 
    char cho1;
    stat;
	cout<<"\t\t\t     FAZI FAST FOOD ";
	cout<<"\n\t\t\t\t   at "<<endl;
	cout<<"\t\t\t CHOWK AZAM ROAD LAYYAH "<<endl;
	cout<<"1) For Pizzas Series\n";
	cout<<"2) For Burgers Series\n";
	cout<<"3) For Sandwich Series\n";
	cout<<"4) For Biryani Series\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
		{
			Pizza P;
			break;
		}
        case 2:
        {
            Burgers B;
            break;
        }
        case 3:
        {
            Sandwich S;
            break;
        }
        case 4:
        {
            Biryani Bir;
            break;
        }
        default:
        {
            cout<<"\n Invalid Choice Please Select Again:";
            break;
        }
    }
    cout<<"\nWould You Like To Order Anything Else?y/n>>";
    cin>>cho1;
    if (cho1=='Y'||cho1=='y')
    {
        goto stat;
    }
    return 0;
}
