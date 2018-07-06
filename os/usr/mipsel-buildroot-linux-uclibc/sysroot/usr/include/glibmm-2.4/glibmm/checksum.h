// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GLIBMM_CHECKSUM_H
#define _GLIBMM_CHECKSUM_H


/* Copyright (C) 2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <glib.h>
#include <string>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _GChecksum GChecksum; }
#endif

namespace Glib
{

/** Computes the checksum for data.
 * This is a generic API for computing checksums (or "digests") for a sequence of arbitrary bytes,
 * using various hashing algorithms like MD5, SHA-1 and SHA-256. Checksums are commonly used in various environments and specifications.
 *
 * glibmm supports incremental checksums by calling update() as long as there's data available and then using get_string()
 * or get_digest() to compute the checksum and return it either as a string in hexadecimal form, or as a raw sequence of bytes.
 * To compute the checksum for binary blobs and NULL-terminated strings in one go, use the static compute_checksum() convenience functions().
 *
 * @newin{2,16}
 */
class Checksum
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Checksum;
  using BaseObjectType = GChecksum;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  /** Constructs an invalid object.
   * E.g. for output arguments to methods. There is not much you can do with
   * the object before it has been assigned a valid value.
   */
  Checksum();

  // Use make_a_copy=true when getting it directly from a struct.
  explicit Checksum(GChecksum* castitem, bool make_a_copy = false);

  Checksum(const Checksum& src);
  Checksum& operator=(const Checksum& src);

  Checksum(Checksum&& other) noexcept;
  Checksum& operator=(Checksum&& other) noexcept;

  ~Checksum() noexcept;

  void swap(Checksum& other) noexcept;

  GChecksum*       gobj()       { return gobject_; }
  const GChecksum* gobj() const { return gobject_; }

  ///Provides access to the underlying C instance. The caller is responsible for freeing it. Use when directly setting fields in structs.
  GChecksum* gobj_copy() const;

protected:
  GChecksum* gobject_;

private:

  
public:
  /** @addtogroup glibmmEnums glibmm Enums and Flags */

/** 
 *  @var ChecksumType CHECKSUM_MD5
 * Use the MD5 hashing algorithm.
 * 
 *  @var ChecksumType CHECKSUM_SHA1
 * Use the SHA-1 hashing algorithm.
 * 
 *  @var ChecksumType CHECKSUM_SHA256
 * Use the SHA-256 hashing algorithm.
 * 
 *  @var ChecksumType CHECKSUM_SHA512
 * Use the SHA-512 hashing algorithm (Since: 2.36).
 * 
 *  @enum ChecksumType
 * 
 * The hashing algorithm to be used by Checksum when performing the
 * digest of some data.
 * 
 * Note that the ChecksumType enumeration may be extended at a later
 * date to include new hashing algorithm types.
 * 
 * @newin{2,16}
 *
 * @ingroup glibmmEnums
 */
enum ChecksumType
{
  CHECKSUM_MD5,
  CHECKSUM_SHA1,
  CHECKSUM_SHA256,
  CHECKSUM_SHA512
};


  /** Creates a new Checksum, using the checksum algorithm @a checksum_type.
   * If the checksum_type is not known, then operator bool() will return false.
   *
   * @param checksum_type Checksum type, one of defined above.
   */
  explicit Checksum(ChecksumType checksum_type);

  /** Returns true if the Checksum object is valid.
   * This will return false, for instance, if an unsupported checksum type was provided to the constructor.
   */
  explicit operator bool() const;

  
  /** Resets the state of the @a checksum back to its initial state.
   * 
   * @newin{2,18}
   */
  void reset();

  //TODO: length should really be gssize, not gsize, when we can break ABI:
 

  /** Feeds @a data into an existing Checksum. The checksum must still be
   * open, that is g_checksum_get_string() or g_checksum_get_digest() must
   * not have been called on @a checksum.
   * 
   * @newin{2,16}
   * 
   * @param data Buffer used to compute the checksum.
   * @param length Size of the buffer, or -1 if it is a null-terminated string.
   */
  void update(const guchar* data, gsize length);

  /** Feeds data into an existing Checksum.
   * The checksum must still be open, that is get_string() or get_digest() must not have been called on the checksum.
   *
   * @param data Buffer used to compute the checksum
   */
  void update(const std::string& data);

  
  /** Gets the digest from @a checksum as a raw binary vector and places it
   * into @a buffer. The size of the digest depends on the type of checksum.
   * 
   * Once this function has been called, the Checksum is closed and can
   * no longer be updated with g_checksum_update().
   * 
   * @newin{2,16}
   * 
   * @param buffer Output buffer.
   * @param digest_len An inout parameter. The caller initializes it to the size of @a buffer.
   * After the call it contains the length of the digest.
   */
  void get_digest(guint8 * buffer, gsize * digest_len) const;

  
  /** Gets the digest as an hexadecimal string.
   * 
   * Once this function has been called the Checksum can no longer be
   * updated with g_checksum_update().
   * 
   * The hexadecimal characters will be lower case.
   * 
   * @newin{2,16}
   * 
   * @return The hexadecimal representation of the checksum. The
   * returned string is owned by the checksum and should not be modified
   * or freed.
   */
  std::string get_string() const;


  /** Computes the checksum for a binary @a data of @a length. This is a
   * convenience wrapper for g_checksum_new(), g_checksum_get_string()
   * and g_checksum_free().
   * 
   * The hexadecimal string returned will be in lower case.
   * 
   * @newin{2,16}
   * 
   * @param checksum_type A ChecksumType.
   * @param data Binary blob to compute the digest of.
   * @param length Length of @a data.
   * @return The digest of the binary data as a string in hexadecimal.
   */
  static std::string compute_checksum(ChecksumType checksum_type, const guchar* data, gsize length);

  /** Computes the checksum of a string.
   *
   * @param checksum_type A ChecksumType
   * @param str The string to compute the checksum of.
   * @result The checksum as a hexadecimal string.
   */
  static std::string compute_checksum(ChecksumType checksum_type, const std::string& str);
  

  //We don't use _WRAP_METHOD because this is not really a GCheckSum function:
  /** Gets the length in bytes of digests of type @a checksum_type.
   *
   * @param checksum_type A ChecksumType.
   * @result The checksum length, or -1 if @a checksum_type is not supported.
   */
  static gssize get_length(ChecksumType checksum_type);


};

} //namespace Glib


namespace Glib
{

/** @relates Glib::Checksum
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 */
inline void swap(Checksum& lhs, Checksum& rhs) noexcept
  { lhs.swap(rhs); }

} // namespace Glib

namespace Glib
{

  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Glib::Checksum
   */
Glib::Checksum wrap(GChecksum* object, bool take_copy = false);

} // namespace Glib


#endif /* _GLIBMM_CHECKSUM_H */

