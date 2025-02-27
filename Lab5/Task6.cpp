#include <bits/stdc++.h>
using namespace std;

class CoffeeShop
{
    const string name;
    const string menu[7][3] = {
        {"Garam Aande", "30", "food"},
        {"Shoeshe", "50", "food"},
        {"Daal Maash", "40", "food"},
        {"Karela Gosht", "60", "food"},
        {"Tarbooz ka Sharbat", "20", "drink"},
        {"Doodh Pakola", "25", "drink"},
        {"Chai", "15", "drink"}
    };
    vector<string> order;

    public:
        CoffeeShop(): name("StarSucks"){}    
        
        void addorder(string item)
        {
            for(int i = 0; i < 7; i++)
            {
                if(menu[i][0] == item)
                {
                    order.push_back(item);
                    return;
                }
            }
            cout<<"This item is currently unavailable!"<<endl;
        }
        
        void fulfillorder()
        {
            if(!order.empty())
            {
                cout<<order.back()<<" is ready"<<endl;
                order.pop_back();
            }
            else
            {
                cout<<"All orders have been fulfilled"<<endl;
            }
        }
        
        void listorders()
        {
            if(order.empty())
            {
                cout<<"No orders"<<endl;
                return;
            }
            for(auto s: order)
            {
                cout<<s<<endl;
            }
        }
        
        void dueamount()
        {
            int temp = 0;
            for(string s: order)
            {
                for(int i = 0; i < 7; i++)
                {
                    if(menu[i][0] == s)
                    {
                        temp += stoi(menu[i][1]);
                        break;
                    }
                }
            }
            cout<<"Amount due: "<<temp<<endl;
        }

        void cheapestItem()
        {
            int minPrice = stoi(menu[0][1]);
            string minItem = menu[0][0];
            for(int i = 1; i < 7; i++)
            {
                int price = stoi(menu[i][1]);
                if(price < minPrice)
                {
                    minPrice = price;
                    minItem = menu[i][0];
                }
            }
            cout<<minItem<<endl;
        }

        void drinksOnly()
        {
            for(int i = 0; i < 7; i++)
            {
                if(menu[i][2] == "drink")
                {
                    cout<<menu[i][0]<<endl;
                }
            }
        }
        
        void foodOnly()
        {
            for(int i = 0; i < 7; i++)
            {
                if(menu[i][2] == "food")
                {
                    cout<<menu[i][0]<<endl;
                }
            }
        }
};

int main() 
{
    CoffeeShop shop;
    shop.addorder("Chai");
    shop.addorder("Doodh Pakola");
    cout<<"listing orders"<<endl;
    shop.listorders();
    cout<<"fulfilling orders"<<endl;
    shop.fulfillorder();
    shop.dueamount();
    cout<<"Cheapest Item"<<endl;
    shop.cheapestItem();
    cout<<"Listing Drinks"<<endl;
    shop.drinksOnly();
    cout<<"Listing Food"<<endl;
    shop.foodOnly();
    return 0;
}
