/*
 * procucto.c
 *
 *  Created on: 11 may. 2021
 *      Author: ignac
 */
#include "producto.h"
#include <stdlib.h>

Producto* producto_new(void)
{
	return malloc(sizeof(Producto));
}
Producto* producto_newParam(int idProducto,char* descripcion,int idNacionalidad,int precio)
{
	Producto* auxProducto = Producto_new();
	if(auxProducto != NULL)
		{
			 if  (
				 	 producto_SetIdProducto(auxProducto,idProducto) ||
					 producto_SetidProducto(auxProducto,descripcion) ||
					 producto_SetIdNac(auxProducto,idNacionalidad) ||
					 producto_SetPrecio(auxProducto,precio)
			     )
			 	 	 {
				 	 	 producto_delete(auxProducto);
				 	 	 auxProducto = NULL;
			 	 	 }
		}
			return auxProducto;
}


int producto_Delete(Producto* this)
{
	int retorno= -1;
	if (this != NULL)
		{
			free(this);
			retorno = 0;
		}
	return retorno;
}
/*int producto_SetIdProducto(Producto* this, int idProducto);
int producto_GetIdProducto(Producto* this, int idProducto);
int producto_SetDesc(Producto* this, char*descripcion);
char* producto_GetDesc(Producto* this, int* flagError);
int producto_SetIdNac(Producto* this, int idNacionalidad);
int producto_GetIdnac(Producto* this, int idNacionalidad);
int producto_SetPrecio(Producto* this, int idPrecio);
int producto_GetPrecio(Producto* this, int idPrecio);*/
