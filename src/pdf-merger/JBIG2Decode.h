/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef JBIG2Decode_H
#define JBIG2Decode_H 

#include <string>
#include "Decoder.h"

namespace merge_lib
{
   // this class provides method for FlateDecode encoding and decoding
   class JBIG2Decode : public Decoder
   {
      public:
         JBIG2Decode(){};
         virtual ~JBIG2Decode(){};
         bool encode(std::string & decoded);
         bool decode(std::string & encoded);
         void initialize(Object * objectWithStram);

   };
}

#endif // FLATEDECODE_H_INCLUDED

