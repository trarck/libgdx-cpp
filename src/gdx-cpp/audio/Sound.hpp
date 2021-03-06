
/*
    Copyright 2011 Aevum Software aevum @ aevumlab.com

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.

    @author Victor Vicente de Carvalho victor.carvalho@aevumlab.com
    @author Ozires Bortolon de Faria ozires@aevumlab.com
*/

#ifndef GDX_CPP_AUDIO_SOUND_HPP_
#define GDX_CPP_AUDIO_SOUND_HPP_

#include "gdx-cpp/utils/Disposable.hpp"

namespace gdx_cpp {
namespace audio {

class Sound: public gdx_cpp::utils::Disposable {
public:
    virtual   void play () = 0;
    virtual   void play (float volume) = 0;
    virtual   void stop () = 0;
    virtual   void dispose () = 0;

protected:


private:

};

} // namespace gdx_cpp
} // namespace audio

#endif // GDX_CPP_AUDIO_SOUND_HPP_
