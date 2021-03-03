#include <iostream>
using namespace std;
 
int amount=1000, deposit, withdraw;
int choice, pin, k;
char transaction ='y';
 
int main()
{
	while (pin != 1520)
	{
		cout<<"MASUKKAN PIN NOMBOR ANDA:";
		cin>>pin;
		if (pin != 1520)
		cout<<"SILA MASUKKAN PIN NOMBOR YANG SAH\n";
	}
	do
	{
		cout<<"********SELAMAT DATANG KE ATM**************\n";
		cout<<"1. Check imbangan duit\n";
		cout<<"2. Keluarkan Duit\n";
		cout<<"3. Masukkan Duit\n";
		cout<<"4. Keluar\n";
		cout<<"******************?**************************?*\n\n";
		cout<<"MASUKKAN PILIHAN ANDA: ";
		cin>>choice;
		switch (choice)
		{
		case 1:
			cout<<"\n IMBANGAN DUIT ANDA RM "<<amount;
			break;
		case 2:
			cout<<"\n MASUKKAN JUMLAH DUIT YANG ANDA HENDAK KELUARKAN : ";
			cin>>withdraw;
			if (withdraw % 100 != 0)
			{
				cout<<"\n SILA MASUKKAN JUMLAH DUIT DALAM 100";
			}
			else if (withdraw >(amount - 500))
			{
				cout<<"\n IMBANGAN TIDAK MENCUKUPI";
			}
			else
			{
				amount = amount - withdraw;
				cout<<"\n\n SILA AMBIL DUIT ANDA";
				cout<<"\n IMBANGAN DUIT ANDA SEKARANG ADALAH RM "<<amount;
			}
			break;
		case 3:
			cout<<"\n MASUKKAN JUMLAH DUIT YANG ANDA HENDAK MASUKKAN :";
			cin>>deposit;
                        amount = amount + deposit;
			cout<<"IMBANGAN DUIT ANDA IALAH : "<<amount;
			break;
		case 4:
			cout<<"\n TERIMA KASIH KERANA MENGGUNAKAN ATM INI";
			break;
		default:
			cout<<"\n PILIHAN TIDAK SAH";
		}
		cout<<"\n\n\n ADAKAH ANDA INGIN MENERUSKAN TRANSAKSI?(y/t): \n";
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 't'|| transaction == 'T')
                    k = 1;
	} while (!k);
	cout<<"\n\n TERIMA KASIH KERANA MENGGUNAKAN SERVIS ATM INI";
	
	return 0;
}
