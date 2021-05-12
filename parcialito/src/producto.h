/*
 * prducto.h
 *
 *  Created on: 11 may. 2021
 *      Author: ignac
 */

#ifndef PRODUCTO_H_
#define PRODUCTO_H_
typedef struct{
	int idProducto;
	char descripcion[500];
	int idNacionalidad;
	int precio;
}Producto;

Producto* producto_new(void);
Producto* producto_newParam(void);

int producto_Delete(Producto* this);

int producto_SetIdProducto(Producto* this, int idProducto);
int producto_GetIdProducto(Producto* this, int idProducto);


int producto_SetDesc(Producto* this, char*descripcion);
char* producto_GetDesc(Producto* this, int* flagError);






#endif /* PRODUCTO_H_ */
