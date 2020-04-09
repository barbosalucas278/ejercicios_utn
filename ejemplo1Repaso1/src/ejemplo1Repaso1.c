/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    //esto es un comentario
    int edad;
    float altura;
    char sexo;
    char nombre[20];
    char apellido[20];
    int contador;

    altura=158.8;
    edad=33;
    sexo='f';

    edad=edad + 33;

    /* no deberia usar este while nunca*/
    /*
    contador=0;
    while(contador<5)
    {
        printf("ingrese su edad: ");
        scanf("%d",&edad);
        printf("\nsu edad : %d  ",edad);
        contador++;

    }/*


    char respuesta;
    /*este es el correcto cuando no se la cantidad*/
   //respuesta='s';
  /*  printf("ingrese s para ingresar edades");
    scanf("%c",respuesta);
    while(respuesta=='s')
    {
        printf("ingrese su edad: ");
        scanf("%d",&edad);
        printf("\nsu edad : %d  ",edad);

        printf("ingrese s para continuar");
        scanf("%c",&respuesta);
    }
     */
     /* para validar*/
    /*do{
        printf("ingrese su edad: ");
        scanf("%d",&edad);
        printf("\nsu edad : %d  ",edad);

        printf("ingrese s para continuar");
        scanf("%c",&respuesta);

     }while(respuesta=='s');
    */
    /*la estructura correcta para cuando se la cantidad*/
    for(contador=0;contador<5;contador++)
    {


        /*asi NO se validad*/
        printf("ingrese su edad: ");
        scanf("%d",&edad);
        while(edad<0||edad>107)
        {
            printf("ingrese su edad: ");
            scanf("%d",&edad);

        }

        /*asi se validad*/
        do
        {
            printf("ingrese su edad: ");
            scanf("%d",&edad);

        }while(edad<0||edad>107);






        printf("\nsu edad : %d  ",edad);
    }





        printf("ingrese su edad: ");
        scanf("%d",&edad);

        printf("ingrese su altura: ");
        scanf("%f",&altura);

        __fpurge(stdin);// solo linux
        fflush(stdin);//solo windows
        printf("ingrese su sexo: ");
        scanf("%c",&sexo);

        printf("ingrese su nombre: ");
        scanf("%s",nombre);

        printf("ingrese su apellido: ");
        scanf("%s",apellido);


        if(edad>17)
        {
            printf ("usted es mayor de edad");
        }else
        {
            if(edad<13)
            {
                printf("es un niño");
            }
            else
            {
                printf("es un adolescente");
            }
        }


        printf("\nsu nombre : %s  ",nombre);
        printf("\nsu apellido : %s  ",apellido);
        printf("\nsu edad : %d  ",edad);
        printf("\nsu altura :  %.3f ",altura);
        printf("\nsu sexo : %c ",sexo);
        printf("\nAl repaso los sabados");



    return 0;
}
