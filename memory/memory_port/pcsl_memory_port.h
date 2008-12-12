/*
 *   
 *
 * Copyright  1990-2008 Sun Microsystems, Inc. All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 only, as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License version 2 for more details (a copy is
 * included at /legal/license.txt).
 * 
 * You should have received a copy of the GNU General Public License
 * version 2 along with this work; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 * 
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa
 * Clara, CA 95054 or visit www.sun.com if you need additional
 * information or have any questions.
 */

#ifndef _PCSL_MEMORY_PORT_H_
#define _PCSL_MEMORY_PORT_H_

/* autogenerated file */
#include <pcsl_config.h>
#include <pcsl_memory_port_impl.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup memory_port Platform-specific Memory Interfaces
 * @ingroup memory
 */

/**
 * @file
 * @ingroup memory
 */

/**
 * @addtogroup memory_port
 * @brief Internal interfaces to abstract from platform memory allocators.\n
 * ##include <pcsl_memory_port.h>
 *
 * Following functions represent internal interface that abstract from
 * platform-specific memory interface.
 *
 * Allocates large memory heap.
 * PCSL heap implementation will use this memory heap
 * for internal memory allocation/deallocation.
 * Should be called ONLY ONCE (or never) during memory system initialization.
 * 
 * @param    size required heap size in bytes
 * @param    outSize actual size of memory allocated
 * @return	  a pointer to the newly allocated memory, or <tt>0</tt> if not available
 *
 * <b>void* pcsl_heap_allocate_port(long size, long* outSize);</b>
 *
 * Frees large memory heap
 * PCSL heap implementation will call this function once 
 * when java is shutting down to free large memory heap.
 * Should be called ONLY ONCE (or never) during memory system finalization.
 * @param    heap memory pointer to free
 *
 * <b>void pcsl_heap_deallocate_port(void* heap);</b>
 *
 * Allocates memory of the given size from the platform memory
 * pool.
 * @param    size Number of byte to allocate
 * @return	  a pointer to the newly allocated memory
 *
 * <b>void* pcsl_malloc_port(unsigned int size);</b>
 *
 * Frees memory at the given pointer in the platform memory pool.
 * @param    ptr	Pointer to allocated memory
 *
 * <b>void  pcsl_free_port(void* ptr);</b>
 *
 * Allocates and clears the given number of elements of the given size
 * from the platform memory pool.
 * @param    numberOfElements Number of elements to allocate 
 * @param    elementSize Size of one element 
 * @return	  pointer to the newly allocated and cleared memory 
 *
 * <b>void* pcsl_calloc_port(unsigned int numberOfElements, unsigned int elementSize );</b>
 *
 * Re-allocates memory at the given pointer location in the platform
 * memory pool (or null for new memory) so that it is the given
 * size.
 * @param  ptr		Original memory pointer
 * @param  size		New size 
 * @return	  pointer to the re-allocated memory 
 *
 * <b>void* pcsl_realloc_port(void* ptr, unsigned int size);</b>
 *
 * Duplicates the given string after allocating the memory for it.
 * @param    str	String to duplicate
 * @return	pointer to the duplicate string
 *
 * <b>char* pcsl_strdup_port(const char* str);</b>
 */

/** 
 * Allocates large memory heap.
 * PCSL heap implementation will use this memory heap
 * for internal memory allocation/deallocation.
 * Should be called ONLY ONCE (or never) during memory system initialization.
 * 
 * @param    x required heap size in bytes
 * @param    y actual size of memory allocated
 * @return     a pointer to the newly allocated memory, or <tt>0</tt> if not available
 */
#define pcsl_heap_allocate_port(x,y)   pcsl_heap_allocate_port_impl((long)(x),(long*)(y))

/** 
 * Frees large memory heap
 * PCSL heap implementation will call this function once 
 * when java is shutting down to free large memory heap.
 * Should be called ONLY ONCE (or never) during memory system finalization.
 * 
 * @param    heap memory pointer to free
 */
#define pcsl_heap_deallocate_port(x)   pcsl_heap_deallocate_port_impl((x))

/** 
 * Allocates memory of the given size from the platform memory pool.
 */
#define pcsl_malloc_port(x)            pcsl_malloc_port_impl((x))

/**
 * Frees memory at the given pointer in the platform memory pool.
 */
#define pcsl_free_port(x)              pcsl_free_port_impl((x))

/**
 * Re-allocates memory at the given pointer location in the platform
 * memory pool (or null for new memory) so that it is the given
 * size.
 */
#define pcsl_realloc_port(x,y)         pcsl_realloc_port_impl((x),(y))

/** 
 * Allocates and clears the given number of elements of the given size
 * from the platform.
 */
#define pcsl_calloc_port(x,y)          pcsl_calloc_port_impl((x),(y))

/**
 * Duplicates the given string after allocating the memory for it.
 */
#define pcsl_strdup_port(x)            pcsl_strdup_port_impl((x))

#ifdef __cplusplus
}
#endif

#endif /* _PCSL_MEMORY_PORT_H_ */
