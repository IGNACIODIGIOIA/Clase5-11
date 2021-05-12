/*
 * nacionalidad.c
 *
 *  Created on: 11 may. 2021
 *      Author: ignac
 */
#include "nacionalidad.h"
#include <stdlib.h>


Nacionalidad* producto_new(void)
{
	return malloc(sizeof(Nacionalidad));
}

/*int nacionalidad_SetDesc(Nacionalidad* this, char*descripcion);
char* nacionalidad_GetDesc(Nacionalidad* this, int* flagError);
int nacionalidad_SetIdNac(Nacionalidad* this, int idNacionalidad);
int nacionalidad_GetIdnac(Nacionalidad* this, int idNacionalidad);*/
