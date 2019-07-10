#include "charcat_impl.h"

CharCatImpl::CharCatImpl() : CharCat() {}

CharCatImpl::~CharCatImpl() {}

bool CharCatImpl::FeedChar(char input) { buffer_.push_back(input); }

std::string CharCatImpl::Results() const {
  return std::string(buffer_.begin(), buffer_.end());
}

std::unique_ptr<CharCat> MakeCharCat() {
  return std::unique_ptr<CharCat>(dynamic_cast<CharCat *>(new CharCatImpl()));
}
