/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;
int text(int a) {
        cout<<"Что необходимо найти?"<< endl<<"I(Количество информации)"<<endl<<"K(количество символов)"<<endl<<"i(количество бит на символ)"<<endl<<"N(количество символов в алфовите)"<< endl<<"Я жду твоих данныхЖ:";
        string What;
        cin>> What;
        int K = 0;
        int i = 0;
        int N = 0;
        int I = 0;
        int asd;
        if(What == "I")
            asd = 0;
        if(What == "K")
            asd = 1;
        if(What == "i")
            asd = 2;
        if(What =="N")
            asd = 3;
        switch (asd) {
            case 0:
            cout<<"Мне лень писать все это, поэтому пояснения смотри выше"<< endl;
                cout<<"K = ";
                cin>> K;
                cout<<"i = ";
                cin>> i;
                cout<<"I = " << K * i;
                break;
            case 1:
            cout<<"Мне лень писать все это, поэтому пояснения смотри выше"<< endl;
                cout<<"I = ";
                cin>> I;
                cout<<"i = ";
                cin>> i;
                cout<<"K = " << I / i;
                break;
            case 2:
            cout<<"Мне лень писать все это, поэтому пояснения смотри выше"<< endl;
                cout<<"N = ";
                cin>> N;
                if (N == 0) {
                    cout<<"I = ";
                    cin>> I;
                    cout<<"K = ";
                    cin>> K;
                    cout<<"i = " << I / K;
                    break;
                } else {
                    cout<<"i =" << log(N);
                    break;
                }
            case 3:
            cout<<"Мне лень писать все это, поэтому пояснения смотри выше"<< endl;
                cout<<"i = ";
                cin>>i;
                cout<<"N = " << pow(2, i);
                break;
            
        }
        cout<<"Брат, лень считать в другие системы счисления поэтому результат в битах, если нужно в байтах, тогда тогда дели результат на 8, в килобайтах дели 8 и 1024Б дальше мне пофиг это гг"<< endl;
        a = 1;
        return a;
    }
    int photo(int a) {
        cout<<"Что необходимо найти?"<< endl<<"I(Количество информации)"<<endl<<"V(частота дискритизации)"<<endl<<"M(число каналов дружище)"<<endl<<"t(время)"<< endl<<"k(бит в секунду)"<<endl<<"Я жду твоих данныхЖ:";
        string What;
        cin>>What;
        int V = 0;
        int I = 0;
        int M = 0;
        int t = 0;
        int k = 0;
        int asd;
        if(What == "V")
            asd = 0;
        if(What == "I")
            asd = 1;
        if(What == "M")
            asd = 2;
        if(What == "t")
            asd = 3;
        if(What == "k")
            asd = 4;
        switch (asd) {
            case 0:
            cout<<"Мне лень писать все это, поэтому пояснения смотри выше"<< endl;
                cout<<"I = ";
                cin>>I;
                cout<<"M = ";
                cin>>M;
                cout<<"t = ";
                cin>>t;
                cout<<"k = ";
                cin>>k;
                cout<<"V = " << I * M * t * k;
                break;
            case 1:
            cout<<"Мне лень писать все это, поэтому пояснения смотри выше"<< endl;
                cout<<"V = ";
                cin>>V;
                cout<<"M = ";
                cin>>M;
                cout<<"t = ";
                cin>>t;
                cout<<"k = ";
                cin>>k;
                cout<<"I = " << V / (M * t * k);
                break;
            case 2:
            cout<<"Мне лень писать все это, поэтому пояснения смотри выше"<< endl;
                cout<<"V = ";
                cin>>V;
                cout<<"I = ";
                cin>>I;
                cout<<"t = ";
                cin>>t;
                cout<<"k = ";
                cin>>k;
                cout<<"M = " << V / (I * t * k);
                break;
            case 3:
            cout<<"Мне лень писать все это, поэтому пояснения смотри выше"<< endl;
                cout<<"V = ";
                cin>>V;
                cout<<"M = ";
                cin>>M;
                cout<<"I = ";
                cin>>I;
                cout<<"k = ";
                cin>>k;
                cout<<"t = " << V / (I * M * k);
                break;
            case 4:
            cout<<"Мне лень писать все это, поэтому пояснения смотри выше"<< endl;
                cout<<"V = ";
                cin>>V;
                cout<<"M = ";
                cin>>M;
                cout<<"I = ";
                cin>>I;
                cout<<"t = ";
                cin>>t;
                cout<<"k = " << V / (I * M * t);
                break;

        }
        cout<<"Брат, лень считать в другие системы счисления поэтому результат в битах, если нужно в байтах, тогда тогда дели результат на 8, в килобайтах дели 8 и 1024Б дальше мне пофиг это гг"<< endl;
        
        a = 1;
        return a;
    }

int sound(int a) {
        cout<<"Что необходимо найти? (I, V, X, Y): ";
        cout<<"Что необходимо найти?"<< endl<<"I(Количество информации за один пиксель)"<<endl<<"V(весь всего)"<<endl<<"X(пиксели по горизонталь)"<<endl<<"Y(пиксели по вертикали)"<< endl<<"Я жду твоих данныхЖ:";
        
        string What;
        cin>>What;
        int X = 0;
        int I = 0;
        int i = 0;
        int Y = 0;
        int asd;
        if(What == "V")
            asd = 0;
        if(What == "I")
            asd = 1;
        if(What == "X")
            asd = 2;
        if(What == "Y")
            asd = 3;
        
            cout<<"Мне лень писать все это, поэтому пояснения смотри выше"<< endl;
        switch (asd) {
            case 0:
                cout<<"I = ";
                cin>>I;
                cout<<"X = ";
                cin>>X;
                cout<<"Y = ";
                cin>>Y;
                cout<<"V = " << I / (X * Y);
                break;
            case 1:
                cout<<"i = ";
                cin>>i;
                cout<<"X = ";
                cin>>X;
                cout<<"Y = ";
                cin>>Y;
                cout<<"I = " << i * X * Y;
                break;
            case 2:
                cout<<"i = ";
                cin>>i;
                cout<<"I = ";
                cin>>I;
                cout<<"Y = ";
                cin>>Y;
                cout<<"X = " << I / (i * Y);
                break;
            case 3:
                cout<<"X = ";
                cin>>X;
                cout<<"i = ";
                cin>>i;
                cout<<"I = ";
                cin>>I;
                cout<<"Y = " << I / (i * X);
                break;
        }
        cout<<"Брат, лень считать в другие системы счисления поэтому результат в битах, если нужно в байтах, тогда тогда дели результат на 8, в килобайтах дели 8 и 1024Б дальше мне пофиг это гг"<< endl;
        
        a = 1;
        return a;
}
int main()
{
    cout<<"Ребятки, программа работает только в битах, так что лови инструкцию, если у тебя входные данные в битах, то ок, если он в байтах, то умнож на 8, ксли в кб, то умнож на 1024, но а гг"<<endl;
    cout<<"Тип задачи:"<<endl<<" 1. Текстовая информация"<<endl<<" 2. Звуковая информация"<<endl<<" 3. Графическая информация: "<<endl;
    cout<< "Я жду твоих цифр дружище (типо цира с типо задания):";
    int a = 0;
    while (a == 0) {
            int N;
            cin>> N;
            switch (N) {
                case 1: {
                    text(a);
                    break;
                }
                case 2: {
                    photo(a);
                    break;
                }
                case 3: {
                    sound(a);
                    break;
                }
                default:
                    cout<<"Все фигня, го по новой"<<endl;
                    break;
            }
    }
    return 0;
}



