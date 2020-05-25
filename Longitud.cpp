#incluye  " iostream "
#incluye  " string.h "

int  main ()
{
    char palabra [ 20 ];
    int longitud;
    cout << " Ingrese la palabra " << endl;
    cin >> palabra;
   
    cout << " La palabra ingresada es " << palabra << " y tiene " << strlen (palabra) << " letras " ;
     longitud = strlen (palabra);
     
     si (longitud <= 10 )
     {
         cout << endl << " Su longitud es menor o igual a 10 caracteres " ;
     }

más
{
    cout << endl <<   " Su longitud es mayor a 10 caracteres " ;
}
si (longi% 2 == 0 )
{
    cout << endl << " Y si longitud es par " ;
}
más
{
    cout << endl << " Y su longitud es impar " ;
}

}