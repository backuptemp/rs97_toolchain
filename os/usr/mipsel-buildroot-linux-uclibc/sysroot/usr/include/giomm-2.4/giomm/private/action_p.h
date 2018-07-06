// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GIOMM_ACTION_P_H
#define _GIOMM_ACTION_P_H


#include <glibmm/private/interface_p.h>
#include <gio/gio.h>

#include <glibmm/private/interface_p.h>

namespace Gio
{

class Action_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = Action;
  using BaseObjectType = GAction;
  using BaseClassType = GActionInterface;
  using CppClassParent = Glib::Interface_Class;

  friend class Action;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static const gchar* get_name_vfunc_callback(GAction* self);
  static const GVariantType* get_parameter_type_vfunc_callback(GAction* self);
  static const GVariantType* get_state_type_vfunc_callback(GAction* self);
  static GVariant* get_state_hint_vfunc_callback(GAction* self);
  static gboolean get_enabled_vfunc_callback(GAction* self);
  static GVariant* get_state_vfunc_callback(GAction* self);
  static void change_state_vfunc_callback(GAction* self, GVariant* value);
  static void activate_vfunc_callback(GAction* self, GVariant* parameter);
};


} // namespace Gio


#endif /* _GIOMM_ACTION_P_H */

