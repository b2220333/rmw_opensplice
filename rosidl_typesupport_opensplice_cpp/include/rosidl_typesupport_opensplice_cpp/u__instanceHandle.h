/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to TO_YEAR PrismTech
 *   Limited, its affiliated companies and licensors. All rights reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */
#ifndef ROSIDL_TYPESUPPORT_OPENSPLICE_CPP__U__INSTANCEHANDLE_H_
#define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP__U__INSTANCEHANDLE_H_

#if __cplusplus
extern "C"
{
#endif

#include "u_instanceHandle.h"
#include "v_collection.h"

v_gid
u_instanceHandleToGID(
  u_instanceHandle _this);

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_TYPESUPPORT_OPENSPLICE_CPP__U__INSTANCEHANDLE_H_
