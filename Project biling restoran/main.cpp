#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main ()
{
    int pilihan,harga,jumlah,total,bayar,kembalian;
    char mad;
    do
    {
        cout << " ALVIN SALAM RESTO MANTAP " << endl;
        cout << " LEZAT,BERGIZI,NIKMAT,BERSIH DAN PAS DI KANTONG " << endl;
        cout << " JALAN MERBABU SALIM, KM 20 , PEMALANG , JAWA TENGAH " << endl;

        cout << " =============================================================== " << endl;
        cout <<""<<endl;
        cout << " MENU MAKANAN                             HARGA MAKANAN " <<endl;
        cout<<""<<endl;
        cout << " 1. PAKET 1 ( NASI PUTIH,PECEL,AYAM GORENG,DAN ES TEH ) RP 18.000 " <<endl;
        cout << " 2. PAKET 2 ( NASI PUTIH,LALAPAN,TELOR GORENG,DAN ES ) RP 17.000 " << endl;
        cout << " 3. PAKET 3 ( NASI PUTIH,AYAM KECAP,LALAPAN,TEMPE,DAN ES TEH ) RP 18.000 " << endl;
        cout << " 4. PAKET 4 ( NASI PUTIH,NILA BAKAR,TEMPE,DAN ES TEH ) RP 20.000 " << endl;
        cout << " 5. MIE AYAM + ES JERUK RP 13.000 " <<endl;
        cout << " 6. BAKSO SPECIAL + ES JERUK RP 13.000 " << endl;
        cout << " 7. PECEL LELE + ES TEH RP 14.000 " << endl;
        cout << " 8. NILA BAKAR SAOS KEJU SPECIAL RP 16.000 " << endl;
        cout << " 9. JUICE RP 5.000" << endl;
        cout << " 10. GORENGAN RP 1.000 " << endl;
        cout <<""<<endl;

        cout << " SILAHKAN MASUKAN PILIHAN ANDA : "; cin>>pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "\n" << " NASI PUTIH,PECEL,AYAM GORENG , DAN ES TEH " << endl;
            harga=18000;
            cout <<"\n"<< " MASUKAN JUMLAH YANG DI BELI : " ;
            cin>>jumlah;
            total=harga*jumlah;
            cout << "\n" << " ANDA PERLU MEMBAYAR SEJUMLAH : RP. " <<total<<endl;
            cout << "\n" << " UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : RP. " ; cin>>bayar;
            kembalian=bayar-total;

            cout << "\n" << " UANG KEMBALIAN ANDA ADALAH : RP. " << kembalian << endl;
             system("cls");
             cout << " PEMESANANAN PAKET 1 " << endl;
             cout << " TOTAL HARGA :      " << jumlah << " x " <<harga  << " = "<<" RP. "<< total <<endl;
             cout << " PEMBAYARAN  :               " << " = " <<" RP. "<<bayar <<endl;
             cout << " KEMBALIAN   :               " <<" = "<<" RP. "<<kembalian<< endl;

            cout << "\n" << " MASIH ADAKAH YANG LAIN Y/T : ";
            cin >>mad;
            system("cls");
            break;
        case 2:

            cout <<"\n"<< " NASI PUTIH , LALAPAN , TELOR GORENG, DAN ES TEH " << endl;
            harga=17000;
            cout << "\n" << " MASUKAN JUMLAH YANG DI BELI : "; cin>>jumlah;
            total = harga*jumlah;
            cout << "\n " <<" ANDA PERLU MEMBAYAR SEJUMLAH : RP. " <<total<<endl;
            cout << "\n " <<" UANG YANG ANDA KELUARKAN UNTUK PEMBAYRAN : RP. ";
            cin>>bayar;
            kembalian=bayar-total;

            cout << "\n" << " UANG KEMBALIAN ANDA ADALAH : RP. " << kembalian<<endl;
                system("cls");
             cout << " PEMESANANAN PAKET 1 " << endl;
             cout << " TOTAL HARGA :      " << jumlah << " x " <<harga  << " = "<<" RP. "<< total <<endl;
             cout << " PEMBAYARAN  :               " << " = " <<" RP. "<<bayar <<endl;
             cout << " KEMBALIAN   :               " <<" = "<<" RP. "<<kembalian<< endl;
            cout << "\n" << " MASIH ADAKAH YANG LAIN Y/T : ";
            cin>>mad;
            system("cls");
            break;

            case 3:
            cout << "\n " << " NASI PUTIH , AYAM KECAP , LALAPAN , TEMPE , DAN ES TEH " << endl;
            harga=18000;

            cout <<"\n"<< " MASUKAN JUMLAH YANG DI BELI : ";cin>>jumlah;
            total=harga*jumlah;
            cout << "\n" << " ANDA PERLU MEMBAYAR SEJUMLAH : RP. " << total <<endl;
            cout << "\n" << " UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : RP. ";cin>>bayar;
            kembalian=bayar-total;

            cout << "\n" << " UANG KEMBALIAN ANDA ADALAH : RP. " << kembalian << endl;
                system("cls");
             cout << " PEMESANANAN PAKET 1 " << endl;
             cout << " TOTAL HARGA :      " << jumlah << " x " <<harga  << " = "<<" RP. "<< total <<endl;
             cout << " PEMBAYARAN  :               " << " = " <<" RP. "<<bayar <<endl;
             cout << " KEMBALIAN   :               " <<" = "<<" RP. "<<kembalian<< endl;
            cout << "\n" << " MASIH ADAKAH YANG LAIN Y/T : ";
            cin>>mad;
            system("cls");
            break;
            case 4:
                cout<<"\n"<< " NASI PUTIH , NILA BAKAR  , TEMPE , DAN ES TEH " << endl;
                harga=20000;
                cout<<"\n"<<" MASUKAN JUMLAH YANG DI BELI : ";cin>>jumlah;
                total=harga*jumlah;
                cout <<"\n" << " ANDA PERLU MEMBAYAR SEJUMLAH : RP. " <<total<<endl;
                cout << "\n" << " UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : RP. "; cin>>bayar;
                kembalian=bayar-total;

                cout << "\n" << " UANG KEMBALIAN ANDA ADALAH RP. " <<kembalian<< endl;
                     system("cls");
             cout << " PEMESANANAN PAKET 1 " << endl;
             cout << " TOTAL HARGA :      " << jumlah << " x " <<harga  << " = "<<" RP. "<< total <<endl;
             cout << " PEMBAYARAN  :               " << " = " <<" RP. "<<bayar <<endl;
             cout << " KEMBALIAN   :               " <<" = "<<" RP. "<<kembalian<< endl;
                cout << "\n" << " MASIH ADAKAH YANG LAIN Y/T: ";
                cin>>mad;
                system("cls");
                break;

            case 5:
                cout << "\n" << " MIE AYAM + JERUK " << endl;
                harga=13000;
                cout << "\n" << " MASUKAN JUMLAH YANG DI BELI : ";cin>>jumlah;
                total=harga*jumlah;
                cout << "\n" << " ANDA PERLU MEMBAYAR SEJUMLAH : RP. " << total<<endl;
                cout<<"\n"<< " UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : RP. ";cin>>bayar;
                kembalian=bayar-total;
                cout << "\n" << " UANG KEMBALIAN ANDA ADALAH : RP. " << kembalian<<endl;
                     system("cls");
             cout << " PEMESANANAN PAKET 1 " << endl;
             cout << " TOTAL HARGA :      " << jumlah << " x " <<harga  << " = "<<" RP. "<< total <<endl;
             cout << " PEMBAYARAN  :               " << " = " <<" RP. "<<bayar <<endl;
             cout << " KEMBALIAN   :               " <<" = "<<" RP. "<<kembalian<< endl;
                cout << "\n" << " MASIH ADAKAH YANG LAIN Y/T: ";
                cin>>mad;
                system("cls");
                break;

            case 6:
                cout << "\n" << " BAKSO SPECIAL + JERUK " <<endl;
                harga=13000;

                cout << "\n" << " MASUKAN JUMLAH YANG DI BELI : ";cin>>jumlah;
                total=harga*jumlah;
                cout << "\n" << " ANDA PERLU MEMBAYAR SEJUMLAH : RP. " << total<<endl;
                cout<<"\n" << " UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : RP. "; cin>>bayar;
                kembalian=bayar-total;

                cout << "\n" << " UANG KEMBALIAN ANDA ADALAH : RP. " << kembalian<<endl;
                   system("cls");
             cout << " PEMESANANAN PAKET 1 " << endl;
             cout << " TOTAL HARGA :      " << jumlah << " x " <<harga  << " = "<<" RP. "<< total <<endl;
             cout << " PEMBAYARAN  :               " << " = " <<" RP. "<<bayar <<endl;
             cout << " KEMBALIAN   :               " <<" = "<<" RP. "<<kembalian<< endl;
                cout << "\n" << " MASIH ADAKAH YANG LAIN Y/T: ";
                cin>>mad;
                system("cls");
                break;

            case 7:
                cout << "\n" << " PECEL LELE MANTAP + ES TEH " << endl;
                harga = 14000;

                cout << "\n" << " MASUKAN JUMLAH YANG DI BELI : ";
                cin>>jumlah;

                total=harga*jumlah;
                cout <<"\n"<<" ANDA PERLU MEMBAYAR SEJUMLAH : RP. " << total << endl;
                cout << "\n" <<  " UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : RP. ";cin>>bayar;
                kembalian=bayar-total;

                cout << "\n" <<  " UANG KEMBALIAN ANDA ADALAH : RP. " << kembalian<<endl;
                     system("cls");
             cout << " PEMESANANAN PAKET 1 " << endl;
             cout << " TOTAL HARGA :      " << jumlah << " x " <<harga  << " = "<<" RP. "<< total <<endl;
             cout << " PEMBAYARAN  :               " << " = " <<" RP. "<<bayar <<endl;
             cout << " KEMBALIAN   :               " <<" = "<<" RP. "<<kembalian<< endl;
                cout << "\n" << " MASIH ADAKAH YANG LAIN Y/T : ";
                cin>>mad;
                system("cls");
                break;
            case 8:
                cout << "\n" << " NILA BAKAR SAOS KEJU SPECIAL " << endl;
                harga=16000;

                cout<<"\n" << " MASUKAN JUMLAH YANG DI BELI : ";
                cin>>jumlah;
                total = harga*jumlah;
                cout << "\n" <<" ANDA PERLU MEMBAYAR SEJUMLAH : RP. " << total << endl;
                cout << "\n" << " UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : RP. ";cin>>bayar;

                kembalian=bayar-total;

                cout << "\n" << " UANG KEMBALIAN ANDA ADALAH : RP. " << kembalian << endl;
                    system("cls");
             cout << " PEMESANANAN PAKET 1 " << endl;
             cout << " TOTAL HARGA :      " << jumlah << " x " <<harga  << " = "<<" RP. "<< total <<endl;
             cout << " PEMBAYARAN  :               " << " = " <<" RP. "<<bayar <<endl;
             cout << " KEMBALIAN   :               " <<" = "<<" RP. "<<kembalian<< endl;
                cout << "\n" << " MASIH ADAKAH YANG LAIN Y/T : ";
                cin>>mad;
                system("cls");
                break;

            case 9:
                cout << "\n" << " JUICE " << endl;
                harga=5000;

                cout << "\n" << " MASUKAN JUMLAH YANG DI BELI : " ;
                cin>>jumlah;
                total=harga*jumlah;

                cout << "\n" << " ANDA PERLU MEMBAYAR SEJUMLAH : RP. " << total << endl;
                cout << "\n" << " UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : RP. ";
                cin>>bayar;
                kembalian=bayar-total;

                cout << "\n" << " UANG KEMBALIAN ANDA ADALAH : RP. " << kembalian << endl;
                  system("cls");
             cout << " PEMESANANAN PAKET 1 " << endl;
             cout << " TOTAL HARGA :      " << jumlah << " x " <<harga  << " = "<<" RP. "<< total <<endl;
             cout << " PEMBAYARAN  :               " << " = " <<" RP. "<<bayar <<endl;
             cout << " KEMBALIAN   :               " <<" = "<<" RP. "<<kembalian<< endl;
                cout << "\n" << " MASIH ADAKAH YANG LAIN Y/T : ";
                cin>>mad;
                system("cls");
                break;

            case 10:
                cout << "\n" << " GORENGAN " << endl;
                harga = 1000;
                cout << "\n" << " MASUKAN JUMLAH YANG DI BELI : ";
                cin >> jumlah;

                total=harga*jumlah;
                cout << "\n" << " ANDA PERLU MEMBAYAR SEJUMLAH : RP. " << total << endl;
                cout << "\n" << " UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : RP. ";
                cin>>bayar;
                kembalian=bayar-total;

                cout << "\n" << " UANG KEMBALIAN ANDA ADALAH : RP. " << kembalian << endl;
                   system("cls");
             cout << " PEMESANANAN PAKET 1 " << endl;
             cout << " TOTAL HARGA :      " << jumlah << " x " <<harga  << " = "<<" RP. "<< total <<endl;
             cout << " PEMBAYARAN  :               " << " = " <<" RP. "<<bayar <<endl;
             cout << " KEMBALIAN   :               " <<" = "<<" RP. "<<kembalian<< endl;
                cout << "\n" << " MASIH ADAKAH YANG LAIN Y/T: ";
                cin>>mad;
                system("cls");
                break;

            default:
                cout << " MAAF PILIHAN ANDA TIDAK TERSEDIA ";
                cout << " SILAHKAN MASUKAN PILIHAN YANG LAIN " ;

    }

    }
    while(mad/='Y');
    cout << " TERIMA KASIH ATAS KUNJUNGAN ANDA " ;
    return 0;
}
