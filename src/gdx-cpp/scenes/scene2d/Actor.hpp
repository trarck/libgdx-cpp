
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

#ifndef GDX_CPP_SCENES_SCENE2D_ACTOR_HPP_
#define GDX_CPP_SCENES_SCENE2D_ACTOR_HPP_

namespace gdx_cpp {
namespace scenes {
namespace scene2d {

class Actor {
public:
    virtual   void draw (const gdx_cpp::graphics::g2d::SpriteBatch& batch,float parentAlpha) = 0;
    virtual   bool touchDown (float x,float y,int pointer) = 0;
    virtual   bool touchUp (float x,float y,int pointer) = 0;
    virtual   bool touchDragged (float x,float y,int pointer) = 0;
    bool touchMoved (float x,float y);
    bool scrolled (int amount);
    bool keyDown (int keycode);
    bool keyUp (int keycode);
    bool keyTyped (char character);
    virtual   Actor& hit (float x,float y) = 0;
    void toLocalCoordinates (const gdx_cpp::math::Vector2& point);
    void remove ();
    void act (float delta);
    void action (const Action& action);
    void clearActions ();
    std::string& toString ();
    void markToRemove (const final& boolean);
    bool isMarkedToRemove ();
    String name;

protected:


private:

};

} // namespace gdx_cpp
} // namespace scenes
} // namespace scene2d

#endif // GDX_CPP_SCENES_SCENE2D_ACTOR_HPP_
