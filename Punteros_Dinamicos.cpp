#include <iostream>
using namespace std;

main() {
    int fil=0, col=0,**pm_notas;
    cout<<"Ingrese la cantidad Estudiantes: ";
    cin>>fil;
    cout<<"Ingrese la cantidad Notas por estudiante: ";
    cin>>col;

    pm_notas=new double*[fil];
    for(int i=0;i<fil;i++) {
        pm_notas[i]=new double [col];
    }
    for (int i=0;i<fila;i++){
        cout<<"_______________Estudiante_________________"<<i<<endl;
        for(int ii=0;ii<=col;ii++) {
            cout << "Estudiante"<<i<<", Nota"<<ii<<": ";
            cin >>*(*(pm_notas+i)+ii);
    }
    cout<<"________________________________"<<endl;
    }
    cout<<"________Mostrar Notas_____________"<<endl;
    for (int i=0;i<fil;i++){

        for (int ii=0;ii<col;ii++){
            cin>>*(*(pm_notas + i)+ii);
        }
        cout<<"_______________________________"<<endl;
        for(int i=0;i<fil;i++) {
            delete [] pm_notas[i];
    }
    delete [] pm_notas;
    
    system ("pause");
}