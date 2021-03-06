/*
 *    Copyright 2011 Aevum Software aevum @ aevumlab.com
 * 
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 * 
 *        http://www.apache.org/licenses/LICENSE-2.0
 * 
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 * 
 *    @author Victor Vicente de Carvalho victor.carvalho@aevumlab.com
 *    @author Ozires Bortolon de Faria ozires@aevumlab.com
 */


#ifndef GDX_CPP_UTILS_ALIASES_HPP
#define GDX_CPP_UTILS_ALIASES_HPP

#include <tr1/memory>
#include <tr1/shared_ptr.h>

/** This template is responsible to encapsulate the use shared pointer use, in case we cant use std's one
*
*/
template <typename T>
struct ref_ptr_maker
{
public:
  typedef std::tr1::shared_ptr< T > type;
};

#endif // GDX_CPP_UTILS_ALIASES_HPP