#include<bits/stdc++.h>
using namespace std;
class one
{
public:
void menu1 ();
};

void one::menu1 ()
{
cout << "\n\n\n\t\t\t======== FOOD ORDERING SYSTEM ========" << endl;
cout << "\n\n\t\t\t\t== YOU CAN ORDER NOW ==" << endl;
cout <<"\n\n\n\t=============================================================" <<endl;
cout <<"\n\t[1] Cheese Burger($12)\t[2] Jolly Hotdog($10)\t[3] Fries($7)\n\n\t[4] Sundae Glaze($5)\t[5] Fried Siomai($6)\t[6] Shawarma($9)\n\n\n\n\t\t\t\t   [7] Exit";
cout <<"\n\n\t=============================================================" <<endl;
}

class two:public one
{
protected:
int order, ch, a, b, c, d, e, f, s = 0;
string y, ye;
public:
void menu2 ()
{
ofstream write;
write.open ("receipt.text");
if (!write)
{
cout << "file can not open" << endl;
exit (-1);
}

a:
b:
c:
cout << "\n\n\tEnter your order: ";
cin >> ch;

cout << "\n\n\tDo you want to change your order? (y/n) :";
cin >> ye;

if (ye == "y" || ye == "Y")
{
goto c;
}
else
{
switch (ch)
{
case 1:
cout << "\n\n\tHow many order? :";
cin >> order;
a = 12;
s = s + a * order;
write << "You order Cheese Burger: $12";
write << "\n";
write << "Number of order is: " << order;
write << "\n";
cout <<"\n\n\n\tYou order Cheese Burger. Sucessfully save order!" <<endl;
break;

case 2:
cout << "\n\n\tHow many order? :";
cin >> order;
b = 10;
s = s + b * order;
write << "You order Jolly Hotdog: $10";
write << "\n";
write << "Number of order is: " << order;
write << "\n";
cout << "\n\n\n\tYou order Jolly Hotdog. Sucessfully save order!"<< endl;
break;

case 3:
cout << "\n\n\tHow many order? :";
cin >> order;
c = 7;
s = s + c * order;
write << "You order Fries: $7";
write << "\n";
write << "Number of order is: " << order;
write << "\n";
cout << "\n\n\n\tYou order Fries. Sucessfully save order!" <<endl;
break;

case 4:
cout << "\n\n\tHow many order? :";
cin >> order;
d = 5;
s = s + d * order;
write << "You order Sundae Glaze: $5";
write << "\n";
write << "Number of order is: " << order;
write << "\n";
cout << "\n\n\n\tYou order Sundae Glaze. Sucessfully save order!"<< endl;
break;

case 5:
cout << "\n\n\tHow many order? :";
cin >> order;
e = 6;
s = s + e * order;
write << "You order Fried Siomai: $6";
write << "\n";
write << "Number of order is: " << order;
write << "\n";
cout << "\n\n\n\tYou order Fried Siomai. Sucessfully save order!"<< endl;
break;

case 6:
cout << "\n\n\tHow many order? :";
cin >> order;
f = 9;
s = s + f * order;
write << "You order Shawarma: $9";
write << "\n";
write << "Number of order is: " << order;
write << "\n";
cout << "\n\n\n\tYou order Shawarma. Sucessfully save order!" <<
	      endl;
break;

case 7:
cout << "\n\tGoodbye.....";
exit (0);
break;

default:
cout << "\n\n\tYou enter wrong keyword !!!!! " << endl;
goto c;
break;

}
cout << "\n\tDo you want to order again? (yes/no) :";
cin >> y;
if (y == "yes" || y == "YES")
{
goto a;
}
else
{
cout << "\n\tTHANK YOU COME AGAIN! GENERATING BILL ";
for (int a = 1; a < 5; a++)
{
cout << "...";
}
cout << "\n\n\t";
system ("PAUSE");
}
}
system ("cls");
cout << "\n\t\t================================================" << endl;
cout << "\n\t\t|              Food Ordering System            |" << endl;
cout << "\n\t\t================================================" << endl;
cout << endl;
cout << endl;
cout << "\t\tBill No : ADN1           Order : SPG2020" << endl;
cout << endl;
cout << endl;
cout << "\t\tCashier :  Syed Mohiuzzaman" << endl;
cout << endl;
cout << "\n\n\t\tTotal bill is : $" << s << endl;
write << "\n\n";
write << "Total: " << s;
cout << "\n\t\t================================================" << endl;
write.close ();
}

void show1 ()
{
menu1 ();
menu2 ();
}
};

class three:public one, public two
{
public:
void total ()
{
string username;
d:
cout << "---------------------";
cout << "\nEnter Username = ";
cin >> username;
if (username != "Mozahed")
{
cout << "\nIncorrect Username\n\n";
goto d;
}
else
cout << "\nHello, Administrator\n";
z:
string pwd = "Password";
cout << "\nEnter Password = ";
string pass;
cin >> pass;
if (pass == pwd)
{
cout << "\n\n";
system ("PAUSE");
system ("CLS");
show1 ();
}
else
{
cout << "\n\nIncorrect Password\n";
goto z;
}
}
};

int main ()
{
three ob;
ob.total ();
}
