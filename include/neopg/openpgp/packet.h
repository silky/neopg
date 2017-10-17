/* OpenPGP format
   Copyright 2017 The NeoPG developers

   NeoPG is released under the Simplified BSD License (see license.txt)
*/

#ifndef NEOPG_OPENPGP_PACKET_H__
#define NEOPG_OPENPGP_PACKET_H__

#include <neopg/openpgp/header.h>
#include <memory>

namespace NeoPG {
namespace OpenPGP {

struct Packet {
  std::unique_ptr<PacketHeader> m_header;

  virtual void write(std::ostream& out) = 0;
};

}  // namespace OpenPGP
}  // namespace NeoPG

#endif
