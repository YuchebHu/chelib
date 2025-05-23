#ifndef __NONCOPYABLE_H__
#define __NONCOPYABLE_H__

namespace chaolib {
namespace noncopyable {
class Noncopyable {
public:
  Noncopyable() = default;
  ~Noncopyable() = default;
  Noncopyable(const Noncopyable&) = delete;
  Noncopyable& operator=(const Noncopyable&) = delete;
};
} // namespace noncopyable

using Noncopyable = noncopyable::Noncopyable;
} // namespace chaolib

#endif // __NONCOPYABLE_H__