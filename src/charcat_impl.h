#pragma once

#include "charcat.h"

#include <vector>

class CharCatImpl : public CharCat {
public:
  CharCatImpl();
  virtual ~CharCatImpl();

  virtual bool FeedChar(char input) override;
  virtual std::string Results() const override;

private:
  std::vector<char> buffer_;
};
