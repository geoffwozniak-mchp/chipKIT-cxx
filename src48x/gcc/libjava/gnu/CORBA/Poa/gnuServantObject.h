
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_Poa_gnuServantObject__
#define __gnu_CORBA_Poa_gnuServantObject__

#pragma interface

#include <org/omg/CORBA/portable/ObjectImpl.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
        class IOR;
      namespace Poa
      {
          class ORB_1_4;
          class gnuPOA;
          class gnuServantObject;
      }
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class ORB;
          class Object;
        namespace portable
        {
            class InputStream;
            class InvokeHandler;
            class OutputStream;
            class ResponseHandler;
        }
      }
      namespace PortableServer
      {
          class POA;
          class POAManager;
          class Servant;
        namespace ServantLocatorPackage
        {
            class CookieHolder;
        }
      }
    }
  }
}

class gnu::CORBA::Poa::gnuServantObject : public ::org::omg::CORBA::portable::ObjectImpl
{

public:
  gnuServantObject(JArray< ::java::lang::String * > *, JArray< jbyte > *, ::gnu::CORBA::Poa::gnuPOA *, ::gnu::CORBA::Poa::ORB_1_4 *);
  virtual ::gnu::CORBA::IOR * getIor();
  gnuServantObject(::org::omg::PortableServer::Servant *, JArray< jbyte > *, ::gnu::CORBA::Poa::ORB_1_4 *, ::gnu::CORBA::Poa::gnuPOA *);
  virtual void setServant(::org::omg::PortableServer::Servant *);
  virtual ::org::omg::PortableServer::Servant * getServant();
  virtual ::org::omg::CORBA::portable::InvokeHandler * getHandler(::java::lang::String *, ::org::omg::PortableServer::ServantLocatorPackage::CookieHolder *, jboolean);
  virtual ::org::omg::CORBA::portable::InvokeHandler * servantToHandler(::org::omg::PortableServer::Servant *);
  gnuServantObject(::org::omg::PortableServer::Servant *, ::gnu::CORBA::Poa::gnuPOA *);
  virtual JArray< ::java::lang::String * > * _ids();
  virtual ::java::lang::String * toString();
  virtual jboolean _is_local();
  virtual jboolean _is_a(::java::lang::String *);
  virtual ::org::omg::CORBA::ORB * _orb();
  virtual ::org::omg::CORBA::portable::OutputStream * _invoke(::java::lang::String *, ::org::omg::CORBA::portable::InputStream *, ::org::omg::CORBA::portable::ResponseHandler *);
  virtual jboolean equals(::java::lang::Object *);
  virtual jint hashCode();
  virtual JArray< jbyte > * get_object_id();
  virtual ::org::omg::PortableServer::POA * get_POA();
  virtual void _release();
  virtual void _releaseReply(::org::omg::CORBA::portable::InputStream *);
  virtual jboolean _is_equivalent(::org::omg::CORBA::Object *);
private:
  ::org::omg::PortableServer::Servant * __attribute__((aligned(__alignof__( ::org::omg::CORBA::portable::ObjectImpl)))) servant;
public:
  JArray< jbyte > * Id;
  ::gnu::CORBA::Poa::gnuPOA * poa;
  ::org::omg::PortableServer::POAManager * manager;
  ::gnu::CORBA::Poa::ORB_1_4 * orb;
  JArray< ::java::lang::String * > * repository_ids;
public: // actually package-private
  jboolean noRetain;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_Poa_gnuServantObject__
