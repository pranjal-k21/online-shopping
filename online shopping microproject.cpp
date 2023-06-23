#include<iostream>
using namespace std;
int main()
{
	char startValue;
	char choiceAgain;
	float onlineShopping(void);
	startlevel:
	cout<<"Please press s to start shopping"<<endl;
	start:
	cin>>startValue;
	if(startValue=='s'||startValue=='S')
	{
		float totalAmount=onlineShopping();
		cout<<"Total BillAmount is"<<totalAmount<<endl;
		shopAgain:
		cout<<"Do you want to shop again,yes or no?"<<endl;
		cin>>choiceAgain;
		if(choiceAgain=='y'||choiceAgain=='Y')
		{
			goto startlevel;
		}
		else if(choiceAgain=='n'||choiceAgain=='N')
		{
			cout<<"Thanks for shopping,visit again"<<endl;
		}
		else
		{
			cout<<"You have entered wrong option,please try again"<<endl;
			goto shopAgain;
		}
	}
	else
	{
		cout<<"You have entered wrong option,please press s"<<endl;
		goto start;
	}
}
float onlineShopping()
{
	char choice;
	char item;
	char mobile;
	char laptop;
	char TV;
	char thing;
	char clothes;
	char footwear;
	char beautyproducts;
	char menproducts;
	char accessory;
	char shoes;
	char cloth;
	float billAmount=0;
	int quantity;
	shopLevel:
	cout<<"***************Welcome to Online shopping*****************"<<endl;
	cout<<"---------------Please follow the instructions--------------"<<endl;
	cout<<"(1)Please enter e to order electronics item"<<endl;
	cout<<"(2)Please enter w to shop for women"<<endl;
	cout<<"(3)Please enter m to shop for men "<<endl;
	cin>>choice;
	if(choice=='e'||choice=='E')
	{
		electronicsLevel:
		cout<<"Electronics item details"<<endl;
		cout<<"(1) Mobile Phones=>Price:5000-150000"<<endl;
		cout<<"(2) Laptops=>Price:30000-100000"<<endl;
		cout<<"(3) Television=>Price:20000-80000"<<endl;
		cout<<"Please enter your choice"<<endl;
		cin>>item;
		if(item=='1')
		{
			mobileLevel:
			cout<<"Mobile Phones detail"<<endl;
			cout<<"(1) Samsung=>Price:50000"<<endl;
			cout<<"(2) Iphone=>Price:80000"<<endl;
			cout<<"(3) Oppo=>Price:30000"<<endl;
			cout<<"Please enter your choice"<<endl;
			cin>>mobile;
			if(mobile=='1')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*50000;
			}
			else if(mobile=='2')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*80000;
			}
			else if(mobile=='3')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*30000;
			}
			else
			{
				cout<<"You have entered wrong option,please try again"<<endl;
				goto mobileLevel;
			}
		}
		else if(item=='2')
		{
			laptopLevel:
			cout<<"Laptop detail"<<endl;
			cout<<"(1) Hp=>Price:80000"<<endl;
			cout<<"(2) Dell=>Price:70000"<<endl;
			cout<<"(3) Asus=>Price:60000"<<endl;
			cout<<"Please enter your choice"<<endl;
			cin>>laptop;
			if(laptop=='1')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*80000;
			}
			else if(laptop=='2')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*70000;
			}
			else if(laptop=='3')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*60000;
			}
			else
			{
				cout<<"You have entered wrong option,please try again"<<endl;
				goto laptopLevel;
			}
		}
		else if(item=='3')
		{
			TVLevel:
			cout<<"Television detail"<<endl;
			cout<<"(1) MI=>Price:30000"<<endl;
			cout<<"(2) Samsung=>Price:50000"<<endl;
			cout<<"(3) LG=>Price:40000"<<endl;
			cout<<"Please enter your choice"<<endl;
			cin>>TV;
			if(TV=='1')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*30000;
			}
			else if(TV=='2')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*50000;
			}
			else if(TV=='3')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*40000;
			}
			else
			{
				cout<<"You have entered wrong option,please try again"<<endl;
				goto TVLevel;
			}
		}
		else{
			cout<<"You have entered wrong option,please try again"<<endl;
			goto electronicsLevel;
		}
	}
	else if(choice=='w'||choice=='W')
	{
		womenLevel:
		cout<<"Women Shopping"<<endl;
		cout<<"(1) Clothes=>Price:500-10000"<<endl;
		cout<<"(2) Beauty Products=>Price:300-5000"<<endl;
		cout<<"(3) Footwear=>Price:1000-10000"<<endl;
		cout<<"Please enter your choice"<<endl;
		cin>>thing;
		if(thing=='1')
		{
			clothesLevel:
			cout<<"Women clothes detail"<<endl;
			cout<<"(1) Top=>Price:1000"<<endl;
			cout<<"(2) Jeans=>Price:2000"<<endl;
			cout<<"(3) Frock=>Price:1500"<<endl;
			cout<<"Please enter your choice"<<endl;
			cin>>clothes;
			if(clothes=='1')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*1000;
			}
			else if(clothes=='2')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*2000;
			}
			else if(clothes=='3')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*1500;
			}
			else
			{
				cout<<"You have entered wrong option,please try again"<<endl;
				goto clothesLevel;
			}
		}
		else if(thing=='2')
		{
			beautyLevel:
			cout<<"Beauty products detail"<<endl;
			cout<<"(1) Lipsticks=>Price:500"<<endl;
			cout<<"(2) Compact=>Price:1500"<<endl;
			cout<<"(3) Foundation=>Price:1000"<<endl;
			cout<<"Please enter your choice"<<endl;
			cin>>beautyproducts;
			if(beautyproducts=='1')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*500;
			}
			else if(beautyproducts=='2')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*1500;
			}
			else if(beautyproducts=='3')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*1000;
			}
			else
			{
				cout<<"You have entered wrong option,please try again"<<endl;
				goto beautyLevel;
			}
		}
		else if(thing=='3')
		{
			footwearLevel:
			cout<<"Footwear detail"<<endl;
			cout<<"(1) Shoes=>Price:5000"<<endl;
			cout<<"(2) Sandals=>Price:2000"<<endl;
			cout<<"(3) Flats=>Price:1000"<<endl;
			cout<<"Please enter your choice"<<endl;
			cin>>footwear;
			if(footwear=='1')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*5000;
			}
			else if(footwear=='2')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*2000;
			}
			else if(footwear=='3')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*1000;
			}
			else
			{
				cout<<"You have entered wrong option,please try again"<<endl;
				goto footwearLevel;
			}
		}
		else
		{
			cout<<"You have entered wrong option,please try again"<<endl;
			goto womenLevel;
		}
	}
	else if(choice=='m'||choice=='M')
	{
		menLevel:
		cout<<"Men shopping"<<endl;
		cout<<"(1) Clothes=>Price:5000-10000"<<endl;
		cout<<"(2) Footwear=>Price:500-20000"<<endl;
		cout<<"(3) Watches and accessories=>Price:1000-5000"<<endl;
		cout<<"Please enter your choice"<<endl;
		cin>>menproducts;
		if(menproducts=='1')
		{
			clothLevel:
			cout<<"Clothes detail"<<endl;
			cout<<"(1) shirts=>Price:2500"<<endl;
			cout<<"(2) Jeans=>Price:4000"<<endl;
			cout<<"(3) T-shirts=>Price:2000"<<endl;
			cout<<"Please enter your choice"<<endl;
			cin>>cloth;
			if(cloth=='1')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*2500;
			}
			else if(cloth=='2')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*4000;
			}
			else if(cloth=='3')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*2000;
			}
			else
			{
				cout<<"You have entered wrong option,please try again"<<endl;
				goto clothLevel;
			}
		}
		else if(menproducts=='2')
		{
			shoesLevel:
			cout<<"Footwear detail"<<endl;
			cout<<"(1) Shoes=>Price:10000"<<endl;
			cout<<"(2) Sandals and Floaters=>Price:3000"<<endl;
			cout<<"(3) Slippers and slides=>Price:2000"<<endl;
			cout<<"Please enter your choice"<<endl;
			cin>>shoes;
			if(shoes=='1')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*10000;
			}
			else if(shoes=='2')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*3000;
			}
			else if(shoes=='3')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*2000;
			}
			else
			{
				cout<<"You have entered wrong option,please try again"<<endl;
				goto shoesLevel;
			}
		}
		else if(menproducts=='3')
		{
			accessoryLevel:
			cout<<"Watches and accessories detail"<<endl;
			cout<<"(1) Watches=>Price:5000"<<endl;
			cout<<"(2) Wallets=>Price:1000"<<endl;
			cout<<"(3) Sunglasses=>Price:2000"<<endl;
			cout<<"Please enter your choice"<<endl;
			cin>>accessory;
			if(accessory=='1')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*5000;
			}
			else if(accessory=='2')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*1000;
			}
			else if(accessory=='3')
			{
				cout<<"Enter Quantity"<<endl;
				cin>>quantity;
				billAmount=billAmount+quantity*2000;
			}
			else
			{
				cout<<"You have entered wrong option,please try again"<<endl;
				goto accessoryLevel;
			}
		}
		else
		{
			cout<<"You have entered wrong option,please try again"<<endl;
			goto menLevel;
		}
	}
	else
	{
		cout<<"You have entered wrong choice,please try again"<<endl;
		goto shopLevel;
	}
	return billAmount;
}
