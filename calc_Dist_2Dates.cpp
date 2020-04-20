#include <iostream>
using namespace std;

int Calcolagiorni(int g, int m, int a)
{
    int gm[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int ris=0;
    int k;
    if(a%4==0)
      gm[2]=29;
         for(k=1;k<=m-1;k++)
             ris=ris+gm[k];
         ris=ris+g;
    return ris;
}

int Dist(int giorno1, int mese1, int anno1, int giorno2, int mese2, int anno2)
{
    int k;
    int Operazione=0;
    if(anno1==anno2)
          Operazione=Calcolagiorni(giorno2,mese2,anno2)-Calcolagiorni(giorno1,mese1,anno1);
    else
    {
    for(k=anno1+1;k<=anno2-1;k++)
     {
     if(k%4==0)
          Operazione=Operazione+366;
     else
          Operazione=Operazione+365;
     }
     Operazione=Operazione+(365-Calcolagiorni(giorno1,mese1,anno1)+Calcolagiorni(giorno2,mese2,anno2));

     if(anno1%4==0)
          Operazione=Operazione+1;
    }
    return Operazione;
}

int main()
{
int G1;
int M1;
int A1;
int M2;
int G2;
int A2;
int risu;

cout<<"inserire il giorno della Prima data: ";
cin>>G1;
cout<<"inserire il mese della Prima data:  ";
cin>>M1;
cout<<"inserire l'anno della Prima data:  ";
cin>>A1;
cout<<"inserire il giorno della Seconda data: ";
cin>>G2;
cout<<"inserire il mese della Seconda data:  ";
cin>>M2;
cout<<"inserire l'anno della Seconda data:  ";
cin>>A2;

risu=Dist(G1,M1,A1,G2,M2,A2);
cout<<"Le date differiscono di " <<risu<< " giorni"<<endl;

system("pause");
}
