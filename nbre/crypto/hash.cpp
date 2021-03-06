// Copyright (C) 2018 go-nebulas authors
//
// This file is part of the go-nebulas library.
//
// the go-nebulas library is free software: you can redistribute it and/or
// modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// the go-nebulas library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with the go-nebulas library.  If not, see
// <http://www.gnu.org/licenses/>.
//
#include "crypto/hash.h"

namespace neb {
namespace crypto {

sha3_256_hash_t sha3_256_hash(const bytes &b) {
  CryptoPP::SHA3_256 s;
  assert(s.DigestSize() == 32);
  s.Update(b.value(), b.size());
  sha3_256_hash_t ret;
  s.TruncatedFinal(ret.value(), ret.size());
  return ret;
}

} // namespace crypto
} // namespace neb
