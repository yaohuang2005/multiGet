/*  multiGet
 *  ===============
 *  Copyright (C) 2017 yaohuang2005@gmail.com
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include "Manager.h"

Manager::Manager(Writer &writer, std::vector<std::thread> &threads) :
        writer_(writer), threads_(threads)
{}

Manager::~Manager()
{}

Writer &Manager::getWriter_()
{
    return writer_;
}
std::vector<std::thread> &Manager::getThreads_()
{
    return threads_;
}

