
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

#ifndef GDX_CPP_PHYSICS_BOX2D_JOINTS_DISTANCEJOINTDEF_HPP_
#define GDX_CPP_PHYSICS_BOX2D_JOINTS_DISTANCEJOINTDEF_HPP_
#include "gdx-cpp/physics/box2d/JointDef.hpp"

namespace gdx_cpp {
namespace physics {
namespace box2d {
namespace joints {

class DistanceJointDef: public gdx_cpp::physics::box2d::JointDef {
public:

    DistanceJointDef();
    void initialize (Body::ptr bodyA, Body::ptr bodyB, gdx_cpp::math::Vector2& anchorA, gdx_cpp::math::Vector2& anchorB);

    gdx_cpp::math::Vector2 localAnchorA;
    gdx_cpp::math::Vector2 localAnchorB;
    float length;
    float frequencyHz;
    float dampingRatio;
    
protected:


private:

};

} // namespace gdx_cpp
} // namespace physics
} // namespace box2d
} // namespace joints

#endif // GDX_CPP_PHYSICS_BOX2D_JOINTS_DISTANCEJOINTDEF_HPP_
