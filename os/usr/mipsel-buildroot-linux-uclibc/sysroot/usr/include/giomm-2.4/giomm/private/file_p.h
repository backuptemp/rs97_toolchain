// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GIOMM_FILE_P_H
#define _GIOMM_FILE_P_H


#include <glibmm/private/interface_p.h>

#include <glibmm/private/interface_p.h>

namespace Gio
{

class File_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = File;
  using BaseObjectType = GFile;
  using BaseClassType = GFileIface;
  using CppClassParent = Glib::Interface_Class;

  friend class File;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gio


#endif /* _GIOMM_FILE_P_H */
