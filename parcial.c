#include <stdio.h>
#include <string.h>

int main() {
	/* Se inician declarando las variables según su naturaleza (caracteres, números 
	enteros o decimales)*/
	char rol[ 10 ], cedula[ 10 ], codigo[ 10 ];
	int cantidad;
	float precio_final, descuento, precio; 
	
	/*Se piden y guardan las entradas en las variables previamente declaradas*/
	printf("ingrese rol del usuario ( estudiante-profesor )\n");
	scanf("%s", &rol );

	printf("ingrese cedula del usuario\n");
	scanf("%s", &cedula);

	printf("ingrese codigo de producto\n");
	scanf("%s", &codigo);

	printf("ingrese la cantidad de unidades del producto\n");
	scanf("%d", &cantidad);

	printf("ingrese el valor del producto\n");
	scanf("%f", &precio );
	
	/*Se verifica el rol del usuario para declararle su respectivo descuento*/	
	if( strcmp( rol, "estudiante" ) == 0 ){
		descuento = 0.4;
	}
	
	if( strcmp( rol, "profesor" ) == 0 ){
		descuento = 0.2;
	}

	/*Se calcula y se muestra el precio final (salida) según todas las entradas*/

	precio_final = (precio*cantidad)-(precio*cantidad*descuento);
	
	printf("El %s con cedula %s, debe pagar %f por el producto %s", rol, 
			cedula, precio_final, codigo);
	
	return 0;
}

