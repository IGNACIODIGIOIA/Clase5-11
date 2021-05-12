/*
 * nacionalidad.c
 *
 *  Created on: 11 may. 2021
 *      Author: ignac
 */
#include "nacionalidad.h"
#include <stdlib.h>


Nacionalidad* nacionalidad_new(void)
{
	return malloc(sizeof(Nacionalidad));
}
Nacionalidad* nacionalidad_newParam(int idNacionalidad,char* descripcion)
{
	Nacionalidad* auxNacionalidad = Nacionalidad_new();
	if(auxNacionalidad != NULL)
		{
			 if  (

					 nacionalidad_Setidnacionalidad(auxNacionalidad,idNacionalidad)||
					 nacionalidad_SetIdProducto(auxNacionalidad,descripcion)

			     )
			 	 	 {
				 	 	 producto_delete(auxNacionalidad);
				 	 	auxNacionalidad = NULL;
			 	 	 }
		}
			return auxNacionalidad;
}


int nacionalidad_Delete(Nacionalidad* this)
{
	int retorno= -1;
	if (this != NULL)
		{
			free(this);
			retorno = 0;
		}
	return retorno;
}

/*int nacionalidad_SetDesc(Nacionalidad* this, char*descripcion);
char* nacionalidad_GetDesc(Nacionalidad* this, int* flagError);
int nacionalidad_SetIdNac(Nacionalidad* this, int idNacionalidad);
int nacionalidad_GetIdnac(Nacionalidad* this, int idNacionalidad);*/
