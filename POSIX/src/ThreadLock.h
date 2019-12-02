/*
 * Tencent is pleased to support the open source community by making
 * MMKV available.
 *
 * Copyright (C) 2018 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use
 * this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 *       https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MMKV_THREADLOCK_H
#define MMKV_THREADLOCK_H

#include <pthread.h>

namespace mmkv {

class ThreadLock {
private:
    pthread_mutex_t m_lock;

public:
    ThreadLock();
    ~ThreadLock();

    void lock();
    bool try_lock();
    void unlock();
};

} // namespace mmkv

#endif //MMKV_THREADLOCK_H