#include "framework.h"



namespace multimedia
{


   namespace audio_mixer_alsa
   {


      departament::departament()
      {

      }


      departament::~departament()
      {

      }


      bool departament::initialize1()
      {

         return true;

      }


      bool departament::finalize() 
      {

         DestroyWindow();


         return true;

      }



      /*::multimedia::result departament::CreateNewDevice(::u32 uiMixerID)
      {
      ::multimedia::result mmrc;
      if(MMSYSERR_NOERROR != (mmrc = m_pmixer->set_new_device(
      uiMixerID,
      (::u32) m_oswindow_,
      0,
      CALLBACK_WINDOW)))
      {
      System.simple_message_box("Could not open audio_mixer device!");
      PostMessage(WM_CLOSE);
      return mmrc;
      }
      m_pmixer->m_pdevice->initialize_capabilities();
      return mmrc;
      }

      ::multimedia::result departament::CreateNewDestination(::u32 dwComponentType)
      {
      ::multimedia::result mmrc;
      ::multimedia::audio_mixer::destination * pdestination = NULL;

      if(MMSYSERR_NOERROR != (mmrc =  m_pmixer->m_pdevice->get_destination(
      dwComponentType,
      &pdestination)))
      {
      System.simple_message_box("Could not open default audio_mixer destination!");
      PostMessage(WM_CLOSE);
      return mmrc;
      }

      m_destinationpa.add(pdestination);

      pdestination->initialize_source_info();

      pdestination->initialize_all_controls();

      m_pmixer->m_pdevice->map_lines();
      m_pmixer->m_pdevice->map_controls();

      pdestination->update_all_controls();

      return mmrc;
      }*/


      bool departament::initialize()
      {
         //   m_pmixerthread = (::multimedia::audio_mixer::thread *) __begin_thread(System.type_info < ::multimedia::audio_mixer::thread > ());
         //   if(m_pmixerthread == NULL)
         //      return false;
         //   return true�
         return true;
      }


   } // namespace audio_mixer_alsa


} // namespace multimedia




