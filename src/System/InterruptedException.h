// Copyright (c) 2011-2024 The Cryptonote developers, Dogemone Project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <exception>

namespace System {

class InterruptedException : public std::exception {
  public:
    virtual const char* what() const throw() override {
      return "interrupted";
    }
};

}
