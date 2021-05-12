/*
 * nacionalidad.h
 *
 *  Created on: 11 may. 2021
 *      Author: ignac
 */

#ifndef NACIONALIDAD_H_
#define NACIONALIDAD_H_
typedef struct{
	int id;
	char descripcion[100];

}Nacionalidad;

Nacionalidad* producto_new(void);
Nacionalidad* producto_newParam(void);
int producto_Delete(Nacionalidad* this);
int nacionalidad_SetDesc(Nacionalidad* this, char*descripcion);
char* nacionalidad_GetDesc(Nacionalidad* this, int* flagError);
int nacionalidad_SetIdNac(Nacionalidad* this, int idNacionalidad);
int nacionalidad_GetIdnac(Nacionalidad* this, int idNacionalidad);

#endif /* NACIONALIDAD_H_ */
