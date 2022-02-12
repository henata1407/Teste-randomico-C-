#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){

int d1=0;
int d2=0;
int d3=0;
int d4=0;
int d5=0;
int d6=0;
int p1=0;
int j=1;
int us2=0;
char us1=' ';
int pr=10;//partidas restantes
int j2=0;

cout<<"GENERAL/tire o numero escolhido para ser multiplicados pela jogada e se tornarem sua pontuacao"<<endl<<"Digite um numero entre 1 e 6: ";
cin>>us2;

srand(time(NULL));

do{
    d1=rand()%6+1;
    d2=rand()%6+1;
    d3=rand()%6+1;
    d4=rand()%6+1;
    d5=rand()%6+1;
    d6=rand()%6+1;

    cout <<"dado 1: "<<d1<<endl<<"dado 2: "<<d2<<endl<<"dado 3: "<<d3<<endl<<"dado 4: "<<d4<<endl<<"dado 5: "<<d5<<endl<<"dado 6: "<<d6<<endl;

    if(d1==us2){
        p1+=1*j;
    }else if(d2==us2){
        p1+=1*j;
    }else if(d3==us2){
        p1+=1*j;
    }else if(d4==us2){
        p1+=1*j;
    }else if(d5==us2){
        p1+=1*j;
    }else if(d6==us2){
        p1+=1*j;
    }

    pr--,

    cout<<"pontucao somada na\(s\) utima \(s\) jogada \(s\): "<<p1<<endl<<endl<<" partidas restantes: "<<pr<<endl<<endl<<"para continuar jogando digite s para sair digite n: ";
    cin>>us1;

    if(us1=='s'){
        j++;
    }else if(us1=='n'){
        cout<<"voce esta saindo do jogo"<<endl;
        j=11;
    }else {
        cout <<"opcao invalida"<<endl;
        do{
            j2=-1;
            cout<<"digite uma opcao valida: ";
            cin>>us1;
            if(us1=='s'){
                j++;
                j2=1;
            }else if(us1=='n'){
                cout<<"voce esta saindo do jogo"<<endl;
               j=11;
               j2=1;
               }else {
                j2=-1;
                }
        }while(j2==-1);

    }

    system("pause");

}while(j<=10);

cout<<" sua pontuacao total foi: "<<p1<<endl<<" voce deseja jogar novamente /sim=s nao=n: ";
cin>>us1;

switch(us1){
case 's' :
    cout<<"Digite o numero escolhido: ";
    cin>>us2;

    do{
    d1=rand()%6+1;
    d2=rand()%6+1;
    d3=rand()%6+1;
    d4=rand()%6+1;
    d5=rand()%6+1;
    d6=rand()%6+1;

    cout <<"dado 1: "<<d1<<endl<<"dado 2: "<<d2<<endl<<"dado 3: "<<d3<<endl<<"dado 4: "<<d4<<endl<<"dado 5: "<<d5<<endl<<"dado 6: "<<d6<<endl;

    if(d1==us2){
        p1+=d1*j;
    }else if(d2==us2){
        p1+=d1*j;
    }else if(d3==us2){
        p1+=d1*j;
    }else if(d4==us2){
        p1+=d1*j;
    }else if(d5==us2){
        p1+=d1*j;
    }else if(d6==us2){
        p1+=d1*j;
    }

    cout<<"pontucao somada na\(s\) utima \(s\) jogada \(s\): "<<p1<<endl<<endl<<" partidas restantes: "<<pr<<endl<<endl<<" para continuar o jogo digite s para sair digite n: ";
    cin>>us1;

    if(us1=='s'){
        j++;
    }else if(us1=='n'){
        cout<<"voce esta saindo do jogo"<<endl;
        j=11;
    }else {
        cout <<"opcao invalida"<<endl;
                do{
            j2=-1;
            cout<<"digite uma opcao valida: ";
            cin>>us1;
            if(us1=='s'){
                j++;
                j2=1;
            }else if(us1=='n'){
                cout<<"voce esta saindo do jogo"<<endl;
               j=11;
               j2=1;
               }else {
                j2=-1;
                }
        }while(j2==-1);
    }

    system("pause");

    }while(j<=10);
    break;

case 'n':
    cout<<" voce esta saindo do jogo "<<endl;
    break;

default :
    cout<<" opcao invalida "<<endl;
    break;

}
return 0;
}
