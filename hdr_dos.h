/*
	libpe - the PE library

	Copyright (C) 2010 - 2013 libpe authors

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef LIBPE_HDR_DOS_H
#define LIBPE_HDR_DOS_H

#include <inttypes.h>

#pragma pack(push, 1)

typedef struct {
	uint16_t e_magic;
	uint16_t e_cblp;
	uint16_t e_cp;
	uint16_t e_crlc;
	uint16_t e_cparhdr;
	uint16_t e_minalloc;
	uint16_t e_maxalloc;
	uint16_t e_ss;
	uint16_t e_sp;
	uint16_t e_csum;
	uint16_t e_ip;
	uint16_t e_cs;
	uint16_t e_lfarlc;
	uint16_t e_ovno;
	uint16_t e_res[4];
	uint16_t e_oemid;
	uint16_t e_oeminfo;
	uint16_t e_res2[10];
	int32_t e_lfanew; // sizeof(IMAGE_DOS_HEADER) + size of MS-DOS stub
} IMAGE_DOS_HEADER;

#pragma pack(pop)

#endif
