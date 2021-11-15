#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>

using namespace std;

int main(){
    system("color 04");
    desi:cout <<"===========================\n\n\nPERHATIKAN ATURAN MAINNYA \n\n\n===========================\n\n\n";
    system("pause");
    cout << "\n";
    cout <<"INGAT MENGGUNAKAN HURUF KAPITAL UNTUK INPUT DATA \n\n\n===========================\n\n\n";
    system("pause");
    cout << "\n";
    cout <<"DILARANG KERAS MENGGUNAKAN KALKULATOR \n\n===========================\n\n";
    system("pause");
    cout << "\n";
    cout <<"TELITILAH SAAT MEMBACA \n\n===========================\n\n";
    system("pause");
    cout << "\n";
    cout << "Selamat Bermain \n";
    system("pause");
    cout << "\n";
    string pertigaan,opsi,lagi,nama;
    a:system("color 07");
    cout << "hai hallo namaku Puspa Miranggasari \nselamat datang di Game ku player....\n";
    system("pause");
    cout << "\n";
    cout << "Ah iya siapakah namamu ?\ntolong masukan namamu \n";
    cin >> nama;
    cout << "\n";
    main:cout << "baiklah "<< nama <<" kini anda sedang menyusuri hutan \n";
    system("pause");
    cout << "\n";
    cout << "oh mari kita lihat pilihanmu "<< nama <<" sekarang anda melihat pertigaan \n" << "Pilih jalan LURUS , KANAN , KIRI ? \n" ;
    cin >> pertigaan ;
    if(pertigaan == "LURUS"){
        cout << "Anda mengambil jalan Lurus \n";
        system("pause");
        cout << "\n";
    }else if(pertigaan == "KANAN"){
        cout << "Anda mengambil jalan Kanan \n";
        system("pause");
        cout << "\n";
    }else if(pertigaan == "KIRI"){
        cout << "Anda mengambil jalan Kiri \n";
        system("pause");
        cout << "\n";
    }else{
        system("cls");
        system("color 04");
        cout << "ANDA INGIN BERMAIN ATAU TIDAK ANJ*** \n "<< nama << " ohh maaf saya tidak tau bisa aja typo hehehe :v \nmau coba lagi ? \n";
        cout << "YA atau NO ";
        cin >> lagi;
        if(lagi == "YA"){
            system("cls");
            system ("color 07");
            cout << "hehehehe maaf ya si "<< nama <<"\n";
            system("pause");
            cout << "\n";
            goto main;
        }else{
            system("cls");
            cout << "YAHH BAPERAN GA SERU AH SI "<< nama << endl ;
            system("pause");
            cout << "\n";
            system("cls");
            return EXIT_SUCCESS;
            }
    }
    srand((unsigned)time(0));
    int i;
    i = (rand()%3);
    if(i == 1){
        system("color 04");
        cout << "ahh tidak "<< nama <<" ada monster di depan anda \n";
        system("pause");
        cout << "\n";
        srand((unsigned)time(0));
        int j;
        j = (rand()%3);
        int x=5000,y=10000,z=15000;
        if(j ==1){
            cout << "Anda akan melawan monster level 1 dengan HP "<< x <<"\n";
            system("pause");
            cout << "\n";
        }else if(j == 2){
            cout << "Anda akan melawan monster level 2 dengan HP "<< y << "\n";
            system("pause");
            cout << "\n";
        }else {
            cout << "Anda akan melawan monster level 3 dengan HP "<< z <<"\n";
            system("pause");
            cout << "\n";
        }
        b:cout << "pilih SERANG atau LARI \n";
        cin >> opsi;
        if(opsi == "SERANG"){
            srand((unsigned)time(0));
            int k;
            k = (rand()%10);
            cout << "kekuatan anda saat ini adalah " << k << "\n";
            system("pause");
            cout << "\n";
            if(k > 0){
                int hit,hasil;
                cout << "berapa banyak hit agar anda dapat mengalahkan monster tersebut ? ";
                cin >> hit;
                hasil = hit*k;
                if (hasil < x){
                    cout << "Anda salah menghitung monsternya lebih kuat \nAnda pun meninggal ";
                    system ("pause");
                    cout << "\n";
                    cout << "GAME OVER\n";
                    system("color 07");
                    cout << "main lagi ?\n" ;
                    cout << "YA atau NO ";
                    cin >> lagi;
                    if(lagi == "YA"){
                        system("cls");
                        goto main ;
                    }else{
                        system("cls");
                        cout << "GAME OVER";
                    }
                }else {
                    cout << "kekuatan anda melampaui HP monster itu \n";
                    system("pause");
                    cout << "monster itu mati \n";
                    system("pause");
                    cout << "\n";
                    system("color 07");
                    cout << "Melanjutkan perjalanan kembali \n";
                    goto main;
                }
            }else{
                cout << "waduh ngab nampaknya anda sedang tidak beruntung hahahaha masak kekuatannya 0 HAHAHAHA\n";
                system("pause");
                cout << "\n";
                cout << "mau main lagi ?\n" ;
                cout << "YA atau NO ";
                cin >> lagi;
                if(lagi == "YA"){
                    system("cls");
                    goto main ;
                }else{
                    system("cls");
                    cout << "GAME OVER";
                }
            }
            
            
        }else if(opsi == "LARI"){
            system("cls");
            system("color 07");
            cout <<"HAHAHAHA anda lari seperti PENGECUT \n";
            system("pause");
            cout << "\n";
            cout <<"Main lagi? \n YA atau NO \n";
            cin >> lagi ;
            if(lagi == "YA"){
                system("cls");
                goto main ;
            }else{
                system("cls");
                cout << "GAME OVER";
                return EXIT_SUCCESS;
            }
        }else{
            cout << "anda ada salah input bisa aja typo :v \n";
            system("pause");
            cout << "\n";
            goto b;
            }

    }else if(i == 2){
        cout << "hehehe tidak ada apa apa disini mari lanjut lagi :v \n";
        system("pause");
        cout << "\n";
        goto main;
    }else{
        harta:cout << "wah anda sampai nih di harta karun \n";
        system("pause");
        cout << "\n";
        cout << "pilih ambil atau kembali berjalan ? \n";
        system("pause");
        cout << "\n";
        cout << "AMBIL atau JALAN ";
        cin >> lagi;
        if(lagi == "AMBIL"){
            cout << "anda mengambil harta karun itu \n";
            system("pause");
            cout << "\n";
            cout << "andalah pemenang sesungguhnya dari game ini \n";
            system("pause");
            cout << "\n";
            system("cls");
            cout << "ANDA MEMENANGKAN GAME INI \n";
            cout <<"Pemenang anda ingin Main lagi? \n YA atau NO \n";
            cin >> lagi ;
            if(lagi == "YA"){
                    system("cls");
                    cout << "Game akan dimulai dari awal lagi\n";
                    system("pause");
                    cout << "\n";
                    system("color 04");
                    goto desi ;
                }else{
                    system("cls");
                    cout << "ANDA TELAH MEMENANGKAN GAME INI";
                    return EXIT_SUCCESS;
                }
            }else if(lagi == "JALAN"){
                cout << "lah kok ga diambil sih hartanya ? \n";
                system("pause");
                cout << "\n";
                goto main ;
            }else{
                cout << "anda ada salah input bisa aja typo :v \n";
                system("pause");
                cout << "\n";
                goto harta;
            }
    }

    return 0;
}