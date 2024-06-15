#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main() {
    int codigoUsuario,opcion,tipoMaterial;
    float cantidadMaterial,totalPapelyCarton = 0,totalTetabrick = 0,totalAluminio = 0,totalPlasticos = 0,totalVidrio = 0,CMUsuario3210 = 0,CMUsuario6540 = 0,CMUsuario7890 = 0,puntosCanjeables;
    char nombreUsuario[10];
    printf("************Sistema de Gestion de Reciclaje************\n\n");

     do {
    printf("                       Menu Inicial\n");
    printf("                       ------------\n");
    printf("[1]. Si desea registrar material reciclable\n");
    printf("[0]. Salir\n\n");
    printf("Digite su opcion: [ ]\b\b");
    scanf("%i",&opcion);

    if (opcion == 0){
        break;
    }
     printf("\n");
    do {
    printf("Digite su codigo de usuario\n");
    scanf("%i",&codigoUsuario);

    if (codigoUsuario == 3210) {
             strcpy(nombreUsuario,"Juan");
    } else if (codigoUsuario == 6540) {
             strcpy(nombreUsuario,"Jose");
    } else if (codigoUsuario == 7890) {
             strcpy(nombreUsuario,"Julio");
    } else {
        printf("Digite un codigo de usuario valido\n");
    }
    } while (codigoUsuario != 3210 && codigoUsuario != 6540 && codigoUsuario != 7890);
     printf("\n");
     printf("Bienvenido %s\ Por favor digite el tipo de material:\n",nombreUsuario);
     printf("1-Papel y carton\n2-Plastico\n3-Tetabrick\n4-Aluminio\n5-Vidrio\n");
     printf("Opcion: [ ]\b\b");
     scanf("%i",&tipoMaterial);
     printf("\n");
     printf("%s\ por favor digite la cantidad en kilos:\n",nombreUsuario);
     scanf("%f",&cantidadMaterial);

     if (tipoMaterial == 1){
        totalPapelyCarton = totalPapelyCarton + cantidadMaterial;
     } else if (tipoMaterial == 2){
         totalPlasticos = totalPlasticos + cantidadMaterial;
     } else if (tipoMaterial == 3) {
        totalTetabrick = totalTetabrick + cantidadMaterial;
     } else if (tipoMaterial == 4) {
         totalAluminio = totalAluminio + cantidadMaterial;
     } else {
         totalVidrio = totalVidrio + cantidadMaterial;
     }

     if (codigoUsuario == 3210) {
             CMUsuario3210 = CMUsuario3210 + cantidadMaterial;
    } else if (codigoUsuario == 6540) {
            CMUsuario6540 = CMUsuario6540 + cantidadMaterial;
    } else  {
             CMUsuario7890 = CMUsuario7890 + cantidadMaterial;
    }

    puntosCanjeables = cantidadMaterial / 4;
    printf("\n");
     printf("                       Datos Finales\n");
    printf("                       ------------\n");

    printf("Codigo de usuario: %i\n",codigoUsuario);
    printf("Nombre de Usuario: %s\n",nombreUsuario);
    printf("Tipo de material: %i\n",tipoMaterial);
    printf("Cantidad de material: %.2f\n",round(cantidadMaterial));
    printf("Cantidad de puntos odtenidos: %.2f\n",puntosCanjeables);
    printf("\n");
    printf("Los puntos canjeables los puedes utilizar en productos y servicios.\nGrasias por reciclar\n");

     } while (opcion != 0);

    printf("\n");
    printf("                       Estadisticas Finales\n");
    printf("                       ---------------------\n");
    printf("Cantidad total de papel y carton: %.2f\n",totalPapelyCarton);
    printf("Cantidad total de plastico: %.2f\n",totalPlasticos);
    printf("Cantidad total de tetabrick: %.2f\n",totalTetabrick);
    printf("Cantidad total de aluminio: %.2f\n",totalAluminio);
    printf("Cantidad total de vidrio: %.2f\n",totalVidrio);
    printf("\n");
    printf("Cantidad total material del usuario 3210: %.2f\n",CMUsuario3210);
    printf("Cantidad total material del usuario 6540: %.2f\n",CMUsuario6540);
    printf("Cantidad total material del usuario 7890: %.2f\n",CMUsuario7890);
  return 0;
}
