//////////////////////////////////////////////////////////////////////////////////////////
//	EXT_compiled_vertex_array_extension.h
//	Extension setup header
//	Downloaded from: www.paulsprojects.net
//	Created:	20th July 2002
//
//	Copyright (c) 2006, Paul Baker
//	Distributed under the New BSD Licence. (See accompanying file License.txt or copy at
//	http://www.paulsprojects.net/NewBSDLicense.txt)
//////////////////////////////////////////////////////////////////////////////////////////	

#ifndef EXT_COMPILED_VERTEX_ARRAY_EXTENSION_H
#define EXT_COMPILED_VERTEX_ARRAY_EXTENSION_H

bool SetUpEXT_compiled_vertex_array();
extern bool EXT_compiled_vertex_array_supported;

extern PFNGLLOCKARRAYSEXTPROC				glLockArraysEXT;
extern PFNGLUNLOCKARRAYSEXTPROC				glUnlockArraysEXT;

#endif	//EXT_COMPILED_VERTEX_ARRAY_EXTENSION_H
