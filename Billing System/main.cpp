#include <iostream>
using namespace std;

int returnOrderBill()
{
    char c, item, vegItem, selectAgain, nonVegItem;
    int billAmt = 0;
    cout << " $$$ --------- Welcome To C++ Zomato --------- $$$ " << endl;
    cout << " $$$ --------- Follow The Instructions To Order Food from C++ Zomato  --------- $$$ " << endl;
    cout << " $$$ --------- Press 'S' To Start Placing Order  --------- $$$ " << endl;
    cout << " $$$ --------- Order Veg And Non-Veg Items Now  !   --------- $$$ " << endl;
    cout << " $$$ --------- Press 'a' To Order Veg Food  !  --------- $$$ " << endl;
    cout << " $$$ --------- Press 'b' To Order Non-Veg Food  !  --------- $$$ " << endl;
    cout << "============ Start Ordering C++ ZOMATO IS LIVE ! ==================" << endl;
start:
    cin >> c;
    if (c == 'S' || c == 's')
    {
    items:
        cout << "***---------Ordering From C++ ZOMATO------*** " << endl;
        cout << "*** --------- Select Your Choice ------ *** " << endl;
        cout << "---- [a] Veg Items ----------------- [b] Non-Veg Items ----" << endl;
        cin >> item;
        if (item == 'a' || item == 'A')
        {
        vegItemList:
            cout << "------- SELECT VEG ITEMS FROM THE MENU BELOW ------ " << endl;
            cout << "------- 1] Paneer Tikka Masala : Amount $10 ------ " << endl;
            cout << "------- 2] Jain Paneer Tikka Masala : Amount $12 ------ " << endl;
            cout << "------- 3] Paneer Pizza : Amount $15 ------ " << endl;
            cout << "------- 4] Jain Paneer Pizza : Amount $18 ------ " << endl;
            cin >> vegItem;
            if (vegItem == '1')
            {
                billAmt = billAmt + 10;
            }
            else if (vegItem == '2')
            {
                billAmt = billAmt + 12;
            }
            else if (vegItem == '3')
            {
                billAmt = billAmt + 15;
            }
            else if (vegItem == '4')
            {
                billAmt = billAmt + 18;
            }
            else
            {
                cout << endl;
                cout << "--------- !!! PLEASE SELECT THE ITEMS FROM THE MENU ABOVE !!! ---------" << endl;
                cout << endl;
                goto vegItemList;
            }

            cout << "__________ DO YOU WANT TO ADD MORE ITEMS TO YOUR ORDER (y/n) ? ___________" << endl;
            cin >> selectAgain;
            if (selectAgain == 'y' || selectAgain == 'Y')
            {
                goto items;
            }
            else
            {
                return billAmt;
            }
        }
        else if (item == 'b' || item == 'B')
        {
        nonVegItemList:
            cout << "------- SELECT NON - VEG ITEMS FROM THE MENU BELOW ------ " << endl;
            cout << "------- 1] CHICKEN LEG PIECE (10 PIECES) : Amount $20 ------ " << endl;
            cout << "------- 2] CHICKEN PIZZA : Amount $30  ------ " << endl;
            cout << "------- 3] CHICKEN BUCKET : Amount $45 ------ " << endl;
            cout << "------- 4] CHICKEN SPECIAL (BUCKET,PIZZA,BURGERx1) : Amount $70  ------ " << endl;
            cin >> nonVegItem;
            if (nonVegItem == '1')
            {
                billAmt = billAmt + 20;
            }
            else if (nonVegItem == '2')
            {
                billAmt = billAmt + 30;
            }
            else if (nonVegItem == '3')
            {
                billAmt = billAmt + 45;
            }
            else if (nonVegItem == '4')
            {
                billAmt = billAmt + 70;
            }
            else
            {
                cout << endl;
                cout << "--------- !!! PLEASE SELECT THE ITEMS FROM THE MENU ABOVE !!! ---------" << endl;
                cout << endl;
                goto nonVegItemList;
            }

            cout << "__________ DO YOU WANT TO ADD MORE ITEMS TO YOUR ORDER (y/n) ? ___________" << endl;
            cin >> selectAgain;
            if (selectAgain == 'y' || selectAgain == 'Y')
            {
                goto items;
            }
            else
            {
                return billAmt;
            }
        }
        else
        {
            cout << "You have entered wrong value, please press s!" << endl;
            goto start;
        }
    }

    return billAmt;
}

int main()
{
    int returnOrderBill(void);
    int totalBill = returnOrderBill();
    cout << "$$$ -- Your Total Bill Amount Is -- $$$ :  " << '$' << totalBill << endl;
    cout << "------ Thank you for Ordering ! -------" << endl;
    return 0;
    return 0;
}