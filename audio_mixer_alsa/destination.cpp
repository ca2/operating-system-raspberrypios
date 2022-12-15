#include "framework.h"
#include "destination.h"


namespace multimedia
{


   namespace audio_mixer_alsa
   {


      destination::destination()
      {

         //m_mixersourcea.set_app(papp);
         //m_pdevice = NULL;
         m_pdestination = this;

      }


      destination::destination(const destination & destination)
      {

         operator = (destination);

      }

      destination::~destination()
      {
         //    Carray<::multimedia::audio_mixer::source, ::multimedia::audio_mixer::source &>::~Carray<::multimedia::audio_mixer::source, ::multimedia::audio_mixer::source &>();
         //CMixerLine::~CMixerLine();
      }

      void destination::operator delete(void *it)
      {
         ((destination *) it)->~destination();
         free(it);

      }


      void destination::initialize_source_info()
      {

         ::pointer<::multimedia::audio_mixer_alsa::source>    lpSource;

         //int32_t iConnections = (int32_t) m_mixerline.cConnections;

//         m_mixersourcea.set_size_create(iConnections);
//
//         for (int32_t i = 0; i < iConnections; i++)
//         {
//
//            lpSource = m_mixersourcea(i);
//
//            lpSource->SetDestination(this);
//
//            lpSource->mixerGetLineInfo(i, this);
//
//         }

         //return MMSYSERR_NOERROR;

      }


      void destination::initialize_all_controls()
      {

         GetLineControls();

         ::multimedia::audio_mixer::source_array & sourcea = m_mixersourcea;

         for(int32_t i = 0; i < sourcea.get_size(); i++)
         {

            sourcea[i]->GetLineControls();

         }

         //return true;

      }


      void destination::update_all_controls()
      {


         ::multimedia::audio_mixer::source::update_all_controls();

         ::multimedia::audio_mixer::source_array & sourcea = m_mixersourcea;

         for(int32_t i = 0; i < sourcea.get_size(); i++)
         {

            sourcea[i]->update_all_controls();

         }

      }


      destination & destination::operator = (const destination & destination)
      {

         //m_pdevice = destination.m_pdevice;

         return *this;

      }


      ::u32 destination::get_component_type()
      {

         //return m_mixerline.dwComponentType;

         return 0;

      }


      ::multimedia::audio_mixer::device * destination::get_device()
      {

         //return m_pdevice;

         return nullptr;

      }


      void destination::set_device(::multimedia::audio_mixer::device * pdevice)
      {

         //m_pdevice = pdevice;

      }


      ::multimedia::audio_mixer::source_array & destination::get_source_info()
      {

         return m_mixersourcea;

      }

      ::u32 destination::get_mixer_line_id()
      {
         //return m_mixerline.dwLineID;

         return 0;

      }

   } // namespace audio_mixer_alsa


} // namespace multimedia







