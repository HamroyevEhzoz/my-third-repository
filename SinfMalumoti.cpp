#include<iostream>
using namespace std;

class Uquvchi
{

public:
    string ism;
    string fam;
    int yoshi;
    string  manzil;
    int tugYil;
    void printData()
    {
        cout << fam << " " << ism << " => " << yoshi << "  yosh => " << tugYil << " - yil  => Manzil : "<<manzil<<"\n";
    }
};
int main()
{
    Uquvchi uquvchi[50];
    int num;
    cout << "||-----------------------------------------O'quvchi ma'lumotlarini kiriting--------------------------------||\n";
    cout << "\n\n                                Sinfingizdagi o'quvchilar sonini kiriting---> "; cin >> num;
    cout << endl;
    for(int i = 0; i < num; i++)
    {        
        cout << i + 1 << " - o'quvchi nomi : "; cin >> uquvchi[i].ism;
        cout << i + 1 << " - o'quvchi familyasi : "; cin >> uquvchi[i].fam;
        cout << i + 1 << " - o'quvchi yoshi : "; cin >> uquvchi[i].yoshi;
        cout << i + 1 << " - o'quvchi tug'ilgan yili : "; cin >> uquvchi[i].tugYil;
        cout << i + 1 << " - o'quvchi manzili : "; cin >> uquvchi[i].manzil;
        cout << "\n";
    }

    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Dastur quyidagi kamandalarni bajara oladi!!!>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n";
    key:
    cout<<"\n1---> 14 yoshgaa to'lgan barcha  o'quvchilar ismini chop etish\n";

    cout<<"2---> juft raqamlarga ega bo'lgan barcha o'quchilarni ma'lumotlarini chop etish\n";
    cout << "3--->o'quvchining ro'yhatdagi raqami orqali uning ma'lumotlarini chiqarish\n\n";
    int n;
    cout << "Buyruqni tanlang--->"; cin >> n;
    switch (n)
    {
         case 1 :
         {
             cout << "14 yoshga to'lgan o'quvchilar\n\n";
             for (int i = 0;i < num;i++)
             {

                 if (uquvchi[i].yoshi >= 14)
                 {
                     cout << i + 1 << ". " << uquvchi[i].fam<<" "<<uquvchi[i].ism<<"   Yoshi : "<<uquvchi[i].yoshi<<" ga teng"<<endl;
                 }

             }

         }break;

         case 2 :
         {
             for (int i = 0; i < num; i++)
             {
                 if ((i + 1) % 2 == 0)
                 {
                     cout <<"Tartib raqam -> "<< i + 1 << " => "; uquvchi[i].printData();
                 }
             }
             

         }break;

         case 3 :
         {
             int k;
             cout << "O'quvchining ro'yhatdagi raqamini kiriting --> "; cin >> k;
             cout << "\n\n";
             if (k<=num)
                 uquvchi[k - 1].printData();
             else
                 cout << "\nRo'yhatda bunday tartib raqamdagi o'quvchi mavjud emas\n";


         }break;

         default: cout << "\nBunday kamanda mavjud emas\n";
    }

    int res;
    cout << "\nBuyruqlarni qayta amalga oshirishni xoxlasangiz 1 ni bosing--> "; cin >> res;
    if (res == 1)
        goto key;
  
}
