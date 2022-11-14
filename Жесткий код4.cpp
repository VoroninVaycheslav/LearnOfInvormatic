/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;
int text(int a) {
        cout<<"Что необходимо найти? (I, K, i, N): ";
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
                cout<<"K = ";
                cin>> K;
                cout<<"i = ";
                cin>> i;
                cout<<"I = " << K * i;
                break;
            case 1:
                cout<<"I = ";
                cin>> I;
                cout<<"i = ";
                cin>> i;
                cout<<"K = " << I / i;
                break;
            case 2:
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
                cout<<"i = ";
                cin>>i;
                cout<<"N = " << pow(2, i);
                break;
        }
        a = 1;
        return a;
    }
    int photo(int a) {
        cout<<"Что необходимо найти? (V, I, M, t, k): ";
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
                cout<<"V = ";
                cin>>V;
                cout<<"I = ";
                cin>>I;
                cout<<"t = ";
                cin>>t;
                cout<<"k = ";
                cin>>k;
                cout<<"I = " << V / (I * t * k);
                break;
            case 3:
                cout<<"V = ";
                cin>>V;
                cout<<"M = ";
                cin>>M;
                cout<<"I = ";
                cin>>I;
                cout<<"k = ";
                cin>>k;
                cout<<"I = " << V / (I * M * k);
                break;
            case 4:
                cout<<"V = ";
                cin>>V;
                cout<<"M = ";
                cin>>M;
                cout<<"I = ";
                cin>>I;
                cout<<"t = ";
                cin>>t;
                cout<<"I = " << V / (I * M * t);
                break;

        }
        a = 1;
        return a;
    }

int sound(int a) {
        cout<<"Что необходимо найти? (I, i, X, Y): ";
        string What;
        cin>>What;
        int X = 0;
        int I = 0;
        int i = 0;
        int Y = 0;
        int asd;
        if(What == "i")
            asd = 0;
        if(What == "I")
            asd = 1;
        if(What == "X")
            asd = 2;
        if(What == "Y")
            asd = 3;
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
                cout<<"t = ";
                cin>>Y;
                cout<<"I = " << I / (i * Y);
                break;
            case 3:
                cout<<"X = ";
                cin>>X;
                cout<<"i = ";
                cin>>i;
                cout<<"I = ";
                cin>>I;
                cout<<"I = " << I / (i * X);
                break;
        }
        a = 1;
        return a;
}
int main()
{
    cout<<"Тип задачи: 1. Текстовая информация 2. Звуковая информация 3. Графическая информация: "<<endl;
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
                    sound(a);
                    break;
                }
                case 3: {
                    photo(a);
                    break;
                }
                default:
                    cout<<"Такого пункта нету"<<endl;
                    break;
            }
    }
    return 0;
}




