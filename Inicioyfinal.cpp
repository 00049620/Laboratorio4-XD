#incluye  " iostream "
#incluye  " string.h "

int  main ()
{
    char texto [ 20 ];
    int largo;
  cout << "problemas una palabra: " ;
  cin >> texto;
  largo = strlen (texto);
  cout << " la primera letra digitada es: "   << texto [ 0 ] << endl;
    
cout << " la última letra digitada es: "   << texto [largo- 1 ] << endl;

 if (texto [ 0 ] == texto [largo- 1 ])
 {
    cout << " La palabra inicia y termina con la misma letra " ;
 }
 más
 {
     cout << " No inicia y termina con la misma letra " ;
 }
 
}