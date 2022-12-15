#include "framework.h"



namespace multimedia
{


   namespace audio_mixer_alsa
   {


      window::window(sp(base_application) papp) :
         element(papp)
      {
         create_message_queue("");
      }

      window::~window()
      {
      }

      void window::install_message_handling(::message::dispatch * pinterface)
      {
         ::user::interaction::install_message_handling(pinterface);
         IGUI_WIN_MSG_LINK(MM_MIXM_CONTROL_CHANGE, pinterface, this, &window::_001OnMixerControlChange);
         IGUI_WIN_MSG_LINK(MM_MIXM_LINE_CHANGE, pinterface, this, &window::_001OnMixerLineChange);
      }

      void window::_001OnMixerControlChange(::signal_details * pobj)
      {
         IGUI_WIN_CST(base);
         (dynamic_cast < ::multimedia::audio_mixer_alsa::audio_mixer * > (m_pmixer))->OnMixerControlChange((HMIXER) pbase->m_wparam, (::u32) pbase->m_lparam);
         pbase->set_lresult(0);
      }

      void window::_001OnMixerLineChange(::signal_details * pobj)
      {
         IGUI_WIN_CST(base);
         (dynamic_cast < ::multimedia::audio_mixer_alsa::audio_mixer * > (m_pmixer))->OnMixerLineChange((HMIXER) pbase->m_wparam, (::u32) pbase->m_lparam);
         pbase->set_lresult(0);
      }


   } // namespace audio_mixer_alsa


} // namespace multimedia






